#include "pch.h"
#include "bakkesmod/wrappers/GameObject/CarWrapper.h"

void init_carwrapper(py::module& m) {
	py::class_<CarWrapper, std::shared_ptr<CarWrapper>, VehicleWrapper>(m, "CarWrapper")
		.def("IsBoostCheap", &CarWrapper::IsBoostCheap)
		.def("SetBoostCheap", &CarWrapper::SetBoostCheap)
		//.def("SetCarRotation", &CarWrapper::SetCarRotation) TODO: Rotator
		.def("ForceBoost", &CarWrapper::ForceBoost)
		.def("GetOwnerName", &CarWrapper::GetOwnerName)
		.def("Destroy", &CarWrapper::Destroy)
		.def("Demolish", &CarWrapper::Demolish)
		.def("RespawnInPlace", &CarWrapper::RespawnInPlace)
		.def("SetCarScale", &CarWrapper::SetCarScale)
		;
}