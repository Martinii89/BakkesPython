#include "pch.h"
#include <bakkesmod/wrappers/Engine/EngineTAWrapper.h>
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameObject/BaseCameraWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/AirControlComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/BoostWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/DodgeComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/DoubleJumpComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/JumpComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/VehicleSimWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_unknown_unknown_2(py::module &M)
{
	{ // RBActorWrapper file: line:8
		pybind11::class_<RBActorWrapper, std::shared_ptr<RBActorWrapper>, ActorWrapper> cl(M, "RBActorWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](RBActorWrapper const &o){ return new RBActorWrapper(o); } ) );
		cl.def("assign", (class RBActorWrapper & (RBActorWrapper::*)(class RBActorWrapper)) &RBActorWrapper::operator=, "C++: RBActorWrapper::operator=(class RBActorWrapper) --> class RBActorWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetMaxLinearSpeed", (float (RBActorWrapper::*)()) &RBActorWrapper::GetMaxLinearSpeed, "C++: RBActorWrapper::GetMaxLinearSpeed() --> float");
		cl.def("SetMaxLinearSpeed", (void (RBActorWrapper::*)(float)) &RBActorWrapper::SetMaxLinearSpeed, "C++: RBActorWrapper::SetMaxLinearSpeed(float) --> void", pybind11::arg("newMaxLinearSpeed"));
		cl.def("GetMaxAngularSpeed", (float (RBActorWrapper::*)()) &RBActorWrapper::GetMaxAngularSpeed, "C++: RBActorWrapper::GetMaxAngularSpeed() --> float");
		cl.def("SetMaxAngularSpeed", (void (RBActorWrapper::*)(float)) &RBActorWrapper::SetMaxAngularSpeed, "C++: RBActorWrapper::SetMaxAngularSpeed(float) --> void", pybind11::arg("newMaxAngularSpeed"));
		cl.def("GetbDisableSleeping", (unsigned long (RBActorWrapper::*)()) &RBActorWrapper::GetbDisableSleeping, "C++: RBActorWrapper::GetbDisableSleeping() --> unsigned long");
		cl.def("SetbDisableSleeping", (void (RBActorWrapper::*)(unsigned long)) &RBActorWrapper::SetbDisableSleeping, "C++: RBActorWrapper::SetbDisableSleeping(unsigned long) --> void", pybind11::arg("newbDisableSleeping"));
		cl.def("GetbReplayActor", (unsigned long (RBActorWrapper::*)()) &RBActorWrapper::GetbReplayActor, "C++: RBActorWrapper::GetbReplayActor() --> unsigned long");
		cl.def("SetbReplayActor", (void (RBActorWrapper::*)(unsigned long)) &RBActorWrapper::SetbReplayActor, "C++: RBActorWrapper::SetbReplayActor(unsigned long) --> void", pybind11::arg("newbReplayActor"));
		cl.def("GetbFrozen", (unsigned long (RBActorWrapper::*)()) &RBActorWrapper::GetbFrozen, "C++: RBActorWrapper::GetbFrozen() --> unsigned long");
		cl.def("SetbFrozen", (void (RBActorWrapper::*)(unsigned long)) &RBActorWrapper::SetbFrozen, "C++: RBActorWrapper::SetbFrozen(unsigned long) --> void", pybind11::arg("newbFrozen"));
		cl.def("GetbIgnoreSyncing", (unsigned long (RBActorWrapper::*)()) &RBActorWrapper::GetbIgnoreSyncing, "C++: RBActorWrapper::GetbIgnoreSyncing() --> unsigned long");
		cl.def("SetbIgnoreSyncing", (void (RBActorWrapper::*)(unsigned long)) &RBActorWrapper::SetbIgnoreSyncing, "C++: RBActorWrapper::SetbIgnoreSyncing(unsigned long) --> void", pybind11::arg("newbIgnoreSyncing"));
		cl.def("GetbPhysInitialized", (unsigned long (RBActorWrapper::*)()) &RBActorWrapper::GetbPhysInitialized, "C++: RBActorWrapper::GetbPhysInitialized() --> unsigned long");
		cl.def("GetOldRBState", (struct RBState (RBActorWrapper::*)()) &RBActorWrapper::GetOldRBState, "C++: RBActorWrapper::GetOldRBState() --> struct RBState");
		cl.def("SetOldRBState", (void (RBActorWrapper::*)(struct RBState)) &RBActorWrapper::SetOldRBState, "C++: RBActorWrapper::SetOldRBState(struct RBState) --> void", pybind11::arg("newOldRBState"));
		cl.def("GetRBState", (struct RBState (RBActorWrapper::*)()) &RBActorWrapper::GetRBState, "C++: RBActorWrapper::GetRBState() --> struct RBState");
		cl.def("SetRBState", (void (RBActorWrapper::*)(struct RBState)) &RBActorWrapper::SetRBState, "C++: RBActorWrapper::SetRBState(struct RBState) --> void", pybind11::arg("newRBState"));
		cl.def("GetReplicatedRBState", (struct RBState (RBActorWrapper::*)()) &RBActorWrapper::GetReplicatedRBState, "C++: RBActorWrapper::GetReplicatedRBState() --> struct RBState");
		cl.def("SetReplicatedRBState", (void (RBActorWrapper::*)(struct RBState)) &RBActorWrapper::SetReplicatedRBState, "C++: RBActorWrapper::SetReplicatedRBState(struct RBState) --> void", pybind11::arg("newReplicatedRBState"));
		cl.def("GetClientCorrectionRBState", (struct RBState (RBActorWrapper::*)()) &RBActorWrapper::GetClientCorrectionRBState, "C++: RBActorWrapper::GetClientCorrectionRBState() --> struct RBState");
		cl.def("SetClientCorrectionRBState", (void (RBActorWrapper::*)(struct RBState)) &RBActorWrapper::SetClientCorrectionRBState, "C++: RBActorWrapper::SetClientCorrectionRBState(struct RBState) --> void", pybind11::arg("newClientCorrectionRBState"));
		cl.def("GetWorldContact", (struct WorldContactData (RBActorWrapper::*)()) &RBActorWrapper::GetWorldContact, "C++: RBActorWrapper::GetWorldContact() --> struct WorldContactData");
		cl.def("SetWorldContact", (void (RBActorWrapper::*)(struct WorldContactData)) &RBActorWrapper::SetWorldContact, "C++: RBActorWrapper::SetWorldContact(struct WorldContactData) --> void", pybind11::arg("newWorldContact"));
		cl.def("GetSyncErrorLocation", (struct Vector (RBActorWrapper::*)()) &RBActorWrapper::GetSyncErrorLocation, "C++: RBActorWrapper::GetSyncErrorLocation() --> struct Vector");
		cl.def("GetSyncErrorAngle", (float (RBActorWrapper::*)()) &RBActorWrapper::GetSyncErrorAngle, "C++: RBActorWrapper::GetSyncErrorAngle() --> float");
		cl.def("GetSyncErrorAxis", (struct Vector (RBActorWrapper::*)()) &RBActorWrapper::GetSyncErrorAxis, "C++: RBActorWrapper::GetSyncErrorAxis() --> struct Vector");
		cl.def("GetFXActorArchetype", (class FXActorWrapper (RBActorWrapper::*)()) &RBActorWrapper::GetFXActorArchetype, "C++: RBActorWrapper::GetFXActorArchetype() --> class FXActorWrapper");
		cl.def("SetFXActorArchetype", (void (RBActorWrapper::*)(class FXActorWrapper)) &RBActorWrapper::SetFXActorArchetype, "C++: RBActorWrapper::SetFXActorArchetype(class FXActorWrapper) --> void", pybind11::arg("newFXActorArchetype"));
		cl.def("GetFXActor", (class FXActorWrapper (RBActorWrapper::*)()) &RBActorWrapper::GetFXActor, "C++: RBActorWrapper::GetFXActor() --> class FXActorWrapper");
		cl.def("SetFXActor", (void (RBActorWrapper::*)(class FXActorWrapper)) &RBActorWrapper::SetFXActor, "C++: RBActorWrapper::SetFXActor(class FXActorWrapper) --> void", pybind11::arg("newFXActor"));
		cl.def("GetLastRBCollisionsFrame", (int (RBActorWrapper::*)()) &RBActorWrapper::GetLastRBCollisionsFrame, "C++: RBActorWrapper::GetLastRBCollisionsFrame() --> int");
		cl.def("GetWeldedActor", (class RBActorWrapper (RBActorWrapper::*)()) &RBActorWrapper::GetWeldedActor, "C++: RBActorWrapper::GetWeldedActor() --> class RBActorWrapper");
		cl.def("GetWeldedTo", (class RBActorWrapper (RBActorWrapper::*)()) &RBActorWrapper::GetWeldedTo, "C++: RBActorWrapper::GetWeldedTo() --> class RBActorWrapper");
		cl.def("GetPreWeldMass", (float (RBActorWrapper::*)()) &RBActorWrapper::GetPreWeldMass, "C++: RBActorWrapper::GetPreWeldMass() --> float");
		cl.def("SetMass", (void (RBActorWrapper::*)(float)) &RBActorWrapper::SetMass, "C++: RBActorWrapper::SetMass(float) --> void", pybind11::arg("NewMass"));
		cl.def("SetConstrained3D", (void (RBActorWrapper::*)(struct Vector &, struct Vector &, struct Vector &, struct Vector &)) &RBActorWrapper::SetConstrained3D, "C++: RBActorWrapper::SetConstrained3D(struct Vector &, struct Vector &, struct Vector &, struct Vector &) --> void", pybind11::arg("LinearLower"), pybind11::arg("LinearUpper"), pybind11::arg("AngularLower"), pybind11::arg("AngularUpper"));
		cl.def("SetConstrained2D", (void (RBActorWrapper::*)(unsigned long)) &RBActorWrapper::SetConstrained2D, "C++: RBActorWrapper::SetConstrained2D(unsigned long) --> void", pybind11::arg("bConstrain2D"));
		cl.def("SetPhysicsState", (void (RBActorWrapper::*)(struct RBState &)) &RBActorWrapper::SetPhysicsState, "C++: RBActorWrapper::SetPhysicsState(struct RBState &) --> void", pybind11::arg("NewState"));
		cl.def("SetFrozen", (void (RBActorWrapper::*)(unsigned long)) &RBActorWrapper::SetFrozen, "C++: RBActorWrapper::SetFrozen(unsigned long) --> void", pybind11::arg("bEnabled"));
		cl.def("SetMaxAngularSpeed2", (void (RBActorWrapper::*)(float)) &RBActorWrapper::SetMaxAngularSpeed2, "C++: RBActorWrapper::SetMaxAngularSpeed2(float) --> void", pybind11::arg("NewMaxSpeed"));
		cl.def("SetMaxLinearSpeed2", (void (RBActorWrapper::*)(float)) &RBActorWrapper::SetMaxLinearSpeed2, "C++: RBActorWrapper::SetMaxLinearSpeed2(float) --> void", pybind11::arg("NewMaxSpeed"));
		cl.def("AddTorque", (void (RBActorWrapper::*)(struct Vector &, unsigned char)) &RBActorWrapper::AddTorque, "C++: RBActorWrapper::AddTorque(struct Vector &, unsigned char) --> void", pybind11::arg("Torque"), pybind11::arg("ForceMode"));
		cl.def("AddForce", (void (RBActorWrapper::*)(struct Vector &, unsigned char)) &RBActorWrapper::AddForce, "C++: RBActorWrapper::AddForce(struct Vector &, unsigned char) --> void", pybind11::arg("Force"), pybind11::arg("ForceMode"));
		cl.def("UnWeldRBActor", (void (RBActorWrapper::*)(class RBActorWrapper)) &RBActorWrapper::UnWeldRBActor, "C++: RBActorWrapper::UnWeldRBActor(class RBActorWrapper) --> void", pybind11::arg("Other"));
		cl.def("WeldRBActor2", (void (RBActorWrapper::*)(class RBActorWrapper, struct Vector &, struct Rotator &)) &RBActorWrapper::WeldRBActor2, "C++: RBActorWrapper::WeldRBActor2(class RBActorWrapper, struct Vector &, struct Rotator &) --> void", pybind11::arg("Other"), pybind11::arg("WeldOffset"), pybind11::arg("WeldRotation"));
		cl.def("ReInitRBPhys", (void (RBActorWrapper::*)()) &RBActorWrapper::ReInitRBPhys, "C++: RBActorWrapper::ReInitRBPhys() --> void");
		cl.def("TerminateRBPhys", (void (RBActorWrapper::*)()) &RBActorWrapper::TerminateRBPhys, "C++: RBActorWrapper::TerminateRBPhys() --> void");
		cl.def("GetCurrentRBLocation", (struct Vector (RBActorWrapper::*)()) &RBActorWrapper::GetCurrentRBLocation, "C++: RBActorWrapper::GetCurrentRBLocation() --> struct Vector");
		cl.def("GetCurrentRBState", (struct RBState (RBActorWrapper::*)()) &RBActorWrapper::GetCurrentRBState, "C++: RBActorWrapper::GetCurrentRBState() --> struct RBState");
		cl.def("GetPhysicsFrame", (int (RBActorWrapper::*)()) &RBActorWrapper::GetPhysicsFrame, "C++: RBActorWrapper::GetPhysicsFrame() --> int");
		cl.def("GetPhysicsTime", (float (RBActorWrapper::*)()) &RBActorWrapper::GetPhysicsTime, "C++: RBActorWrapper::GetPhysicsTime() --> float");
		cl.def("InitAk", (void (RBActorWrapper::*)()) &RBActorWrapper::InitAk, "C++: RBActorWrapper::InitAk() --> void");
		cl.def("eventPreBeginPlay", (void (RBActorWrapper::*)()) &RBActorWrapper::eventPreBeginPlay, "C++: RBActorWrapper::eventPreBeginPlay() --> void");
	}
	{ // VehicleWrapper file: line:15
		pybind11::class_<VehicleWrapper, std::shared_ptr<VehicleWrapper>, RBActorWrapper> cl(M, "VehicleWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](VehicleWrapper const &o){ return new VehicleWrapper(o); } ) );
		cl.def("assign", (class VehicleWrapper & (VehicleWrapper::*)(class VehicleWrapper)) &VehicleWrapper::operator=, "C++: VehicleWrapper::operator=(class VehicleWrapper) --> class VehicleWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetVehicleSim", (class VehicleSimWrapper (VehicleWrapper::*)()) &VehicleWrapper::GetVehicleSim, "C++: VehicleWrapper::GetVehicleSim() --> class VehicleSimWrapper");
		cl.def("SetVehicleSim", (void (VehicleWrapper::*)(class VehicleSimWrapper)) &VehicleWrapper::SetVehicleSim, "C++: VehicleWrapper::SetVehicleSim(class VehicleSimWrapper) --> void", pybind11::arg("newVehicleSim"));
		cl.def("GetStickyForce", (struct StickyForceData (VehicleWrapper::*)()) &VehicleWrapper::GetStickyForce, "C++: VehicleWrapper::GetStickyForce() --> struct StickyForceData");
		cl.def("SetStickyForce", (void (VehicleWrapper::*)(struct StickyForceData)) &VehicleWrapper::SetStickyForce, "C++: VehicleWrapper::SetStickyForce(struct StickyForceData) --> void", pybind11::arg("newStickyForce"));
		cl.def("GetbDriving", (unsigned long (VehicleWrapper::*)()) &VehicleWrapper::GetbDriving, "C++: VehicleWrapper::GetbDriving() --> unsigned long");
		cl.def("SetbDriving", (void (VehicleWrapper::*)(unsigned long)) &VehicleWrapper::SetbDriving, "C++: VehicleWrapper::SetbDriving(unsigned long) --> void", pybind11::arg("newbDriving"));
		cl.def("GetbReplicatedHandbrake", (unsigned long (VehicleWrapper::*)()) &VehicleWrapper::GetbReplicatedHandbrake, "C++: VehicleWrapper::GetbReplicatedHandbrake() --> unsigned long");
		cl.def("SetbReplicatedHandbrake", (void (VehicleWrapper::*)(unsigned long)) &VehicleWrapper::SetbReplicatedHandbrake, "C++: VehicleWrapper::SetbReplicatedHandbrake(unsigned long) --> void", pybind11::arg("newbReplicatedHandbrake"));
		cl.def("GetbJumped", (unsigned long (VehicleWrapper::*)()) &VehicleWrapper::GetbJumped, "C++: VehicleWrapper::GetbJumped() --> unsigned long");
		cl.def("SetbJumped", (void (VehicleWrapper::*)(unsigned long)) &VehicleWrapper::SetbJumped, "C++: VehicleWrapper::SetbJumped(unsigned long) --> void", pybind11::arg("newbJumped"));
		cl.def("GetbDoubleJumped", (unsigned long (VehicleWrapper::*)()) &VehicleWrapper::GetbDoubleJumped, "C++: VehicleWrapper::GetbDoubleJumped() --> unsigned long");
		cl.def("SetbDoubleJumped", (void (VehicleWrapper::*)(unsigned long)) &VehicleWrapper::SetbDoubleJumped, "C++: VehicleWrapper::SetbDoubleJumped(unsigned long) --> void", pybind11::arg("newbDoubleJumped"));
		cl.def("GetbOnGround", (unsigned long (VehicleWrapper::*)()) &VehicleWrapper::GetbOnGround, "C++: VehicleWrapper::GetbOnGround() --> unsigned long");
		cl.def("SetbOnGround", (void (VehicleWrapper::*)(unsigned long)) &VehicleWrapper::SetbOnGround, "C++: VehicleWrapper::SetbOnGround(unsigned long) --> void", pybind11::arg("newbOnGround"));
		cl.def("GetbSuperSonic", (unsigned long (VehicleWrapper::*)()) &VehicleWrapper::GetbSuperSonic, "C++: VehicleWrapper::GetbSuperSonic() --> unsigned long");
		cl.def("SetbSuperSonic", (void (VehicleWrapper::*)(unsigned long)) &VehicleWrapper::SetbSuperSonic, "C++: VehicleWrapper::SetbSuperSonic(unsigned long) --> void", pybind11::arg("newbSuperSonic"));
		cl.def("GetbPodiumMode", (unsigned long (VehicleWrapper::*)()) &VehicleWrapper::GetbPodiumMode, "C++: VehicleWrapper::GetbPodiumMode() --> unsigned long");
		cl.def("SetbPodiumMode", (void (VehicleWrapper::*)(unsigned long)) &VehicleWrapper::SetbPodiumMode, "C++: VehicleWrapper::SetbPodiumMode(unsigned long) --> void", pybind11::arg("newbPodiumMode"));
		cl.def("GetInput", (struct ControllerInput (VehicleWrapper::*)()) &VehicleWrapper::GetInput, "C++: VehicleWrapper::GetInput() --> struct ControllerInput");
		cl.def("SetInput", (void (VehicleWrapper::*)(struct ControllerInput)) &VehicleWrapper::SetInput, "C++: VehicleWrapper::SetInput(struct ControllerInput) --> void", pybind11::arg("newInput"));
		cl.def("GetReplicatedThrottle", (unsigned char (VehicleWrapper::*)()) &VehicleWrapper::GetReplicatedThrottle, "C++: VehicleWrapper::GetReplicatedThrottle() --> unsigned char");
		cl.def("SetReplicatedThrottle", (void (VehicleWrapper::*)(unsigned char)) &VehicleWrapper::SetReplicatedThrottle, "C++: VehicleWrapper::SetReplicatedThrottle(unsigned char) --> void", pybind11::arg("newReplicatedThrottle"));
		cl.def("GetReplicatedSteer", (unsigned char (VehicleWrapper::*)()) &VehicleWrapper::GetReplicatedSteer, "C++: VehicleWrapper::GetReplicatedSteer() --> unsigned char");
		cl.def("SetReplicatedSteer", (void (VehicleWrapper::*)(unsigned char)) &VehicleWrapper::SetReplicatedSteer, "C++: VehicleWrapper::SetReplicatedSteer(unsigned char) --> void", pybind11::arg("newReplicatedSteer"));
		cl.def("GetPlayerController", (class PlayerControllerWrapper (VehicleWrapper::*)()) &VehicleWrapper::GetPlayerController, "C++: VehicleWrapper::GetPlayerController() --> class PlayerControllerWrapper");
		cl.def("SetPlayerController", (void (VehicleWrapper::*)(class PlayerControllerWrapper)) &VehicleWrapper::SetPlayerController, "C++: VehicleWrapper::SetPlayerController(class PlayerControllerWrapper) --> void", pybind11::arg("newPlayerController"));
		cl.def("GetPRI", (class PriWrapper (VehicleWrapper::*)()) &VehicleWrapper::GetPRI, "C++: VehicleWrapper::GetPRI() --> class PriWrapper");
		cl.def("SetPRI", (void (VehicleWrapper::*)(class PriWrapper)) &VehicleWrapper::SetPRI, "C++: VehicleWrapper::SetPRI(class PriWrapper) --> void", pybind11::arg("newPRI"));
		cl.def("GetVehicleUpdateTag", (int (VehicleWrapper::*)()) &VehicleWrapper::GetVehicleUpdateTag, "C++: VehicleWrapper::GetVehicleUpdateTag() --> int");
		cl.def("SetVehicleUpdateTag", (void (VehicleWrapper::*)(int)) &VehicleWrapper::SetVehicleUpdateTag, "C++: VehicleWrapper::SetVehicleUpdateTag(int) --> void", pybind11::arg("newVehicleUpdateTag"));
		cl.def("GetLocalCollisionOffset", (struct Vector (VehicleWrapper::*)()) &VehicleWrapper::GetLocalCollisionOffset, "C++: VehicleWrapper::GetLocalCollisionOffset() --> struct Vector");
		cl.def("SetLocalCollisionOffset", (void (VehicleWrapper::*)(struct Vector)) &VehicleWrapper::SetLocalCollisionOffset, "C++: VehicleWrapper::SetLocalCollisionOffset(struct Vector) --> void", pybind11::arg("newLocalCollisionOffset"));
		cl.def("GetLocalCollisionExtent", (struct Vector (VehicleWrapper::*)()) &VehicleWrapper::GetLocalCollisionExtent, "C++: VehicleWrapper::GetLocalCollisionExtent() --> struct Vector");
		cl.def("SetLocalCollisionExtent", (void (VehicleWrapper::*)(struct Vector)) &VehicleWrapper::SetLocalCollisionExtent, "C++: VehicleWrapper::SetLocalCollisionExtent(struct Vector) --> void", pybind11::arg("newLocalCollisionExtent"));
		cl.def("GetLastBallTouchFrame", (int (VehicleWrapper::*)()) &VehicleWrapper::GetLastBallTouchFrame, "C++: VehicleWrapper::GetLastBallTouchFrame() --> int");
		cl.def("SetLastBallTouchFrame", (void (VehicleWrapper::*)(int)) &VehicleWrapper::SetLastBallTouchFrame, "C++: VehicleWrapper::SetLastBallTouchFrame(int) --> void", pybind11::arg("newLastBallTouchFrame"));
		cl.def("GetLastBallImpactFrame", (int (VehicleWrapper::*)()) &VehicleWrapper::GetLastBallImpactFrame, "C++: VehicleWrapper::GetLastBallImpactFrame() --> int");
		cl.def("SetLastBallImpactFrame", (void (VehicleWrapper::*)(int)) &VehicleWrapper::SetLastBallImpactFrame, "C++: VehicleWrapper::SetLastBallImpactFrame(int) --> void", pybind11::arg("newLastBallImpactFrame"));
		cl.def("GetBoostComponent", (class BoostWrapper (VehicleWrapper::*)()) &VehicleWrapper::GetBoostComponent, "C++: VehicleWrapper::GetBoostComponent() --> class BoostWrapper");
		cl.def("GetDodgeComponent", (class DodgeComponentWrapper (VehicleWrapper::*)()) &VehicleWrapper::GetDodgeComponent, "C++: VehicleWrapper::GetDodgeComponent() --> class DodgeComponentWrapper");
		cl.def("GetAirControlComponent", (class AirControlComponentWrapper (VehicleWrapper::*)()) &VehicleWrapper::GetAirControlComponent, "C++: VehicleWrapper::GetAirControlComponent() --> class AirControlComponentWrapper");
		cl.def("GetJumpComponent", (class JumpComponentWrapper (VehicleWrapper::*)()) &VehicleWrapper::GetJumpComponent, "C++: VehicleWrapper::GetJumpComponent() --> class JumpComponentWrapper");
		cl.def("GetDoubleJumpComponent", (class DoubleJumpComponentWrapper (VehicleWrapper::*)()) &VehicleWrapper::GetDoubleJumpComponent, "C++: VehicleWrapper::GetDoubleJumpComponent() --> class DoubleJumpComponentWrapper");
		cl.def("SetDoubleJumpComponent", (void (VehicleWrapper::*)(class DoubleJumpComponentWrapper)) &VehicleWrapper::SetDoubleJumpComponent, "C++: VehicleWrapper::SetDoubleJumpComponent(class DoubleJumpComponentWrapper) --> void", pybind11::arg("newDoubleJumpComponent"));
		cl.def("GetTimeBelowSupersonicSpeed", (float (VehicleWrapper::*)()) &VehicleWrapper::GetTimeBelowSupersonicSpeed, "C++: VehicleWrapper::GetTimeBelowSupersonicSpeed() --> float");
		cl.def("SetTimeBelowSupersonicSpeed", (void (VehicleWrapper::*)(float)) &VehicleWrapper::SetTimeBelowSupersonicSpeed, "C++: VehicleWrapper::SetTimeBelowSupersonicSpeed(float) --> void", pybind11::arg("newTimeBelowSupersonicSpeed"));
		cl.def("ForceNetPacketIfNearBall", (void (VehicleWrapper::*)()) &VehicleWrapper::ForceNetPacketIfNearBall, "C++: VehicleWrapper::ForceNetPacketIfNearBall() --> void");
		cl.def("IsCarWithinForwardEllipticalCone", (bool (VehicleWrapper::*)(class VehicleWrapper, float, float)) &VehicleWrapper::IsCarWithinForwardEllipticalCone, "C++: VehicleWrapper::IsCarWithinForwardEllipticalCone(class VehicleWrapper, float, float) --> bool", pybind11::arg("OtherCar"), pybind11::arg("YawAngleDegrees"), pybind11::arg("PitchAngleDegrees"));
		cl.def("GetForwardSpeed", (float (VehicleWrapper::*)()) &VehicleWrapper::GetForwardSpeed, "C++: VehicleWrapper::GetForwardSpeed() --> float");
		cl.def("GetTimeOffGround", (float (VehicleWrapper::*)()) &VehicleWrapper::GetTimeOffGround, "C++: VehicleWrapper::GetTimeOffGround() --> float");
		cl.def("GetTimeOnGround", (float (VehicleWrapper::*)()) &VehicleWrapper::GetTimeOnGround, "C++: VehicleWrapper::GetTimeOnGround() --> float");
		cl.def("GetGroundNormal", (struct Vector (VehicleWrapper::*)()) &VehicleWrapper::GetGroundNormal, "C++: VehicleWrapper::GetGroundNormal() --> struct Vector");
		cl.def("IsOnWall", (bool (VehicleWrapper::*)()) &VehicleWrapper::IsOnWall, "C++: VehicleWrapper::IsOnWall() --> bool");
		cl.def("IsOnGround", (bool (VehicleWrapper::*)()) &VehicleWrapper::IsOnGround, "C++: VehicleWrapper::IsOnGround() --> bool");
		cl.def("GetNumWheelWorldContacts", (int (VehicleWrapper::*)()) &VehicleWrapper::GetNumWheelWorldContacts, "C++: VehicleWrapper::GetNumWheelWorldContacts() --> int");
		cl.def("GetNumWheelContacts", (int (VehicleWrapper::*)()) &VehicleWrapper::GetNumWheelContacts, "C++: VehicleWrapper::GetNumWheelContacts() --> int");
		cl.def("ZeroMovementVariables", (void (VehicleWrapper::*)()) &VehicleWrapper::ZeroMovementVariables, "C++: VehicleWrapper::ZeroMovementVariables() --> void");
		cl.def("eventSetVehicleInput", (void (VehicleWrapper::*)(struct ControllerInput &)) &VehicleWrapper::eventSetVehicleInput, "C++: VehicleWrapper::eventSetVehicleInput(struct ControllerInput &) --> void", pybind11::arg("NewInput"));
		cl.def("EnablePodiumMode", (void (VehicleWrapper::*)()) &VehicleWrapper::EnablePodiumMode, "C++: VehicleWrapper::EnablePodiumMode() --> void");
		cl.def("SetDriving", (void (VehicleWrapper::*)(unsigned long)) &VehicleWrapper::SetDriving, "C++: VehicleWrapper::SetDriving(unsigned long) --> void", pybind11::arg("bDrive"));
		cl.def("InitAudioParams", (void (VehicleWrapper::*)()) &VehicleWrapper::InitAudioParams, "C++: VehicleWrapper::InitAudioParams() --> void");
		cl.def("OnPRIChanged", (void (VehicleWrapper::*)()) &VehicleWrapper::OnPRIChanged, "C++: VehicleWrapper::OnPRIChanged() --> void");
		cl.def("OnControllerChanged", (void (VehicleWrapper::*)()) &VehicleWrapper::OnControllerChanged, "C++: VehicleWrapper::OnControllerChanged() --> void");
		cl.def("UnPossessed", (void (VehicleWrapper::*)()) &VehicleWrapper::UnPossessed, "C++: VehicleWrapper::UnPossessed() --> void");
		cl.def("EventPRIChanged", (void (VehicleWrapper::*)(class VehicleWrapper)) &VehicleWrapper::EventPRIChanged, "C++: VehicleWrapper::EventPRIChanged(class VehicleWrapper) --> void", pybind11::arg("Vehicle"));
	}
}
