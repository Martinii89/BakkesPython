#include "pch.h"
#include "bakkesmod/wrappers/Engine/ActorWrapper.h"

void init_actorwrapper(py::module& m) {
	py::class_<ActorWrapper, std::shared_ptr<ActorWrapper>>(m, "ActorWrapper")
		.def("GetLocation", &ActorWrapper::GetLocation)
		.def("SetLocation", &ActorWrapper::SetLocation)
		.def("GetVelocity", &ActorWrapper::GetVelocity)
		.def("SetVelocity", &ActorWrapper::SetVelocity)
		.def("AddVelocity", &ActorWrapper::AddVelocity)
		//.def("GetRotation", &ActorWrapper::GetRotation) TODO: Wrap Rotator 
		//.def("SetRotation", &ActorWrapper::SetRotation)
		.def("Stop", &ActorWrapper::Stop)
		.def("GetAngularVelocity", &ActorWrapper::GetAngularVelocity)
		.def("SetAngularVelocity", &ActorWrapper::SetAngularVelocity)
		.def("IsNull", &ActorWrapper::IsNull)
		;
}
