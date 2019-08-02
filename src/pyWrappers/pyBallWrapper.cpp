#include "pch.h"
#include "bakkesmod/wrappers/GameObject/BallWrapper.h"

void init_ballwrapper(py::module& m) {
	py::class_<BallWrapper, std::shared_ptr<BallWrapper>, RBActorWrapper>(m, "BallWrapper")
		.def("GetLastTouchTime", &BallWrapper::GetLastTouchTime)
		.def("GetMagnusCoefficient", &BallWrapper::GetMagnusCoefficient)
		.def("SetMagnusCoefficient", &BallWrapper::SetMagnusCoefficient)
		.def("GetRadius", &BallWrapper::GetRadius)
		.def("SetRadius", &BallWrapper::SetRadius)
		.def("DoDestroy", &BallWrapper::DoDestroy)
		.def("DoExplode", &BallWrapper::DoExplode)
		.def("Launch", &BallWrapper::Launch)
		.def("SetWorldBounceScale", &BallWrapper::SetWorldBounceScale)
		.def("SetCarBounceScale", &BallWrapper::SetCarBounceScale)
		.def("SetBallMaxLinearSpeedScale", &BallWrapper::SetBallMaxLinearSpeedScale)
		.def("SetBallGravityScale", &BallWrapper::SetBallGravityScale)
		.def("SetBallScale", &BallWrapper::SetBallScale)
		;
}