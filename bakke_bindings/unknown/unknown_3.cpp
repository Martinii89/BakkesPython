#include "pch.h"
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameEvent/GameSettingPlaylistWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/AirControlComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/BoostWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/VehicleSimWrapper.h>
#include <bakkesmod/wrappers/StructArrayWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_unknown_unknown_3(py::module &M)
{
	{ // CarWrapper file: line:19
		pybind11::class_<CarWrapper, std::shared_ptr<CarWrapper>, VehicleWrapper> cl(M, "CarWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](CarWrapper const &o){ return new CarWrapper(o); } ) );
		cl.def("assign", (class CarWrapper & (CarWrapper::*)(class CarWrapper)) &CarWrapper::operator=, "C++: CarWrapper::operator=(class CarWrapper) --> class CarWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("IsBoostCheap", (bool (CarWrapper::*)()) &CarWrapper::IsBoostCheap, "C++: CarWrapper::IsBoostCheap() --> bool");
		cl.def("SetBoostCheap", (void (CarWrapper::*)(bool)) &CarWrapper::SetBoostCheap, "C++: CarWrapper::SetBoostCheap(bool) --> void", "b"_a);
		cl.def("SetCarRotation", (void (CarWrapper::*)(struct Rotator)) &CarWrapper::SetCarRotation, "C++: CarWrapper::SetCarRotation(struct Rotator) --> void", "rotation"_a);
		cl.def("ForceBoost", (void (CarWrapper::*)(bool)) &CarWrapper::ForceBoost, "C++: CarWrapper::ForceBoost(bool) --> void", "force"_a);
		cl.def("GetOwnerName", (std::string (CarWrapper::*)()) &CarWrapper::GetOwnerName, "C++: CarWrapper::GetOwnerName() --> std::string");
		cl.def("Unfreeze", (void (CarWrapper::*)()) &CarWrapper::Unfreeze, "C++: CarWrapper::Unfreeze() --> void");
		cl.def("GetInput", (struct ControllerInput (CarWrapper::*)()) &CarWrapper::GetInput, "C++: CarWrapper::GetInput() --> struct ControllerInput");
		cl.def("SetInput", (void (CarWrapper::*)(struct ControllerInput)) &CarWrapper::SetInput, "C++: CarWrapper::SetInput(struct ControllerInput) --> void", "input"_a);
		cl.def("Destroy", (void (CarWrapper::*)()) &CarWrapper::Destroy, "C++: CarWrapper::Destroy() --> void");
		cl.def("Demolish", (void (CarWrapper::*)()) &CarWrapper::Demolish, "C++: CarWrapper::Demolish() --> void");
		cl.def("GetLoadoutBody", (int (CarWrapper::*)()) &CarWrapper::GetLoadoutBody, "C++: CarWrapper::GetLoadoutBody() --> int");
		cl.def("GetDefaultCarComponents", (class ArrayWrapper<class CarComponentWrapper> (CarWrapper::*)()) &CarWrapper::GetDefaultCarComponents, "C++: CarWrapper::GetDefaultCarComponents() --> class ArrayWrapper<class CarComponentWrapper>");
		cl.def("GetFlipComponent", (class FlipCarComponentWrapper (CarWrapper::*)()) &CarWrapper::GetFlipComponent, "C++: CarWrapper::GetFlipComponent() --> class FlipCarComponentWrapper");
		cl.def("GetDemolishTarget", (unsigned char (CarWrapper::*)()) &CarWrapper::GetDemolishTarget, "C++: CarWrapper::GetDemolishTarget() --> unsigned char");
		cl.def("SetDemolishTarget", (void (CarWrapper::*)(unsigned char)) &CarWrapper::SetDemolishTarget, "C++: CarWrapper::SetDemolishTarget(unsigned char) --> void", "newDemolishTarget"_a);
		cl.def("GetDemolishSpeed", (unsigned char (CarWrapper::*)()) &CarWrapper::GetDemolishSpeed, "C++: CarWrapper::GetDemolishSpeed() --> unsigned char");
		cl.def("SetDemolishSpeed", (void (CarWrapper::*)(unsigned char)) &CarWrapper::SetDemolishSpeed, "C++: CarWrapper::SetDemolishSpeed(unsigned char) --> void", "newDemolishSpeed"_a);
		cl.def("GetbLoadoutSet", (unsigned long (CarWrapper::*)()) &CarWrapper::GetbLoadoutSet, "C++: CarWrapper::GetbLoadoutSet() --> unsigned long");
		cl.def("SetbLoadoutSet", (void (CarWrapper::*)(unsigned long)) &CarWrapper::SetbLoadoutSet, "C++: CarWrapper::SetbLoadoutSet(unsigned long) --> void", "newbLoadoutSet"_a);
		cl.def("GetbDemolishOnOpposingGround", (unsigned long (CarWrapper::*)()) &CarWrapper::GetbDemolishOnOpposingGround, "C++: CarWrapper::GetbDemolishOnOpposingGround() --> unsigned long");
		cl.def("SetbDemolishOnOpposingGround", (void (CarWrapper::*)(unsigned long)) &CarWrapper::SetbDemolishOnOpposingGround, "C++: CarWrapper::SetbDemolishOnOpposingGround(unsigned long) --> void", "newbDemolishOnOpposingGround"_a);
		cl.def("GetbWasOnOpposingGround", (unsigned long (CarWrapper::*)()) &CarWrapper::GetbWasOnOpposingGround, "C++: CarWrapper::GetbWasOnOpposingGround() --> unsigned long");
		cl.def("SetbWasOnOpposingGround", (void (CarWrapper::*)(unsigned long)) &CarWrapper::SetbWasOnOpposingGround, "C++: CarWrapper::SetbWasOnOpposingGround(unsigned long) --> void", "newbWasOnOpposingGround"_a);
		cl.def("GetbDemolishOnGoalZone", (unsigned long (CarWrapper::*)()) &CarWrapper::GetbDemolishOnGoalZone, "C++: CarWrapper::GetbDemolishOnGoalZone() --> unsigned long");
		cl.def("SetbDemolishOnGoalZone", (void (CarWrapper::*)(unsigned long)) &CarWrapper::SetbDemolishOnGoalZone, "C++: CarWrapper::SetbDemolishOnGoalZone(unsigned long) --> void", "newbDemolishOnGoalZone"_a);
		cl.def("GetbWasInGoalZone", (unsigned long (CarWrapper::*)()) &CarWrapper::GetbWasInGoalZone, "C++: CarWrapper::GetbWasInGoalZone() --> unsigned long");
		cl.def("SetbWasInGoalZone", (void (CarWrapper::*)(unsigned long)) &CarWrapper::SetbWasInGoalZone, "C++: CarWrapper::SetbWasInGoalZone(unsigned long) --> void", "newbWasInGoalZone"_a);
		cl.def("GetbOverrideHandbrakeOn", (unsigned long (CarWrapper::*)()) &CarWrapper::GetbOverrideHandbrakeOn, "C++: CarWrapper::GetbOverrideHandbrakeOn() --> unsigned long");
		cl.def("SetbOverrideHandbrakeOn", (void (CarWrapper::*)(unsigned long)) &CarWrapper::SetbOverrideHandbrakeOn, "C++: CarWrapper::SetbOverrideHandbrakeOn(unsigned long) --> void", "newbOverrideHandbrakeOn"_a);
		cl.def("GetbCollidesWithVehicles", (unsigned long (CarWrapper::*)()) &CarWrapper::GetbCollidesWithVehicles, "C++: CarWrapper::GetbCollidesWithVehicles() --> unsigned long");
		cl.def("SetbCollidesWithVehicles", (void (CarWrapper::*)(unsigned long)) &CarWrapper::SetbCollidesWithVehicles, "C++: CarWrapper::SetbCollidesWithVehicles(unsigned long) --> void", "newbCollidesWithVehicles"_a);
		cl.def("GetbOverrideBoostOn", (unsigned long (CarWrapper::*)()) &CarWrapper::GetbOverrideBoostOn, "C++: CarWrapper::GetbOverrideBoostOn() --> unsigned long");
		cl.def("SetbOverrideBoostOn", (void (CarWrapper::*)(unsigned long)) &CarWrapper::SetbOverrideBoostOn, "C++: CarWrapper::SetbOverrideBoostOn(unsigned long) --> void", "newbOverrideBoostOn"_a);
		cl.def("GetExitFXArchetype", (class FXActorWrapper (CarWrapper::*)()) &CarWrapper::GetExitFXArchetype, "C++: CarWrapper::GetExitFXArchetype() --> class FXActorWrapper");
		cl.def("SetExitFXArchetype", (void (CarWrapper::*)(class FXActorWrapper)) &CarWrapper::SetExitFXArchetype, "C++: CarWrapper::SetExitFXArchetype(class FXActorWrapper) --> void", "newExitFXArchetype"_a);
		cl.def("GetMaxTimeForDodge", (float (CarWrapper::*)()) &CarWrapper::GetMaxTimeForDodge, "C++: CarWrapper::GetMaxTimeForDodge() --> float");
		cl.def("SetMaxTimeForDodge", (void (CarWrapper::*)(float)) &CarWrapper::SetMaxTimeForDodge, "C++: CarWrapper::SetMaxTimeForDodge(float) --> void", "newMaxTimeForDodge"_a);
		cl.def("GetLastWheelsHitBallTime", (float (CarWrapper::*)()) &CarWrapper::GetLastWheelsHitBallTime, "C++: CarWrapper::GetLastWheelsHitBallTime() --> float");
		cl.def("SetLastWheelsHitBallTime", (void (CarWrapper::*)(float)) &CarWrapper::SetLastWheelsHitBallTime, "C++: CarWrapper::SetLastWheelsHitBallTime(float) --> void", "newLastWheelsHitBallTime"_a);
		cl.def("GetReplicatedCarScale", (float (CarWrapper::*)()) &CarWrapper::GetReplicatedCarScale, "C++: CarWrapper::GetReplicatedCarScale() --> float");
		cl.def("SetReplicatedCarScale", (void (CarWrapper::*)(float)) &CarWrapper::SetReplicatedCarScale, "C++: CarWrapper::SetReplicatedCarScale(float) --> void", "newReplicatedCarScale"_a);
		cl.def("GetBodyFXActor", (class FXActorWrapper (CarWrapper::*)()) &CarWrapper::GetBodyFXActor, "C++: CarWrapper::GetBodyFXActor() --> class FXActorWrapper");
		cl.def("SetBodyFXActor", (void (CarWrapper::*)(class FXActorWrapper)) &CarWrapper::SetBodyFXActor, "C++: CarWrapper::SetBodyFXActor(class FXActorWrapper) --> void", "newBodyFXActor"_a);
		cl.def("GetAttackerPRI", (class PriWrapper (CarWrapper::*)()) &CarWrapper::GetAttackerPRI, "C++: CarWrapper::GetAttackerPRI() --> class PriWrapper");
		cl.def("SetAttackerPRI", (void (CarWrapper::*)(class PriWrapper)) &CarWrapper::SetAttackerPRI, "C++: CarWrapper::SetAttackerPRI(class PriWrapper) --> void", "newAttackerPRI"_a);
		cl.def("GetMouseAccel", (struct Vector (CarWrapper::*)()) &CarWrapper::GetMouseAccel, "C++: CarWrapper::GetMouseAccel() --> struct Vector");
		cl.def("SetMouseAccel", (void (CarWrapper::*)(struct Vector)) &CarWrapper::SetMouseAccel, "C++: CarWrapper::SetMouseAccel(struct Vector) --> void", "newMouseAccel"_a);
		cl.def("GetMouseAirAccel", (struct Vector (CarWrapper::*)()) &CarWrapper::GetMouseAirAccel, "C++: CarWrapper::GetMouseAirAccel() --> struct Vector");
		cl.def("SetMouseAirAccel", (void (CarWrapper::*)(struct Vector)) &CarWrapper::SetMouseAirAccel, "C++: CarWrapper::SetMouseAirAccel(struct Vector) --> void", "newMouseAirAccel"_a);
		cl.def("GetAttachedPickup", (class RumblePickupComponentWrapper (CarWrapper::*)()) &CarWrapper::GetAttachedPickup, "C++: CarWrapper::GetAttachedPickup() --> class RumblePickupComponentWrapper");
		cl.def("SetAttachedPickup", (void (CarWrapper::*)(class RumblePickupComponentWrapper)) &CarWrapper::SetAttachedPickup, "C++: CarWrapper::SetAttachedPickup(class RumblePickupComponentWrapper) --> void", "newAttachedPickup"_a);
		cl.def("GetReplayFocusOffset", (struct Vector (CarWrapper::*)()) &CarWrapper::GetReplayFocusOffset, "C++: CarWrapper::GetReplayFocusOffset() --> struct Vector");
		cl.def("SetReplayFocusOffset", (void (CarWrapper::*)(struct Vector)) &CarWrapper::SetReplayFocusOffset, "C++: CarWrapper::SetReplayFocusOffset(struct Vector) --> void", "newReplayFocusOffset"_a);
		cl.def("GetAddedBallForceMultiplier", (float (CarWrapper::*)()) &CarWrapper::GetAddedBallForceMultiplier, "C++: CarWrapper::GetAddedBallForceMultiplier() --> float");
		cl.def("SetAddedBallForceMultiplier", (void (CarWrapper::*)(float)) &CarWrapper::SetAddedBallForceMultiplier, "C++: CarWrapper::SetAddedBallForceMultiplier(float) --> void", "newAddedBallForceMultiplier"_a);
		cl.def("GetAddedCarForceMultiplier", (float (CarWrapper::*)()) &CarWrapper::GetAddedCarForceMultiplier, "C++: CarWrapper::GetAddedCarForceMultiplier() --> float");
		cl.def("SetAddedCarForceMultiplier", (void (CarWrapper::*)(float)) &CarWrapper::SetAddedCarForceMultiplier, "C++: CarWrapper::SetAddedCarForceMultiplier(float) --> void", "newAddedCarForceMultiplier"_a);
		cl.def("GetGameEvent", (class GameEventWrapper (CarWrapper::*)()) &CarWrapper::GetGameEvent, "C++: CarWrapper::GetGameEvent() --> class GameEventWrapper");
		cl.def("SetGameEvent", (void (CarWrapper::*)(class GameEventWrapper)) &CarWrapper::SetGameEvent, "C++: CarWrapper::SetGameEvent(class GameEventWrapper) --> void", "newGameEvent"_a);
		cl.def("GetMaxDriveBackwardsSpeed", (float (CarWrapper::*)()) &CarWrapper::GetMaxDriveBackwardsSpeed, "C++: CarWrapper::GetMaxDriveBackwardsSpeed() --> float");
		cl.def("GetMaxDriveForwardSpeed", (float (CarWrapper::*)()) &CarWrapper::GetMaxDriveForwardSpeed, "C++: CarWrapper::GetMaxDriveForwardSpeed() --> float");
		cl.def("GetReplayFocusLocation", (struct Vector (CarWrapper::*)()) &CarWrapper::GetReplayFocusLocation, "C++: CarWrapper::GetReplayFocusLocation() --> struct Vector");
		cl.def("OnPickupChanged", (void (CarWrapper::*)(class RumblePickupComponentWrapper)) &CarWrapper::OnPickupChanged, "C++: CarWrapper::OnPickupChanged(class RumblePickupComponentWrapper) --> void", "InPickup"_a);
		cl.def("SetAttachedPickup2", (void (CarWrapper::*)(class RumblePickupComponentWrapper)) &CarWrapper::SetAttachedPickup2, "C++: CarWrapper::SetAttachedPickup2(class RumblePickupComponentWrapper) --> void", "InPickup"_a);
		cl.def("EnablePodiumMode", (void (CarWrapper::*)()) &CarWrapper::EnablePodiumMode, "C++: CarWrapper::EnablePodiumMode() --> void");
		cl.def("CopyPushFactorCurve", (void (CarWrapper::*)()) &CarWrapper::CopyPushFactorCurve, "C++: CarWrapper::CopyPushFactorCurve() --> void");
		cl.def("ClearAttacker", (void (CarWrapper::*)()) &CarWrapper::ClearAttacker, "C++: CarWrapper::ClearAttacker() --> void");
		cl.def("NotifyNewAttacker", (void (CarWrapper::*)(class PriWrapper)) &CarWrapper::NotifyNewAttacker, "C++: CarWrapper::NotifyNewAttacker(class PriWrapper) --> void", "Attacker"_a);
		cl.def("UpdateBallIndicator", (void (CarWrapper::*)()) &CarWrapper::UpdateBallIndicator, "C++: CarWrapper::UpdateBallIndicator() --> void");
		cl.def("eventOnSuperSonicChanged", (void (CarWrapper::*)()) &CarWrapper::eventOnSuperSonicChanged, "C++: CarWrapper::eventOnSuperSonicChanged() --> void");
		cl.def("eventOnGroundChanged", (void (CarWrapper::*)()) &CarWrapper::eventOnGroundChanged, "C++: CarWrapper::eventOnGroundChanged() --> void");
		cl.def("FellOutOfWorld", (void (CarWrapper::*)()) &CarWrapper::FellOutOfWorld, "C++: CarWrapper::FellOutOfWorld() --> void");
		cl.def("DemolishDestroyTimer", (void (CarWrapper::*)()) &CarWrapper::DemolishDestroyTimer, "C++: CarWrapper::DemolishDestroyTimer() --> void");
		cl.def("Demolish2", (void (CarWrapper::*)(class RBActorWrapper)) &CarWrapper::Demolish2, "C++: CarWrapper::Demolish2(class RBActorWrapper) --> void", "Demolisher"_a);
		cl.def("Teleport", (bool (CarWrapper::*)(struct Vector &, struct Rotator &, unsigned long, unsigned long, float)) &CarWrapper::Teleport, "C++: CarWrapper::Teleport(struct Vector &, struct Rotator &, unsigned long, unsigned long, float) --> bool", "SpawnLocation"_a, "SpawnRotation"_a, "bStopVelocity"_a, "bUpdateRotation"_a, "ExtraForce"_a);
		cl.def("OnJumpReleased", (void (CarWrapper::*)()) &CarWrapper::OnJumpReleased, "C++: CarWrapper::OnJumpReleased() --> void");
		cl.def("OnJumpPressed", (void (CarWrapper::*)()) &CarWrapper::OnJumpPressed, "C++: CarWrapper::OnJumpPressed() --> void");
		cl.def("eventSetVehicleInput", (void (CarWrapper::*)(struct ControllerInput &)) &CarWrapper::eventSetVehicleInput, "C++: CarWrapper::eventSetVehicleInput(struct ControllerInput &) --> void", "NewInput"_a);
		cl.def("CanDemolish", (bool (CarWrapper::*)(class CarWrapper)) &CarWrapper::CanDemolish, "C++: CarWrapper::CanDemolish(class CarWrapper) --> bool", "HitCar"_a);
		cl.def("ShouldDemolish", (bool (CarWrapper::*)(class CarWrapper, struct Vector &, struct Vector &, unsigned char *)) &CarWrapper::ShouldDemolish, "C++: CarWrapper::ShouldDemolish(class CarWrapper, struct Vector &, struct Vector &, unsigned char *) --> bool", "HitCar"_a, "HitLocation"_a, "HitNormal"_a, "Result"_a);
		cl.def("ApplyCarImpactForces", (unsigned char (CarWrapper::*)(class CarWrapper, struct Vector &, struct Vector &)) &CarWrapper::ApplyCarImpactForces, "C++: CarWrapper::ApplyCarImpactForces(class CarWrapper, struct Vector &, struct Vector &) --> unsigned char", "OtherCar"_a, "HitLocation"_a, "HitNormal"_a);
		cl.def("IsBumperHit", (bool (CarWrapper::*)(class CarWrapper)) &CarWrapper::IsBumperHit, "C++: CarWrapper::IsBumperHit(class CarWrapper) --> bool", "OtherCar"_a);
		cl.def("ApplyBallImpactForces", (void (CarWrapper::*)(class BallWrapper, struct Vector &)) &CarWrapper::ApplyBallImpactForces, "C++: CarWrapper::ApplyBallImpactForces(class BallWrapper, struct Vector &) --> void", "Ball"_a, "HitLocation"_a);
		cl.def("IsDodging", (bool (CarWrapper::*)()) &CarWrapper::IsDodging, "C++: CarWrapper::IsDodging() --> bool");
		cl.def("OnHitBall", (void (CarWrapper::*)(class BallWrapper, struct Vector &, struct Vector &)) &CarWrapper::OnHitBall, "C++: CarWrapper::OnHitBall(class BallWrapper, struct Vector &, struct Vector &) --> void", "Ball"_a, "HitLocation"_a, "HitNormal"_a);
		cl.def("AnyWheelTouchingGround", (bool (CarWrapper::*)()) &CarWrapper::AnyWheelTouchingGround, "C++: CarWrapper::AnyWheelTouchingGround() --> bool");
		cl.def("GiveCarComponent", (class CarComponentWrapper (CarWrapper::*)(class CarComponentWrapper, class PriWrapper)) &CarWrapper::GiveCarComponent, "C++: CarWrapper::GiveCarComponent(class CarComponentWrapper, class PriWrapper) --> class CarComponentWrapper", "ComponentArchetype"_a, "Activator"_a);
		cl.def("AddDefaultCarComponents", (void (CarWrapper::*)()) &CarWrapper::AddDefaultCarComponents, "C++: CarWrapper::AddDefaultCarComponents() --> void");
		cl.def("DetachPrimitiveComponent", (void (CarWrapper::*)(class PrimitiveComponentWrapper)) &CarWrapper::DetachPrimitiveComponent, "C++: CarWrapper::DetachPrimitiveComponent(class PrimitiveComponentWrapper) --> void", "Component"_a);
		cl.def("HandleWheelBallHit", (void (CarWrapper::*)(class WheelWrapper)) &CarWrapper::HandleWheelBallHit, "C++: CarWrapper::HandleWheelBallHit(class WheelWrapper) --> void", "Wheel"_a);
		cl.def("RespawnInPlace", (void (CarWrapper::*)()) &CarWrapper::RespawnInPlace, "C++: CarWrapper::RespawnInPlace() --> void");
		cl.def("SetCarScale", (void (CarWrapper::*)(float)) &CarWrapper::SetCarScale, "C++: CarWrapper::SetCarScale(float) --> void", "NewScale"_a);
		cl.def("OnClubColorsChanged", (void (CarWrapper::*)()) &CarWrapper::OnClubColorsChanged, "C++: CarWrapper::OnClubColorsChanged() --> void");
		cl.def("HandleTeamChanged", (void (CarWrapper::*)(class PriXWrapper)) &CarWrapper::HandleTeamChanged, "C++: CarWrapper::HandleTeamChanged(class PriXWrapper) --> void", "MyPRI"_a);
		cl.def("UpdateTeamLoadout", (bool (CarWrapper::*)()) &CarWrapper::UpdateTeamLoadout, "C++: CarWrapper::UpdateTeamLoadout() --> bool");
		cl.def("InitTeamPaint", (void (CarWrapper::*)()) &CarWrapper::InitTeamPaint, "C++: CarWrapper::InitTeamPaint() --> void");
		cl.def("GetLoadoutTeamIndex", (int (CarWrapper::*)()) &CarWrapper::GetLoadoutTeamIndex, "C++: CarWrapper::GetLoadoutTeamIndex() --> int");
		cl.def("GetPreviewTeamIndex", (int (CarWrapper::*)()) &CarWrapper::GetPreviewTeamIndex, "C++: CarWrapper::GetPreviewTeamIndex() --> int");
		cl.def("HasTeam", (bool (CarWrapper::*)()) &CarWrapper::HasTeam, "C++: CarWrapper::HasTeam() --> bool");
		cl.def("HandleLoadoutSelected", (void (CarWrapper::*)(class PriWrapper)) &CarWrapper::HandleLoadoutSelected, "C++: CarWrapper::HandleLoadoutSelected(class PriWrapper) --> void", "MyPRI"_a);
		cl.def("HandleGameEventChanged", (void (CarWrapper::*)(class PriWrapper)) &CarWrapper::HandleGameEventChanged, "C++: CarWrapper::HandleGameEventChanged(class PriWrapper) --> void", "MyPRI"_a);
		cl.def("OnPRIChanged", (void (CarWrapper::*)()) &CarWrapper::OnPRIChanged, "C++: CarWrapper::OnPRIChanged() --> void");
		cl.def("OnControllerChanged", (void (CarWrapper::*)()) &CarWrapper::OnControllerChanged, "C++: CarWrapper::OnControllerChanged() --> void");
	}
}
