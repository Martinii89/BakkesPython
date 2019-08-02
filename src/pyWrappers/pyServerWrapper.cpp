#pragma once
#include "pch.h"
#include "bakkesmod/wrappers/GameEvent/ServerWrapper.h"

void init_serverwrapper(py::module& m)
{
	py::class_<ServerWrapper, std::shared_ptr<ServerWrapper>>(m, "ServerWrapper")
		.def("GetSecondsElapsed", &ServerWrapper::GetSecondsElapsed)
		.def("GetBall", &ServerWrapper::GetBall)
		.def("GetGameCar", &ServerWrapper::GetGameCar);
}