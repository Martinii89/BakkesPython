#include "pch.h"
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/BallCarSpringPickup.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/BallFreezePickup.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_unknown_unknown_13(py::module &M)
{
	{ // SpringPickup file: line:9
		pybind11::class_<SpringPickup, std::shared_ptr<SpringPickup>, TargetedPickup> cl(M, "SpringPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](SpringPickup const &o){ return new SpringPickup(o); } ) );
		cl.def("assign", (class SpringPickup & (SpringPickup::*)(class SpringPickup)) &SpringPickup::operator=, "C++: SpringPickup::operator=(class SpringPickup) --> class SpringPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetForce", (float (SpringPickup::*)()) &SpringPickup::GetForce, "C++: SpringPickup::GetForce() --> float");
		cl.def("SetForce", (void (SpringPickup::*)(float)) &SpringPickup::SetForce, "C++: SpringPickup::SetForce(float) --> void", pybind11::arg("newForce"));
		cl.def("GetVerticalForce", (float (SpringPickup::*)()) &SpringPickup::GetVerticalForce, "C++: SpringPickup::GetVerticalForce() --> float");
		cl.def("SetVerticalForce", (void (SpringPickup::*)(float)) &SpringPickup::SetVerticalForce, "C++: SpringPickup::SetVerticalForce(float) --> void", pybind11::arg("newVerticalForce"));
		cl.def("GetTorque", (struct Vector (SpringPickup::*)()) &SpringPickup::GetTorque, "C++: SpringPickup::GetTorque() --> struct Vector");
		cl.def("SetTorque", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetTorque, "C++: SpringPickup::SetTorque(struct Vector) --> void", pybind11::arg("newTorque"));
		cl.def("GetbApplyRelativeForce", (unsigned long (SpringPickup::*)()) &SpringPickup::GetbApplyRelativeForce, "C++: SpringPickup::GetbApplyRelativeForce() --> unsigned long");
		cl.def("SetbApplyRelativeForce", (void (SpringPickup::*)(unsigned long)) &SpringPickup::SetbApplyRelativeForce, "C++: SpringPickup::SetbApplyRelativeForce(unsigned long) --> void", pybind11::arg("newbApplyRelativeForce"));
		cl.def("GetbApplyConstantForce", (unsigned long (SpringPickup::*)()) &SpringPickup::GetbApplyConstantForce, "C++: SpringPickup::GetbApplyConstantForce() --> unsigned long");
		cl.def("SetbApplyConstantForce", (void (SpringPickup::*)(unsigned long)) &SpringPickup::SetbApplyConstantForce, "C++: SpringPickup::SetbApplyConstantForce(unsigned long) --> void", pybind11::arg("newbApplyConstantForce"));
		cl.def("GetbBreakConstantForceWithHit", (unsigned long (SpringPickup::*)()) &SpringPickup::GetbBreakConstantForceWithHit, "C++: SpringPickup::GetbBreakConstantForceWithHit() --> unsigned long");
		cl.def("SetbBreakConstantForceWithHit", (void (SpringPickup::*)(unsigned long)) &SpringPickup::SetbBreakConstantForceWithHit, "C++: SpringPickup::SetbBreakConstantForceWithHit(unsigned long) --> void", pybind11::arg("newbBreakConstantForceWithHit"));
		cl.def("GetbApplyRelativeConstantForce", (unsigned long (SpringPickup::*)()) &SpringPickup::GetbApplyRelativeConstantForce, "C++: SpringPickup::GetbApplyRelativeConstantForce() --> unsigned long");
		cl.def("SetbApplyRelativeConstantForce", (void (SpringPickup::*)(unsigned long)) &SpringPickup::SetbApplyRelativeConstantForce, "C++: SpringPickup::SetbApplyRelativeConstantForce(unsigned long) --> void", pybind11::arg("newbApplyRelativeConstantForce"));
		cl.def("GetbInstant", (unsigned long (SpringPickup::*)()) &SpringPickup::GetbInstant, "C++: SpringPickup::GetbInstant() --> unsigned long");
		cl.def("SetbInstant", (void (SpringPickup::*)(unsigned long)) &SpringPickup::SetbInstant, "C++: SpringPickup::SetbInstant(unsigned long) --> void", pybind11::arg("newbInstant"));
		cl.def("GetbFollowAfterHit", (unsigned long (SpringPickup::*)()) &SpringPickup::GetbFollowAfterHit, "C++: SpringPickup::GetbFollowAfterHit() --> unsigned long");
		cl.def("SetbFollowAfterHit", (void (SpringPickup::*)(unsigned long)) &SpringPickup::SetbFollowAfterHit, "C++: SpringPickup::SetbFollowAfterHit(unsigned long) --> void", pybind11::arg("newbFollowAfterHit"));
		cl.def("GetbSpringed", (unsigned long (SpringPickup::*)()) &SpringPickup::GetbSpringed, "C++: SpringPickup::GetbSpringed() --> unsigned long");
		cl.def("SetbSpringed", (void (SpringPickup::*)(unsigned long)) &SpringPickup::SetbSpringed, "C++: SpringPickup::SetbSpringed(unsigned long) --> void", pybind11::arg("newbSpringed"));
		cl.def("GetRelativeForceNormalDirection", (float (SpringPickup::*)()) &SpringPickup::GetRelativeForceNormalDirection, "C++: SpringPickup::GetRelativeForceNormalDirection() --> float");
		cl.def("SetRelativeForceNormalDirection", (void (SpringPickup::*)(float)) &SpringPickup::SetRelativeForceNormalDirection, "C++: SpringPickup::SetRelativeForceNormalDirection(float) --> void", pybind11::arg("newRelativeForceNormalDirection"));
		cl.def("GetMaxSpringLength", (float (SpringPickup::*)()) &SpringPickup::GetMaxSpringLength, "C++: SpringPickup::GetMaxSpringLength() --> float");
		cl.def("SetMaxSpringLength", (void (SpringPickup::*)(float)) &SpringPickup::SetMaxSpringLength, "C++: SpringPickup::SetMaxSpringLength(float) --> void", pybind11::arg("newMaxSpringLength"));
		cl.def("GetConstantForce", (float (SpringPickup::*)()) &SpringPickup::GetConstantForce, "C++: SpringPickup::GetConstantForce() --> float");
		cl.def("SetConstantForce", (void (SpringPickup::*)(float)) &SpringPickup::SetConstantForce, "C++: SpringPickup::SetConstantForce(float) --> void", pybind11::arg("newConstantForce"));
		cl.def("GetFromOffset", (struct Vector (SpringPickup::*)()) &SpringPickup::GetFromOffset, "C++: SpringPickup::GetFromOffset() --> struct Vector");
		cl.def("SetFromOffset", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetFromOffset, "C++: SpringPickup::SetFromOffset(struct Vector) --> void", pybind11::arg("newFromOffset"));
		cl.def("GetSpringMeshScale", (struct Vector (SpringPickup::*)()) &SpringPickup::GetSpringMeshScale, "C++: SpringPickup::GetSpringMeshScale() --> struct Vector");
		cl.def("SetSpringMeshScale", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetSpringMeshScale, "C++: SpringPickup::SetSpringMeshScale(struct Vector) --> void", pybind11::arg("newSpringMeshScale"));
		cl.def("GetSpringMeshInitialSize", (float (SpringPickup::*)()) &SpringPickup::GetSpringMeshInitialSize, "C++: SpringPickup::GetSpringMeshInitialSize() --> float");
		cl.def("SetSpringMeshInitialSize", (void (SpringPickup::*)(float)) &SpringPickup::SetSpringMeshInitialSize, "C++: SpringPickup::SetSpringMeshInitialSize(float) --> void", pybind11::arg("newSpringMeshInitialSize"));
		cl.def("GetSpringRotationOffset", (struct Rotator (SpringPickup::*)()) &SpringPickup::GetSpringRotationOffset, "C++: SpringPickup::GetSpringRotationOffset() --> struct Rotator");
		cl.def("SetSpringRotationOffset", (void (SpringPickup::*)(struct Rotator)) &SpringPickup::SetSpringRotationOffset, "C++: SpringPickup::SetSpringRotationOffset(struct Rotator) --> void", pybind11::arg("newSpringRotationOffset"));
		cl.def("GetHittingMeshScale", (struct Vector (SpringPickup::*)()) &SpringPickup::GetHittingMeshScale, "C++: SpringPickup::GetHittingMeshScale() --> struct Vector");
		cl.def("SetHittingMeshScale", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetHittingMeshScale, "C++: SpringPickup::SetHittingMeshScale(struct Vector) --> void", pybind11::arg("newHittingMeshScale"));
		cl.def("GetHittingMeshOffset", (struct Vector (SpringPickup::*)()) &SpringPickup::GetHittingMeshOffset, "C++: SpringPickup::GetHittingMeshOffset() --> struct Vector");
		cl.def("SetHittingMeshOffset", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetHittingMeshOffset, "C++: SpringPickup::SetHittingMeshOffset(struct Vector) --> void", pybind11::arg("newHittingMeshOffset"));
		cl.def("GetHittingRotationOffset", (struct Rotator (SpringPickup::*)()) &SpringPickup::GetHittingRotationOffset, "C++: SpringPickup::GetHittingRotationOffset() --> struct Rotator");
		cl.def("SetHittingRotationOffset", (void (SpringPickup::*)(struct Rotator)) &SpringPickup::SetHittingRotationOffset, "C++: SpringPickup::SetHittingRotationOffset(struct Rotator) --> void", pybind11::arg("newHittingRotationOffset"));
		cl.def("GetHitDistanceOffset", (float (SpringPickup::*)()) &SpringPickup::GetHitDistanceOffset, "C++: SpringPickup::GetHitDistanceOffset() --> float");
		cl.def("SetHitDistanceOffset", (void (SpringPickup::*)(float)) &SpringPickup::SetHitDistanceOffset, "C++: SpringPickup::SetHitDistanceOffset(float) --> void", pybind11::arg("newHitDistanceOffset"));
		cl.def("GetAfterSpringDuration", (float (SpringPickup::*)()) &SpringPickup::GetAfterSpringDuration, "C++: SpringPickup::GetAfterSpringDuration() --> float");
		cl.def("SetAfterSpringDuration", (void (SpringPickup::*)(float)) &SpringPickup::SetAfterSpringDuration, "C++: SpringPickup::SetAfterSpringDuration(float) --> void", pybind11::arg("newAfterSpringDuration"));
		cl.def("GetBallHitType", (unsigned char (SpringPickup::*)()) &SpringPickup::GetBallHitType, "C++: SpringPickup::GetBallHitType() --> unsigned char");
		cl.def("SetBallHitType", (void (SpringPickup::*)(unsigned char)) &SpringPickup::SetBallHitType, "C++: SpringPickup::SetBallHitType(unsigned char) --> void", pybind11::arg("newBallHitType"));
		cl.def("GetMinSpringLength", (float (SpringPickup::*)()) &SpringPickup::GetMinSpringLength, "C++: SpringPickup::GetMinSpringLength() --> float");
		cl.def("SetMinSpringLength", (void (SpringPickup::*)(float)) &SpringPickup::SetMinSpringLength, "C++: SpringPickup::SetMinSpringLength(float) --> void", pybind11::arg("newMinSpringLength"));
		cl.def("GetWeldedForceScalar", (float (SpringPickup::*)()) &SpringPickup::GetWeldedForceScalar, "C++: SpringPickup::GetWeldedForceScalar() --> float");
		cl.def("SetWeldedForceScalar", (void (SpringPickup::*)(float)) &SpringPickup::SetWeldedForceScalar, "C++: SpringPickup::SetWeldedForceScalar(float) --> void", pybind11::arg("newWeldedForceScalar"));
		cl.def("GetWeldedVerticalForce", (float (SpringPickup::*)()) &SpringPickup::GetWeldedVerticalForce, "C++: SpringPickup::GetWeldedVerticalForce() --> float");
		cl.def("SetWeldedVerticalForce", (void (SpringPickup::*)(float)) &SpringPickup::SetWeldedVerticalForce, "C++: SpringPickup::SetWeldedVerticalForce(float) --> void", pybind11::arg("newWeldedVerticalForce"));
		cl.def("GetCurrentSpringLength", (float (SpringPickup::*)()) &SpringPickup::GetCurrentSpringLength, "C++: SpringPickup::GetCurrentSpringLength() --> float");
		cl.def("SetCurrentSpringLength", (void (SpringPickup::*)(float)) &SpringPickup::SetCurrentSpringLength, "C++: SpringPickup::SetCurrentSpringLength(float) --> void", pybind11::arg("newCurrentSpringLength"));
		cl.def("GetSpringedTime", (float (SpringPickup::*)()) &SpringPickup::GetSpringedTime, "C++: SpringPickup::GetSpringedTime() --> float");
		cl.def("SetSpringedTime", (void (SpringPickup::*)(float)) &SpringPickup::SetSpringedTime, "C++: SpringPickup::SetSpringedTime(float) --> void", pybind11::arg("newSpringedTime"));
		cl.def("GetAfterSpringTime", (float (SpringPickup::*)()) &SpringPickup::GetAfterSpringTime, "C++: SpringPickup::GetAfterSpringTime() --> float");
		cl.def("SetAfterSpringTime", (void (SpringPickup::*)(float)) &SpringPickup::SetAfterSpringTime, "C++: SpringPickup::SetAfterSpringTime(float) --> void", pybind11::arg("newAfterSpringTime"));
		cl.def("GetSpringToTime", (float (SpringPickup::*)()) &SpringPickup::GetSpringToTime, "C++: SpringPickup::GetSpringToTime() --> float");
		cl.def("SetSpringToTime", (void (SpringPickup::*)(float)) &SpringPickup::SetSpringToTime, "C++: SpringPickup::SetSpringToTime(float) --> void", pybind11::arg("newSpringToTime"));
		cl.def("GetSpringOrigin", (struct Vector (SpringPickup::*)()) &SpringPickup::GetSpringOrigin, "C++: SpringPickup::GetSpringOrigin() --> struct Vector");
		cl.def("SetSpringOrigin", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetSpringOrigin, "C++: SpringPickup::SetSpringOrigin(struct Vector) --> void", pybind11::arg("newSpringOrigin"));
		cl.def("GetSpringedLocation", (struct Vector (SpringPickup::*)()) &SpringPickup::GetSpringedLocation, "C++: SpringPickup::GetSpringedLocation() --> struct Vector");
		cl.def("SetSpringedLocation", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetSpringedLocation, "C++: SpringPickup::SetSpringedLocation(struct Vector) --> void", pybind11::arg("newSpringedLocation"));
		cl.def("GetSpringedNormal", (struct Vector (SpringPickup::*)()) &SpringPickup::GetSpringedNormal, "C++: SpringPickup::GetSpringedNormal() --> struct Vector");
		cl.def("SetSpringedNormal", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetSpringedNormal, "C++: SpringPickup::SetSpringedNormal(struct Vector) --> void", pybind11::arg("newSpringedNormal"));
		cl.def("GetSpringedLength", (float (SpringPickup::*)()) &SpringPickup::GetSpringedLength, "C++: SpringPickup::GetSpringedLength() --> float");
		cl.def("SetSpringedLength", (void (SpringPickup::*)(float)) &SpringPickup::SetSpringedLength, "C++: SpringPickup::SetSpringedLength(float) --> void", pybind11::arg("newSpringedLength"));
		cl.def("PickupEnd", (void (SpringPickup::*)()) &SpringPickup::PickupEnd, "C++: SpringPickup::PickupEnd() --> void");
		cl.def("HandleCarTouchedBall", (void (SpringPickup::*)(class BallWrapper, class CarWrapper, unsigned char)) &SpringPickup::HandleCarTouchedBall, "C++: SpringPickup::HandleCarTouchedBall(class BallWrapper, class CarWrapper, unsigned char) --> void", pybind11::arg("Ball"), pybind11::arg("OtherCar"), pybind11::arg("HitType"));
		cl.def("ScaleSpringMeshToLocation", (void (SpringPickup::*)(struct Vector &, struct Vector &)) &SpringPickup::ScaleSpringMeshToLocation, "C++: SpringPickup::ScaleSpringMeshToLocation(struct Vector &, struct Vector &) --> void", pybind11::arg("NewLocation"), pybind11::arg("TargetLoction"));
		cl.def("ApplyForces", (void (SpringPickup::*)(float)) &SpringPickup::ApplyForces, "C++: SpringPickup::ApplyForces(float) --> void", pybind11::arg("ActiveTime"));
		cl.def("GetRelativeConstantForce", (struct Vector (SpringPickup::*)(struct Vector &)) &SpringPickup::GetRelativeConstantForce, "C++: SpringPickup::GetRelativeConstantForce(struct Vector &) --> struct Vector", pybind11::arg("Direction"));
		cl.def("GetRelativeImpulse", (struct Vector (SpringPickup::*)(struct Vector &)) &SpringPickup::GetRelativeImpulse, "C++: SpringPickup::GetRelativeImpulse(struct Vector &) --> struct Vector", pybind11::arg("Direction"));
		cl.def("DoSpring", (void (SpringPickup::*)(unsigned long)) &SpringPickup::DoSpring, "C++: SpringPickup::DoSpring(unsigned long) --> void", pybind11::arg("bFirstHit"));
		cl.def("PickupStart", (void (SpringPickup::*)()) &SpringPickup::PickupStart, "C++: SpringPickup::PickupStart() --> void");
	}
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
}
