import os
import pathlib
from pybakke import GameWrapper, CVarManagerWrapper, CVarWrapper


class Watcher:

    def __init__(self, gw: GameWrapper, cvm: CVarManagerWrapper):
        self.timeout = 5
        self.files_watch = {}
        self.gw = gw
        self.cvm = cvm
        self.active = True
        self.cvm.log("watcher init")
        files = pathlib.Path(".").glob("bakkesmod/py2/**/*.py")
        for _file in files:
            file_path = str(_file)
            mtime = os.path.getmtime(_file)
            self.files_watch[file_path] = mtime
        self.gw.SetTimeout(lambda gw: self.check(), self.timeout)

    def on_unload(self):
        self.cvm.log("unload called")
        self.active = False

    def check(self):
        self.cvm.log("Checking for changed files with a timeout of: " + str(self.timeout))
        if not self.active:
            return
        files = pathlib.Path(".").glob("bakkesmod/py2/**/*.py")
        for _file in files:
            file_path = str(_file)
            if file_path in self.files_watch:
                new_mtime = os.path.getmtime(_file)
                old_mtime = self.files_watch[file_path]
                if new_mtime > old_mtime:
                    file_name = os.path.basename(file_path).split('.')[0]
                    self.cvm.log(file_name + " was updated since last check")
                    self.files_watch[file_path] = new_mtime
                    self.cvm.executeCommand("python_reload " + file_name)

        self.gw.SetTimeout(lambda gw: self.check(), self.timeout)

    def stop():
        pass

WATCHER = None


def onLoad(game_wrapper: GameWrapper, cvar_manager: CVarManagerWrapper):
    global WATCHER
    WATCHER = Watcher(game_wrapper, cvar_manager)


def onUnload():
    global WATCHER
    WATCHER.on_unload()
    WATCHER = None
