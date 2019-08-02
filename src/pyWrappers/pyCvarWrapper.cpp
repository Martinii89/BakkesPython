#include "pch.h"
#include "bakkesmod/wrappers/cvarmanagerwrapper.h"

void init_cvarmanager(py::module& m) {
	py::class_<CVarManagerWrapper, std::shared_ptr<CVarManagerWrapper>>(m, "CVarManagerWrapper")
		.def("log", &CVarManagerWrapper::log, "Log message to console", py::arg("msg"));
}