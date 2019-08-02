#include "pch.h"
#include "bakkesmod/wrappers/GameObject/RBActorWrapper.h"

void init_rbactorwrapper(py::module& m) {
	py::class_<RBActorWrapper, std::shared_ptr<RBActorWrapper>, ActorWrapper>(m, "RBActorWrapper")
		.def("GetMaxLinearSpeed", &RBActorWrapper::GetMaxLinearSpeed)
		.def("SetMaxLinearSpeed", &RBActorWrapper::SetMaxLinearSpeed)
		.def("GetMaxAngularSpeed", &RBActorWrapper::GetMaxAngularSpeed)
		.def("SetMaxAngularSpeed", &RBActorWrapper::SetMaxAngularSpeed)
		.def("SetMass", &RBActorWrapper::SetMass)
		.def("AddTorque", &RBActorWrapper::AddTorque)
		.def("AddForce", &RBActorWrapper::AddForce)
		;
}