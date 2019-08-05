#include "pch.h"
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/BoostWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/AttachmentPickup.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_unknown_unknown_13(py::module &M)
{
	{ // RumblePickupComponentWrapper file: line:12
		pybind11::class_<RumblePickupComponentWrapper, std::shared_ptr<RumblePickupComponentWrapper>, CarComponentWrapper> cl(M, "RumblePickupComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](RumblePickupComponentWrapper const &o){ return new RumblePickupComponentWrapper(o); } ) );
		cl.def("assign", (class RumblePickupComponentWrapper & (RumblePickupComponentWrapper::*)(class RumblePickupComponentWrapper)) &RumblePickupComponentWrapper::operator=, "C++: RumblePickupComponentWrapper::operator=(class RumblePickupComponentWrapper) --> class RumblePickupComponentWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetPickupName", (class UnrealStringWrapper (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetPickupName, "C++: RumblePickupComponentWrapper::GetPickupName() --> class UnrealStringWrapper");
		cl.def("GetbHudIgnoreUseTime", (unsigned long (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetbHudIgnoreUseTime, "C++: RumblePickupComponentWrapper::GetbHudIgnoreUseTime() --> unsigned long");
		cl.def("SetbHudIgnoreUseTime", (void (RumblePickupComponentWrapper::*)(unsigned long)) &RumblePickupComponentWrapper::SetbHudIgnoreUseTime, "C++: RumblePickupComponentWrapper::SetbHudIgnoreUseTime(unsigned long) --> void", "newbHudIgnoreUseTime"_a);
		cl.def("GetbHasActivated", (unsigned long (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetbHasActivated, "C++: RumblePickupComponentWrapper::GetbHasActivated() --> unsigned long");
		cl.def("SetbHasActivated", (void (RumblePickupComponentWrapper::*)(unsigned long)) &RumblePickupComponentWrapper::SetbHasActivated, "C++: RumblePickupComponentWrapper::SetbHasActivated(unsigned long) --> void", "newbHasActivated"_a);
		cl.def("GetbIsActive", (unsigned long (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetbIsActive, "C++: RumblePickupComponentWrapper::GetbIsActive() --> unsigned long");
		cl.def("SetbIsActive", (void (RumblePickupComponentWrapper::*)(unsigned long)) &RumblePickupComponentWrapper::SetbIsActive, "C++: RumblePickupComponentWrapper::SetbIsActive(unsigned long) --> void", "newbIsActive"_a);
		cl.def("GetActivationDuration", (float (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetActivationDuration, "C++: RumblePickupComponentWrapper::GetActivationDuration() --> float");
		cl.def("SetActivationDuration", (void (RumblePickupComponentWrapper::*)(float)) &RumblePickupComponentWrapper::SetActivationDuration, "C++: RumblePickupComponentWrapper::SetActivationDuration(float) --> void", "newActivationDuration"_a);
		cl.def("HasActivated2", (bool (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::HasActivated2, "C++: RumblePickupComponentWrapper::HasActivated2() --> bool");
		cl.def("GetClientTarget", (class RBActorWrapper (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetClientTarget, "C++: RumblePickupComponentWrapper::GetClientTarget() --> class RBActorWrapper");
		cl.def("OnVehicleSetupComplete", (void (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::OnVehicleSetupComplete, "C++: RumblePickupComponentWrapper::OnVehicleSetupComplete() --> void");
		cl.def("GetActiveTimePercent", (float (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetActiveTimePercent, "C++: RumblePickupComponentWrapper::GetActiveTimePercent() --> float");
		cl.def("PickupEnd", (void (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::PickupEnd, "C++: RumblePickupComponentWrapper::PickupEnd() --> void");
		cl.def("PickupStart", (void (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::PickupStart, "C++: RumblePickupComponentWrapper::PickupStart() --> void");
		cl.def("GetBoostComponent", (class BoostWrapper (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetBoostComponent, "C++: RumblePickupComponentWrapper::GetBoostComponent() --> class BoostWrapper");
		cl.def("DeactivatePickup", (void (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::DeactivatePickup, "C++: RumblePickupComponentWrapper::DeactivatePickup() --> void");
		cl.def("TryActivate", (bool (RumblePickupComponentWrapper::*)(class RBActorWrapper)) &RumblePickupComponentWrapper::TryActivate, "C++: RumblePickupComponentWrapper::TryActivate(class RBActorWrapper) --> bool", "TargetOverride"_a);
		cl.def("OnCreated", (void (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::OnCreated, "C++: RumblePickupComponentWrapper::OnCreated() --> void");
		cl.def("CanPickup", (bool (RumblePickupComponentWrapper::*)(class CarWrapper)) &RumblePickupComponentWrapper::CanPickup, "C++: RumblePickupComponentWrapper::CanPickup(class CarWrapper) --> bool", "InCar"_a);
		cl.def("ApplyPickup", (void (RumblePickupComponentWrapper::*)(class CarWrapper)) &RumblePickupComponentWrapper::ApplyPickup, "C++: RumblePickupComponentWrapper::ApplyPickup(class CarWrapper) --> void", "InCar"_a);
	}
	{ // AttachmentPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/AttachmentPickup.h line:7
		pybind11::class_<AttachmentPickup, std::shared_ptr<AttachmentPickup>, RumblePickupComponentWrapper> cl(M, "AttachmentPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](AttachmentPickup const &o){ return new AttachmentPickup(o); } ) );
		cl.def("assign", (class AttachmentPickup & (AttachmentPickup::*)(class AttachmentPickup)) &AttachmentPickup::operator=, "C++: AttachmentPickup::operator=(class AttachmentPickup) --> class AttachmentPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("PickupEnd", (void (AttachmentPickup::*)()) &AttachmentPickup::PickupEnd, "C++: AttachmentPickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (AttachmentPickup::*)()) &AttachmentPickup::PickupStart, "C++: AttachmentPickup::PickupStart() --> void");
	}
	{ // TargetedPickup file: line:9
		pybind11::class_<TargetedPickup, std::shared_ptr<TargetedPickup>, RumblePickupComponentWrapper> cl(M, "TargetedPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](TargetedPickup const &o){ return new TargetedPickup(o); } ) );
		cl.def("assign", (class TargetedPickup & (TargetedPickup::*)(class TargetedPickup)) &TargetedPickup::operator=, "C++: TargetedPickup::operator=(class TargetedPickup) --> class TargetedPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetbCanTargetBall", (unsigned long (TargetedPickup::*)()) &TargetedPickup::GetbCanTargetBall, "C++: TargetedPickup::GetbCanTargetBall() --> unsigned long");
		cl.def("SetbCanTargetBall", (void (TargetedPickup::*)(unsigned long)) &TargetedPickup::SetbCanTargetBall, "C++: TargetedPickup::SetbCanTargetBall(unsigned long) --> void", "newbCanTargetBall"_a);
		cl.def("GetbCanTargetCars", (unsigned long (TargetedPickup::*)()) &TargetedPickup::GetbCanTargetCars, "C++: TargetedPickup::GetbCanTargetCars() --> unsigned long");
		cl.def("SetbCanTargetCars", (void (TargetedPickup::*)(unsigned long)) &TargetedPickup::SetbCanTargetCars, "C++: TargetedPickup::SetbCanTargetCars(unsigned long) --> void", "newbCanTargetCars"_a);
		cl.def("GetbCanTargetEnemyCars", (unsigned long (TargetedPickup::*)()) &TargetedPickup::GetbCanTargetEnemyCars, "C++: TargetedPickup::GetbCanTargetEnemyCars() --> unsigned long");
		cl.def("SetbCanTargetEnemyCars", (void (TargetedPickup::*)(unsigned long)) &TargetedPickup::SetbCanTargetEnemyCars, "C++: TargetedPickup::SetbCanTargetEnemyCars(unsigned long) --> void", "newbCanTargetEnemyCars"_a);
		cl.def("GetbCanTargetTeamCars", (unsigned long (TargetedPickup::*)()) &TargetedPickup::GetbCanTargetTeamCars, "C++: TargetedPickup::GetbCanTargetTeamCars() --> unsigned long");
		cl.def("SetbCanTargetTeamCars", (void (TargetedPickup::*)(unsigned long)) &TargetedPickup::SetbCanTargetTeamCars, "C++: TargetedPickup::SetbCanTargetTeamCars(unsigned long) --> void", "newbCanTargetTeamCars"_a);
		cl.def("GetbUseDirectionalTargeting", (unsigned long (TargetedPickup::*)()) &TargetedPickup::GetbUseDirectionalTargeting, "C++: TargetedPickup::GetbUseDirectionalTargeting() --> unsigned long");
		cl.def("SetbUseDirectionalTargeting", (void (TargetedPickup::*)(unsigned long)) &TargetedPickup::SetbUseDirectionalTargeting, "C++: TargetedPickup::SetbUseDirectionalTargeting(unsigned long) --> void", "newbUseDirectionalTargeting"_a);
		cl.def("GetbRequireTrace", (unsigned long (TargetedPickup::*)()) &TargetedPickup::GetbRequireTrace, "C++: TargetedPickup::GetbRequireTrace() --> unsigned long");
		cl.def("SetbRequireTrace", (void (TargetedPickup::*)(unsigned long)) &TargetedPickup::SetbRequireTrace, "C++: TargetedPickup::SetbRequireTrace(unsigned long) --> void", "newbRequireTrace"_a);
		cl.def("GetRange", (float (TargetedPickup::*)()) &TargetedPickup::GetRange, "C++: TargetedPickup::GetRange() --> float");
		cl.def("SetRange", (void (TargetedPickup::*)(float)) &TargetedPickup::SetRange, "C++: TargetedPickup::SetRange(float) --> void", "newRange"_a);
		cl.def("GetDirectionalTargetingAccuracy", (float (TargetedPickup::*)()) &TargetedPickup::GetDirectionalTargetingAccuracy, "C++: TargetedPickup::GetDirectionalTargetingAccuracy() --> float");
		cl.def("SetDirectionalTargetingAccuracy", (void (TargetedPickup::*)(float)) &TargetedPickup::SetDirectionalTargetingAccuracy, "C++: TargetedPickup::SetDirectionalTargetingAccuracy(float) --> void", "newDirectionalTargetingAccuracy"_a);
		cl.def("GetClientTarget", (class RBActorWrapper (TargetedPickup::*)()) &TargetedPickup::GetClientTarget, "C++: TargetedPickup::GetClientTarget() --> class RBActorWrapper");
		cl.def("SetClientTarget", (void (TargetedPickup::*)(class RBActorWrapper)) &TargetedPickup::SetClientTarget, "C++: TargetedPickup::SetClientTarget(class RBActorWrapper) --> void", "newClientTarget"_a);
		cl.def("GetTargeted", (class RBActorWrapper (TargetedPickup::*)()) &TargetedPickup::GetTargeted, "C++: TargetedPickup::GetTargeted() --> class RBActorWrapper");
		cl.def("SetTargeted", (void (TargetedPickup::*)(class RBActorWrapper)) &TargetedPickup::SetTargeted, "C++: TargetedPickup::SetTargeted(class RBActorWrapper) --> void", "newTargeted"_a);
		cl.def("GetClientTarget2", (class RBActorWrapper (TargetedPickup::*)()) &TargetedPickup::GetClientTarget2, "C++: TargetedPickup::GetClientTarget2() --> class RBActorWrapper");
		cl.def("TargetChanged", (void (TargetedPickup::*)()) &TargetedPickup::TargetChanged, "C++: TargetedPickup::TargetChanged() --> void");
		cl.def("OnTargetChanged", (void (TargetedPickup::*)()) &TargetedPickup::OnTargetChanged, "C++: TargetedPickup::OnTargetChanged() --> void");
		cl.def("TryActivate", (bool (TargetedPickup::*)(class RBActorWrapper)) &TargetedPickup::TryActivate, "C++: TargetedPickup::TryActivate(class RBActorWrapper) --> bool", "TargetOverride"_a);
		cl.def("ValidateTargetTrace", (bool (TargetedPickup::*)(class RBActorWrapper)) &TargetedPickup::ValidateTargetTrace, "C++: TargetedPickup::ValidateTargetTrace(class RBActorWrapper) --> bool", "InTarget"_a);
		cl.def("ValidateTarget2", (bool (TargetedPickup::*)(class RBActorWrapper)) &TargetedPickup::ValidateTarget2, "C++: TargetedPickup::ValidateTarget2(class RBActorWrapper) --> bool", "InTarget"_a);
		cl.def("GetTarget2", (class RBActorWrapper (TargetedPickup::*)()) &TargetedPickup::GetTarget2, "C++: TargetedPickup::GetTarget2() --> class RBActorWrapper");
	}
	{ // SpringPickup file: line:9
		pybind11::class_<SpringPickup, std::shared_ptr<SpringPickup>, TargetedPickup> cl(M, "SpringPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](SpringPickup const &o){ return new SpringPickup(o); } ) );
		cl.def("assign", (class SpringPickup & (SpringPickup::*)(class SpringPickup)) &SpringPickup::operator=, "C++: SpringPickup::operator=(class SpringPickup) --> class SpringPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetForce", (float (SpringPickup::*)()) &SpringPickup::GetForce, "C++: SpringPickup::GetForce() --> float");
		cl.def("SetForce", (void (SpringPickup::*)(float)) &SpringPickup::SetForce, "C++: SpringPickup::SetForce(float) --> void", "newForce"_a);
		cl.def("GetVerticalForce", (float (SpringPickup::*)()) &SpringPickup::GetVerticalForce, "C++: SpringPickup::GetVerticalForce() --> float");
		cl.def("SetVerticalForce", (void (SpringPickup::*)(float)) &SpringPickup::SetVerticalForce, "C++: SpringPickup::SetVerticalForce(float) --> void", "newVerticalForce"_a);
		cl.def("GetTorque", (struct Vector (SpringPickup::*)()) &SpringPickup::GetTorque, "C++: SpringPickup::GetTorque() --> struct Vector");
		cl.def("SetTorque", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetTorque, "C++: SpringPickup::SetTorque(struct Vector) --> void", "newTorque"_a);
		cl.def("GetbApplyRelativeForce", (unsigned long (SpringPickup::*)()) &SpringPickup::GetbApplyRelativeForce, "C++: SpringPickup::GetbApplyRelativeForce() --> unsigned long");
		cl.def("SetbApplyRelativeForce", (void (SpringPickup::*)(unsigned long)) &SpringPickup::SetbApplyRelativeForce, "C++: SpringPickup::SetbApplyRelativeForce(unsigned long) --> void", "newbApplyRelativeForce"_a);
		cl.def("GetbApplyConstantForce", (unsigned long (SpringPickup::*)()) &SpringPickup::GetbApplyConstantForce, "C++: SpringPickup::GetbApplyConstantForce() --> unsigned long");
		cl.def("SetbApplyConstantForce", (void (SpringPickup::*)(unsigned long)) &SpringPickup::SetbApplyConstantForce, "C++: SpringPickup::SetbApplyConstantForce(unsigned long) --> void", "newbApplyConstantForce"_a);
		cl.def("GetbBreakConstantForceWithHit", (unsigned long (SpringPickup::*)()) &SpringPickup::GetbBreakConstantForceWithHit, "C++: SpringPickup::GetbBreakConstantForceWithHit() --> unsigned long");
		cl.def("SetbBreakConstantForceWithHit", (void (SpringPickup::*)(unsigned long)) &SpringPickup::SetbBreakConstantForceWithHit, "C++: SpringPickup::SetbBreakConstantForceWithHit(unsigned long) --> void", "newbBreakConstantForceWithHit"_a);
		cl.def("GetbApplyRelativeConstantForce", (unsigned long (SpringPickup::*)()) &SpringPickup::GetbApplyRelativeConstantForce, "C++: SpringPickup::GetbApplyRelativeConstantForce() --> unsigned long");
		cl.def("SetbApplyRelativeConstantForce", (void (SpringPickup::*)(unsigned long)) &SpringPickup::SetbApplyRelativeConstantForce, "C++: SpringPickup::SetbApplyRelativeConstantForce(unsigned long) --> void", "newbApplyRelativeConstantForce"_a);
		cl.def("GetbInstant", (unsigned long (SpringPickup::*)()) &SpringPickup::GetbInstant, "C++: SpringPickup::GetbInstant() --> unsigned long");
		cl.def("SetbInstant", (void (SpringPickup::*)(unsigned long)) &SpringPickup::SetbInstant, "C++: SpringPickup::SetbInstant(unsigned long) --> void", "newbInstant"_a);
		cl.def("GetbFollowAfterHit", (unsigned long (SpringPickup::*)()) &SpringPickup::GetbFollowAfterHit, "C++: SpringPickup::GetbFollowAfterHit() --> unsigned long");
		cl.def("SetbFollowAfterHit", (void (SpringPickup::*)(unsigned long)) &SpringPickup::SetbFollowAfterHit, "C++: SpringPickup::SetbFollowAfterHit(unsigned long) --> void", "newbFollowAfterHit"_a);
		cl.def("GetbSpringed", (unsigned long (SpringPickup::*)()) &SpringPickup::GetbSpringed, "C++: SpringPickup::GetbSpringed() --> unsigned long");
		cl.def("SetbSpringed", (void (SpringPickup::*)(unsigned long)) &SpringPickup::SetbSpringed, "C++: SpringPickup::SetbSpringed(unsigned long) --> void", "newbSpringed"_a);
		cl.def("GetRelativeForceNormalDirection", (float (SpringPickup::*)()) &SpringPickup::GetRelativeForceNormalDirection, "C++: SpringPickup::GetRelativeForceNormalDirection() --> float");
		cl.def("SetRelativeForceNormalDirection", (void (SpringPickup::*)(float)) &SpringPickup::SetRelativeForceNormalDirection, "C++: SpringPickup::SetRelativeForceNormalDirection(float) --> void", "newRelativeForceNormalDirection"_a);
		cl.def("GetMaxSpringLength", (float (SpringPickup::*)()) &SpringPickup::GetMaxSpringLength, "C++: SpringPickup::GetMaxSpringLength() --> float");
		cl.def("SetMaxSpringLength", (void (SpringPickup::*)(float)) &SpringPickup::SetMaxSpringLength, "C++: SpringPickup::SetMaxSpringLength(float) --> void", "newMaxSpringLength"_a);
		cl.def("GetConstantForce", (float (SpringPickup::*)()) &SpringPickup::GetConstantForce, "C++: SpringPickup::GetConstantForce() --> float");
		cl.def("SetConstantForce", (void (SpringPickup::*)(float)) &SpringPickup::SetConstantForce, "C++: SpringPickup::SetConstantForce(float) --> void", "newConstantForce"_a);
		cl.def("GetFromOffset", (struct Vector (SpringPickup::*)()) &SpringPickup::GetFromOffset, "C++: SpringPickup::GetFromOffset() --> struct Vector");
		cl.def("SetFromOffset", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetFromOffset, "C++: SpringPickup::SetFromOffset(struct Vector) --> void", "newFromOffset"_a);
		cl.def("GetSpringMeshScale", (struct Vector (SpringPickup::*)()) &SpringPickup::GetSpringMeshScale, "C++: SpringPickup::GetSpringMeshScale() --> struct Vector");
		cl.def("SetSpringMeshScale", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetSpringMeshScale, "C++: SpringPickup::SetSpringMeshScale(struct Vector) --> void", "newSpringMeshScale"_a);
		cl.def("GetSpringMeshInitialSize", (float (SpringPickup::*)()) &SpringPickup::GetSpringMeshInitialSize, "C++: SpringPickup::GetSpringMeshInitialSize() --> float");
		cl.def("SetSpringMeshInitialSize", (void (SpringPickup::*)(float)) &SpringPickup::SetSpringMeshInitialSize, "C++: SpringPickup::SetSpringMeshInitialSize(float) --> void", "newSpringMeshInitialSize"_a);
		cl.def("GetSpringRotationOffset", (struct Rotator (SpringPickup::*)()) &SpringPickup::GetSpringRotationOffset, "C++: SpringPickup::GetSpringRotationOffset() --> struct Rotator");
		cl.def("SetSpringRotationOffset", (void (SpringPickup::*)(struct Rotator)) &SpringPickup::SetSpringRotationOffset, "C++: SpringPickup::SetSpringRotationOffset(struct Rotator) --> void", "newSpringRotationOffset"_a);
		cl.def("GetHittingMeshScale", (struct Vector (SpringPickup::*)()) &SpringPickup::GetHittingMeshScale, "C++: SpringPickup::GetHittingMeshScale() --> struct Vector");
		cl.def("SetHittingMeshScale", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetHittingMeshScale, "C++: SpringPickup::SetHittingMeshScale(struct Vector) --> void", "newHittingMeshScale"_a);
		cl.def("GetHittingMeshOffset", (struct Vector (SpringPickup::*)()) &SpringPickup::GetHittingMeshOffset, "C++: SpringPickup::GetHittingMeshOffset() --> struct Vector");
		cl.def("SetHittingMeshOffset", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetHittingMeshOffset, "C++: SpringPickup::SetHittingMeshOffset(struct Vector) --> void", "newHittingMeshOffset"_a);
		cl.def("GetHittingRotationOffset", (struct Rotator (SpringPickup::*)()) &SpringPickup::GetHittingRotationOffset, "C++: SpringPickup::GetHittingRotationOffset() --> struct Rotator");
		cl.def("SetHittingRotationOffset", (void (SpringPickup::*)(struct Rotator)) &SpringPickup::SetHittingRotationOffset, "C++: SpringPickup::SetHittingRotationOffset(struct Rotator) --> void", "newHittingRotationOffset"_a);
		cl.def("GetHitDistanceOffset", (float (SpringPickup::*)()) &SpringPickup::GetHitDistanceOffset, "C++: SpringPickup::GetHitDistanceOffset() --> float");
		cl.def("SetHitDistanceOffset", (void (SpringPickup::*)(float)) &SpringPickup::SetHitDistanceOffset, "C++: SpringPickup::SetHitDistanceOffset(float) --> void", "newHitDistanceOffset"_a);
		cl.def("GetAfterSpringDuration", (float (SpringPickup::*)()) &SpringPickup::GetAfterSpringDuration, "C++: SpringPickup::GetAfterSpringDuration() --> float");
		cl.def("SetAfterSpringDuration", (void (SpringPickup::*)(float)) &SpringPickup::SetAfterSpringDuration, "C++: SpringPickup::SetAfterSpringDuration(float) --> void", "newAfterSpringDuration"_a);
		cl.def("GetBallHitType", (unsigned char (SpringPickup::*)()) &SpringPickup::GetBallHitType, "C++: SpringPickup::GetBallHitType() --> unsigned char");
		cl.def("SetBallHitType", (void (SpringPickup::*)(unsigned char)) &SpringPickup::SetBallHitType, "C++: SpringPickup::SetBallHitType(unsigned char) --> void", "newBallHitType"_a);
		cl.def("GetMinSpringLength", (float (SpringPickup::*)()) &SpringPickup::GetMinSpringLength, "C++: SpringPickup::GetMinSpringLength() --> float");
		cl.def("SetMinSpringLength", (void (SpringPickup::*)(float)) &SpringPickup::SetMinSpringLength, "C++: SpringPickup::SetMinSpringLength(float) --> void", "newMinSpringLength"_a);
		cl.def("GetWeldedForceScalar", (float (SpringPickup::*)()) &SpringPickup::GetWeldedForceScalar, "C++: SpringPickup::GetWeldedForceScalar() --> float");
		cl.def("SetWeldedForceScalar", (void (SpringPickup::*)(float)) &SpringPickup::SetWeldedForceScalar, "C++: SpringPickup::SetWeldedForceScalar(float) --> void", "newWeldedForceScalar"_a);
		cl.def("GetWeldedVerticalForce", (float (SpringPickup::*)()) &SpringPickup::GetWeldedVerticalForce, "C++: SpringPickup::GetWeldedVerticalForce() --> float");
		cl.def("SetWeldedVerticalForce", (void (SpringPickup::*)(float)) &SpringPickup::SetWeldedVerticalForce, "C++: SpringPickup::SetWeldedVerticalForce(float) --> void", "newWeldedVerticalForce"_a);
		cl.def("GetCurrentSpringLength", (float (SpringPickup::*)()) &SpringPickup::GetCurrentSpringLength, "C++: SpringPickup::GetCurrentSpringLength() --> float");
		cl.def("SetCurrentSpringLength", (void (SpringPickup::*)(float)) &SpringPickup::SetCurrentSpringLength, "C++: SpringPickup::SetCurrentSpringLength(float) --> void", "newCurrentSpringLength"_a);
		cl.def("GetSpringedTime", (float (SpringPickup::*)()) &SpringPickup::GetSpringedTime, "C++: SpringPickup::GetSpringedTime() --> float");
		cl.def("SetSpringedTime", (void (SpringPickup::*)(float)) &SpringPickup::SetSpringedTime, "C++: SpringPickup::SetSpringedTime(float) --> void", "newSpringedTime"_a);
		cl.def("GetAfterSpringTime", (float (SpringPickup::*)()) &SpringPickup::GetAfterSpringTime, "C++: SpringPickup::GetAfterSpringTime() --> float");
		cl.def("SetAfterSpringTime", (void (SpringPickup::*)(float)) &SpringPickup::SetAfterSpringTime, "C++: SpringPickup::SetAfterSpringTime(float) --> void", "newAfterSpringTime"_a);
		cl.def("GetSpringToTime", (float (SpringPickup::*)()) &SpringPickup::GetSpringToTime, "C++: SpringPickup::GetSpringToTime() --> float");
		cl.def("SetSpringToTime", (void (SpringPickup::*)(float)) &SpringPickup::SetSpringToTime, "C++: SpringPickup::SetSpringToTime(float) --> void", "newSpringToTime"_a);
		cl.def("GetSpringOrigin", (struct Vector (SpringPickup::*)()) &SpringPickup::GetSpringOrigin, "C++: SpringPickup::GetSpringOrigin() --> struct Vector");
		cl.def("SetSpringOrigin", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetSpringOrigin, "C++: SpringPickup::SetSpringOrigin(struct Vector) --> void", "newSpringOrigin"_a);
		cl.def("GetSpringedLocation", (struct Vector (SpringPickup::*)()) &SpringPickup::GetSpringedLocation, "C++: SpringPickup::GetSpringedLocation() --> struct Vector");
		cl.def("SetSpringedLocation", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetSpringedLocation, "C++: SpringPickup::SetSpringedLocation(struct Vector) --> void", "newSpringedLocation"_a);
		cl.def("GetSpringedNormal", (struct Vector (SpringPickup::*)()) &SpringPickup::GetSpringedNormal, "C++: SpringPickup::GetSpringedNormal() --> struct Vector");
		cl.def("SetSpringedNormal", (void (SpringPickup::*)(struct Vector)) &SpringPickup::SetSpringedNormal, "C++: SpringPickup::SetSpringedNormal(struct Vector) --> void", "newSpringedNormal"_a);
		cl.def("GetSpringedLength", (float (SpringPickup::*)()) &SpringPickup::GetSpringedLength, "C++: SpringPickup::GetSpringedLength() --> float");
		cl.def("SetSpringedLength", (void (SpringPickup::*)(float)) &SpringPickup::SetSpringedLength, "C++: SpringPickup::SetSpringedLength(float) --> void", "newSpringedLength"_a);
		cl.def("PickupEnd", (void (SpringPickup::*)()) &SpringPickup::PickupEnd, "C++: SpringPickup::PickupEnd() --> void");
		cl.def("HandleCarTouchedBall", (void (SpringPickup::*)(class BallWrapper, class CarWrapper, unsigned char)) &SpringPickup::HandleCarTouchedBall, "C++: SpringPickup::HandleCarTouchedBall(class BallWrapper, class CarWrapper, unsigned char) --> void", "Ball"_a, "OtherCar"_a, "HitType"_a);
		cl.def("ScaleSpringMeshToLocation", (void (SpringPickup::*)(struct Vector &, struct Vector &)) &SpringPickup::ScaleSpringMeshToLocation, "C++: SpringPickup::ScaleSpringMeshToLocation(struct Vector &, struct Vector &) --> void", "NewLocation"_a, "TargetLoction"_a);
		cl.def("ApplyForces", (void (SpringPickup::*)(float)) &SpringPickup::ApplyForces, "C++: SpringPickup::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("GetRelativeConstantForce", (struct Vector (SpringPickup::*)(struct Vector &)) &SpringPickup::GetRelativeConstantForce, "C++: SpringPickup::GetRelativeConstantForce(struct Vector &) --> struct Vector", "Direction"_a);
		cl.def("GetRelativeImpulse", (struct Vector (SpringPickup::*)(struct Vector &)) &SpringPickup::GetRelativeImpulse, "C++: SpringPickup::GetRelativeImpulse(struct Vector &) --> struct Vector", "Direction"_a);
		cl.def("DoSpring", (void (SpringPickup::*)(unsigned long)) &SpringPickup::DoSpring, "C++: SpringPickup::DoSpring(unsigned long) --> void", "bFirstHit"_a);
		cl.def("PickupStart", (void (SpringPickup::*)()) &SpringPickup::PickupStart, "C++: SpringPickup::PickupStart() --> void");
	}
}
