#include "pch.h"
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/GrapplingHookPickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/GravityPickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/HandbrakeOverridePickup.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_bakkesmod_wrappers_GameObject_RumbleComponent_GrapplingHookPickup(py::module &M)
{
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
	{ // GravityPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/GravityPickup.h line:9
		pybind11::class_<GravityPickup, std::shared_ptr<GravityPickup>, RumblePickupComponentWrapper> cl(M, "GravityPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](GravityPickup const &o){ return new GravityPickup(o); } ) );
		cl.def("assign", (class GravityPickup & (GravityPickup::*)(class GravityPickup)) &GravityPickup::operator=, "C++: GravityPickup::operator=(class GravityPickup) --> class GravityPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetBallGravity", (float (GravityPickup::*)()) &GravityPickup::GetBallGravity, "C++: GravityPickup::GetBallGravity() --> float");
		cl.def("SetBallGravity", (void (GravityPickup::*)(float)) &GravityPickup::SetBallGravity, "C++: GravityPickup::SetBallGravity(float) --> void", pybind11::arg("newBallGravity"));
		cl.def("GetRange", (float (GravityPickup::*)()) &GravityPickup::GetRange, "C++: GravityPickup::GetRange() --> float");
		cl.def("SetRange", (void (GravityPickup::*)(float)) &GravityPickup::SetRange, "C++: GravityPickup::SetRange(float) --> void", pybind11::arg("newRange"));
		cl.def("GetOffset", (struct Vector (GravityPickup::*)()) &GravityPickup::GetOffset, "C++: GravityPickup::GetOffset() --> struct Vector");
		cl.def("SetOffset", (void (GravityPickup::*)(struct Vector)) &GravityPickup::SetOffset, "C++: GravityPickup::SetOffset(struct Vector) --> void", pybind11::arg("newOffset"));
		cl.def("GetbDeactivateOnTouch", (unsigned long (GravityPickup::*)()) &GravityPickup::GetbDeactivateOnTouch, "C++: GravityPickup::GetbDeactivateOnTouch() --> unsigned long");
		cl.def("SetbDeactivateOnTouch", (void (GravityPickup::*)(unsigned long)) &GravityPickup::SetbDeactivateOnTouch, "C++: GravityPickup::SetbDeactivateOnTouch(unsigned long) --> void", pybind11::arg("newbDeactivateOnTouch"));
		cl.def("GetRecordBallHitRate", (float (GravityPickup::*)()) &GravityPickup::GetRecordBallHitRate, "C++: GravityPickup::GetRecordBallHitRate() --> float");
		cl.def("SetRecordBallHitRate", (void (GravityPickup::*)(float)) &GravityPickup::SetRecordBallHitRate, "C++: GravityPickup::SetRecordBallHitRate(float) --> void", pybind11::arg("newRecordBallHitRate"));
		cl.def("GetLastRecordedBallHitTime", (float (GravityPickup::*)()) &GravityPickup::GetLastRecordedBallHitTime, "C++: GravityPickup::GetLastRecordedBallHitTime() --> float");
		cl.def("SetLastRecordedBallHitTime", (void (GravityPickup::*)(float)) &GravityPickup::SetLastRecordedBallHitTime, "C++: GravityPickup::SetLastRecordedBallHitTime(float) --> void", pybind11::arg("newLastRecordedBallHitTime"));
		cl.def("GetPrevBall", (class BallWrapper (GravityPickup::*)()) &GravityPickup::GetPrevBall, "C++: GravityPickup::GetPrevBall() --> class BallWrapper");
		cl.def("SetPrevBall", (void (GravityPickup::*)(class BallWrapper)) &GravityPickup::SetPrevBall, "C++: GravityPickup::SetPrevBall(class BallWrapper) --> void", pybind11::arg("newPrevBall"));
		cl.def("UpdateVisual", (void (GravityPickup::*)()) &GravityPickup::UpdateVisual, "C++: GravityPickup::UpdateVisual() --> void");
		cl.def("ApplyForces", (void (GravityPickup::*)(float)) &GravityPickup::ApplyForces, "C++: GravityPickup::ApplyForces(float) --> void", pybind11::arg("ActiveTime"));
		cl.def("PickupEnd", (void (GravityPickup::*)()) &GravityPickup::PickupEnd, "C++: GravityPickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (GravityPickup::*)()) &GravityPickup::PickupStart, "C++: GravityPickup::PickupStart() --> void");
	}
	{ // HandbrakeOverridePickup file:bakkesmod/wrappers/GameObject/RumbleComponent/HandbrakeOverridePickup.h line:8
		pybind11::class_<HandbrakeOverridePickup, std::shared_ptr<HandbrakeOverridePickup>, TargetedPickup> cl(M, "HandbrakeOverridePickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](HandbrakeOverridePickup const &o){ return new HandbrakeOverridePickup(o); } ) );
		cl.def("assign", (class HandbrakeOverridePickup & (HandbrakeOverridePickup::*)(class HandbrakeOverridePickup)) &HandbrakeOverridePickup::operator=, "C++: HandbrakeOverridePickup::operator=(class HandbrakeOverridePickup) --> class HandbrakeOverridePickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetOtherCar", (class CarWrapper (HandbrakeOverridePickup::*)()) &HandbrakeOverridePickup::GetOtherCar, "C++: HandbrakeOverridePickup::GetOtherCar() --> class CarWrapper");
		cl.def("SetOtherCar", (void (HandbrakeOverridePickup::*)(class CarWrapper)) &HandbrakeOverridePickup::SetOtherCar, "C++: HandbrakeOverridePickup::SetOtherCar(class CarWrapper) --> void", pybind11::arg("newOtherCar"));
		cl.def("PickupEnd", (void (HandbrakeOverridePickup::*)()) &HandbrakeOverridePickup::PickupEnd, "C++: HandbrakeOverridePickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (HandbrakeOverridePickup::*)()) &HandbrakeOverridePickup::PickupStart, "C++: HandbrakeOverridePickup::PickupStart() --> void");
	}
}
