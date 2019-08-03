#include "pch.h"
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/BallLassoPickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/BasketballPickup.h>
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


void bind_bakkesmod_wrappers_GameObject_RumbleComponent_BallLassoPickup(py::module &M)
{
	{ // BallLassoPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BallLassoPickup.h line:7
		pybind11::class_<BallLassoPickup, std::shared_ptr<BallLassoPickup>, SpringPickup> cl(M, "BallLassoPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BallLassoPickup const &o){ return new BallLassoPickup(o); } ) );
		cl.def("assign", (class BallLassoPickup & (BallLassoPickup::*)(class BallLassoPickup)) &BallLassoPickup::operator=, "C++: BallLassoPickup::operator=(class BallLassoPickup) --> class BallLassoPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("ScaleSpringMeshToLocation", (void (BallLassoPickup::*)(struct Vector &, struct Vector &)) &BallLassoPickup::ScaleSpringMeshToLocation, "C++: BallLassoPickup::ScaleSpringMeshToLocation(struct Vector &, struct Vector &) --> void", pybind11::arg("NewLocation"), pybind11::arg("TargetLocation"));
		cl.def("DoSpring", (void (BallLassoPickup::*)(unsigned long)) &BallLassoPickup::DoSpring, "C++: BallLassoPickup::DoSpring(unsigned long) --> void", pybind11::arg("bFirstHit"));
	}
	//{ // BasketballPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BasketballPickup.h line:10
	//	pybind11::class_<BasketballPickup, std::shared_ptr<BasketballPickup>, RumblePickupComponentWrapper> cl(M, "BasketballPickup");
	//	pybind11::handle cl_type = cl;

	//	cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

	//	cl.def( pybind11::init( [](BasketballPickup const &o){ return new BasketballPickup(o); } ) );
	//	cl.def("assign", (class BasketballPickup & (BasketballPickup::*)(class BasketballPickup)) &BasketballPickup::operator=, "C++: BasketballPickup::operator=(class BasketballPickup) --> class BasketballPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
	//	cl.def("GetBallOffset", (struct Vector (BasketballPickup::*)()) &BasketballPickup::GetBallOffset, "C++: BasketballPickup::GetBallOffset() --> struct Vector");
	//	cl.def("SetBallOffset", (void (BasketballPickup::*)(struct Vector)) &BasketballPickup::SetBallOffset, "C++: BasketballPickup::SetBallOffset(struct Vector) --> void", pybind11::arg("newBallOffset"));
	//	cl.def("GetAttachedBallMass", (float (BasketballPickup::*)()) &BasketballPickup::GetAttachedBallMass, "C++: BasketballPickup::GetAttachedBallMass() --> float");
	//	cl.def("SetAttachedBallMass", (void (BasketballPickup::*)(float)) &BasketballPickup::SetAttachedBallMass, "C++: BasketballPickup::SetAttachedBallMass(float) --> void", pybind11::arg("newAttachedBallMass"));
	//	cl.def("GetLaunchForce", (struct Vector (BasketballPickup::*)()) &BasketballPickup::GetLaunchForce, "C++: BasketballPickup::GetLaunchForce() --> struct Vector");
	//	cl.def("SetLaunchForce", (void (BasketballPickup::*)(struct Vector)) &BasketballPickup::SetLaunchForce, "C++: BasketballPickup::SetLaunchForce(struct Vector) --> void", pybind11::arg("newLaunchForce"));
	//	cl.def("GetWeldedBall", (class BallWrapper (BasketballPickup::*)()) &BasketballPickup::GetWeldedBall, "C++: BasketballPickup::GetWeldedBall() --> class BallWrapper");
	//	cl.def("SetWeldedBall", (void (BasketballPickup::*)(class BallWrapper)) &BasketballPickup::SetWeldedBall, "C++: BasketballPickup::SetWeldedBall(class BallWrapper) --> void", pybind11::arg("newWeldedBall"));
	//	cl.def("GetOldBallMass", (float (BasketballPickup::*)()) &BasketballPickup::GetOldBallMass, "C++: BasketballPickup::GetOldBallMass() --> float");
	//	cl.def("SetOldBallMass", (void (BasketballPickup::*)(float)) &BasketballPickup::SetOldBallMass, "C++: BasketballPickup::SetOldBallMass(float) --> void", pybind11::arg("newOldBallMass"));
	//	cl.def("HandleCarTouch", (void (BasketballPickup::*)(class BallWrapper, class CarWrapper, unsigned char)) &BasketballPickup::HandleCarTouch, "C++: BasketballPickup::HandleCarTouch(class BallWrapper, class CarWrapper, unsigned char) --> void", pybind11::arg("InBall"), pybind11::arg("InCar"), pybind11::arg("HitType"));
	//	cl.def("PickupStart", (void (BasketballPickup::*)()) &BasketballPickup::PickupStart, "C++: BasketballPickup::PickupStart() --> void");
	//	cl.def("HandleHitBall", (void (BasketballPickup::*)(class CarWrapper, class BallWrapper)) &BasketballPickup::HandleHitBall, "C++: BasketballPickup::HandleHitBall(class CarWrapper, class BallWrapper) --> void", pybind11::arg("InCar"), pybind11::arg("InBall"));
	//	cl.def("TryActivate", (bool (BasketballPickup::*)(class RBActorWrapper)) &BasketballPickup::TryActivate, "C++: BasketballPickup::TryActivate(class RBActorWrapper) --> bool", pybind11::arg("TargetOverride"));
	//	cl.def("OnCreated", (void (BasketballPickup::*)()) &BasketballPickup::OnCreated, "C++: BasketballPickup::OnCreated() --> void");
	//}
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
	{ // GrapplingHookPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/GrapplingHookPickup.h line:9
		pybind11::class_<GrapplingHookPickup, std::shared_ptr<GrapplingHookPickup>, TargetedPickup> cl(M, "GrapplingHookPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](GrapplingHookPickup const &o){ return new GrapplingHookPickup(o); } ) );
		cl.def("assign", (class GrapplingHookPickup & (GrapplingHookPickup::*)(class GrapplingHookPickup)) &GrapplingHookPickup::operator=, "C++: GrapplingHookPickup::operator=(class GrapplingHookPickup) --> class GrapplingHookPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetImpulse", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetImpulse, "C++: GrapplingHookPickup::GetImpulse() --> float");
		cl.def("SetImpulse", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetImpulse, "C++: GrapplingHookPickup::SetImpulse(float) --> void", pybind11::arg("newImpulse"));
		cl.def("GetForce", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetForce, "C++: GrapplingHookPickup::GetForce() --> float");
		cl.def("SetForce", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetForce, "C++: GrapplingHookPickup::SetForce(float) --> void", pybind11::arg("newForce"));
		cl.def("GetMaxRopeLength", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetMaxRopeLength, "C++: GrapplingHookPickup::GetMaxRopeLength() --> float");
		cl.def("SetMaxRopeLength", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetMaxRopeLength, "C++: GrapplingHookPickup::SetMaxRopeLength(float) --> void", pybind11::arg("newMaxRopeLength"));
		cl.def("GetPredictionSpeed", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetPredictionSpeed, "C++: GrapplingHookPickup::GetPredictionSpeed() --> float");
		cl.def("SetPredictionSpeed", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetPredictionSpeed, "C++: GrapplingHookPickup::SetPredictionSpeed(float) --> void", pybind11::arg("newPredictionSpeed"));
		cl.def("GetbDeactivateOnTouch", (unsigned long (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetbDeactivateOnTouch, "C++: GrapplingHookPickup::GetbDeactivateOnTouch() --> unsigned long");
		cl.def("SetbDeactivateOnTouch", (void (GrapplingHookPickup::*)(unsigned long)) &GrapplingHookPickup::SetbDeactivateOnTouch, "C++: GrapplingHookPickup::SetbDeactivateOnTouch(unsigned long) --> void", pybind11::arg("newbDeactivateOnTouch"));
		cl.def("GetbInstant", (unsigned long (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetbInstant, "C++: GrapplingHookPickup::GetbInstant() --> unsigned long");
		cl.def("SetbInstant", (void (GrapplingHookPickup::*)(unsigned long)) &GrapplingHookPickup::SetbInstant, "C++: GrapplingHookPickup::SetbInstant(unsigned long) --> void", pybind11::arg("newbInstant"));
		cl.def("GetbBlocked", (unsigned long (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetbBlocked, "C++: GrapplingHookPickup::GetbBlocked() --> unsigned long");
		cl.def("SetbBlocked", (void (GrapplingHookPickup::*)(unsigned long)) &GrapplingHookPickup::SetbBlocked, "C++: GrapplingHookPickup::SetbBlocked(unsigned long) --> void", pybind11::arg("newbBlocked"));
		cl.def("GetbAttachedToBall", (unsigned long (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetbAttachedToBall, "C++: GrapplingHookPickup::GetbAttachedToBall() --> unsigned long");
		cl.def("SetbAttachedToBall", (void (GrapplingHookPickup::*)(unsigned long)) &GrapplingHookPickup::SetbAttachedToBall, "C++: GrapplingHookPickup::SetbAttachedToBall(unsigned long) --> void", pybind11::arg("newbAttachedToBall"));
		cl.def("GetRopeMeshScale", (struct Vector (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetRopeMeshScale, "C++: GrapplingHookPickup::GetRopeMeshScale() --> struct Vector");
		cl.def("SetRopeMeshScale", (void (GrapplingHookPickup::*)(struct Vector)) &GrapplingHookPickup::SetRopeMeshScale, "C++: GrapplingHookPickup::SetRopeMeshScale(struct Vector) --> void", pybind11::arg("newRopeMeshScale"));
		cl.def("GetRopeMeshInitialSize", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetRopeMeshInitialSize, "C++: GrapplingHookPickup::GetRopeMeshInitialSize() --> float");
		cl.def("SetRopeMeshInitialSize", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetRopeMeshInitialSize, "C++: GrapplingHookPickup::SetRopeMeshInitialSize(float) --> void", pybind11::arg("newRopeMeshInitialSize"));
		cl.def("GetRopeRotationOffset", (struct Rotator (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetRopeRotationOffset, "C++: GrapplingHookPickup::GetRopeRotationOffset() --> struct Rotator");
		cl.def("SetRopeRotationOffset", (void (GrapplingHookPickup::*)(struct Rotator)) &GrapplingHookPickup::SetRopeRotationOffset, "C++: GrapplingHookPickup::SetRopeRotationOffset(struct Rotator) --> void", pybind11::arg("newRopeRotationOffset"));
		cl.def("GetHookMeshScale", (struct Vector (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetHookMeshScale, "C++: GrapplingHookPickup::GetHookMeshScale() --> struct Vector");
		cl.def("SetHookMeshScale", (void (GrapplingHookPickup::*)(struct Vector)) &GrapplingHookPickup::SetHookMeshScale, "C++: GrapplingHookPickup::SetHookMeshScale(struct Vector) --> void", pybind11::arg("newHookMeshScale"));
		cl.def("GetHookMeshOffset", (struct Vector (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetHookMeshOffset, "C++: GrapplingHookPickup::GetHookMeshOffset() --> struct Vector");
		cl.def("SetHookMeshOffset", (void (GrapplingHookPickup::*)(struct Vector)) &GrapplingHookPickup::SetHookMeshOffset, "C++: GrapplingHookPickup::SetHookMeshOffset(struct Vector) --> void", pybind11::arg("newHookMeshOffset"));
		cl.def("GetHookRotationOffset", (struct Rotator (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetHookRotationOffset, "C++: GrapplingHookPickup::GetHookRotationOffset() --> struct Rotator");
		cl.def("SetHookRotationOffset", (void (GrapplingHookPickup::*)(struct Rotator)) &GrapplingHookPickup::SetHookRotationOffset, "C++: GrapplingHookPickup::SetHookRotationOffset(struct Rotator) --> void", pybind11::arg("newHookRotationOffset"));
		cl.def("GetHitDistanceOffset", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetHitDistanceOffset, "C++: GrapplingHookPickup::GetHitDistanceOffset() --> float");
		cl.def("SetHitDistanceOffset", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetHitDistanceOffset, "C++: GrapplingHookPickup::SetHitDistanceOffset(float) --> void", pybind11::arg("newHitDistanceOffset"));
		cl.def("GetAfterAttachDuration", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetAfterAttachDuration, "C++: GrapplingHookPickup::GetAfterAttachDuration() --> float");
		cl.def("SetAfterAttachDuration", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetAfterAttachDuration, "C++: GrapplingHookPickup::SetAfterAttachDuration(float) --> void", pybind11::arg("newAfterAttachDuration"));
		cl.def("GetBlockedRequiredMoveDistance", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetBlockedRequiredMoveDistance, "C++: GrapplingHookPickup::GetBlockedRequiredMoveDistance() --> float");
		cl.def("SetBlockedRequiredMoveDistance", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetBlockedRequiredMoveDistance, "C++: GrapplingHookPickup::SetBlockedRequiredMoveDistance(float) --> void", pybind11::arg("newBlockedRequiredMoveDistance"));
		cl.def("GetBlockedRequiredMoveTime", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetBlockedRequiredMoveTime, "C++: GrapplingHookPickup::GetBlockedRequiredMoveTime() --> float");
		cl.def("SetBlockedRequiredMoveTime", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetBlockedRequiredMoveTime, "C++: GrapplingHookPickup::SetBlockedRequiredMoveTime(float) --> void", pybind11::arg("newBlockedRequiredMoveTime"));
		cl.def("GetBlockedStartTime", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetBlockedStartTime, "C++: GrapplingHookPickup::GetBlockedStartTime() --> float");
		cl.def("SetBlockedStartTime", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetBlockedStartTime, "C++: GrapplingHookPickup::SetBlockedStartTime(float) --> void", pybind11::arg("newBlockedStartTime"));
		cl.def("GetBlockedStartPos", (struct Vector (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetBlockedStartPos, "C++: GrapplingHookPickup::GetBlockedStartPos() --> struct Vector");
		cl.def("SetBlockedStartPos", (void (GrapplingHookPickup::*)(struct Vector)) &GrapplingHookPickup::SetBlockedStartPos, "C++: GrapplingHookPickup::SetBlockedStartPos(struct Vector) --> void", pybind11::arg("newBlockedStartPos"));
		cl.def("GetBall", (class BallWrapper (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetBall, "C++: GrapplingHookPickup::GetBall() --> class BallWrapper");
		cl.def("SetBall", (void (GrapplingHookPickup::*)(class BallWrapper)) &GrapplingHookPickup::SetBall, "C++: GrapplingHookPickup::SetBall(class BallWrapper) --> void", pybind11::arg("newBall"));
		cl.def("GetRopeOrigin", (struct Vector (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetRopeOrigin, "C++: GrapplingHookPickup::GetRopeOrigin() --> struct Vector");
		cl.def("SetRopeOrigin", (void (GrapplingHookPickup::*)(struct Vector)) &GrapplingHookPickup::SetRopeOrigin, "C++: GrapplingHookPickup::SetRopeOrigin(struct Vector) --> void", pybind11::arg("newRopeOrigin"));
		cl.def("GetRopeToTime", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetRopeToTime, "C++: GrapplingHookPickup::GetRopeToTime() --> float");
		cl.def("SetRopeToTime", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetRopeToTime, "C++: GrapplingHookPickup::SetRopeToTime(float) --> void", pybind11::arg("newRopeToTime"));
		cl.def("GetCurrentRopeLength", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetCurrentRopeLength, "C++: GrapplingHookPickup::GetCurrentRopeLength() --> float");
		cl.def("SetCurrentRopeLength", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetCurrentRopeLength, "C++: GrapplingHookPickup::SetCurrentRopeLength(float) --> void", pybind11::arg("newCurrentRopeLength"));
		cl.def("GetAttachTime", (float (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetAttachTime, "C++: GrapplingHookPickup::GetAttachTime() --> float");
		cl.def("SetAttachTime", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::SetAttachTime, "C++: GrapplingHookPickup::SetAttachTime(float) --> void", pybind11::arg("newAttachTime"));
		cl.def("HandleBallExploded", (void (GrapplingHookPickup::*)(class BallWrapper)) &GrapplingHookPickup::HandleBallExploded, "C++: GrapplingHookPickup::HandleBallExploded(class BallWrapper) --> void", pybind11::arg("InBall"));
		cl.def("PickupEnd", (void (GrapplingHookPickup::*)()) &GrapplingHookPickup::PickupEnd, "C++: GrapplingHookPickup::PickupEnd() --> void");
		cl.def("ScaleMeshToLocation", (void (GrapplingHookPickup::*)(struct Vector &, struct Vector &)) &GrapplingHookPickup::ScaleMeshToLocation, "C++: GrapplingHookPickup::ScaleMeshToLocation(struct Vector &, struct Vector &) --> void", pybind11::arg("NewLocation"), pybind11::arg("TargetLocation"));
		cl.def("GetPredictedBallLocation", (struct Vector (GrapplingHookPickup::*)(class BallWrapper)) &GrapplingHookPickup::GetPredictedBallLocation, "C++: GrapplingHookPickup::GetPredictedBallLocation(class BallWrapper) --> struct Vector", pybind11::arg("InBall"));
		cl.def("GetTargetedLocation", (struct Vector (GrapplingHookPickup::*)()) &GrapplingHookPickup::GetTargetedLocation, "C++: GrapplingHookPickup::GetTargetedLocation() --> struct Vector");
		cl.def("UpdateVisual", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::UpdateVisual, "C++: GrapplingHookPickup::UpdateVisual(float) --> void", pybind11::arg("DeltaTime"));
		cl.def("PickupTick", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::PickupTick, "C++: GrapplingHookPickup::PickupTick(float) --> void", pybind11::arg("DeltaTime"));
		cl.def("ApplyForces", (void (GrapplingHookPickup::*)(float)) &GrapplingHookPickup::ApplyForces, "C++: GrapplingHookPickup::ApplyForces(float) --> void", pybind11::arg("ActiveTime"));
		cl.def("DoAttach", (void (GrapplingHookPickup::*)()) &GrapplingHookPickup::DoAttach, "C++: GrapplingHookPickup::DoAttach() --> void");
		cl.def("PickupStart", (void (GrapplingHookPickup::*)()) &GrapplingHookPickup::PickupStart, "C++: GrapplingHookPickup::PickupStart() --> void");
	}
}
