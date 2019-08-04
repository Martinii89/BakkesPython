#include "pch.h"
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/BallCarSpringPickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/BallFreezePickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/BallLassoPickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/BattarangPickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/BoostModPickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/BoostOverridePickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/CarSpeedPickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/DemolishPickup.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_bakkesmod_wrappers_GameObject_RumbleComponent_BallCarSpringPickup(py::module &M)
{
	{ // BallCarSpringPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BallCarSpringPickup.h line:7
		pybind11::class_<BallCarSpringPickup, std::shared_ptr<BallCarSpringPickup>, SpringPickup> cl(M, "BallCarSpringPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BallCarSpringPickup const &o){ return new BallCarSpringPickup(o); } ) );
		cl.def("assign", (class BallCarSpringPickup & (BallCarSpringPickup::*)(class BallCarSpringPickup)) &BallCarSpringPickup::operator=, "C++: BallCarSpringPickup::operator=(class BallCarSpringPickup) --> class BallCarSpringPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("ScaleSpringMeshToLocation", (void (BallCarSpringPickup::*)(struct Vector &, struct Vector &)) &BallCarSpringPickup::ScaleSpringMeshToLocation, "C++: BallCarSpringPickup::ScaleSpringMeshToLocation(struct Vector &, struct Vector &) --> void", pybind11::arg("NewLocation"), pybind11::arg("TargetLocation"));
	}
	{ // BallFreezePickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BallFreezePickup.h line:9
		pybind11::class_<BallFreezePickup, std::shared_ptr<BallFreezePickup>, TargetedPickup> cl(M, "BallFreezePickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BallFreezePickup const &o){ return new BallFreezePickup(o); } ) );
		cl.def("assign", (class BallFreezePickup & (BallFreezePickup::*)(class BallFreezePickup)) &BallFreezePickup::operator=, "C++: BallFreezePickup::operator=(class BallFreezePickup) --> class BallFreezePickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetbMaintainMomentum", (unsigned long (BallFreezePickup::*)()) &BallFreezePickup::GetbMaintainMomentum, "C++: BallFreezePickup::GetbMaintainMomentum() --> unsigned long");
		cl.def("SetbMaintainMomentum", (void (BallFreezePickup::*)(unsigned long)) &BallFreezePickup::SetbMaintainMomentum, "C++: BallFreezePickup::SetbMaintainMomentum(unsigned long) --> void", pybind11::arg("newbMaintainMomentum"));
		cl.def("GetbTouched", (unsigned long (BallFreezePickup::*)()) &BallFreezePickup::GetbTouched, "C++: BallFreezePickup::GetbTouched() --> unsigned long");
		cl.def("SetbTouched", (void (BallFreezePickup::*)(unsigned long)) &BallFreezePickup::SetbTouched, "C++: BallFreezePickup::SetbTouched(unsigned long) --> void", pybind11::arg("newbTouched"));
		cl.def("GetTimeToStop", (float (BallFreezePickup::*)()) &BallFreezePickup::GetTimeToStop, "C++: BallFreezePickup::GetTimeToStop() --> float");
		cl.def("SetTimeToStop", (void (BallFreezePickup::*)(float)) &BallFreezePickup::SetTimeToStop, "C++: BallFreezePickup::SetTimeToStop(float) --> void", pybind11::arg("newTimeToStop"));
		cl.def("GetStopMomentumPercentage", (float (BallFreezePickup::*)()) &BallFreezePickup::GetStopMomentumPercentage, "C++: BallFreezePickup::GetStopMomentumPercentage() --> float");
		cl.def("SetStopMomentumPercentage", (void (BallFreezePickup::*)(float)) &BallFreezePickup::SetStopMomentumPercentage, "C++: BallFreezePickup::SetStopMomentumPercentage(float) --> void", pybind11::arg("newStopMomentumPercentage"));
		cl.def("GetBall", (class BallWrapper (BallFreezePickup::*)()) &BallFreezePickup::GetBall, "C++: BallFreezePickup::GetBall() --> class BallWrapper");
		cl.def("SetBall", (void (BallFreezePickup::*)(class BallWrapper)) &BallFreezePickup::SetBall, "C++: BallFreezePickup::SetBall(class BallWrapper) --> void", pybind11::arg("newBall"));
		cl.def("GetOrigLinearVelocity", (struct Vector (BallFreezePickup::*)()) &BallFreezePickup::GetOrigLinearVelocity, "C++: BallFreezePickup::GetOrigLinearVelocity() --> struct Vector");
		cl.def("SetOrigLinearVelocity", (void (BallFreezePickup::*)(struct Vector)) &BallFreezePickup::SetOrigLinearVelocity, "C++: BallFreezePickup::SetOrigLinearVelocity(struct Vector) --> void", pybind11::arg("newOrigLinearVelocity"));
		cl.def("GetOrigAngularVelocity", (struct Vector (BallFreezePickup::*)()) &BallFreezePickup::GetOrigAngularVelocity, "C++: BallFreezePickup::GetOrigAngularVelocity() --> struct Vector");
		cl.def("SetOrigAngularVelocity", (void (BallFreezePickup::*)(struct Vector)) &BallFreezePickup::SetOrigAngularVelocity, "C++: BallFreezePickup::SetOrigAngularVelocity(struct Vector) --> void", pybind11::arg("newOrigAngularVelocity"));
		cl.def("GetOrigSpeed", (float (BallFreezePickup::*)()) &BallFreezePickup::GetOrigSpeed, "C++: BallFreezePickup::GetOrigSpeed() --> float");
		cl.def("SetOrigSpeed", (void (BallFreezePickup::*)(float)) &BallFreezePickup::SetOrigSpeed, "C++: BallFreezePickup::SetOrigSpeed(float) --> void", pybind11::arg("newOrigSpeed"));
		cl.def("GetRepOrigSpeed", (float (BallFreezePickup::*)()) &BallFreezePickup::GetRepOrigSpeed, "C++: BallFreezePickup::GetRepOrigSpeed() --> float");
		cl.def("SetRepOrigSpeed", (void (BallFreezePickup::*)(float)) &BallFreezePickup::SetRepOrigSpeed, "C++: BallFreezePickup::SetRepOrigSpeed(float) --> void", pybind11::arg("newRepOrigSpeed"));
		cl.def("PickupEnd", (void (BallFreezePickup::*)()) &BallFreezePickup::PickupEnd, "C++: BallFreezePickup::PickupEnd() --> void");
		cl.def("HandleBallExploded", (void (BallFreezePickup::*)(class BallWrapper)) &BallFreezePickup::HandleBallExploded, "C++: BallFreezePickup::HandleBallExploded(class BallWrapper) --> void", pybind11::arg("InBall"));
		cl.def("HandleBallHit", (void (BallFreezePickup::*)(class BallWrapper, class CarWrapper, unsigned char)) &BallFreezePickup::HandleBallHit, "C++: BallFreezePickup::HandleBallHit(class BallWrapper, class CarWrapper, unsigned char) --> void", pybind11::arg("InBall"), pybind11::arg("InCar"), pybind11::arg("HitType"));
		cl.def("ApplyForces", (void (BallFreezePickup::*)(float)) &BallFreezePickup::ApplyForces, "C++: BallFreezePickup::ApplyForces(float) --> void", pybind11::arg("ActiveTime"));
		cl.def("OnTargetChanged", (void (BallFreezePickup::*)()) &BallFreezePickup::OnTargetChanged, "C++: BallFreezePickup::OnTargetChanged() --> void");
		cl.def("PickupStart", (void (BallFreezePickup::*)()) &BallFreezePickup::PickupStart, "C++: BallFreezePickup::PickupStart() --> void");
	}
	{ // BallLassoPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BallLassoPickup.h line:7
		pybind11::class_<BallLassoPickup, std::shared_ptr<BallLassoPickup>, SpringPickup> cl(M, "BallLassoPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BallLassoPickup const &o){ return new BallLassoPickup(o); } ) );
		cl.def("assign", (class BallLassoPickup & (BallLassoPickup::*)(class BallLassoPickup)) &BallLassoPickup::operator=, "C++: BallLassoPickup::operator=(class BallLassoPickup) --> class BallLassoPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("ScaleSpringMeshToLocation", (void (BallLassoPickup::*)(struct Vector &, struct Vector &)) &BallLassoPickup::ScaleSpringMeshToLocation, "C++: BallLassoPickup::ScaleSpringMeshToLocation(struct Vector &, struct Vector &) --> void", pybind11::arg("NewLocation"), pybind11::arg("TargetLocation"));
		cl.def("DoSpring", (void (BallLassoPickup::*)(unsigned long)) &BallLassoPickup::DoSpring, "C++: BallLassoPickup::DoSpring(unsigned long) --> void", pybind11::arg("bFirstHit"));
	}
	{ // BattarangPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BattarangPickup.h line:7
		pybind11::class_<BattarangPickup, std::shared_ptr<BattarangPickup>, BallLassoPickup> cl(M, "BattarangPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BattarangPickup const &o){ return new BattarangPickup(o); } ) );
		cl.def("assign", (class BattarangPickup & (BattarangPickup::*)(class BattarangPickup)) &BattarangPickup::operator=, "C++: BattarangPickup::operator=(class BattarangPickup) --> class BattarangPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetSpinSpeed", (float (BattarangPickup::*)()) &BattarangPickup::GetSpinSpeed, "C++: BattarangPickup::GetSpinSpeed() --> float");
		cl.def("SetSpinSpeed", (void (BattarangPickup::*)(float)) &BattarangPickup::SetSpinSpeed, "C++: BattarangPickup::SetSpinSpeed(float) --> void", pybind11::arg("newSpinSpeed"));
		cl.def("GetCurRotation", (float (BattarangPickup::*)()) &BattarangPickup::GetCurRotation, "C++: BattarangPickup::GetCurRotation() --> float");
		cl.def("SetCurRotation", (void (BattarangPickup::*)(float)) &BattarangPickup::SetCurRotation, "C++: BattarangPickup::SetCurRotation(float) --> void", pybind11::arg("newCurRotation"));
	}
	{ // BoostModPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BoostModPickup.h line:7
		pybind11::class_<BoostModPickup, std::shared_ptr<BoostModPickup>, RumblePickupComponentWrapper> cl(M, "BoostModPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BoostModPickup const &o){ return new BoostModPickup(o); } ) );
		cl.def("assign", (class BoostModPickup & (BoostModPickup::*)(class BoostModPickup)) &BoostModPickup::operator=, "C++: BoostModPickup::operator=(class BoostModPickup) --> class BoostModPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetbUnlimitedBoost", (unsigned long (BoostModPickup::*)()) &BoostModPickup::GetbUnlimitedBoost, "C++: BoostModPickup::GetbUnlimitedBoost() --> unsigned long");
		cl.def("SetbUnlimitedBoost", (void (BoostModPickup::*)(unsigned long)) &BoostModPickup::SetbUnlimitedBoost, "C++: BoostModPickup::SetbUnlimitedBoost(unsigned long) --> void", pybind11::arg("newbUnlimitedBoost"));
		cl.def("GetBoostStrength", (float (BoostModPickup::*)()) &BoostModPickup::GetBoostStrength, "C++: BoostModPickup::GetBoostStrength() --> float");
		cl.def("SetBoostStrength", (void (BoostModPickup::*)(float)) &BoostModPickup::SetBoostStrength, "C++: BoostModPickup::SetBoostStrength(float) --> void", pybind11::arg("newBoostStrength"));
		cl.def("GetOldBoostStrength", (float (BoostModPickup::*)()) &BoostModPickup::GetOldBoostStrength, "C++: BoostModPickup::GetOldBoostStrength() --> float");
		cl.def("SetOldBoostStrength", (void (BoostModPickup::*)(float)) &BoostModPickup::SetOldBoostStrength, "C++: BoostModPickup::SetOldBoostStrength(float) --> void", pybind11::arg("newOldBoostStrength"));
		cl.def("PickupEnd", (void (BoostModPickup::*)()) &BoostModPickup::PickupEnd, "C++: BoostModPickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (BoostModPickup::*)()) &BoostModPickup::PickupStart, "C++: BoostModPickup::PickupStart() --> void");
	}
	{ // BoostOverridePickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BoostOverridePickup.h line:8
		pybind11::class_<BoostOverridePickup, std::shared_ptr<BoostOverridePickup>, TargetedPickup> cl(M, "BoostOverridePickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BoostOverridePickup const &o){ return new BoostOverridePickup(o); } ) );
		cl.def("assign", (class BoostOverridePickup & (BoostOverridePickup::*)(class BoostOverridePickup)) &BoostOverridePickup::operator=, "C++: BoostOverridePickup::operator=(class BoostOverridePickup) --> class BoostOverridePickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetOtherCar", (class CarWrapper (BoostOverridePickup::*)()) &BoostOverridePickup::GetOtherCar, "C++: BoostOverridePickup::GetOtherCar() --> class CarWrapper");
		cl.def("SetOtherCar", (void (BoostOverridePickup::*)(class CarWrapper)) &BoostOverridePickup::SetOtherCar, "C++: BoostOverridePickup::SetOtherCar(class CarWrapper) --> void", pybind11::arg("newOtherCar"));
		cl.def("PickupEnd", (void (BoostOverridePickup::*)()) &BoostOverridePickup::PickupEnd, "C++: BoostOverridePickup::PickupEnd() --> void");
		cl.def("OnTargetChanged", (void (BoostOverridePickup::*)()) &BoostOverridePickup::OnTargetChanged, "C++: BoostOverridePickup::OnTargetChanged() --> void");
		cl.def("PickupStart", (void (BoostOverridePickup::*)()) &BoostOverridePickup::PickupStart, "C++: BoostOverridePickup::PickupStart() --> void");
	}
	{ // CarSpeedPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/CarSpeedPickup.h line:7
		pybind11::class_<CarSpeedPickup, std::shared_ptr<CarSpeedPickup>, RumblePickupComponentWrapper> cl(M, "CarSpeedPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](CarSpeedPickup const &o){ return new CarSpeedPickup(o); } ) );
		cl.def("assign", (class CarSpeedPickup & (CarSpeedPickup::*)(class CarSpeedPickup)) &CarSpeedPickup::operator=, "C++: CarSpeedPickup::operator=(class CarSpeedPickup) --> class CarSpeedPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetGravityScale", (float (CarSpeedPickup::*)()) &CarSpeedPickup::GetGravityScale, "C++: CarSpeedPickup::GetGravityScale() --> float");
		cl.def("SetGravityScale", (void (CarSpeedPickup::*)(float)) &CarSpeedPickup::SetGravityScale, "C++: CarSpeedPickup::SetGravityScale(float) --> void", pybind11::arg("newGravityScale"));
		cl.def("GetAddedForce", (struct Vector (CarSpeedPickup::*)()) &CarSpeedPickup::GetAddedForce, "C++: CarSpeedPickup::GetAddedForce() --> struct Vector");
		cl.def("SetAddedForce", (void (CarSpeedPickup::*)(struct Vector)) &CarSpeedPickup::SetAddedForce, "C++: CarSpeedPickup::SetAddedForce(struct Vector) --> void", pybind11::arg("newAddedForce"));
		cl.def("GetOrigGravityScale", (float (CarSpeedPickup::*)()) &CarSpeedPickup::GetOrigGravityScale, "C++: CarSpeedPickup::GetOrigGravityScale() --> float");
		cl.def("SetOrigGravityScale", (void (CarSpeedPickup::*)(float)) &CarSpeedPickup::SetOrigGravityScale, "C++: CarSpeedPickup::SetOrigGravityScale(float) --> void", pybind11::arg("newOrigGravityScale"));
		cl.def("PickupEnd", (void (CarSpeedPickup::*)()) &CarSpeedPickup::PickupEnd, "C++: CarSpeedPickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (CarSpeedPickup::*)()) &CarSpeedPickup::PickupStart, "C++: CarSpeedPickup::PickupStart() --> void");
	}
	{ // DemolishPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/DemolishPickup.h line:7
		pybind11::class_<DemolishPickup, std::shared_ptr<DemolishPickup>, RumblePickupComponentWrapper> cl(M, "DemolishPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](DemolishPickup const &o){ return new DemolishPickup(o); } ) );
		cl.def("assign", (class DemolishPickup & (DemolishPickup::*)(class DemolishPickup)) &DemolishPickup::operator=, "C++: DemolishPickup::operator=(class DemolishPickup) --> class DemolishPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetDemolishTarget", (unsigned char (DemolishPickup::*)()) &DemolishPickup::GetDemolishTarget, "C++: DemolishPickup::GetDemolishTarget() --> unsigned char");
		cl.def("SetDemolishTarget", (void (DemolishPickup::*)(unsigned char)) &DemolishPickup::SetDemolishTarget, "C++: DemolishPickup::SetDemolishTarget(unsigned char) --> void", pybind11::arg("newDemolishTarget"));
		cl.def("GetDemolishSpeed", (unsigned char (DemolishPickup::*)()) &DemolishPickup::GetDemolishSpeed, "C++: DemolishPickup::GetDemolishSpeed() --> unsigned char");
		cl.def("SetDemolishSpeed", (void (DemolishPickup::*)(unsigned char)) &DemolishPickup::SetDemolishSpeed, "C++: DemolishPickup::SetDemolishSpeed(unsigned char) --> void", pybind11::arg("newDemolishSpeed"));
		cl.def("GetOldTarget", (unsigned char (DemolishPickup::*)()) &DemolishPickup::GetOldTarget, "C++: DemolishPickup::GetOldTarget() --> unsigned char");
		cl.def("SetOldTarget", (void (DemolishPickup::*)(unsigned char)) &DemolishPickup::SetOldTarget, "C++: DemolishPickup::SetOldTarget(unsigned char) --> void", pybind11::arg("newOldTarget"));
		cl.def("GetOldSpeed", (unsigned char (DemolishPickup::*)()) &DemolishPickup::GetOldSpeed, "C++: DemolishPickup::GetOldSpeed() --> unsigned char");
		cl.def("SetOldSpeed", (void (DemolishPickup::*)(unsigned char)) &DemolishPickup::SetOldSpeed, "C++: DemolishPickup::SetOldSpeed(unsigned char) --> void", pybind11::arg("newOldSpeed"));
		cl.def("PickupEnd", (void (DemolishPickup::*)()) &DemolishPickup::PickupEnd, "C++: DemolishPickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (DemolishPickup::*)()) &DemolishPickup::PickupStart, "C++: DemolishPickup::PickupStart() --> void");
	}
}
