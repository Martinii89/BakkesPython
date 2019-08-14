#include "pch.h"
#include "PythonPlugin.h"
//#include "pyWrappers/pyWrappers.h"
#include "bindings/pybakke.h"
using namespace std::placeholders;


BAKKESMOD_PLUGIN(PythonPlugin, "Python Plugin", "1.0.0", PLUGINTYPE_FREEPLAY)

void PythonPlugin::onLoad()
{
	cvarManager->registerNotifier("python_reload", bind(&PythonPlugin::ReloadModule, this, _1), "Reloads the python module", PERMISSION_ALL);
	
	py::module pywrappers = py::module::import("pybakke");
	
	//Let's actually utalize python here, use pkgutil to find modules to load. 
	auto locals = py::dict();
	py::exec(R"(
from pkgutil import iter_modules
modules_to_load =  [x.name for x in iter_modules(path=['bakkesmod/data/python'])]
)", py::globals(), locals);

	auto modulesToLoad = locals["modules_to_load"].cast<vector<string>>();
	for (auto const & _import : modulesToLoad)
	{
		cvarManager->log("Loading " + _import);
		auto modPtr = std::make_shared<PyModule>(_import);
		if (py::hasattr(modPtr->mod, "onLoad"))
		{
			modPtr->mod.attr("onLoad")(gameWrapper, cvarManager);
		}
		else {
			cvarManager->log(_import + " does not have a onLoad function!");
		}		
		pyModules.push_back(modPtr);
	}
}

void PythonPlugin::onUnload()
{
}


void PythonPlugin::ReloadModule(vector<string> params)
{
	try
	{
		for (auto const& param : params)
		{
			if (param == "python_reload") continue;
			for (auto& modPtr : pyModules)
			{
				if (modPtr->name == param)
				{
					cvarManager->log("Reloading: " + modPtr->name);
					if (py::hasattr(modPtr->mod, "onUnload"))
					{
						modPtr->mod.attr("onUnload")();
					}
					modPtr->mod.reload();
					if (py::hasattr(modPtr->mod, "onLoad"))
					{
						modPtr->mod.attr("onLoad")(gameWrapper, cvarManager);
					}
				}
			}
		}
	}
	catch (const std::exception& e)
	{
		cvarManager->log(e.what());
	}

}
