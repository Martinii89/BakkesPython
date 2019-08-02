#include "pch.h"
#include "bakkesmod/wrappers/GameObject/CarWrapper.h"

void init_carwrapper(py::module& m) {
	py::class_<CarWrapper, std::shared_ptr<CarWrapper>, RBActorWrapper>(m, "CarWrapper")
/*		.def("IsNull", &CarWrapper::IsNull)
		.def("GetLocation", &CarWrapper::GetLocation)
		.def("GetVelocity", &CarWrapper::GetVelocity)
		.def("SetLocation", &CarWrapper::SetLocation)
		.def("SetVelocity", &CarWrapper::SetVelocity)*/;
}