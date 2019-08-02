#include "pch.h"
#include "bakkesmod/wrappers/GameObject/BallWrapper.h"

void init_ballwrapper(py::module& m) {
	py::class_<BallWrapper, std::shared_ptr<BallWrapper>, RBActorWrapper>(m, "BallWrapper")
/*		.def("IsNull", &CarWrapper::IsNull)
		.def("GetLocation", &BallWrapper::GetLocation)
		.def("GetVelocity", &BallWrapper::GetVelocity)
		.def("SetLocation", &BallWrapper::SetLocation)
		.def("SetVelocity", &BallWrapper::SetVelocity)*/;
}