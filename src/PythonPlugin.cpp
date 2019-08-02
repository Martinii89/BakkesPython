#include "pch.h"
#include "PythonPlugin.h"
#include "pyWrappers/pyWrappers.h"
using namespace std::placeholders;


BAKKESMOD_PLUGIN(PythonPlugin, "Python Plugin", "1.0.0", PLUGINTYPE_FREEPLAY)

void PythonPlugin::onLoad()
{
	cvarManager->registerNotifier("python_reload", bind(&PythonPlugin::ReloadModule, this, _1), "Reloads the python module", PERMISSION_ALL);
	py::module pywrappers = py::module::import("pyBakkes");
	//test module in a .py file
	pluginModule = py::module::import("testPlugin");
	pluginModule.attr("onLoad")(gameWrapper, cvarManager);
}

void PythonPlugin::onUnload()
{
}

void PythonPlugin::onTick(std::string eventName)
{
	cvarManager->log("Goal!");
}

void PythonPlugin::ReloadModule(vector<string> params)
{
	pluginModule.reload();
	pluginModule.attr("onLoad")(gameWrapper, cvarManager);
}
