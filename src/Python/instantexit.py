from pybakke import GameWrapper, CVarManagerWrapper, ServerWrapper
from enum import Enum

matchEndedEvent = "Function TAGame.GameEvent_Soccar_TA.EventMatchEnded"
# matchEndedEvent = "Function TAGame.Car_TA.OnHitBall" # For testing..
enabledCvarName = "instant_exit_enabled"
delayCvarName = "instant_exit_delay"
trainingMapCvarName = "instant_training_map"
bypassCasualCvarName = "instant_exit_bypass_casual"
bypassPrivateCvarName = "instant_exit_bypass_private"
launchFreeplayCvarName = "instant_exit_launchfreeplay"


CasualDuel = 1,
CasualDoubles = 2
CasualStandard = 3
CasualChaos = 4
Private = 6
Freeplay = 9
RankedDuel = 10
RankedDoubles = 11
RankedSoloStandard = 12
RankedStandard = 13
MutatorMashup = 14
Tournament = 22
RankedHoops = 27
RankedRumble = 28
RankedDropshot = 29
RankedSnowday = 30

CasualModes = [CasualDuel, CasualDoubles, CasualStandard, CasualChaos]
RankedModes = [RankedDuel, RankedDoubles,
               RankedSoloStandard, RankedHoops, RankedRumble, RankedDropshot, RankedSnowday]


class InstantExit:

    def __init__(self, _gw: GameWrapper, _cm: CVarManagerWrapper):
        self.gw = _gw
        self.cm = _cm
        self.enabled = False
        self.hooked = False
        self.cm.registerCvar(enabledCvarName, "1", "Determines whether the InstantExit plugin is enabled or disabled.").addOnValueChanged(
            self.on_enabled_changed)
        self.cm.registerCvar(delayCvarName, "0",
                             "Wait X amount of seconds before exiting")
        self.cm.registerCvar(bypassCasualCvarName, "1",
                             "Don't automatically exit when ending a casual game.")
        self.cm.registerCvar(bypassPrivateCvarName, "1",
                             "Don't automatically exit when ending a private game.")
        self.cm.registerCvar(launchFreeplayCvarName, "1",
                             "Launch freeplay on exit")
        self.cm.registerCvar(trainingMapCvarName, "EuroStadium_Night_P",
                             "Determines the map Instant Training mod will launch on match end.")

        self.hook_event()

    def on_unload(self):
        self.unhook_event()

    def hook_event(self):
        # self.gw.HookEvent(matchEndedEvent, self.match_ended)
        self.gw.HookEventWithCaller(matchEndedEvent, self.match_ended)
        self.hooked = True

    def unhook_event(self):
        self.gw.UnhookEvent(matchEndedEvent)
        self.hooked = False

    def match_ended(self, server: ServerWrapper, void, eventName):
        bypassCasual = self.cm.getCvar(bypassCasualCvarName).getBoolValue()
        bypassPrivate = self.cm.getCvar(bypassPrivateCvarName).getBoolValue()
        if not server.IsNull():
            playlist = server.GetPlaylist()
            playlistId = playlist.GetPlaylistId()
            self.cm.log("playlistID:" + str(playlistId))

            if (bypassCasual and playlistId in CasualModes):
                return
            if bypassPrivate and playlistId == Private:
                return
        else:
            self.cm.log("server == null!")

        exit_delayTime = self.cm.getCvar(delayCvarName).getFloatValue()
        launchFreeplay = self.cm.getCvar(launchFreeplayCvarName).getBoolValue()
        if launchFreeplay:
            self.gw.SetTimeout(
                lambda gw: self.launch_training(), exit_delayTime)
        else:
            self.gw.SetTimeout(lambda gw: self.exit_game(), exit_delayTime)

    def exit_game(self):
        self.cm.executeCommand("unreal_command disconnect")

    def launch_training(self):
        mapname = self.cm.getCvar(trainingMapCvarName).getStringValue()
        if mapname == "random":
            mapname = self.gw.GetRandomMap()

        cmd = f"start {mapname}?Game = TAGame.GameInfo_Tutorial_TA?GameTags=Freeplay"
        self.gw.ExecuteUnrealCommand(cmd)

    def on_enabled_changed(self):
        self.enabled = self.cm.getCvar(enabledCvarName).getBoolValue()
        if (enabled and not self.hooked):
            self.hook_event()
        if not enabled and self.hooked:
            self.unhook_event()


INSTANT_EXIT = None


def onLoad(game_wrapper: GameWrapper, cvar_manager: CVarManagerWrapper):
    global INSTANT_EXIT
    INSTANT_EXIT = InstantExit(game_wrapper, cvar_manager)


def onUnload():
    global INSTANT_EXIT
    INSTANT_EXIT.on_unload()
    INSTANT_EXIT = None
