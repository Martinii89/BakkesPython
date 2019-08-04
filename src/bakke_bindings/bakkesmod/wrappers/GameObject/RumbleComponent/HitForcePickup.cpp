#include "pch.h"
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/HitForcePickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/SwapperPickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/TimeBombPickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/TornadoPickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/VelcroPickup.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_bakkesmod_wrappers_GameObject_RumbleComponent_HitForcePickup(py::module &M)
{
	{ // HitForcePickup file:bakkesmod/wrappers/GameObject/RumbleComponent/HitForcePickup.h line:8
		pybind11::class_<HitForcePickup, std::shared_ptr<HitForcePickup>, RumblePickupComponentWrapper> cl(M, "HitForcePickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](HitForcePickup const &o){ return new HitForcePickup(o); } ) );
		cl.def("assign", (class HitForcePickup & (HitForcePickup::*)(class HitForcePickup)) &HitForcePickup::operator=, "C++: HitForcePickup::operator=(class HitForcePickup) --> class HitForcePickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetbBallForce", (unsigned long (HitForcePickup::*)()) &HitForcePickup::GetbBallForce, "C++: HitForcePickup::GetbBallForce() --> unsigned long");
		cl.def("SetbBallForce", (void (HitForcePickup::*)(unsigned long)) &HitForcePickup::SetbBallForce, "C++: HitForcePickup::SetbBallForce(unsigned long) --> void", pybind11::arg("newbBallForce"));
		cl.def("GetbCarForce", (unsigned long (HitForcePickup::*)()) &HitForcePickup::GetbCarForce, "C++: HitForcePickup::GetbCarForce() --> unsigned long");
		cl.def("SetbCarForce", (void (HitForcePickup::*)(unsigned long)) &HitForcePickup::SetbCarForce, "C++: HitForcePickup::SetbCarForce(unsigned long) --> void", pybind11::arg("newbCarForce"));
		cl.def("GetbDemolishCars", (unsigned long (HitForcePickup::*)()) &HitForcePickup::GetbDemolishCars, "C++: HitForcePickup::GetbDemolishCars() --> unsigned long");
		cl.def("SetbDemolishCars", (void (HitForcePickup::*)(unsigned long)) &HitForcePickup::SetbDemolishCars, "C++: HitForcePickup::SetbDemolishCars(unsigned long) --> void", pybind11::arg("newbDemolishCars"));
		cl.def("GetBallHitForce", (float (HitForcePickup::*)()) &HitForcePickup::GetBallHitForce, "C++: HitForcePickup::GetBallHitForce() --> float");
		cl.def("SetBallHitForce", (void (HitForcePickup::*)(float)) &HitForcePickup::SetBallHitForce, "C++: HitForcePickup::SetBallHitForce(float) --> void", pybind11::arg("newBallHitForce"));
		cl.def("GetCarHitForce", (float (HitForcePickup::*)()) &HitForcePickup::GetCarHitForce, "C++: HitForcePickup::GetCarHitForce() --> float");
		cl.def("SetCarHitForce", (void (HitForcePickup::*)(float)) &HitForcePickup::SetCarHitForce, "C++: HitForcePickup::SetCarHitForce(float) --> void", pybind11::arg("newCarHitForce"));
		cl.def("GetMinFXTime", (float (HitForcePickup::*)()) &HitForcePickup::GetMinFXTime, "C++: HitForcePickup::GetMinFXTime() --> float");
		cl.def("SetMinFXTime", (void (HitForcePickup::*)(float)) &HitForcePickup::SetMinFXTime, "C++: HitForcePickup::SetMinFXTime(float) --> void", pybind11::arg("newMinFXTime"));
		cl.def("GetOrigBallHitForce", (float (HitForcePickup::*)()) &HitForcePickup::GetOrigBallHitForce, "C++: HitForcePickup::GetOrigBallHitForce() --> float");
		cl.def("SetOrigBallHitForce", (void (HitForcePickup::*)(float)) &HitForcePickup::SetOrigBallHitForce, "C++: HitForcePickup::SetOrigBallHitForce(float) --> void", pybind11::arg("newOrigBallHitForce"));
		cl.def("GetOrigCarHitForce", (float (HitForcePickup::*)()) &HitForcePickup::GetOrigCarHitForce, "C++: HitForcePickup::GetOrigCarHitForce() --> float");
		cl.def("SetOrigCarHitForce", (void (HitForcePickup::*)(float)) &HitForcePickup::SetOrigCarHitForce, "C++: HitForcePickup::SetOrigCarHitForce(float) --> void", pybind11::arg("newOrigCarHitForce"));
		cl.def("GetLastFXTime", (float (HitForcePickup::*)()) &HitForcePickup::GetLastFXTime, "C++: HitForcePickup::GetLastFXTime() --> float");
		cl.def("SetLastFXTime", (void (HitForcePickup::*)(float)) &HitForcePickup::SetLastFXTime, "C++: HitForcePickup::SetLastFXTime(float) --> void", pybind11::arg("newLastFXTime"));
		cl.def("PickupEnd", (void (HitForcePickup::*)()) &HitForcePickup::PickupEnd, "C++: HitForcePickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (HitForcePickup::*)()) &HitForcePickup::PickupStart, "C++: HitForcePickup::PickupStart() --> void");
	}
	{ // SwapperPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/SwapperPickup.h line:8
		pybind11::class_<SwapperPickup, std::shared_ptr<SwapperPickup>, TargetedPickup> cl(M, "SwapperPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](SwapperPickup const &o){ return new SwapperPickup(o); } ) );
		cl.def("assign", (class SwapperPickup & (SwapperPickup::*)(class SwapperPickup)) &SwapperPickup::operator=, "C++: SwapperPickup::operator=(class SwapperPickup) --> class SwapperPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetOtherCar", (class CarWrapper (SwapperPickup::*)()) &SwapperPickup::GetOtherCar, "C++: SwapperPickup::GetOtherCar() --> class CarWrapper");
		cl.def("SetOtherCar", (void (SwapperPickup::*)(class CarWrapper)) &SwapperPickup::SetOtherCar, "C++: SwapperPickup::SetOtherCar(class CarWrapper) --> void", pybind11::arg("newOtherCar"));
		cl.def("PickupEnd", (void (SwapperPickup::*)()) &SwapperPickup::PickupEnd, "C++: SwapperPickup::PickupEnd() --> void");
		cl.def("OnTargetChanged", (void (SwapperPickup::*)()) &SwapperPickup::OnTargetChanged, "C++: SwapperPickup::OnTargetChanged() --> void");
		cl.def("PickupStart", (void (SwapperPickup::*)()) &SwapperPickup::PickupStart, "C++: SwapperPickup::PickupStart() --> void");
	}
	{ // TimeBombPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/TimeBombPickup.h line:7
		pybind11::class_<TimeBombPickup, std::shared_ptr<TimeBombPickup>, RumblePickupComponentWrapper> cl(M, "TimeBombPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](TimeBombPickup const &o){ return new TimeBombPickup(o); } ) );
		cl.def("assign", (class TimeBombPickup & (TimeBombPickup::*)(class TimeBombPickup)) &TimeBombPickup::operator=, "C++: TimeBombPickup::operator=(class TimeBombPickup) --> class TimeBombPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetRadius", (float (TimeBombPickup::*)()) &TimeBombPickup::GetRadius, "C++: TimeBombPickup::GetRadius() --> float");
		cl.def("SetRadius", (void (TimeBombPickup::*)(float)) &TimeBombPickup::SetRadius, "C++: TimeBombPickup::SetRadius(float) --> void", pybind11::arg("newRadius"));
		cl.def("GetAlmostReadyDuration", (float (TimeBombPickup::*)()) &TimeBombPickup::GetAlmostReadyDuration, "C++: TimeBombPickup::GetAlmostReadyDuration() --> float");
		cl.def("SetAlmostReadyDuration", (void (TimeBombPickup::*)(float)) &TimeBombPickup::SetAlmostReadyDuration, "C++: TimeBombPickup::SetAlmostReadyDuration(float) --> void", pybind11::arg("newAlmostReadyDuration"));
		cl.def("GetStartMatSpeed", (float (TimeBombPickup::*)()) &TimeBombPickup::GetStartMatSpeed, "C++: TimeBombPickup::GetStartMatSpeed() --> float");
		cl.def("SetStartMatSpeed", (void (TimeBombPickup::*)(float)) &TimeBombPickup::SetStartMatSpeed, "C++: TimeBombPickup::SetStartMatSpeed(float) --> void", pybind11::arg("newStartMatSpeed"));
		cl.def("GetAlmostReadyMatSpeed", (float (TimeBombPickup::*)()) &TimeBombPickup::GetAlmostReadyMatSpeed, "C++: TimeBombPickup::GetAlmostReadyMatSpeed() --> float");
		cl.def("SetAlmostReadyMatSpeed", (void (TimeBombPickup::*)(float)) &TimeBombPickup::SetAlmostReadyMatSpeed, "C++: TimeBombPickup::SetAlmostReadyMatSpeed(float) --> void", pybind11::arg("newAlmostReadyMatSpeed"));
		cl.def("GetImpulseForce", (float (TimeBombPickup::*)()) &TimeBombPickup::GetImpulseForce, "C++: TimeBombPickup::GetImpulseForce() --> float");
		cl.def("SetImpulseForce", (void (TimeBombPickup::*)(float)) &TimeBombPickup::SetImpulseForce, "C++: TimeBombPickup::SetImpulseForce(float) --> void", pybind11::arg("newImpulseForce"));
		cl.def("GetCarVerticalForce", (float (TimeBombPickup::*)()) &TimeBombPickup::GetCarVerticalForce, "C++: TimeBombPickup::GetCarVerticalForce() --> float");
		cl.def("SetCarVerticalForce", (void (TimeBombPickup::*)(float)) &TimeBombPickup::SetCarVerticalForce, "C++: TimeBombPickup::SetCarVerticalForce(float) --> void", pybind11::arg("newCarVerticalForce"));
		cl.def("GetCarTorque", (float (TimeBombPickup::*)()) &TimeBombPickup::GetCarTorque, "C++: TimeBombPickup::GetCarTorque() --> float");
		cl.def("SetCarTorque", (void (TimeBombPickup::*)(float)) &TimeBombPickup::SetCarTorque, "C++: TimeBombPickup::SetCarTorque(float) --> void", pybind11::arg("newCarTorque"));
		cl.def("GetbDemolish", (unsigned long (TimeBombPickup::*)()) &TimeBombPickup::GetbDemolish, "C++: TimeBombPickup::GetbDemolish() --> unsigned long");
		cl.def("SetbDemolish", (void (TimeBombPickup::*)(unsigned long)) &TimeBombPickup::SetbDemolish, "C++: TimeBombPickup::SetbDemolish(unsigned long) --> void", pybind11::arg("newbDemolish"));
		cl.def("GetbImpulse", (unsigned long (TimeBombPickup::*)()) &TimeBombPickup::GetbImpulse, "C++: TimeBombPickup::GetbImpulse() --> unsigned long");
		cl.def("SetbImpulse", (void (TimeBombPickup::*)(unsigned long)) &TimeBombPickup::SetbImpulse, "C++: TimeBombPickup::SetbImpulse(unsigned long) --> void", pybind11::arg("newbImpulse"));
		cl.def("PickupEnd", (void (TimeBombPickup::*)()) &TimeBombPickup::PickupEnd, "C++: TimeBombPickup::PickupEnd() --> void");
		cl.def("AlmostReady2", (void (TimeBombPickup::*)()) &TimeBombPickup::AlmostReady2, "C++: TimeBombPickup::AlmostReady2() --> void");
		cl.def("PickupStart", (void (TimeBombPickup::*)()) &TimeBombPickup::PickupStart, "C++: TimeBombPickup::PickupStart() --> void");
	}
	{ // TornadoPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/TornadoPickup.h line:8
		pybind11::class_<TornadoPickup, std::shared_ptr<TornadoPickup>, RumblePickupComponentWrapper> cl(M, "TornadoPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](TornadoPickup const &o){ return new TornadoPickup(o); } ) );
		cl.def("assign", (class TornadoPickup & (TornadoPickup::*)(class TornadoPickup)) &TornadoPickup::operator=, "C++: TornadoPickup::operator=(class TornadoPickup) --> class TornadoPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetHeight", (float (TornadoPickup::*)()) &TornadoPickup::GetHeight, "C++: TornadoPickup::GetHeight() --> float");
		cl.def("SetHeight", (void (TornadoPickup::*)(float)) &TornadoPickup::SetHeight, "C++: TornadoPickup::SetHeight(float) --> void", pybind11::arg("newHeight"));
		cl.def("GetRadius", (float (TornadoPickup::*)()) &TornadoPickup::GetRadius, "C++: TornadoPickup::GetRadius() --> float");
		cl.def("SetRadius", (void (TornadoPickup::*)(float)) &TornadoPickup::SetRadius, "C++: TornadoPickup::SetRadius(float) --> void", pybind11::arg("newRadius"));
		cl.def("GetOffset", (struct Vector (TornadoPickup::*)()) &TornadoPickup::GetOffset, "C++: TornadoPickup::GetOffset() --> struct Vector");
		cl.def("SetOffset", (void (TornadoPickup::*)(struct Vector)) &TornadoPickup::SetOffset, "C++: TornadoPickup::SetOffset(struct Vector) --> void", pybind11::arg("newOffset"));
		cl.def("GetRotationalForce", (float (TornadoPickup::*)()) &TornadoPickup::GetRotationalForce, "C++: TornadoPickup::GetRotationalForce() --> float");
		cl.def("SetRotationalForce", (void (TornadoPickup::*)(float)) &TornadoPickup::SetRotationalForce, "C++: TornadoPickup::SetRotationalForce(float) --> void", pybind11::arg("newRotationalForce"));
		cl.def("GetTorque", (float (TornadoPickup::*)()) &TornadoPickup::GetTorque, "C++: TornadoPickup::GetTorque() --> float");
		cl.def("SetTorque", (void (TornadoPickup::*)(float)) &TornadoPickup::SetTorque, "C++: TornadoPickup::SetTorque(float) --> void", pybind11::arg("newTorque"));
		cl.def("GetFXScale", (struct Vector (TornadoPickup::*)()) &TornadoPickup::GetFXScale, "C++: TornadoPickup::GetFXScale() --> struct Vector");
		cl.def("SetFXScale", (void (TornadoPickup::*)(struct Vector)) &TornadoPickup::SetFXScale, "C++: TornadoPickup::SetFXScale(struct Vector) --> void", pybind11::arg("newFXScale"));
		cl.def("GetFXOffset", (struct Vector (TornadoPickup::*)()) &TornadoPickup::GetFXOffset, "C++: TornadoPickup::GetFXOffset() --> struct Vector");
		cl.def("SetFXOffset", (void (TornadoPickup::*)(struct Vector)) &TornadoPickup::SetFXOffset, "C++: TornadoPickup::SetFXOffset(struct Vector) --> void", pybind11::arg("newFXOffset"));
		cl.def("GetMeshOffset", (struct Vector (TornadoPickup::*)()) &TornadoPickup::GetMeshOffset, "C++: TornadoPickup::GetMeshOffset() --> struct Vector");
		cl.def("SetMeshOffset", (void (TornadoPickup::*)(struct Vector)) &TornadoPickup::SetMeshOffset, "C++: TornadoPickup::SetMeshOffset(struct Vector) --> void", pybind11::arg("newMeshOffset"));
		cl.def("GetMeshScale", (struct Vector (TornadoPickup::*)()) &TornadoPickup::GetMeshScale, "C++: TornadoPickup::GetMeshScale() --> struct Vector");
		cl.def("SetMeshScale", (void (TornadoPickup::*)(struct Vector)) &TornadoPickup::SetMeshScale, "C++: TornadoPickup::SetMeshScale(struct Vector) --> void", pybind11::arg("newMeshScale"));
		cl.def("GetMaxVelocityOffset", (float (TornadoPickup::*)()) &TornadoPickup::GetMaxVelocityOffset, "C++: TornadoPickup::GetMaxVelocityOffset() --> float");
		cl.def("SetMaxVelocityOffset", (void (TornadoPickup::*)(float)) &TornadoPickup::SetMaxVelocityOffset, "C++: TornadoPickup::SetMaxVelocityOffset(float) --> void", pybind11::arg("newMaxVelocityOffset"));
		cl.def("GetBallMultiplier", (float (TornadoPickup::*)()) &TornadoPickup::GetBallMultiplier, "C++: TornadoPickup::GetBallMultiplier() --> float");
		cl.def("SetBallMultiplier", (void (TornadoPickup::*)(float)) &TornadoPickup::SetBallMultiplier, "C++: TornadoPickup::SetBallMultiplier(float) --> void", pybind11::arg("newBallMultiplier"));
		cl.def("GetbDebugVis", (unsigned long (TornadoPickup::*)()) &TornadoPickup::GetbDebugVis, "C++: TornadoPickup::GetbDebugVis() --> unsigned long");
		cl.def("SetbDebugVis", (void (TornadoPickup::*)(unsigned long)) &TornadoPickup::SetbDebugVis, "C++: TornadoPickup::SetbDebugVis(unsigned long) --> void", pybind11::arg("newbDebugVis"));
		cl.def("GetVelocityEase", (float (TornadoPickup::*)()) &TornadoPickup::GetVelocityEase, "C++: TornadoPickup::GetVelocityEase() --> float");
		cl.def("SetVelocityEase", (void (TornadoPickup::*)(float)) &TornadoPickup::SetVelocityEase, "C++: TornadoPickup::SetVelocityEase(float) --> void", pybind11::arg("newVelocityEase"));
		cl.def("GetVel", (struct Vector (TornadoPickup::*)()) &TornadoPickup::GetVel, "C++: TornadoPickup::GetVel() --> struct Vector");
		cl.def("SetVel", (void (TornadoPickup::*)(struct Vector)) &TornadoPickup::SetVel, "C++: TornadoPickup::SetVel(struct Vector) --> void", pybind11::arg("newVel"));
		cl.def("GetAffecting", (class ArrayWrapper<class RBActorWrapper> (TornadoPickup::*)()) &TornadoPickup::GetAffecting, "C++: TornadoPickup::GetAffecting() --> class ArrayWrapper<class RBActorWrapper>");
		cl.def("ApplyForces", (void (TornadoPickup::*)(float)) &TornadoPickup::ApplyForces, "C++: TornadoPickup::ApplyForces(float) --> void", pybind11::arg("ActiveTime"));
		cl.def("PlayCarSFX", (void (TornadoPickup::*)(class RBActorWrapper)) &TornadoPickup::PlayCarSFX, "C++: TornadoPickup::PlayCarSFX(class RBActorWrapper) --> void", pybind11::arg("InActor"));
		cl.def("PlayBallSFX", (void (TornadoPickup::*)(class RBActorWrapper)) &TornadoPickup::PlayBallSFX, "C++: TornadoPickup::PlayBallSFX(class RBActorWrapper) --> void", pybind11::arg("InActor"));
	}
	{ // VelcroPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/VelcroPickup.h line:10
		pybind11::class_<VelcroPickup, std::shared_ptr<VelcroPickup>, RumblePickupComponentWrapper> cl(M, "VelcroPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](VelcroPickup const &o){ return new VelcroPickup(o); } ) );
		cl.def("assign", (class VelcroPickup & (VelcroPickup::*)(class VelcroPickup)) &VelcroPickup::operator=, "C++: VelcroPickup::operator=(class VelcroPickup) --> class VelcroPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetBallOffset", (struct Vector (VelcroPickup::*)()) &VelcroPickup::GetBallOffset, "C++: VelcroPickup::GetBallOffset() --> struct Vector");
		cl.def("SetBallOffset", (void (VelcroPickup::*)(struct Vector)) &VelcroPickup::SetBallOffset, "C++: VelcroPickup::SetBallOffset(struct Vector) --> void", pybind11::arg("newBallOffset"));
		cl.def("GetbUseRealOffset", (unsigned long (VelcroPickup::*)()) &VelcroPickup::GetbUseRealOffset, "C++: VelcroPickup::GetbUseRealOffset() --> unsigned long");
		cl.def("SetbUseRealOffset", (void (VelcroPickup::*)(unsigned long)) &VelcroPickup::SetbUseRealOffset, "C++: VelcroPickup::SetbUseRealOffset(unsigned long) --> void", pybind11::arg("newbUseRealOffset"));
		cl.def("GetbHit", (unsigned long (VelcroPickup::*)()) &VelcroPickup::GetbHit, "C++: VelcroPickup::GetbHit() --> unsigned long");
		cl.def("SetbHit", (void (VelcroPickup::*)(unsigned long)) &VelcroPickup::SetbHit, "C++: VelcroPickup::SetbHit(unsigned long) --> void", pybind11::arg("newbHit"));
		cl.def("GetbBroken", (unsigned long (VelcroPickup::*)()) &VelcroPickup::GetbBroken, "C++: VelcroPickup::GetbBroken() --> unsigned long");
		cl.def("SetbBroken", (void (VelcroPickup::*)(unsigned long)) &VelcroPickup::SetbBroken, "C++: VelcroPickup::SetbBroken(unsigned long) --> void", pybind11::arg("newbBroken"));
		cl.def("GetAfterHitDuration", (float (VelcroPickup::*)()) &VelcroPickup::GetAfterHitDuration, "C++: VelcroPickup::GetAfterHitDuration() --> float");
		cl.def("SetAfterHitDuration", (void (VelcroPickup::*)(float)) &VelcroPickup::SetAfterHitDuration, "C++: VelcroPickup::SetAfterHitDuration(float) --> void", pybind11::arg("newAfterHitDuration"));
		cl.def("GetPostBreakDuration", (float (VelcroPickup::*)()) &VelcroPickup::GetPostBreakDuration, "C++: VelcroPickup::GetPostBreakDuration() --> float");
		cl.def("SetPostBreakDuration", (void (VelcroPickup::*)(float)) &VelcroPickup::SetPostBreakDuration, "C++: VelcroPickup::SetPostBreakDuration(float) --> void", pybind11::arg("newPostBreakDuration"));
		cl.def("GetMinBreakForce", (float (VelcroPickup::*)()) &VelcroPickup::GetMinBreakForce, "C++: VelcroPickup::GetMinBreakForce() --> float");
		cl.def("SetMinBreakForce", (void (VelcroPickup::*)(float)) &VelcroPickup::SetMinBreakForce, "C++: VelcroPickup::SetMinBreakForce(float) --> void", pybind11::arg("newMinBreakForce"));
		cl.def("GetMinBreakTime", (float (VelcroPickup::*)()) &VelcroPickup::GetMinBreakTime, "C++: VelcroPickup::GetMinBreakTime() --> float");
		cl.def("SetMinBreakTime", (void (VelcroPickup::*)(float)) &VelcroPickup::SetMinBreakTime, "C++: VelcroPickup::SetMinBreakTime(float) --> void", pybind11::arg("newMinBreakTime"));
		cl.def("GetCheckLastTouchRate", (float (VelcroPickup::*)()) &VelcroPickup::GetCheckLastTouchRate, "C++: VelcroPickup::GetCheckLastTouchRate() --> float");
		cl.def("SetCheckLastTouchRate", (void (VelcroPickup::*)(float)) &VelcroPickup::SetCheckLastTouchRate, "C++: VelcroPickup::SetCheckLastTouchRate(float) --> void", pybind11::arg("newCheckLastTouchRate"));
		cl.def("GetWeldedBall", (class BallWrapper (VelcroPickup::*)()) &VelcroPickup::GetWeldedBall, "C++: VelcroPickup::GetWeldedBall() --> class BallWrapper");
		cl.def("SetWeldedBall", (void (VelcroPickup::*)(class BallWrapper)) &VelcroPickup::SetWeldedBall, "C++: VelcroPickup::SetWeldedBall(class BallWrapper) --> void", pybind11::arg("newWeldedBall"));
		cl.def("GetOldBallMass", (float (VelcroPickup::*)()) &VelcroPickup::GetOldBallMass, "C++: VelcroPickup::GetOldBallMass() --> float");
		cl.def("SetOldBallMass", (void (VelcroPickup::*)(float)) &VelcroPickup::SetOldBallMass, "C++: VelcroPickup::SetOldBallMass(float) --> void", pybind11::arg("newOldBallMass"));
		cl.def("GetAttachTime", (float (VelcroPickup::*)()) &VelcroPickup::GetAttachTime, "C++: VelcroPickup::GetAttachTime() --> float");
		cl.def("SetAttachTime", (void (VelcroPickup::*)(float)) &VelcroPickup::SetAttachTime, "C++: VelcroPickup::SetAttachTime(float) --> void", pybind11::arg("newAttachTime"));
		cl.def("GetLastTouchCheckTime", (float (VelcroPickup::*)()) &VelcroPickup::GetLastTouchCheckTime, "C++: VelcroPickup::GetLastTouchCheckTime() --> float");
		cl.def("SetLastTouchCheckTime", (void (VelcroPickup::*)(float)) &VelcroPickup::SetLastTouchCheckTime, "C++: VelcroPickup::SetLastTouchCheckTime(float) --> void", pybind11::arg("newLastTouchCheckTime"));
		cl.def("GetBreakTime", (float (VelcroPickup::*)()) &VelcroPickup::GetBreakTime, "C++: VelcroPickup::GetBreakTime() --> float");
		cl.def("SetBreakTime", (void (VelcroPickup::*)(float)) &VelcroPickup::SetBreakTime, "C++: VelcroPickup::SetBreakTime(float) --> void", pybind11::arg("newBreakTime"));
		cl.def("DoBreak", (void (VelcroPickup::*)()) &VelcroPickup::DoBreak, "C++: VelcroPickup::DoBreak() --> void");
		cl.def("HandleCarTouch", (void (VelcroPickup::*)(class BallWrapper, class CarWrapper, unsigned char)) &VelcroPickup::HandleCarTouch, "C++: VelcroPickup::HandleCarTouch(class BallWrapper, class CarWrapper, unsigned char) --> void", pybind11::arg("InBall"), pybind11::arg("InCar"), pybind11::arg("HitType"));
		cl.def("PickupEnd", (void (VelcroPickup::*)()) &VelcroPickup::PickupEnd, "C++: VelcroPickup::PickupEnd() --> void");
		cl.def("OnBallHit", (void (VelcroPickup::*)()) &VelcroPickup::OnBallHit, "C++: VelcroPickup::OnBallHit() --> void");
		cl.def("PickupStart", (void (VelcroPickup::*)()) &VelcroPickup::PickupStart, "C++: VelcroPickup::PickupStart() --> void");
	}
}
