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
#include <bakkesmod/wrappers/GameObject/RumbleComponent/GrapplingHookPickup.h>
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
		cl.def("assign", (class BallCarSpringPickup & (BallCarSpringPickup::*)(class BallCarSpringPickup)) &BallCarSpringPickup::operator=, "C++: BallCarSpringPickup::operator=(class BallCarSpringPickup) --> class BallCarSpringPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("ScaleSpringMeshToLocation", (void (BallCarSpringPickup::*)(struct Vector &, struct Vector &)) &BallCarSpringPickup::ScaleSpringMeshToLocation, "C++: BallCarSpringPickup::ScaleSpringMeshToLocation(struct Vector &, struct Vector &) --> void", "NewLocation"_a, "TargetLocation"_a);
	}
	{ // BallFreezePickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BallFreezePickup.h line:9
		pybind11::class_<BallFreezePickup, std::shared_ptr<BallFreezePickup>, TargetedPickup> cl(M, "BallFreezePickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BallFreezePickup const &o){ return new BallFreezePickup(o); } ) );
		cl.def("assign", (class BallFreezePickup & (BallFreezePickup::*)(class BallFreezePickup)) &BallFreezePickup::operator=, "C++: BallFreezePickup::operator=(class BallFreezePickup) --> class BallFreezePickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetbMaintainMomentum", (unsigned long (BallFreezePickup::*)()) &BallFreezePickup::GetbMaintainMomentum, "C++: BallFreezePickup::GetbMaintainMomentum() --> unsigned long");
		cl.def("SetbMaintainMomentum", (void (BallFreezePickup::*)(unsigned long)) &BallFreezePickup::SetbMaintainMomentum, "C++: BallFreezePickup::SetbMaintainMomentum(unsigned long) --> void", "newbMaintainMomentum"_a);
		cl.def("GetbTouched", (unsigned long (BallFreezePickup::*)()) &BallFreezePickup::GetbTouched, "C++: BallFreezePickup::GetbTouched() --> unsigned long");
		cl.def("SetbTouched", (void (BallFreezePickup::*)(unsigned long)) &BallFreezePickup::SetbTouched, "C++: BallFreezePickup::SetbTouched(unsigned long) --> void", "newbTouched"_a);
		cl.def("GetTimeToStop", (float (BallFreezePickup::*)()) &BallFreezePickup::GetTimeToStop, "C++: BallFreezePickup::GetTimeToStop() --> float");
		cl.def("SetTimeToStop", (void (BallFreezePickup::*)(float)) &BallFreezePickup::SetTimeToStop, "C++: BallFreezePickup::SetTimeToStop(float) --> void", "newTimeToStop"_a);
		cl.def("GetStopMomentumPercentage", (float (BallFreezePickup::*)()) &BallFreezePickup::GetStopMomentumPercentage, "C++: BallFreezePickup::GetStopMomentumPercentage() --> float");
		cl.def("SetStopMomentumPercentage", (void (BallFreezePickup::*)(float)) &BallFreezePickup::SetStopMomentumPercentage, "C++: BallFreezePickup::SetStopMomentumPercentage(float) --> void", "newStopMomentumPercentage"_a);
		cl.def("GetBall", (class BallWrapper (BallFreezePickup::*)()) &BallFreezePickup::GetBall, "C++: BallFreezePickup::GetBall() --> class BallWrapper");
		cl.def("SetBall", (void (BallFreezePickup::*)(class BallWrapper)) &BallFreezePickup::SetBall, "C++: BallFreezePickup::SetBall(class BallWrapper) --> void", "newBall"_a);
		cl.def("GetOrigLinearVelocity", (struct Vector (BallFreezePickup::*)()) &BallFreezePickup::GetOrigLinearVelocity, "C++: BallFreezePickup::GetOrigLinearVelocity() --> struct Vector");
		cl.def("SetOrigLinearVelocity", (void (BallFreezePickup::*)(struct Vector)) &BallFreezePickup::SetOrigLinearVelocity, "C++: BallFreezePickup::SetOrigLinearVelocity(struct Vector) --> void", "newOrigLinearVelocity"_a);
		cl.def("GetOrigAngularVelocity", (struct Vector (BallFreezePickup::*)()) &BallFreezePickup::GetOrigAngularVelocity, "C++: BallFreezePickup::GetOrigAngularVelocity() --> struct Vector");
		cl.def("SetOrigAngularVelocity", (void (BallFreezePickup::*)(struct Vector)) &BallFreezePickup::SetOrigAngularVelocity, "C++: BallFreezePickup::SetOrigAngularVelocity(struct Vector) --> void", "newOrigAngularVelocity"_a);
		cl.def("GetOrigSpeed", (float (BallFreezePickup::*)()) &BallFreezePickup::GetOrigSpeed, "C++: BallFreezePickup::GetOrigSpeed() --> float");
		cl.def("SetOrigSpeed", (void (BallFreezePickup::*)(float)) &BallFreezePickup::SetOrigSpeed, "C++: BallFreezePickup::SetOrigSpeed(float) --> void", "newOrigSpeed"_a);
		cl.def("GetRepOrigSpeed", (float (BallFreezePickup::*)()) &BallFreezePickup::GetRepOrigSpeed, "C++: BallFreezePickup::GetRepOrigSpeed() --> float");
		cl.def("SetRepOrigSpeed", (void (BallFreezePickup::*)(float)) &BallFreezePickup::SetRepOrigSpeed, "C++: BallFreezePickup::SetRepOrigSpeed(float) --> void", "newRepOrigSpeed"_a);
		cl.def("PickupEnd", (void (BallFreezePickup::*)()) &BallFreezePickup::PickupEnd, "C++: BallFreezePickup::PickupEnd() --> void");
		cl.def("HandleBallExploded", (void (BallFreezePickup::*)(class BallWrapper)) &BallFreezePickup::HandleBallExploded, "C++: BallFreezePickup::HandleBallExploded(class BallWrapper) --> void", "InBall"_a);
		cl.def("HandleBallHit", (void (BallFreezePickup::*)(class BallWrapper, class CarWrapper, unsigned char)) &BallFreezePickup::HandleBallHit, "C++: BallFreezePickup::HandleBallHit(class BallWrapper, class CarWrapper, unsigned char) --> void", "InBall"_a, "InCar"_a, "HitType"_a);
		cl.def("ApplyForces", (void (BallFreezePickup::*)(float)) &BallFreezePickup::ApplyForces, "C++: BallFreezePickup::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("OnTargetChanged", (void (BallFreezePickup::*)()) &BallFreezePickup::OnTargetChanged, "C++: BallFreezePickup::OnTargetChanged() --> void");
		cl.def("PickupStart", (void (BallFreezePickup::*)()) &BallFreezePickup::PickupStart, "C++: BallFreezePickup::PickupStart() --> void");
	}
	{ // BallLassoPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BallLassoPickup.h line:7
		pybind11::class_<BallLassoPickup, std::shared_ptr<BallLassoPickup>, SpringPickup> cl(M, "BallLassoPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BallLassoPickup const &o){ return new BallLassoPickup(o); } ) );
		cl.def("assign", (class BallLassoPickup & (BallLassoPickup::*)(class BallLassoPickup)) &BallLassoPickup::operator=, "C++: BallLassoPickup::operator=(class BallLassoPickup) --> class BallLassoPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("ScaleSpringMeshToLocation", (void (BallLassoPickup::*)(struct Vector &, struct Vector &)) &BallLassoPickup::ScaleSpringMeshToLocation, "C++: BallLassoPickup::ScaleSpringMeshToLocation(struct Vector &, struct Vector &) --> void", "NewLocation"_a, "TargetLocation"_a);
		cl.def("DoSpring", (void (BallLassoPickup::*)(unsigned long)) &BallLassoPickup::DoSpring, "C++: BallLassoPickup::DoSpring(unsigned long) --> void", "bFirstHit"_a);
	}
	{ // BattarangPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BattarangPickup.h line:7
		pybind11::class_<BattarangPickup, std::shared_ptr<BattarangPickup>, BallLassoPickup> cl(M, "BattarangPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BattarangPickup const &o){ return new BattarangPickup(o); } ) );
		cl.def("assign", (class BattarangPickup & (BattarangPickup::*)(class BattarangPickup)) &BattarangPickup::operator=, "C++: BattarangPickup::operator=(class BattarangPickup) --> class BattarangPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetSpinSpeed", (float (BattarangPickup::*)()) &BattarangPickup::GetSpinSpeed, "C++: BattarangPickup::GetSpinSpeed() --> float");
		cl.def("SetSpinSpeed", (void (BattarangPickup::*)(float)) &BattarangPickup::SetSpinSpeed, "C++: BattarangPickup::SetSpinSpeed(float) --> void", "newSpinSpeed"_a);
		cl.def("GetCurRotation", (float (BattarangPickup::*)()) &BattarangPickup::GetCurRotation, "C++: BattarangPickup::GetCurRotation() --> float");
		cl.def("SetCurRotation", (void (BattarangPickup::*)(float)) &BattarangPickup::SetCurRotation, "C++: BattarangPickup::SetCurRotation(float) --> void", "newCurRotation"_a);
	}
	{ // BoostModPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BoostModPickup.h line:7
		pybind11::class_<BoostModPickup, std::shared_ptr<BoostModPickup>, RumblePickupComponentWrapper> cl(M, "BoostModPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BoostModPickup const &o){ return new BoostModPickup(o); } ) );
		cl.def("assign", (class BoostModPickup & (BoostModPickup::*)(class BoostModPickup)) &BoostModPickup::operator=, "C++: BoostModPickup::operator=(class BoostModPickup) --> class BoostModPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetbUnlimitedBoost", (unsigned long (BoostModPickup::*)()) &BoostModPickup::GetbUnlimitedBoost, "C++: BoostModPickup::GetbUnlimitedBoost() --> unsigned long");
		cl.def("SetbUnlimitedBoost", (void (BoostModPickup::*)(unsigned long)) &BoostModPickup::SetbUnlimitedBoost, "C++: BoostModPickup::SetbUnlimitedBoost(unsigned long) --> void", "newbUnlimitedBoost"_a);
		cl.def("GetBoostStrength", (float (BoostModPickup::*)()) &BoostModPickup::GetBoostStrength, "C++: BoostModPickup::GetBoostStrength() --> float");
		cl.def("SetBoostStrength", (void (BoostModPickup::*)(float)) &BoostModPickup::SetBoostStrength, "C++: BoostModPickup::SetBoostStrength(float) --> void", "newBoostStrength"_a);
		cl.def("GetOldBoostStrength", (float (BoostModPickup::*)()) &BoostModPickup::GetOldBoostStrength, "C++: BoostModPickup::GetOldBoostStrength() --> float");
		cl.def("SetOldBoostStrength", (void (BoostModPickup::*)(float)) &BoostModPickup::SetOldBoostStrength, "C++: BoostModPickup::SetOldBoostStrength(float) --> void", "newOldBoostStrength"_a);
		cl.def("PickupEnd", (void (BoostModPickup::*)()) &BoostModPickup::PickupEnd, "C++: BoostModPickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (BoostModPickup::*)()) &BoostModPickup::PickupStart, "C++: BoostModPickup::PickupStart() --> void");
	}
	{ // BoostOverridePickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BoostOverridePickup.h line:8
		pybind11::class_<BoostOverridePickup, std::shared_ptr<BoostOverridePickup>, TargetedPickup> cl(M, "BoostOverridePickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BoostOverridePickup const &o){ return new BoostOverridePickup(o); } ) );
		cl.def("assign", (class BoostOverridePickup & (BoostOverridePickup::*)(class BoostOverridePickup)) &BoostOverridePickup::operator=, "C++: BoostOverridePickup::operator=(class BoostOverridePickup) --> class BoostOverridePickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetOtherCar", (class CarWrapper (BoostOverridePickup::*)()) &BoostOverridePickup::GetOtherCar, "C++: BoostOverridePickup::GetOtherCar() --> class CarWrapper");
		cl.def("SetOtherCar", (void (BoostOverridePickup::*)(class CarWrapper)) &BoostOverridePickup::SetOtherCar, "C++: BoostOverridePickup::SetOtherCar(class CarWrapper) --> void", "newOtherCar"_a);
		cl.def("PickupEnd", (void (BoostOverridePickup::*)()) &BoostOverridePickup::PickupEnd, "C++: BoostOverridePickup::PickupEnd() --> void");
		cl.def("OnTargetChanged", (void (BoostOverridePickup::*)()) &BoostOverridePickup::OnTargetChanged, "C++: BoostOverridePickup::OnTargetChanged() --> void");
		cl.def("PickupStart", (void (BoostOverridePickup::*)()) &BoostOverridePickup::PickupStart, "C++: BoostOverridePickup::PickupStart() --> void");
	}
	{ // CarSpeedPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/CarSpeedPickup.h line:7
		pybind11::class_<CarSpeedPickup, std::shared_ptr<CarSpeedPickup>, RumblePickupComponentWrapper> cl(M, "CarSpeedPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](CarSpeedPickup const &o){ return new CarSpeedPickup(o); } ) );
		cl.def("assign", (class CarSpeedPickup & (CarSpeedPickup::*)(class CarSpeedPickup)) &CarSpeedPickup::operator=, "C++: CarSpeedPickup::operator=(class CarSpeedPickup) --> class CarSpeedPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetGravityScale", (float (CarSpeedPickup::*)()) &CarSpeedPickup::GetGravityScale, "C++: CarSpeedPickup::GetGravityScale() --> float");
		cl.def("SetGravityScale", (void (CarSpeedPickup::*)(float)) &CarSpeedPickup::SetGravityScale, "C++: CarSpeedPickup::SetGravityScale(float) --> void", "newGravityScale"_a);
		cl.def("GetAddedForce", (struct Vector (CarSpeedPickup::*)()) &CarSpeedPickup::GetAddedForce, "C++: CarSpeedPickup::GetAddedForce() --> struct Vector");
		cl.def("SetAddedForce", (void (CarSpeedPickup::*)(struct Vector)) &CarSpeedPickup::SetAddedForce, "C++: CarSpeedPickup::SetAddedForce(struct Vector) --> void", "newAddedForce"_a);
		cl.def("GetOrigGravityScale", (float (CarSpeedPickup::*)()) &CarSpeedPickup::GetOrigGravityScale, "C++: CarSpeedPickup::GetOrigGravityScale() --> float");
		cl.def("SetOrigGravityScale", (void (CarSpeedPickup::*)(float)) &CarSpeedPickup::SetOrigGravityScale, "C++: CarSpeedPickup::SetOrigGravityScale(float) --> void", "newOrigGravityScale"_a);
		cl.def("PickupEnd", (void (CarSpeedPickup::*)()) &CarSpeedPickup::PickupEnd, "C++: CarSpeedPickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (CarSpeedPickup::*)()) &CarSpeedPickup::PickupStart, "C++: CarSpeedPickup::PickupStart() --> void");
	}
	{ // DemolishPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/DemolishPickup.h line:7
		pybind11::class_<DemolishPickup, std::shared_ptr<DemolishPickup>, RumblePickupComponentWrapper> cl(M, "DemolishPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](DemolishPickup const &o){ return new DemolishPickup(o); } ) );
		cl.def("assign", (class DemolishPickup & (DemolishPickup::*)(class DemolishPickup)) &DemolishPickup::operator=, "C++: DemolishPickup::operator=(class DemolishPickup) --> class DemolishPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetDemolishTarget", (unsigned char (DemolishPickup::*)()) &DemolishPickup::GetDemolishTarget, "C++: DemolishPickup::GetDemolishTarget() --> unsigned char");
		cl.def("SetDemolishTarget", (void (DemolishPickup::*)(unsigned char)) &DemolishPickup::SetDemolishTarget, "C++: DemolishPickup::SetDemolishTarget(unsigned char) --> void", "newDemolishTarget"_a);
		cl.def("GetDemolishSpeed", (unsigned char (DemolishPickup::*)()) &DemolishPickup::GetDemolishSpeed, "C++: DemolishPickup::GetDemolishSpeed() --> unsigned char");
		cl.def("SetDemolishSpeed", (void (DemolishPickup::*)(unsigned char)) &DemolishPickup::SetDemolishSpeed, "C++: DemolishPickup::SetDemolishSpeed(unsigned char) --> void", "newDemolishSpeed"_a);
		cl.def("GetOldTarget", (unsigned char (DemolishPickup::*)()) &DemolishPickup::GetOldTarget, "C++: DemolishPickup::GetOldTarget() --> unsigned char");
		cl.def("SetOldTarget", (void (DemolishPickup::*)(unsigned char)) &DemolishPickup::SetOldTarget, "C++: DemolishPickup::SetOldTarget(unsigned char) --> void", "newOldTarget"_a);
		cl.def("GetOldSpeed", (unsigned char (DemolishPickup::*)()) &DemolishPickup::GetOldSpeed, "C++: DemolishPickup::GetOldSpeed() --> unsigned char");
		cl.def("SetOldSpeed", (void (DemolishPickup::*)(unsigned char)) &DemolishPickup::SetOldSpeed, "C++: DemolishPickup::SetOldSpeed(unsigned char) --> void", "newOldSpeed"_a);
		cl.def("PickupEnd", (void (DemolishPickup::*)()) &DemolishPickup::PickupEnd, "C++: DemolishPickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (DemolishPickup::*)()) &DemolishPickup::PickupStart, "C++: DemolishPickup::PickupStart() --> void");
	}
	{ // GrapplingHookPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/GrapplingHookPickup.h line:9
		pybind11::class_<GrapplingHookPickup, std::shared_ptr<GrapplingHookPickup>, TargetedPickup> cl(M, "GrapplingHookPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](GrapplingHookPickup const &o){ return new GrapplingHookPickup(o); } ) );
		cl.def("assign", (class GrapplingHookPickup & (GrapplingHookPickup::*)(class GrapplingHookPickup)) &GrapplingHookPickup::operator=, "C++: GrapplingHookPickup::operator=(class GrapplingHookPickup) --> class GrapplingHookPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetImpulse", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetImpulse, "C++: GrapplingHookPickup::GetImpulse() --> float");
		cl.def("SetImpulse", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetImpulse, "C++: GrapplingHookPickup::SetImpulse(float) --> void", "newImpulse"_a);
		cl.def("GetForce", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetForce, "C++: GrapplingHookPickup::GetForce() --> float");
		cl.def("SetForce", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetForce, "C++: GrapplingHookPickup::SetForce(float) --> void", "newForce"_a);
		cl.def("GetMaxRopeLength", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetMaxRopeLength, "C++: GrapplingHookPickup::GetMaxRopeLength() --> float");
		cl.def("SetMaxRopeLength", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetMaxRopeLength, "C++: GrapplingHookPickup::SetMaxRopeLength(float) --> void", "newMaxRopeLength"_a);
		cl.def("GetPredictionSpeed", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetPredictionSpeed, "C++: GrapplingHookPickup::GetPredictionSpeed() --> float");
		cl.def("SetPredictionSpeed", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetPredictionSpeed, "C++: GrapplingHookPickup::SetPredictionSpeed(float) --> void", "newPredictionSpeed"_a);
		cl.def("GetbDeactivateOnTouch", (unsigned long (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetbDeactivateOnTouch, "C++: GrapplingHookPickup::GetbDeactivateOnTouch() --> unsigned long");
		cl.def("SetbDeactivateOnTouch", (void (GrapplingHookPickup::*)(unsigned long)) &GrapplingHookPickup::SetbDeactivateOnTouch, "C++: GrapplingHookPickup::SetbDeactivateOnTouch(unsigned long) --> void", "newbDeactivateOnTouch"_a);
		cl.def("GetbInstant", (unsigned long (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetbInstant, "C++: GrapplingHookPickup::GetbInstant() --> unsigned long");
		cl.def("SetbInstant", (void (GrapplingHookPickup::*)(unsigned long)) &GrapplingHookPickup::SetbInstant, "C++: GrapplingHookPickup::SetbInstant(unsigned long) --> void", "newbInstant"_a);
		cl.def("GetbBlocked", (unsigned long (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetbBlocked, "C++: GrapplingHookPickup::GetbBlocked() --> unsigned long");
		cl.def("SetbBlocked", (void (GrapplingHookPickup::*)(unsigned long)) &GrapplingHookPickup::SetbBlocked, "C++: GrapplingHookPickup::SetbBlocked(unsigned long) --> void", "newbBlocked"_a);
		cl.def("GetbAttachedToBall", (unsigned long (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetbAttachedToBall, "C++: GrapplingHookPickup::GetbAttachedToBall() --> unsigned long");
		cl.def("SetbAttachedToBall", (void (GrapplingHookPickup::*)(unsigned long)) &GrapplingHookPickup::SetbAttachedToBall, "C++: GrapplingHookPickup::SetbAttachedToBall(unsigned long) --> void", "newbAttachedToBall"_a);
		cl.def("GetRopeMeshScale", (struct Vector (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetRopeMeshScale, "C++: GrapplingHookPickup::GetRopeMeshScale() --> struct Vector");
		cl.def("SetRopeMeshScale", (void (GrapplingHookPickup::*)(struct Vector)) &GrapplingHookPickup::SetRopeMeshScale, "C++: GrapplingHookPickup::SetRopeMeshScale(struct Vector) --> void", "newRopeMeshScale"_a);
		cl.def("GetRopeMeshInitialSize", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetRopeMeshInitialSize, "C++: GrapplingHookPickup::GetRopeMeshInitialSize() --> float");
		cl.def("SetRopeMeshInitialSize", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetRopeMeshInitialSize, "C++: GrapplingHookPickup::SetRopeMeshInitialSize(float) --> void", "newRopeMeshInitialSize"_a);
		cl.def("GetRopeRotationOffset", (struct Rotator (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetRopeRotationOffset, "C++: GrapplingHookPickup::GetRopeRotationOffset() --> struct Rotator");
		cl.def("SetRopeRotationOffset", (void (GrapplingHookPickup::*)(struct Rotator)) &GrapplingHookPickup::SetRopeRotationOffset, "C++: GrapplingHookPickup::SetRopeRotationOffset(struct Rotator) --> void", "newRopeRotationOffset"_a);
		cl.def("GetHookMeshScale", (struct Vector (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetHookMeshScale, "C++: GrapplingHookPickup::GetHookMeshScale() --> struct Vector");
		cl.def("SetHookMeshScale", (void (GrapplingHookPickup::*)(struct Vector)) &GrapplingHookPickup::SetHookMeshScale, "C++: GrapplingHookPickup::SetHookMeshScale(struct Vector) --> void", "newHookMeshScale"_a);
		cl.def("GetHookMeshOffset", (struct Vector (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetHookMeshOffset, "C++: GrapplingHookPickup::GetHookMeshOffset() --> struct Vector");
		cl.def("SetHookMeshOffset", (void (GrapplingHookPickup::*)(struct Vector)) &GrapplingHookPickup::SetHookMeshOffset, "C++: GrapplingHookPickup::SetHookMeshOffset(struct Vector) --> void", "newHookMeshOffset"_a);
		cl.def("GetHookRotationOffset", (struct Rotator (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetHookRotationOffset, "C++: GrapplingHookPickup::GetHookRotationOffset() --> struct Rotator");
		cl.def("SetHookRotationOffset", (void (GrapplingHookPickup::*)(struct Rotator)) &GrapplingHookPickup::SetHookRotationOffset, "C++: GrapplingHookPickup::SetHookRotationOffset(struct Rotator) --> void", "newHookRotationOffset"_a);
		cl.def("GetHitDistanceOffset", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetHitDistanceOffset, "C++: GrapplingHookPickup::GetHitDistanceOffset() --> float");
		cl.def("SetHitDistanceOffset", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetHitDistanceOffset, "C++: GrapplingHookPickup::SetHitDistanceOffset(float) --> void", "newHitDistanceOffset"_a);
		cl.def("GetAfterAttachDuration", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetAfterAttachDuration, "C++: GrapplingHookPickup::GetAfterAttachDuration() --> float");
		cl.def("SetAfterAttachDuration", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetAfterAttachDuration, "C++: GrapplingHookPickup::SetAfterAttachDuration(float) --> void", "newAfterAttachDuration"_a);
		cl.def("GetBlockedRequiredMoveDistance", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetBlockedRequiredMoveDistance, "C++: GrapplingHookPickup::GetBlockedRequiredMoveDistance() --> float");
		cl.def("SetBlockedRequiredMoveDistance", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetBlockedRequiredMoveDistance, "C++: GrapplingHookPickup::SetBlockedRequiredMoveDistance(float) --> void", "newBlockedRequiredMoveDistance"_a);
		cl.def("GetBlockedRequiredMoveTime", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetBlockedRequiredMoveTime, "C++: GrapplingHookPickup::GetBlockedRequiredMoveTime() --> float");
		cl.def("SetBlockedRequiredMoveTime", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetBlockedRequiredMoveTime, "C++: GrapplingHookPickup::SetBlockedRequiredMoveTime(float) --> void", "newBlockedRequiredMoveTime"_a);
		cl.def("GetBlockedStartTime", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetBlockedStartTime, "C++: GrapplingHookPickup::GetBlockedStartTime() --> float");
		cl.def("SetBlockedStartTime", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetBlockedStartTime, "C++: GrapplingHookPickup::SetBlockedStartTime(float) --> void", "newBlockedStartTime"_a);
		cl.def("GetBlockedStartPos", (struct Vector (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetBlockedStartPos, "C++: GrapplingHookPickup::GetBlockedStartPos() --> struct Vector");
		cl.def("SetBlockedStartPos", (void (GrapplingHookPickup::*)(struct Vector)) &GrapplingHookPickup::SetBlockedStartPos, "C++: GrapplingHookPickup::SetBlockedStartPos(struct Vector) --> void", "newBlockedStartPos"_a);
		cl.def("GetBall", (class BallWrapper (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetBall, "C++: GrapplingHookPickup::GetBall() --> class BallWrapper");
		cl.def("SetBall", (void (GrapplingHookPickup::*)(class BallWrapper)) &GrapplingHookPickup::SetBall, "C++: GrapplingHookPickup::SetBall(class BallWrapper) --> void", "newBall"_a);
		cl.def("GetRopeOrigin", (struct Vector (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetRopeOrigin, "C++: GrapplingHookPickup::GetRopeOrigin() --> struct Vector");
		cl.def("SetRopeOrigin", (void (GrapplingHookPickup::*)(struct Vector)) &GrapplingHookPickup::SetRopeOrigin, "C++: GrapplingHookPickup::SetRopeOrigin(struct Vector) --> void", "newRopeOrigin"_a);
		cl.def("GetRopeToTime", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetRopeToTime, "C++: GrapplingHookPickup::GetRopeToTime() --> float");
		cl.def("SetRopeToTime", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetRopeToTime, "C++: GrapplingHookPickup::SetRopeToTime(float) --> void", "newRopeToTime"_a);
		cl.def("GetCurrentRopeLength", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetCurrentRopeLength, "C++: GrapplingHookPickup::GetCurrentRopeLength() --> float");
		cl.def("SetCurrentRopeLength", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetCurrentRopeLength, "C++: GrapplingHookPickup::SetCurrentRopeLength(float) --> void", "newCurrentRopeLength"_a);
		cl.def("GetAttachTime", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetAttachTime, "C++: GrapplingHookPickup::GetAttachTime() --> float");
		cl.def("SetAttachTime", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetAttachTime, "C++: GrapplingHookPickup::SetAttachTime(float) --> void", "newAttachTime"_a);
		cl.def("HandleBallExploded", (void (GrapplingHookPickup::*)(class BallWrapper)) &GrapplingHookPickup::HandleBallExploded, "C++: GrapplingHookPickup::HandleBallExploded(class BallWrapper) --> void", "InBall"_a);
		cl.def("PickupEnd", (void (GrapplingHookPickup::*)()) &GrapplingHookPickup::PickupEnd, "C++: GrapplingHookPickup::PickupEnd() --> void");
		cl.def("ScaleMeshToLocation", (void (GrapplingHookPickup::*)(struct Vector &, struct Vector &)) &GrapplingHookPickup::ScaleMeshToLocation, "C++: GrapplingHookPickup::ScaleMeshToLocation(struct Vector &, struct Vector &) --> void", "NewLocation"_a, "TargetLocation"_a);
		cl.def("GetPredictedBallLocation", (struct Vector (GrapplingHookPickup::*)(class BallWrapper)) &GrapplingHookPickup::GetPredictedBallLocation, "C++: GrapplingHookPickup::GetPredictedBallLocation(class BallWrapper) --> struct Vector", "InBall"_a);
		cl.def("GetTargetedLocation", (struct Vector (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetTargetedLocation, "C++: GrapplingHookPickup::GetTargetedLocation() --> struct Vector");
		cl.def("UpdateVisual", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::UpdateVisual, "C++: GrapplingHookPickup::UpdateVisual(float) --> void", "DeltaTime"_a);
		cl.def("PickupTick", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::PickupTick, "C++: GrapplingHookPickup::PickupTick(float) --> void", "DeltaTime"_a);
		cl.def("ApplyForces", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::ApplyForces, "C++: GrapplingHookPickup::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("DoAttach", (void (GrapplingHookPickup::*)()) &GrapplingHookPickup::DoAttach, "C++: GrapplingHookPickup::DoAttach() --> void");
		cl.def("PickupStart", (void (GrapplingHookPickup::*)()) &GrapplingHookPickup::PickupStart, "C++: GrapplingHookPickup::PickupStart() --> void");
	}
}
