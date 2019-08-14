#pragma once
#include "bakkesmod/plugin/bakkesmodplugin.h"
#include "pybind11/embed.h"
namespace py = pybind11;

string moduleBasePath = "bakkesmod.data.python.";

struct PyModule
{
	string name;
	py::module mod;
	PyModule(string _name)
	{
		name = _name;
		mod = py::module::import((moduleBasePath + _name).c_str());
	}
};

class PythonPlugin final : public BakkesMod::Plugin::BakkesModPlugin
{
public:
	void onLoad() override;
	void onUnload() override;

private:
	void ReloadModule(vector<string> params);
	//Default constructed - initializes interpeter, uninit on deconstruct.
	py::scoped_interpreter interpreter;
	vector<std::shared_ptr<PyModule>> pyModules;
};