#include "pch.h"
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/GravityPickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/HandbrakeOverridePickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/HitForcePickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/SwapperPickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/TimeBombPickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/TornadoPickup.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_bakkesmod_wrappers_GameObject_RumbleComponent_GravityPickup(py::module &M)
{
	{ // GravityPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/GravityPickup.h line:9
		pybind11::class_<GravityPickup, std::shared_ptr<GravityPickup>, RumblePickupComponentWrapper> cl(M, "GravityPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](GravityPickup const &o){ return new GravityPickup(o); } ) );
		cl.def("assign", (class GravityPickup & (GravityPickup::*)(class GravityPickup)) &GravityPickup::operator=, "C++: GravityPickup::operator=(class GravityPickup) --> class GravityPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetBallGravity", (float (GravityPickup::*)()) &GravityPickup::GetBallGravity, "C++: GravityPickup::GetBallGravity() --> float");
		cl.def("SetBallGravity", (void (GravityPickup::*)(float)) &GravityPickup::SetBallGravity, "C++: GravityPickup::SetBallGravity(float) --> void", "newBallGravity"_a);
		cl.def("GetRange", (float (GravityPickup::*)()) &GravityPickup::GetRange, "C++: GravityPickup::GetRange() --> float");
		cl.def("SetRange", (void (GravityPickup::*)(float)) &GravityPickup::SetRange, "C++: GravityPickup::SetRange(float) --> void", "newRange"_a);
		cl.def("GetOffset", (struct Vector (GravityPickup::*)()) &GravityPickup::GetOffset, "C++: GravityPickup::GetOffset() --> struct Vector");
		cl.def("SetOffset", (void (GravityPickup::*)(struct Vector)) &GravityPickup::SetOffset, "C++: GravityPickup::SetOffset(struct Vector) --> void", "newOffset"_a);
		cl.def("GetbDeactivateOnTouch", (unsigned long (GravityPickup::*)()) &GravityPickup::GetbDeactivateOnTouch, "C++: GravityPickup::GetbDeactivateOnTouch() --> unsigned long");
		cl.def("SetbDeactivateOnTouch", (void (GravityPickup::*)(unsigned long)) &GravityPickup::SetbDeactivateOnTouch, "C++: GravityPickup::SetbDeactivateOnTouch(unsigned long) --> void", "newbDeactivateOnTouch"_a);
		cl.def("GetRecordBallHitRate", (float (GravityPickup::*)()) &GravityPickup::GetRecordBallHitRate, "C++: GravityPickup::GetRecordBallHitRate() --> float");
		cl.def("SetRecordBallHitRate", (void (GravityPickup::*)(float)) &GravityPickup::SetRecordBallHitRate, "C++: GravityPickup::SetRecordBallHitRate(float) --> void", "newRecordBallHitRate"_a);
		cl.def("GetLastRecordedBallHitTime", (float (GravityPickup::*)()) &GravityPickup::GetLastRecordedBallHitTime, "C++: GravityPickup::GetLastRecordedBallHitTime() --> float");
		cl.def("SetLastRecordedBallHitTime", (void (GravityPickup::*)(float)) &GravityPickup::SetLastRecordedBallHitTime, "C++: GravityPickup::SetLastRecordedBallHitTime(float) --> void", "newLastRecordedBallHitTime"_a);
		cl.def("GetPrevBall", (class BallWrapper (GravityPickup::*)()) &GravityPickup::GetPrevBall, "C++: GravityPickup::GetPrevBall() --> class BallWrapper");
		cl.def("SetPrevBall", (void (GravityPickup::*)(class BallWrapper)) &GravityPickup::SetPrevBall, "C++: GravityPickup::SetPrevBall(class BallWrapper) --> void", "newPrevBall"_a);
		cl.def("UpdateVisual", (void (GravityPickup::*)()) &GravityPickup::UpdateVisual, "C++: GravityPickup::UpdateVisual() --> void");
		cl.def("ApplyForces", (void (GravityPickup::*)(float)) &GravityPickup::ApplyForces, "C++: GravityPickup::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("PickupEnd", (void (GravityPickup::*)()) &GravityPickup::PickupEnd, "C++: GravityPickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (GravityPickup::*)()) &GravityPickup::PickupStart, "C++: GravityPickup::PickupStart() --> void");
	}
	{ // HandbrakeOverridePickup file:bakkesmod/wrappers/GameObject/RumbleComponent/HandbrakeOverridePickup.h line:8
		pybind11::class_<HandbrakeOverridePickup, std::shared_ptr<HandbrakeOverridePickup>, TargetedPickup> cl(M, "HandbrakeOverridePickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](HandbrakeOverridePickup const &o){ return new HandbrakeOverridePickup(o); } ) );
		cl.def("assign", (class HandbrakeOverridePickup & (HandbrakeOverridePickup::*)(class HandbrakeOverridePickup)) &HandbrakeOverridePickup::operator=, "C++: HandbrakeOverridePickup::operator=(class HandbrakeOverridePickup) --> class HandbrakeOverridePickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetOtherCar", (class CarWrapper (HandbrakeOverridePickup::*)()) &HandbrakeOverridePickup::GetOtherCar, "C++: HandbrakeOverridePickup::GetOtherCar() --> class CarWrapper");
		cl.def("SetOtherCar", (void (HandbrakeOverridePickup::*)(class CarWrapper)) &HandbrakeOverridePickup::SetOtherCar, "C++: HandbrakeOverridePickup::SetOtherCar(class CarWrapper) --> void", "newOtherCar"_a);
		cl.def("PickupEnd", (void (HandbrakeOverridePickup::*)()) &HandbrakeOverridePickup::PickupEnd, "C++: HandbrakeOverridePickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (HandbrakeOverridePickup::*)()) &HandbrakeOverridePickup::PickupStart, "C++: HandbrakeOverridePickup::PickupStart() --> void");
	}
	{ // HitForcePickup file:bakkesmod/wrappers/GameObject/RumbleComponent/HitForcePickup.h line:8
		pybind11::class_<HitForcePickup, std::shared_ptr<HitForcePickup>, RumblePickupComponentWrapper> cl(M, "HitForcePickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](HitForcePickup const &o){ return new HitForcePickup(o); } ) );
		cl.def("assign", (class HitForcePickup & (HitForcePickup::*)(class HitForcePickup)) &HitForcePickup::operator=, "C++: HitForcePickup::operator=(class HitForcePickup) --> class HitForcePickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetbBallForce", (unsigned long (HitForcePickup::*)()) &HitForcePickup::GetbBallForce, "C++: HitForcePickup::GetbBallForce() --> unsigned long");
		cl.def("SetbBallForce", (void (HitForcePickup::*)(unsigned long)) &HitForcePickup::SetbBallForce, "C++: HitForcePickup::SetbBallForce(unsigned long) --> void", "newbBallForce"_a);
		cl.def("GetbCarForce", (unsigned long (HitForcePickup::*)()) &HitForcePickup::GetbCarForce, "C++: HitForcePickup::GetbCarForce() --> unsigned long");
		cl.def("SetbCarForce", (void (HitForcePickup::*)(unsigned long)) &HitForcePickup::SetbCarForce, "C++: HitForcePickup::SetbCarForce(unsigned long) --> void", "newbCarForce"_a);
		cl.def("GetbDemolishCars", (unsigned long (HitForcePickup::*)()) &HitForcePickup::GetbDemolishCars, "C++: HitForcePickup::GetbDemolishCars() --> unsigned long");
		cl.def("SetbDemolishCars", (void (HitForcePickup::*)(unsigned long)) &HitForcePickup::SetbDemolishCars, "C++: HitForcePickup::SetbDemolishCars(unsigned long) --> void", "newbDemolishCars"_a);
		cl.def("GetBallHitForce", (float (HitForcePickup::*)()) &HitForcePickup::GetBallHitForce, "C++: HitForcePickup::GetBallHitForce() --> float");
		cl.def("SetBallHitForce", (void (HitForcePickup::*)(float)) &HitForcePickup::SetBallHitForce, "C++: HitForcePickup::SetBallHitForce(float) --> void", "newBallHitForce"_a);
		cl.def("GetCarHitForce", (float (HitForcePickup::*)()) &HitForcePickup::GetCarHitForce, "C++: HitForcePickup::GetCarHitForce() --> float");
		cl.def("SetCarHitForce", (void (HitForcePickup::*)(float)) &HitForcePickup::SetCarHitForce, "C++: HitForcePickup::SetCarHitForce(float) --> void", "newCarHitForce"_a);
		cl.def("GetMinFXTime", (float (HitForcePickup::*)()) &HitForcePickup::GetMinFXTime, "C++: HitForcePickup::GetMinFXTime() --> float");
		cl.def("SetMinFXTime", (void (HitForcePickup::*)(float)) &HitForcePickup::SetMinFXTime, "C++: HitForcePickup::SetMinFXTime(float) --> void", "newMinFXTime"_a);
		cl.def("GetOrigBallHitForce", (float (HitForcePickup::*)()) &HitForcePickup::GetOrigBallHitForce, "C++: HitForcePickup::GetOrigBallHitForce() --> float");
		cl.def("SetOrigBallHitForce", (void (HitForcePickup::*)(float)) &HitForcePickup::SetOrigBallHitForce, "C++: HitForcePickup::SetOrigBallHitForce(float) --> void", "newOrigBallHitForce"_a);
		cl.def("GetOrigCarHitForce", (float (HitForcePickup::*)()) &HitForcePickup::GetOrigCarHitForce, "C++: HitForcePickup::GetOrigCarHitForce() --> float");
		cl.def("SetOrigCarHitForce", (void (HitForcePickup::*)(float)) &HitForcePickup::SetOrigCarHitForce, "C++: HitForcePickup::SetOrigCarHitForce(float) --> void", "newOrigCarHitForce"_a);
		cl.def("GetLastFXTime", (float (HitForcePickup::*)()) &HitForcePickup::GetLastFXTime, "C++: HitForcePickup::GetLastFXTime() --> float");
		cl.def("SetLastFXTime", (void (HitForcePickup::*)(float)) &HitForcePickup::SetLastFXTime, "C++: HitForcePickup::SetLastFXTime(float) --> void", "newLastFXTime"_a);
		cl.def("PickupEnd", (void (HitForcePickup::*)()) &HitForcePickup::PickupEnd, "C++: HitForcePickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (HitForcePickup::*)()) &HitForcePickup::PickupStart, "C++: HitForcePickup::PickupStart() --> void");
	}
	{ // SwapperPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/SwapperPickup.h line:8
		pybind11::class_<SwapperPickup, std::shared_ptr<SwapperPickup>, TargetedPickup> cl(M, "SwapperPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](SwapperPickup const &o){ return new SwapperPickup(o); } ) );
		cl.def("assign", (class SwapperPickup & (SwapperPickup::*)(class SwapperPickup)) &SwapperPickup::operator=, "C++: SwapperPickup::operator=(class SwapperPickup) --> class SwapperPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetOtherCar", (class CarWrapper (SwapperPickup::*)()) &SwapperPickup::GetOtherCar, "C++: SwapperPickup::GetOtherCar() --> class CarWrapper");
		cl.def("SetOtherCar", (void (SwapperPickup::*)(class CarWrapper)) &SwapperPickup::SetOtherCar, "C++: SwapperPickup::SetOtherCar(class CarWrapper) --> void", "newOtherCar"_a);
		cl.def("PickupEnd", (void (SwapperPickup::*)()) &SwapperPickup::PickupEnd, "C++: SwapperPickup::PickupEnd() --> void");
		cl.def("OnTargetChanged", (void (SwapperPickup::*)()) &SwapperPickup::OnTargetChanged, "C++: SwapperPickup::OnTargetChanged() --> void");
		cl.def("PickupStart", (void (SwapperPickup::*)()) &SwapperPickup::PickupStart, "C++: SwapperPickup::PickupStart() --> void");
	}
	{ // TimeBombPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/TimeBombPickup.h line:7
		pybind11::class_<TimeBombPickup, std::shared_ptr<TimeBombPickup>, RumblePickupComponentWrapper> cl(M, "TimeBombPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](TimeBombPickup const &o){ return new TimeBombPickup(o); } ) );
		cl.def("assign", (class TimeBombPickup & (TimeBombPickup::*)(class TimeBombPickup)) &TimeBombPickup::operator=, "C++: TimeBombPickup::operator=(class TimeBombPickup) --> class TimeBombPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetRadius", (float (TimeBombPickup::*)()) &TimeBombPickup::GetRadius, "C++: TimeBombPickup::GetRadius() --> float");
		cl.def("SetRadius", (void (TimeBombPickup::*)(float)) &TimeBombPickup::SetRadius, "C++: TimeBombPickup::SetRadius(float) --> void", "newRadius"_a);
		cl.def("GetAlmostReadyDuration", (float (TimeBombPickup::*)()) &TimeBombPickup::GetAlmostReadyDuration, "C++: TimeBombPickup::GetAlmostReadyDuration() --> float");
		cl.def("SetAlmostReadyDuration", (void (TimeBombPickup::*)(float)) &TimeBombPickup::SetAlmostReadyDuration, "C++: TimeBombPickup::SetAlmostReadyDuration(float) --> void", "newAlmostReadyDuration"_a);
		cl.def("GetStartMatSpeed", (float (TimeBombPickup::*)()) &TimeBombPickup::GetStartMatSpeed, "C++: TimeBombPickup::GetStartMatSpeed() --> float");
		cl.def("SetStartMatSpeed", (void (TimeBombPickup::*)(float)) &TimeBombPickup::SetStartMatSpeed, "C++: TimeBombPickup::SetStartMatSpeed(float) --> void", "newStartMatSpeed"_a);
		cl.def("GetAlmostReadyMatSpeed", (float (TimeBombPickup::*)()) &TimeBombPickup::GetAlmostReadyMatSpeed, "C++: TimeBombPickup::GetAlmostReadyMatSpeed() --> float");
		cl.def("SetAlmostReadyMatSpeed", (void (TimeBombPickup::*)(float)) &TimeBombPickup::SetAlmostReadyMatSpeed, "C++: TimeBombPickup::SetAlmostReadyMatSpeed(float) --> void", "newAlmostReadyMatSpeed"_a);
		cl.def("GetImpulseForce", (float (TimeBombPickup::*)()) &TimeBombPickup::GetImpulseForce, "C++: TimeBombPickup::GetImpulseForce() --> float");
		cl.def("SetImpulseForce", (void (TimeBombPickup::*)(float)) &TimeBombPickup::SetImpulseForce, "C++: TimeBombPickup::SetImpulseForce(float) --> void", "newImpulseForce"_a);
		cl.def("GetCarVerticalForce", (float (TimeBombPickup::*)()) &TimeBombPickup::GetCarVerticalForce, "C++: TimeBombPickup::GetCarVerticalForce() --> float");
		cl.def("SetCarVerticalForce", (void (TimeBombPickup::*)(float)) &TimeBombPickup::SetCarVerticalForce, "C++: TimeBombPickup::SetCarVerticalForce(float) --> void", "newCarVerticalForce"_a);
		cl.def("GetCarTorque", (float (TimeBombPickup::*)()) &TimeBombPickup::GetCarTorque, "C++: TimeBombPickup::GetCarTorque() --> float");
		cl.def("SetCarTorque", (void (TimeBombPickup::*)(float)) &TimeBombPickup::SetCarTorque, "C++: TimeBombPickup::SetCarTorque(float) --> void", "newCarTorque"_a);
		cl.def("GetbDemolish", (unsigned long (TimeBombPickup::*)()) &TimeBombPickup::GetbDemolish, "C++: TimeBombPickup::GetbDemolish() --> unsigned long");
		cl.def("SetbDemolish", (void (TimeBombPickup::*)(unsigned long)) &TimeBombPickup::SetbDemolish, "C++: TimeBombPickup::SetbDemolish(unsigned long) --> void", "newbDemolish"_a);
		cl.def("GetbImpulse", (unsigned long (TimeBombPickup::*)()) &TimeBombPickup::GetbImpulse, "C++: TimeBombPickup::GetbImpulse() --> unsigned long");
		cl.def("SetbImpulse", (void (TimeBombPickup::*)(unsigned long)) &TimeBombPickup::SetbImpulse, "C++: TimeBombPickup::SetbImpulse(unsigned long) --> void", "newbImpulse"_a);
		cl.def("PickupEnd", (void (TimeBombPickup::*)()) &TimeBombPickup::PickupEnd, "C++: TimeBombPickup::PickupEnd() --> void");
		cl.def("AlmostReady2", (void (TimeBombPickup::*)()) &TimeBombPickup::AlmostReady2, "C++: TimeBombPickup::AlmostReady2() --> void");
		cl.def("PickupStart", (void (TimeBombPickup::*)()) &TimeBombPickup::PickupStart, "C++: TimeBombPickup::PickupStart() --> void");
	}
	{ // TornadoPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/TornadoPickup.h line:8
		pybind11::class_<TornadoPickup, std::shared_ptr<TornadoPickup>, RumblePickupComponentWrapper> cl(M, "TornadoPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](TornadoPickup const &o){ return new TornadoPickup(o); } ) );
		cl.def("assign", (class TornadoPickup & (TornadoPickup::*)(class TornadoPickup)) &TornadoPickup::operator=, "C++: TornadoPickup::operator=(class TornadoPickup) --> class TornadoPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetHeight", (float (TornadoPickup::*)()) &TornadoPickup::GetHeight, "C++: TornadoPickup::GetHeight() --> float");
		cl.def("SetHeight", (void (TornadoPickup::*)(float)) &TornadoPickup::SetHeight, "C++: TornadoPickup::SetHeight(float) --> void", "newHeight"_a);
		cl.def("GetRadius", (float (TornadoPickup::*)()) &TornadoPickup::GetRadius, "C++: TornadoPickup::GetRadius() --> float");
		cl.def("SetRadius", (void (TornadoPickup::*)(float)) &TornadoPickup::SetRadius, "C++: TornadoPickup::SetRadius(float) --> void", "newRadius"_a);
		cl.def("GetOffset", (struct Vector (TornadoPickup::*)()) &TornadoPickup::GetOffset, "C++: TornadoPickup::GetOffset() --> struct Vector");
		cl.def("SetOffset", (void (TornadoPickup::*)(struct Vector)) &TornadoPickup::SetOffset, "C++: TornadoPickup::SetOffset(struct Vector) --> void", "newOffset"_a);
		cl.def("GetRotationalForce", (float (TornadoPickup::*)()) &TornadoPickup::GetRotationalForce, "C++: TornadoPickup::GetRotationalForce() --> float");
		cl.def("SetRotationalForce", (void (TornadoPickup::*)(float)) &TornadoPickup::SetRotationalForce, "C++: TornadoPickup::SetRotationalForce(float) --> void", "newRotationalForce"_a);
		cl.def("GetTorque", (float (TornadoPickup::*)()) &TornadoPickup::GetTorque, "C++: TornadoPickup::GetTorque() --> float");
		cl.def("SetTorque", (void (TornadoPickup::*)(float)) &TornadoPickup::SetTorque, "C++: TornadoPickup::SetTorque(float) --> void", "newTorque"_a);
		cl.def("GetFXScale", (struct Vector (TornadoPickup::*)()) &TornadoPickup::GetFXScale, "C++: TornadoPickup::GetFXScale() --> struct Vector");
		cl.def("SetFXScale", (void (TornadoPickup::*)(struct Vector)) &TornadoPickup::SetFXScale, "C++: TornadoPickup::SetFXScale(struct Vector) --> void", "newFXScale"_a);
		cl.def("GetFXOffset", (struct Vector (TornadoPickup::*)()) &TornadoPickup::GetFXOffset, "C++: TornadoPickup::GetFXOffset() --> struct Vector");
		cl.def("SetFXOffset", (void (TornadoPickup::*)(struct Vector)) &TornadoPickup::SetFXOffset, "C++: TornadoPickup::SetFXOffset(struct Vector) --> void", "newFXOffset"_a);
		cl.def("GetMeshOffset", (struct Vector (TornadoPickup::*)()) &TornadoPickup::GetMeshOffset, "C++: TornadoPickup::GetMeshOffset() --> struct Vector");
		cl.def("SetMeshOffset", (void (TornadoPickup::*)(struct Vector)) &TornadoPickup::SetMeshOffset, "C++: TornadoPickup::SetMeshOffset(struct Vector) --> void", "newMeshOffset"_a);
		cl.def("GetMeshScale", (struct Vector (TornadoPickup::*)()) &TornadoPickup::GetMeshScale, "C++: TornadoPickup::GetMeshScale() --> struct Vector");
		cl.def("SetMeshScale", (void (TornadoPickup::*)(struct Vector)) &TornadoPickup::SetMeshScale, "C++: TornadoPickup::SetMeshScale(struct Vector) --> void", "newMeshScale"_a);
		cl.def("GetMaxVelocityOffset", (float (TornadoPickup::*)()) &TornadoPickup::GetMaxVelocityOffset, "C++: TornadoPickup::GetMaxVelocityOffset() --> float");
		cl.def("SetMaxVelocityOffset", (void (TornadoPickup::*)(float)) &TornadoPickup::SetMaxVelocityOffset, "C++: TornadoPickup::SetMaxVelocityOffset(float) --> void", "newMaxVelocityOffset"_a);
		cl.def("GetBallMultiplier", (float (TornadoPickup::*)()) &TornadoPickup::GetBallMultiplier, "C++: TornadoPickup::GetBallMultiplier() --> float");
		cl.def("SetBallMultiplier", (void (TornadoPickup::*)(float)) &TornadoPickup::SetBallMultiplier, "C++: TornadoPickup::SetBallMultiplier(float) --> void", "newBallMultiplier"_a);
		cl.def("GetbDebugVis", (unsigned long (TornadoPickup::*)()) &TornadoPickup::GetbDebugVis, "C++: TornadoPickup::GetbDebugVis() --> unsigned long");
		cl.def("SetbDebugVis", (void (TornadoPickup::*)(unsigned long)) &TornadoPickup::SetbDebugVis, "C++: TornadoPickup::SetbDebugVis(unsigned long) --> void", "newbDebugVis"_a);
		cl.def("GetVelocityEase", (float (TornadoPickup::*)()) &TornadoPickup::GetVelocityEase, "C++: TornadoPickup::GetVelocityEase() --> float");
		cl.def("SetVelocityEase", (void (TornadoPickup::*)(float)) &TornadoPickup::SetVelocityEase, "C++: TornadoPickup::SetVelocityEase(float) --> void", "newVelocityEase"_a);
		cl.def("GetVel", (struct Vector (TornadoPickup::*)()) &TornadoPickup::GetVel, "C++: TornadoPickup::GetVel() --> struct Vector");
		cl.def("SetVel", (void (TornadoPickup::*)(struct Vector)) &TornadoPickup::SetVel, "C++: TornadoPickup::SetVel(struct Vector) --> void", "newVel"_a);
		cl.def("GetAffecting", (class ArrayWrapper<class RBActorWrapper> (TornadoPickup::*)()) &TornadoPickup::GetAffecting, "C++: TornadoPickup::GetAffecting() --> class ArrayWrapper<class RBActorWrapper>");
		cl.def("ApplyForces", (void (TornadoPickup::*)(float)) &TornadoPickup::ApplyForces, "C++: TornadoPickup::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("PlayCarSFX", (void (TornadoPickup::*)(class RBActorWrapper)) &TornadoPickup::PlayCarSFX, "C++: TornadoPickup::PlayCarSFX(class RBActorWrapper) --> void", "InActor"_a);
		cl.def("PlayBallSFX", (void (TornadoPickup::*)(class RBActorWrapper)) &TornadoPickup::PlayBallSFX, "C++: TornadoPickup::PlayBallSFX(class RBActorWrapper) --> void", "InActor"_a);
	}
}
