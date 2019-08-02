#pragma once
#include "bakkesmod/plugin/bakkesmodplugin.h"
#include "pybind11/embed.h"
namespace py = pybind11;

class PythonPlugin final : public BakkesMod::Plugin::BakkesModPlugin
{
public:
	void onLoad() override;
	void onUnload() override;

	void onTick(string eventName);

private:
	//Default constructed - initializes interpeter, uninit on deconstruct.
	void ReloadModule(vector<string> params);
	py::scoped_interpreter interpreter;
	py::module pluginModule;
};