#include "pch.h"
#include "bakkesmod/wrappers/GameObject/VehicleWrapper.h"


void init_vehiclewrapper(py::module& m)
{
	py::class_<VehicleWrapper, std::shared_ptr<VehicleWrapper>, RBActorWrapper>(m, "VehicleWrapper")
		//.def("GetStickyForce", &VehicleWrapper::GetStickyForce) TODO: Wrap sticky force data
		//.def("SetStickyForce", &VehicleWrapper::SetStickyForce)
		.def("IsOnWall", &VehicleWrapper::IsOnWall)
		.def("IsOnGround", &VehicleWrapper::IsOnGround)
		;

}