#include "pch.h"
#include <bakkesmod/wrappers/GameObject/CarComponent/DodgeComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/DoubleJumpComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/JumpComponentWrapper.h>
#include <sstream> // __str__


void bind_bakkesmod_wrappers_GameObject_CarComponent_DodgeComponentWrapper(py::module &M)
{
	{ // DodgeComponentWrapper file:bakkesmod/wrappers/GameObject/CarComponent/DodgeComponentWrapper.h line:7
		pybind11::class_<DodgeComponentWrapper, std::shared_ptr<DodgeComponentWrapper>, CarComponentWrapper> cl(M, "DodgeComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](DodgeComponentWrapper const &o){ return new DodgeComponentWrapper(o); } ) );
		cl.def("assign", (class DodgeComponentWrapper & (DodgeComponentWrapper::*)(class DodgeComponentWrapper)) &DodgeComponentWrapper::operator=, "C++: DodgeComponentWrapper::operator=(class DodgeComponentWrapper) --> class DodgeComponentWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetDodgeInputThreshold", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetDodgeInputThreshold, "C++: DodgeComponentWrapper::GetDodgeInputThreshold() --> float");
		cl.def("SetDodgeInputThreshold", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetDodgeInputThreshold, "C++: DodgeComponentWrapper::SetDodgeInputThreshold(float) --> void", "newDodgeInputThreshold"_a);
		cl.def("GetSideDodgeImpulse", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetSideDodgeImpulse, "C++: DodgeComponentWrapper::GetSideDodgeImpulse() --> float");
		cl.def("SetSideDodgeImpulse", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetSideDodgeImpulse, "C++: DodgeComponentWrapper::SetSideDodgeImpulse(float) --> void", "newSideDodgeImpulse"_a);
		cl.def("GetSideDodgeImpulseMaxSpeedScale", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetSideDodgeImpulseMaxSpeedScale, "C++: DodgeComponentWrapper::GetSideDodgeImpulseMaxSpeedScale() --> float");
		cl.def("SetSideDodgeImpulseMaxSpeedScale", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetSideDodgeImpulseMaxSpeedScale, "C++: DodgeComponentWrapper::SetSideDodgeImpulseMaxSpeedScale(float) --> void", "newSideDodgeImpulseMaxSpeedScale"_a);
		cl.def("GetForwardDodgeImpulse", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetForwardDodgeImpulse, "C++: DodgeComponentWrapper::GetForwardDodgeImpulse() --> float");
		cl.def("SetForwardDodgeImpulse", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetForwardDodgeImpulse, "C++: DodgeComponentWrapper::SetForwardDodgeImpulse(float) --> void", "newForwardDodgeImpulse"_a);
		cl.def("GetForwardDodgeImpulseMaxSpeedScale", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetForwardDodgeImpulseMaxSpeedScale, "C++: DodgeComponentWrapper::GetForwardDodgeImpulseMaxSpeedScale() --> float");
		cl.def("SetForwardDodgeImpulseMaxSpeedScale", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetForwardDodgeImpulseMaxSpeedScale, "C++: DodgeComponentWrapper::SetForwardDodgeImpulseMaxSpeedScale(float) --> void", "newForwardDodgeImpulseMaxSpeedScale"_a);
		cl.def("GetBackwardDodgeImpulse", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetBackwardDodgeImpulse, "C++: DodgeComponentWrapper::GetBackwardDodgeImpulse() --> float");
		cl.def("SetBackwardDodgeImpulse", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetBackwardDodgeImpulse, "C++: DodgeComponentWrapper::SetBackwardDodgeImpulse(float) --> void", "newBackwardDodgeImpulse"_a);
		cl.def("GetBackwardDodgeImpulseMaxSpeedScale", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetBackwardDodgeImpulseMaxSpeedScale, "C++: DodgeComponentWrapper::GetBackwardDodgeImpulseMaxSpeedScale() --> float");
		cl.def("SetBackwardDodgeImpulseMaxSpeedScale", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetBackwardDodgeImpulseMaxSpeedScale, "C++: DodgeComponentWrapper::SetBackwardDodgeImpulseMaxSpeedScale(float) --> void", "newBackwardDodgeImpulseMaxSpeedScale"_a);
		cl.def("GetSideDodgeTorque", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetSideDodgeTorque, "C++: DodgeComponentWrapper::GetSideDodgeTorque() --> float");
		cl.def("SetSideDodgeTorque", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetSideDodgeTorque, "C++: DodgeComponentWrapper::SetSideDodgeTorque(float) --> void", "newSideDodgeTorque"_a);
		cl.def("GetForwardDodgeTorque", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetForwardDodgeTorque, "C++: DodgeComponentWrapper::GetForwardDodgeTorque() --> float");
		cl.def("SetForwardDodgeTorque", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetForwardDodgeTorque, "C++: DodgeComponentWrapper::SetForwardDodgeTorque(float) --> void", "newForwardDodgeTorque"_a);
		cl.def("GetDodgeTorqueTime", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetDodgeTorqueTime, "C++: DodgeComponentWrapper::GetDodgeTorqueTime() --> float");
		cl.def("SetDodgeTorqueTime", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetDodgeTorqueTime, "C++: DodgeComponentWrapper::SetDodgeTorqueTime(float) --> void", "newDodgeTorqueTime"_a);
		cl.def("GetMinDodgeTorqueTime", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetMinDodgeTorqueTime, "C++: DodgeComponentWrapper::GetMinDodgeTorqueTime() --> float");
		cl.def("SetMinDodgeTorqueTime", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetMinDodgeTorqueTime, "C++: DodgeComponentWrapper::SetMinDodgeTorqueTime(float) --> void", "newMinDodgeTorqueTime"_a);
		cl.def("GetDodgeZDamping", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetDodgeZDamping, "C++: DodgeComponentWrapper::GetDodgeZDamping() --> float");
		cl.def("SetDodgeZDamping", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetDodgeZDamping, "C++: DodgeComponentWrapper::SetDodgeZDamping(float) --> void", "newDodgeZDamping"_a);
		cl.def("GetDodgeZDampingDelay", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetDodgeZDampingDelay, "C++: DodgeComponentWrapper::GetDodgeZDampingDelay() --> float");
		cl.def("SetDodgeZDampingDelay", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetDodgeZDampingDelay, "C++: DodgeComponentWrapper::SetDodgeZDampingDelay(float) --> void", "newDodgeZDampingDelay"_a);
		cl.def("GetDodgeZDampingUpTime", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetDodgeZDampingUpTime, "C++: DodgeComponentWrapper::GetDodgeZDampingUpTime() --> float");
		cl.def("SetDodgeZDampingUpTime", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetDodgeZDampingUpTime, "C++: DodgeComponentWrapper::SetDodgeZDampingUpTime(float) --> void", "newDodgeZDampingUpTime"_a);
		cl.def("GetDodgeImpulseScale", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetDodgeImpulseScale, "C++: DodgeComponentWrapper::GetDodgeImpulseScale() --> float");
		cl.def("SetDodgeImpulseScale", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetDodgeImpulseScale, "C++: DodgeComponentWrapper::SetDodgeImpulseScale(float) --> void", "newDodgeImpulseScale"_a);
		cl.def("GetDodgeTorqueScale", (float (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetDodgeTorqueScale, "C++: DodgeComponentWrapper::GetDodgeTorqueScale() --> float");
		cl.def("SetDodgeTorqueScale", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::SetDodgeTorqueScale, "C++: DodgeComponentWrapper::SetDodgeTorqueScale(float) --> void", "newDodgeTorqueScale"_a);
		cl.def("GetDodgeTorque", (struct Vector (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetDodgeTorque, "C++: DodgeComponentWrapper::GetDodgeTorque() --> struct Vector");
		cl.def("SetDodgeTorque", (void (DodgeComponentWrapper::*)(struct Vector)) &DodgeComponentWrapper::SetDodgeTorque, "C++: DodgeComponentWrapper::SetDodgeTorque(struct Vector) --> void", "newDodgeTorque"_a);
		cl.def("GetDodgeDirection", (struct Vector (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::GetDodgeDirection, "C++: DodgeComponentWrapper::GetDodgeDirection() --> struct Vector");
		cl.def("SetDodgeDirection", (void (DodgeComponentWrapper::*)(struct Vector)) &DodgeComponentWrapper::SetDodgeDirection, "C++: DodgeComponentWrapper::SetDodgeDirection(struct Vector) --> void", "newDodgeDirection"_a);
		cl.def("SetDodgeSettings", (void (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::SetDodgeSettings, "C++: DodgeComponentWrapper::SetDodgeSettings() --> void");
		cl.def("ApplyTorqueForces", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::ApplyTorqueForces, "C++: DodgeComponentWrapper::ApplyTorqueForces(float) --> void", "ActiveTime"_a);
		cl.def("ApplyDodgeImpulse", (void (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::ApplyDodgeImpulse, "C++: DodgeComponentWrapper::ApplyDodgeImpulse() --> void");
		cl.def("GetDodgeImpulse2", (struct Vector (DodgeComponentWrapper::*)(struct Vector &)) &DodgeComponentWrapper::GetDodgeImpulse2, "C++: DodgeComponentWrapper::GetDodgeImpulse2(struct Vector &) --> struct Vector", "DodgeDir"_a);
		cl.def("ApplyForces", (void (DodgeComponentWrapper::*)(float)) &DodgeComponentWrapper::ApplyForces, "C++: DodgeComponentWrapper::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("CanActivate", (bool (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::CanActivate, "C++: DodgeComponentWrapper::CanActivate() --> bool");
		cl.def("OnCreated", (void (DodgeComponentWrapper::*)()) &DodgeComponentWrapper::OnCreated, "C++: DodgeComponentWrapper::OnCreated() --> void");
	}
	{ // DoubleJumpComponentWrapper file:bakkesmod/wrappers/GameObject/CarComponent/DoubleJumpComponentWrapper.h line:7
		pybind11::class_<DoubleJumpComponentWrapper, std::shared_ptr<DoubleJumpComponentWrapper>, CarComponentWrapper> cl(M, "DoubleJumpComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](DoubleJumpComponentWrapper const &o){ return new DoubleJumpComponentWrapper(o); } ) );
		cl.def("assign", (class DoubleJumpComponentWrapper & (DoubleJumpComponentWrapper::*)(class DoubleJumpComponentWrapper)) &DoubleJumpComponentWrapper::operator=, "C++: DoubleJumpComponentWrapper::operator=(class DoubleJumpComponentWrapper) --> class DoubleJumpComponentWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("SetJumpImpulse", (void (DoubleJumpComponentWrapper::*)(float)) &DoubleJumpComponentWrapper::SetJumpImpulse, "C++: DoubleJumpComponentWrapper::SetJumpImpulse(float) --> void", "newJumpImpulse"_a);
		cl.def("GetImpulseScale", (float (DoubleJumpComponentWrapper::*)()) &DoubleJumpComponentWrapper::GetImpulseScale, "C++: DoubleJumpComponentWrapper::GetImpulseScale() --> float");
		cl.def("SetImpulseScale", (void (DoubleJumpComponentWrapper::*)(float)) &DoubleJumpComponentWrapper::SetImpulseScale, "C++: DoubleJumpComponentWrapper::SetImpulseScale(float) --> void", "newImpulseScale"_a);
		cl.def("ApplyForces", (void (DoubleJumpComponentWrapper::*)(float)) &DoubleJumpComponentWrapper::ApplyForces, "C++: DoubleJumpComponentWrapper::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("OnCreated", (void (DoubleJumpComponentWrapper::*)()) &DoubleJumpComponentWrapper::OnCreated, "C++: DoubleJumpComponentWrapper::OnCreated() --> void");
	}
	{ // FlipCarComponentWrapper file:bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h line:7
		pybind11::class_<FlipCarComponentWrapper, std::shared_ptr<FlipCarComponentWrapper>, CarComponentWrapper> cl(M, "FlipCarComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](FlipCarComponentWrapper const &o){ return new FlipCarComponentWrapper(o); } ) );
		cl.def("assign", (class FlipCarComponentWrapper & (FlipCarComponentWrapper::*)(class FlipCarComponentWrapper)) &FlipCarComponentWrapper::operator=, "C++: FlipCarComponentWrapper::operator=(class FlipCarComponentWrapper) --> class FlipCarComponentWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetFlipCarImpulse", (float (FlipCarComponentWrapper::*)()) &FlipCarComponentWrapper::GetFlipCarImpulse, "C++: FlipCarComponentWrapper::GetFlipCarImpulse() --> float");
		cl.def("SetFlipCarImpulse", (void (FlipCarComponentWrapper::*)(float)) &FlipCarComponentWrapper::SetFlipCarImpulse, "C++: FlipCarComponentWrapper::SetFlipCarImpulse(float) --> void", "newFlipCarImpulse"_a);
		cl.def("GetFlipCarTorque", (float (FlipCarComponentWrapper::*)()) &FlipCarComponentWrapper::GetFlipCarTorque, "C++: FlipCarComponentWrapper::GetFlipCarTorque() --> float");
		cl.def("SetFlipCarTorque", (void (FlipCarComponentWrapper::*)(float)) &FlipCarComponentWrapper::SetFlipCarTorque, "C++: FlipCarComponentWrapper::SetFlipCarTorque(float) --> void", "newFlipCarTorque"_a);
		cl.def("GetFlipCarTime", (float (FlipCarComponentWrapper::*)()) &FlipCarComponentWrapper::GetFlipCarTime, "C++: FlipCarComponentWrapper::GetFlipCarTime() --> float");
		cl.def("SetFlipCarTime", (void (FlipCarComponentWrapper::*)(float)) &FlipCarComponentWrapper::SetFlipCarTime, "C++: FlipCarComponentWrapper::SetFlipCarTime(float) --> void", "newFlipCarTime"_a);
		cl.def("GetbFlipRight", (unsigned long (FlipCarComponentWrapper::*)()) &FlipCarComponentWrapper::GetbFlipRight, "C++: FlipCarComponentWrapper::GetbFlipRight() --> unsigned long");
		cl.def("SetbFlipRight", (void (FlipCarComponentWrapper::*)(unsigned long)) &FlipCarComponentWrapper::SetbFlipRight, "C++: FlipCarComponentWrapper::SetbFlipRight(unsigned long) --> void", "newbFlipRight"_a);
		cl.def("InitFlip", (void (FlipCarComponentWrapper::*)()) &FlipCarComponentWrapper::InitFlip, "C++: FlipCarComponentWrapper::InitFlip() --> void");
		cl.def("ApplyForces", (void (FlipCarComponentWrapper::*)(float)) &FlipCarComponentWrapper::ApplyForces, "C++: FlipCarComponentWrapper::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("CanActivate", (bool (FlipCarComponentWrapper::*)()) &FlipCarComponentWrapper::CanActivate, "C++: FlipCarComponentWrapper::CanActivate() --> bool");
		cl.def("OnCreated", (void (FlipCarComponentWrapper::*)()) &FlipCarComponentWrapper::OnCreated, "C++: FlipCarComponentWrapper::OnCreated() --> void");
	}
	{ // JumpComponentWrapper file:bakkesmod/wrappers/GameObject/CarComponent/JumpComponentWrapper.h line:7
		pybind11::class_<JumpComponentWrapper, std::shared_ptr<JumpComponentWrapper>, CarComponentWrapper> cl(M, "JumpComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](JumpComponentWrapper const &o){ return new JumpComponentWrapper(o); } ) );
		cl.def("assign", (class JumpComponentWrapper & (JumpComponentWrapper::*)(class JumpComponentWrapper)) &JumpComponentWrapper::operator=, "C++: JumpComponentWrapper::operator=(class JumpComponentWrapper) --> class JumpComponentWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetMinJumpTime", (float (JumpComponentWrapper::*)()) &JumpComponentWrapper::GetMinJumpTime, "C++: JumpComponentWrapper::GetMinJumpTime() --> float");
		cl.def("SetMinJumpTime", (void (JumpComponentWrapper::*)(float)) &JumpComponentWrapper::SetMinJumpTime, "C++: JumpComponentWrapper::SetMinJumpTime(float) --> void", "newMinJumpTime"_a);
		cl.def("GetJumpImpulse", (float (JumpComponentWrapper::*)()) &JumpComponentWrapper::GetJumpImpulse, "C++: JumpComponentWrapper::GetJumpImpulse() --> float");
		cl.def("SetJumpImpulse", (void (JumpComponentWrapper::*)(float)) &JumpComponentWrapper::SetJumpImpulse, "C++: JumpComponentWrapper::SetJumpImpulse(float) --> void", "newJumpImpulse"_a);
		cl.def("GetJumpForce", (float (JumpComponentWrapper::*)()) &JumpComponentWrapper::GetJumpForce, "C++: JumpComponentWrapper::GetJumpForce() --> float");
		cl.def("SetJumpForce", (void (JumpComponentWrapper::*)(float)) &JumpComponentWrapper::SetJumpForce, "C++: JumpComponentWrapper::SetJumpForce(float) --> void", "newJumpForce"_a);
		cl.def("GetJumpForceTime", (float (JumpComponentWrapper::*)()) &JumpComponentWrapper::GetJumpForceTime, "C++: JumpComponentWrapper::GetJumpForceTime() --> float");
		cl.def("SetJumpForceTime", (void (JumpComponentWrapper::*)(float)) &JumpComponentWrapper::SetJumpForceTime, "C++: JumpComponentWrapper::SetJumpForceTime(float) --> void", "newJumpForceTime"_a);
		cl.def("GetPodiumJumpForceTime", (float (JumpComponentWrapper::*)()) &JumpComponentWrapper::GetPodiumJumpForceTime, "C++: JumpComponentWrapper::GetPodiumJumpForceTime() --> float");
		cl.def("SetPodiumJumpForceTime", (void (JumpComponentWrapper::*)(float)) &JumpComponentWrapper::SetPodiumJumpForceTime, "C++: JumpComponentWrapper::SetPodiumJumpForceTime(float) --> void", "newPodiumJumpForceTime"_a);
		cl.def("GetJumpImpulseSpeed", (float (JumpComponentWrapper::*)()) &JumpComponentWrapper::GetJumpImpulseSpeed, "C++: JumpComponentWrapper::GetJumpImpulseSpeed() --> float");
		cl.def("SetJumpImpulseSpeed", (void (JumpComponentWrapper::*)(float)) &JumpComponentWrapper::SetJumpImpulseSpeed, "C++: JumpComponentWrapper::SetJumpImpulseSpeed(float) --> void", "newJumpImpulseSpeed"_a);
		cl.def("GetJumpAccel", (float (JumpComponentWrapper::*)()) &JumpComponentWrapper::GetJumpAccel, "C++: JumpComponentWrapper::GetJumpAccel() --> float");
		cl.def("SetJumpAccel", (void (JumpComponentWrapper::*)(float)) &JumpComponentWrapper::SetJumpAccel, "C++: JumpComponentWrapper::SetJumpAccel(float) --> void", "newJumpAccel"_a);
		cl.def("GetMaxJumpHeight", (float (JumpComponentWrapper::*)()) &JumpComponentWrapper::GetMaxJumpHeight, "C++: JumpComponentWrapper::GetMaxJumpHeight() --> float");
		cl.def("SetMaxJumpHeight", (void (JumpComponentWrapper::*)(float)) &JumpComponentWrapper::SetMaxJumpHeight, "C++: JumpComponentWrapper::SetMaxJumpHeight(float) --> void", "newMaxJumpHeight"_a);
		cl.def("GetMaxJumpHeightTime", (float (JumpComponentWrapper::*)()) &JumpComponentWrapper::GetMaxJumpHeightTime, "C++: JumpComponentWrapper::GetMaxJumpHeightTime() --> float");
		cl.def("SetMaxJumpHeightTime", (void (JumpComponentWrapper::*)(float)) &JumpComponentWrapper::SetMaxJumpHeightTime, "C++: JumpComponentWrapper::SetMaxJumpHeightTime(float) --> void", "newMaxJumpHeightTime"_a);
		cl.def("GetbDeactivate", (unsigned long (JumpComponentWrapper::*)()) &JumpComponentWrapper::GetbDeactivate, "C++: JumpComponentWrapper::GetbDeactivate() --> unsigned long");
		cl.def("SetbDeactivate", (void (JumpComponentWrapper::*)(unsigned long)) &JumpComponentWrapper::SetbDeactivate, "C++: JumpComponentWrapper::SetbDeactivate(unsigned long) --> void", "newbDeactivate"_a);
		cl.def("ApplyForces", (void (JumpComponentWrapper::*)(float)) &JumpComponentWrapper::ApplyForces, "C++: JumpComponentWrapper::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("CacheJumpData", (void (JumpComponentWrapper::*)()) &JumpComponentWrapper::CacheJumpData, "C++: JumpComponentWrapper::CacheJumpData() --> void");
		cl.def("OnCreated", (void (JumpComponentWrapper::*)()) &JumpComponentWrapper::OnCreated, "C++: JumpComponentWrapper::OnCreated() --> void");
	}
}
