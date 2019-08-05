#include "pch.h"
#include <bakkesmod/wrappers/Engine/EngineTAWrapper.h>
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameEvent/GameSettingPlaylistWrapper.h>
#include <bakkesmod/wrappers/GameEvent/ReplayDirectorWrapper.h>
#include <bakkesmod/wrappers/GameObject/BaseCameraWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/AirControlComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/BoostWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/StatGraphSystemWrapper.h>
#include <bakkesmod/wrappers/StructArrayWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_unknown_unknown_15(py::module &M)
{
	{ // PhysicalMaterialPropertyWrapper file: line:7
		pybind11::class_<PhysicalMaterialPropertyWrapper, std::shared_ptr<PhysicalMaterialPropertyWrapper>, ObjectWrapper> cl(M, "PhysicalMaterialPropertyWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](PhysicalMaterialPropertyWrapper const &o){ return new PhysicalMaterialPropertyWrapper(o); } ) );
		cl.def("assign", (class PhysicalMaterialPropertyWrapper & (PhysicalMaterialPropertyWrapper::*)(class PhysicalMaterialPropertyWrapper)) &PhysicalMaterialPropertyWrapper::operator=, "C++: PhysicalMaterialPropertyWrapper::operator=(class PhysicalMaterialPropertyWrapper) --> class PhysicalMaterialPropertyWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetTireFrictionScale", (float (PhysicalMaterialPropertyWrapper::*)()) &PhysicalMaterialPropertyWrapper::GetTireFrictionScale, "C++: PhysicalMaterialPropertyWrapper::GetTireFrictionScale() --> float");
		cl.def("SetTireFrictionScale", (void (PhysicalMaterialPropertyWrapper::*)(float)) &PhysicalMaterialPropertyWrapper::SetTireFrictionScale, "C++: PhysicalMaterialPropertyWrapper::SetTireFrictionScale(float) --> void", "newTireFrictionScale"_a);
		cl.def("GetbStickyWheels", (unsigned long (PhysicalMaterialPropertyWrapper::*)()) &PhysicalMaterialPropertyWrapper::GetbStickyWheels, "C++: PhysicalMaterialPropertyWrapper::GetbStickyWheels() --> unsigned long");
		cl.def("SetbStickyWheels", (void (PhysicalMaterialPropertyWrapper::*)(unsigned long)) &PhysicalMaterialPropertyWrapper::SetbStickyWheels, "C++: PhysicalMaterialPropertyWrapper::SetbStickyWheels(unsigned long) --> void", "newbStickyWheels"_a);
		cl.def("GetbConsiderForGround", (unsigned long (PhysicalMaterialPropertyWrapper::*)()) &PhysicalMaterialPropertyWrapper::GetbConsiderForGround, "C++: PhysicalMaterialPropertyWrapper::GetbConsiderForGround() --> unsigned long");
		cl.def("SetbConsiderForGround", (void (PhysicalMaterialPropertyWrapper::*)(unsigned long)) &PhysicalMaterialPropertyWrapper::SetbConsiderForGround, "C++: PhysicalMaterialPropertyWrapper::SetbConsiderForGround(unsigned long) --> void", "newbConsiderForGround"_a);
	}
	{ // PlayerControllerWrapper file: line:18
		pybind11::class_<PlayerControllerWrapper, std::shared_ptr<PlayerControllerWrapper>, ActorWrapper> cl(M, "PlayerControllerWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](PlayerControllerWrapper const &o){ return new PlayerControllerWrapper(o); } ) );
		cl.def("assign", (class PlayerControllerWrapper & (PlayerControllerWrapper::*)(class PlayerControllerWrapper)) &PlayerControllerWrapper::operator=, "C++: PlayerControllerWrapper::operator=(class PlayerControllerWrapper) --> class PlayerControllerWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetCar", (class CarWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetCar, "C++: PlayerControllerWrapper::GetCar() --> class CarWrapper");
		cl.def("SetCar", (void (PlayerControllerWrapper::*)(class CarWrapper)) &PlayerControllerWrapper::SetCar, "C++: PlayerControllerWrapper::SetCar(class CarWrapper) --> void", "newCar"_a);
		cl.def("GetPRI", (class PriWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetPRI, "C++: PlayerControllerWrapper::GetPRI() --> class PriWrapper");
		cl.def("SetPRI", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::SetPRI, "C++: PlayerControllerWrapper::SetPRI(class PriWrapper) --> void", "newPRI"_a);
		cl.def("GetVehicleInput", (struct ControllerInput (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetVehicleInput, "C++: PlayerControllerWrapper::GetVehicleInput() --> struct ControllerInput");
		cl.def("SetVehicleInput", (void (PlayerControllerWrapper::*)(struct ControllerInput)) &PlayerControllerWrapper::SetVehicleInput, "C++: PlayerControllerWrapper::SetVehicleInput(struct ControllerInput) --> void", "newVehicleInput"_a);
		cl.def("GetbReceivedServerShutdownMessage", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbReceivedServerShutdownMessage, "C++: PlayerControllerWrapper::GetbReceivedServerShutdownMessage() --> unsigned long");
		cl.def("SetbReceivedServerShutdownMessage", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbReceivedServerShutdownMessage, "C++: PlayerControllerWrapper::SetbReceivedServerShutdownMessage(unsigned long) --> void", "newbReceivedServerShutdownMessage"_a);
		cl.def("GetbUseDebugInputs", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbUseDebugInputs, "C++: PlayerControllerWrapper::GetbUseDebugInputs() --> unsigned long");
		cl.def("SetbUseDebugInputs", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbUseDebugInputs, "C++: PlayerControllerWrapper::SetbUseDebugInputs(unsigned long) --> void", "newbUseDebugInputs"_a);
		cl.def("GetbJumpPressed", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbJumpPressed, "C++: PlayerControllerWrapper::GetbJumpPressed() --> unsigned long");
		cl.def("SetbJumpPressed", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbJumpPressed, "C++: PlayerControllerWrapper::SetbJumpPressed(unsigned long) --> void", "newbJumpPressed"_a);
		cl.def("GetbBoostPressed", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbBoostPressed, "C++: PlayerControllerWrapper::GetbBoostPressed() --> unsigned long");
		cl.def("SetbBoostPressed", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbBoostPressed, "C++: PlayerControllerWrapper::SetbBoostPressed(unsigned long) --> void", "newbBoostPressed"_a);
		cl.def("GetbHandbrakePressed", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbHandbrakePressed, "C++: PlayerControllerWrapper::GetbHandbrakePressed() --> unsigned long");
		cl.def("SetbHandbrakePressed", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbHandbrakePressed, "C++: PlayerControllerWrapper::SetbHandbrakePressed(unsigned long) --> void", "newbHandbrakePressed"_a);
		cl.def("GetbHasPitchedBack", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbHasPitchedBack, "C++: PlayerControllerWrapper::GetbHasPitchedBack() --> unsigned long");
		cl.def("SetbHasPitchedBack", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbHasPitchedBack, "C++: PlayerControllerWrapper::SetbHasPitchedBack(unsigned long) --> void", "newbHasPitchedBack"_a);
		cl.def("GetbAllowAsymmetricalMute", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbAllowAsymmetricalMute, "C++: PlayerControllerWrapper::GetbAllowAsymmetricalMute() --> unsigned long");
		cl.def("SetbAllowAsymmetricalMute", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbAllowAsymmetricalMute, "C++: PlayerControllerWrapper::SetbAllowAsymmetricalMute(unsigned long) --> void", "newbAllowAsymmetricalMute"_a);
		cl.def("GetbResetCamera", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbResetCamera, "C++: PlayerControllerWrapper::GetbResetCamera() --> unsigned long");
		cl.def("SetbResetCamera", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbResetCamera, "C++: PlayerControllerWrapper::SetbResetCamera(unsigned long) --> void", "newbResetCamera"_a);
		cl.def("GetLoginURL", (class UnrealStringWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLoginURL, "C++: PlayerControllerWrapper::GetLoginURL() --> class UnrealStringWrapper");
		cl.def("GetVoiceFilter", (unsigned char (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetVoiceFilter, "C++: PlayerControllerWrapper::GetVoiceFilter() --> unsigned char");
		cl.def("SetVoiceFilter", (void (PlayerControllerWrapper::*)(unsigned char)) &PlayerControllerWrapper::SetVoiceFilter, "C++: PlayerControllerWrapper::SetVoiceFilter(unsigned char) --> void", "newVoiceFilter"_a);
		cl.def("GetChatFilter", (unsigned char (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetChatFilter, "C++: PlayerControllerWrapper::GetChatFilter() --> unsigned char");
		cl.def("SetChatFilter", (void (PlayerControllerWrapper::*)(unsigned char)) &PlayerControllerWrapper::SetChatFilter, "C++: PlayerControllerWrapper::SetChatFilter(unsigned char) --> void", "newChatFilter"_a);
		cl.def("GetFollowTarget", (class PriWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetFollowTarget, "C++: PlayerControllerWrapper::GetFollowTarget() --> class PriWrapper");
		cl.def("SetFollowTarget", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::SetFollowTarget, "C++: PlayerControllerWrapper::SetFollowTarget(class PriWrapper) --> void", "newFollowTarget"_a);
		cl.def("GetSpectatorCameraArchetype", (class BaseCameraWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetSpectatorCameraArchetype, "C++: PlayerControllerWrapper::GetSpectatorCameraArchetype() --> class BaseCameraWrapper");
		cl.def("SetSpectatorCameraArchetype", (void (PlayerControllerWrapper::*)(class BaseCameraWrapper)) &PlayerControllerWrapper::SetSpectatorCameraArchetype, "C++: PlayerControllerWrapper::SetSpectatorCameraArchetype(class BaseCameraWrapper) --> void", "newSpectatorCameraArchetype"_a);
		cl.def("GetEditorCameraArchetype", (class BaseCameraWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetEditorCameraArchetype, "C++: PlayerControllerWrapper::GetEditorCameraArchetype() --> class BaseCameraWrapper");
		cl.def("SetEditorCameraArchetype", (void (PlayerControllerWrapper::*)(class BaseCameraWrapper)) &PlayerControllerWrapper::SetEditorCameraArchetype, "C++: PlayerControllerWrapper::SetEditorCameraArchetype(class BaseCameraWrapper) --> void", "newEditorCameraArchetype"_a);
		cl.def("GetMoveActorGrabOffset", (struct Vector (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMoveActorGrabOffset, "C++: PlayerControllerWrapper::GetMoveActorGrabOffset() --> struct Vector");
		cl.def("SetMoveActorGrabOffset", (void (PlayerControllerWrapper::*)(struct Vector)) &PlayerControllerWrapper::SetMoveActorGrabOffset, "C++: PlayerControllerWrapper::SetMoveActorGrabOffset(struct Vector) --> void", "newMoveActorGrabOffset"_a);
		cl.def("GetMoveActorGrabIncrement", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMoveActorGrabIncrement, "C++: PlayerControllerWrapper::GetMoveActorGrabIncrement() --> float");
		cl.def("SetMoveActorGrabIncrement", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMoveActorGrabIncrement, "C++: PlayerControllerWrapper::SetMoveActorGrabIncrement(float) --> void", "newMoveActorGrabIncrement"_a);
		cl.def("GetMinMoveActorGrabDistance", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMinMoveActorGrabDistance, "C++: PlayerControllerWrapper::GetMinMoveActorGrabDistance() --> float");
		cl.def("SetMinMoveActorGrabDistance", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMinMoveActorGrabDistance, "C++: PlayerControllerWrapper::SetMinMoveActorGrabDistance(float) --> void", "newMinMoveActorGrabDistance"_a);
		cl.def("GetMouseIncrementSpeed", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMouseIncrementSpeed, "C++: PlayerControllerWrapper::GetMouseIncrementSpeed() --> float");
		cl.def("SetMouseIncrementSpeed", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMouseIncrementSpeed, "C++: PlayerControllerWrapper::SetMouseIncrementSpeed(float) --> void", "newMouseIncrementSpeed"_a);
		cl.def("GetBallVelocityIncrementAmount", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetBallVelocityIncrementAmount, "C++: PlayerControllerWrapper::GetBallVelocityIncrementAmount() --> float");
		cl.def("SetBallVelocityIncrementAmount", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetBallVelocityIncrementAmount, "C++: PlayerControllerWrapper::SetBallVelocityIncrementAmount(float) --> void", "newBallVelocityIncrementAmount"_a);
		cl.def("GetBallVelocityIncrementFireCount", (int (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetBallVelocityIncrementFireCount, "C++: PlayerControllerWrapper::GetBallVelocityIncrementFireCount() --> int");
		cl.def("SetBallVelocityIncrementFireCount", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::SetBallVelocityIncrementFireCount, "C++: PlayerControllerWrapper::SetBallVelocityIncrementFireCount(int) --> void", "newBallVelocityIncrementFireCount"_a);
		cl.def("GetBallVelocityIncrementFireCountMax", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetBallVelocityIncrementFireCountMax, "C++: PlayerControllerWrapper::GetBallVelocityIncrementFireCountMax() --> float");
		cl.def("SetBallVelocityIncrementFireCountMax", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetBallVelocityIncrementFireCountMax, "C++: PlayerControllerWrapper::SetBallVelocityIncrementFireCountMax(float) --> void", "newBallVelocityIncrementFireCountMax"_a);
		cl.def("GetBallVelocityIncrementSpeedDefault", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetBallVelocityIncrementSpeedDefault, "C++: PlayerControllerWrapper::GetBallVelocityIncrementSpeedDefault() --> float");
		cl.def("SetBallVelocityIncrementSpeedDefault", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetBallVelocityIncrementSpeedDefault, "C++: PlayerControllerWrapper::SetBallVelocityIncrementSpeedDefault(float) --> void", "newBallVelocityIncrementSpeedDefault"_a);
		cl.def("GetBallVelocityIncrementSpeedMax", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetBallVelocityIncrementSpeedMax, "C++: PlayerControllerWrapper::GetBallVelocityIncrementSpeedMax() --> float");
		cl.def("SetBallVelocityIncrementSpeedMax", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetBallVelocityIncrementSpeedMax, "C++: PlayerControllerWrapper::SetBallVelocityIncrementSpeedMax(float) --> void", "newBallVelocityIncrementSpeedMax"_a);
		cl.def("GetCrosshairTraceDistance", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetCrosshairTraceDistance, "C++: PlayerControllerWrapper::GetCrosshairTraceDistance() --> float");
		cl.def("SetCrosshairTraceDistance", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetCrosshairTraceDistance, "C++: PlayerControllerWrapper::SetCrosshairTraceDistance(float) --> void", "newCrosshairTraceDistance"_a);
		cl.def("GetTracedCrosshairActor", (class ActorWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetTracedCrosshairActor, "C++: PlayerControllerWrapper::GetTracedCrosshairActor() --> class ActorWrapper");
		cl.def("SetTracedCrosshairActor", (void (PlayerControllerWrapper::*)(class ActorWrapper)) &PlayerControllerWrapper::SetTracedCrosshairActor, "C++: PlayerControllerWrapper::SetTracedCrosshairActor(class ActorWrapper) --> void", "newTracedCrosshairActor"_a);
		cl.def("GetRotateActorCameraLocationOffset", (struct Vector (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetRotateActorCameraLocationOffset, "C++: PlayerControllerWrapper::GetRotateActorCameraLocationOffset() --> struct Vector");
		cl.def("SetRotateActorCameraLocationOffset", (void (PlayerControllerWrapper::*)(struct Vector)) &PlayerControllerWrapper::SetRotateActorCameraLocationOffset, "C++: PlayerControllerWrapper::SetRotateActorCameraLocationOffset(struct Vector) --> void", "newRotateActorCameraLocationOffset"_a);
		cl.def("GetRotateActorCameraRotationOffset", (struct Vector (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetRotateActorCameraRotationOffset, "C++: PlayerControllerWrapper::GetRotateActorCameraRotationOffset() --> struct Vector");
		cl.def("SetRotateActorCameraRotationOffset", (void (PlayerControllerWrapper::*)(struct Vector)) &PlayerControllerWrapper::SetRotateActorCameraRotationOffset, "C++: PlayerControllerWrapper::SetRotateActorCameraRotationOffset(struct Vector) --> void", "newRotateActorCameraRotationOffset"_a);
		cl.def("GetRotateActorCameraSide", (int (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetRotateActorCameraSide, "C++: PlayerControllerWrapper::GetRotateActorCameraSide() --> int");
		cl.def("SetRotateActorCameraSide", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::SetRotateActorCameraSide, "C++: PlayerControllerWrapper::SetRotateActorCameraSide(int) --> void", "newRotateActorCameraSide"_a);
		cl.def("GetDesiredCameraSide", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetDesiredCameraSide, "C++: PlayerControllerWrapper::GetDesiredCameraSide() --> float");
		cl.def("SetDesiredCameraSide", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetDesiredCameraSide, "C++: PlayerControllerWrapper::SetDesiredCameraSide(float) --> void", "newDesiredCameraSide"_a);
		cl.def("GetPawnTypeChangedTime", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetPawnTypeChangedTime, "C++: PlayerControllerWrapper::GetPawnTypeChangedTime() --> float");
		cl.def("SetPawnTypeChangedTime", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetPawnTypeChangedTime, "C++: PlayerControllerWrapper::SetPawnTypeChangedTime(float) --> void", "newPawnTypeChangedTime"_a);
		cl.def("GetSelectedSpawnArchetype", (int (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetSelectedSpawnArchetype, "C++: PlayerControllerWrapper::GetSelectedSpawnArchetype() --> int");
		cl.def("SetSelectedSpawnArchetype", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::SetSelectedSpawnArchetype, "C++: PlayerControllerWrapper::SetSelectedSpawnArchetype(int) --> void", "newSelectedSpawnArchetype"_a);
		cl.def("GetDebugInputs", (struct ControllerInput (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetDebugInputs, "C++: PlayerControllerWrapper::GetDebugInputs() --> struct ControllerInput");
		cl.def("SetDebugInputs", (void (PlayerControllerWrapper::*)(struct ControllerInput)) &PlayerControllerWrapper::SetDebugInputs, "C++: PlayerControllerWrapper::SetDebugInputs(struct ControllerInput) --> void", "newDebugInputs"_a);
		cl.def("GetMinClientInputRate", (int (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMinClientInputRate, "C++: PlayerControllerWrapper::GetMinClientInputRate() --> int");
		cl.def("SetMinClientInputRate", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::SetMinClientInputRate, "C++: PlayerControllerWrapper::SetMinClientInputRate(int) --> void", "newMinClientInputRate"_a);
		cl.def("GetMedianClientInputRate", (int (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMedianClientInputRate, "C++: PlayerControllerWrapper::GetMedianClientInputRate() --> int");
		cl.def("SetMedianClientInputRate", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::SetMedianClientInputRate, "C++: PlayerControllerWrapper::SetMedianClientInputRate(int) --> void", "newMedianClientInputRate"_a);
		cl.def("GetMaxClientInputRate", (int (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMaxClientInputRate, "C++: PlayerControllerWrapper::GetMaxClientInputRate() --> int");
		cl.def("SetMaxClientInputRate", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::SetMaxClientInputRate, "C++: PlayerControllerWrapper::SetMaxClientInputRate(int) --> void", "newMaxClientInputRate"_a);
		cl.def("GetConfiguredClientInputRate", (int (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetConfiguredClientInputRate, "C++: PlayerControllerWrapper::GetConfiguredClientInputRate() --> int");
		cl.def("SetConfiguredClientInputRate", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::SetConfiguredClientInputRate, "C++: PlayerControllerWrapper::SetConfiguredClientInputRate(int) --> void", "newConfiguredClientInputRate"_a);
		cl.def("GetTimeSinceLastMovePacket", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetTimeSinceLastMovePacket, "C++: PlayerControllerWrapper::GetTimeSinceLastMovePacket() --> float");
		cl.def("SetTimeSinceLastMovePacket", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetTimeSinceLastMovePacket, "C++: PlayerControllerWrapper::SetTimeSinceLastMovePacket(float) --> void", "newTimeSinceLastMovePacket"_a);
		cl.def("GetTimeLastReplicatedMovePacket", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetTimeLastReplicatedMovePacket, "C++: PlayerControllerWrapper::GetTimeLastReplicatedMovePacket() --> float");
		cl.def("SetTimeLastReplicatedMovePacket", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetTimeLastReplicatedMovePacket, "C++: PlayerControllerWrapper::SetTimeLastReplicatedMovePacket(float) --> void", "newTimeLastReplicatedMovePacket"_a);
		cl.def("GetMouseXDeadZone", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMouseXDeadZone, "C++: PlayerControllerWrapper::GetMouseXDeadZone() --> float");
		cl.def("SetMouseXDeadZone", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMouseXDeadZone, "C++: PlayerControllerWrapper::SetMouseXDeadZone(float) --> void", "newMouseXDeadZone"_a);
		cl.def("GetMouseYDeadZone", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMouseYDeadZone, "C++: PlayerControllerWrapper::GetMouseYDeadZone() --> float");
		cl.def("SetMouseYDeadZone", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMouseYDeadZone, "C++: PlayerControllerWrapper::SetMouseYDeadZone(float) --> void", "newMouseYDeadZone"_a);
		cl.def("GetMouseXDeadZoneAir", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMouseXDeadZoneAir, "C++: PlayerControllerWrapper::GetMouseXDeadZoneAir() --> float");
		cl.def("SetMouseXDeadZoneAir", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMouseXDeadZoneAir, "C++: PlayerControllerWrapper::SetMouseXDeadZoneAir(float) --> void", "newMouseXDeadZoneAir"_a);
		cl.def("GetMouseYDeadZoneAir", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMouseYDeadZoneAir, "C++: PlayerControllerWrapper::GetMouseYDeadZoneAir() --> float");
		cl.def("SetMouseYDeadZoneAir", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMouseYDeadZoneAir, "C++: PlayerControllerWrapper::SetMouseYDeadZoneAir(float) --> void", "newMouseYDeadZoneAir"_a);
		cl.def("GetLastInputs", (struct ControllerInput (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLastInputs, "C++: PlayerControllerWrapper::GetLastInputs() --> struct ControllerInput");
		cl.def("SetLastInputs", (void (PlayerControllerWrapper::*)(struct ControllerInput)) &PlayerControllerWrapper::SetLastInputs, "C++: PlayerControllerWrapper::SetLastInputs(struct ControllerInput) --> void", "newLastInputs"_a);
		cl.def("GetPendingViewPRI", (class PriWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetPendingViewPRI, "C++: PlayerControllerWrapper::GetPendingViewPRI() --> class PriWrapper");
		cl.def("SetPendingViewPRI", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::SetPendingViewPRI, "C++: PlayerControllerWrapper::SetPendingViewPRI(class PriWrapper) --> void", "newPendingViewPRI"_a);
		cl.def("GetLastInputPitchUp", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLastInputPitchUp, "C++: PlayerControllerWrapper::GetLastInputPitchUp() --> float");
		cl.def("SetLastInputPitchUp", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetLastInputPitchUp, "C++: PlayerControllerWrapper::SetLastInputPitchUp(float) --> void", "newLastInputPitchUp"_a);
		cl.def("GetLastInputPitchDown", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLastInputPitchDown, "C++: PlayerControllerWrapper::GetLastInputPitchDown() --> float");
		cl.def("SetLastInputPitchDown", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetLastInputPitchDown, "C++: PlayerControllerWrapper::SetLastInputPitchDown(float) --> void", "newLastInputPitchDown"_a);
		cl.def("GetLastInputYawLeft", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLastInputYawLeft, "C++: PlayerControllerWrapper::GetLastInputYawLeft() --> float");
		cl.def("SetLastInputYawLeft", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetLastInputYawLeft, "C++: PlayerControllerWrapper::SetLastInputYawLeft(float) --> void", "newLastInputYawLeft"_a);
		cl.def("GetLastInputYawRight", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLastInputYawRight, "C++: PlayerControllerWrapper::GetLastInputYawRight() --> float");
		cl.def("SetLastInputYawRight", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetLastInputYawRight, "C++: PlayerControllerWrapper::SetLastInputYawRight(float) --> void", "newLastInputYawRight"_a);
		cl.def("GetLastInputPitch", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLastInputPitch, "C++: PlayerControllerWrapper::GetLastInputPitch() --> float");
		cl.def("SetLastInputPitch", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetLastInputPitch, "C++: PlayerControllerWrapper::SetLastInputPitch(float) --> void", "newLastInputPitch"_a);
		cl.def("GetLastInputYaw", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLastInputYaw, "C++: PlayerControllerWrapper::GetLastInputYaw() --> float");
		cl.def("SetLastInputYaw", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetLastInputYaw, "C++: PlayerControllerWrapper::SetLastInputYaw(float) --> void", "newLastInputYaw"_a);
		cl.def("GetMouseInputMax", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMouseInputMax, "C++: PlayerControllerWrapper::GetMouseInputMax() --> float");
		cl.def("SetMouseInputMax", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMouseInputMax, "C++: PlayerControllerWrapper::SetMouseInputMax(float) --> void", "newMouseInputMax"_a);
		cl.def("GetEngineShare", (class EngineTAWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetEngineShare, "C++: PlayerControllerWrapper::GetEngineShare() --> class EngineTAWrapper");
		cl.def("SetEngineShare", (void (PlayerControllerWrapper::*)(class EngineTAWrapper)) &PlayerControllerWrapper::SetEngineShare, "C++: PlayerControllerWrapper::SetEngineShare(class EngineTAWrapper) --> void", "newEngineShare"_a);
		cl.def("HandleCarSet", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandleCarSet, "C++: PlayerControllerWrapper::HandleCarSet(class PriWrapper) --> void", "InPRI"_a);
		cl.def("SpawnSelectedArchetype", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::SpawnSelectedArchetype, "C++: PlayerControllerWrapper::SpawnSelectedArchetype() --> void");
		cl.def("RemoveActor", (bool (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::RemoveActor, "C++: PlayerControllerWrapper::RemoveActor() --> bool");
		cl.def("ToggleGrabActor", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ToggleGrabActor, "C++: PlayerControllerWrapper::ToggleGrabActor() --> void");
		cl.def("ToggleRotateActor", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ToggleRotateActor, "C++: PlayerControllerWrapper::ToggleRotateActor() --> void");
		cl.def("EditorReleaseActor", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorReleaseActor, "C++: PlayerControllerWrapper::EditorReleaseActor() --> void");
		cl.def("EditorCycleActor", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorCycleActor, "C++: PlayerControllerWrapper::EditorCycleActor() --> void");
		cl.def("DuplicateShot", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::DuplicateShot, "C++: PlayerControllerWrapper::DuplicateShot() --> void");
		cl.def("StopEditing", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::StopEditing, "C++: PlayerControllerWrapper::StopEditing() --> void");
		cl.def("EditorIncreasePower", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorIncreasePower, "C++: PlayerControllerWrapper::EditorIncreasePower() --> void");
		cl.def("EditorDecreasePower", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorDecreasePower, "C++: PlayerControllerWrapper::EditorDecreasePower() --> void");
		cl.def("EditorIncreasePowerToggleInterim", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorIncreasePowerToggleInterim, "C++: PlayerControllerWrapper::EditorIncreasePowerToggleInterim() --> void");
		cl.def("EditorDecreasePowerToggleInterim", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorDecreasePowerToggleInterim, "C++: PlayerControllerWrapper::EditorDecreasePowerToggleInterim() --> void");
		cl.def("EditorIncreasePowerToggle2", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::EditorIncreasePowerToggle2, "C++: PlayerControllerWrapper::EditorIncreasePowerToggle2(unsigned long) --> void", "bToggle"_a);
		cl.def("EditorDecreasePowerToggle2", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::EditorDecreasePowerToggle2, "C++: PlayerControllerWrapper::EditorDecreasePowerToggle2(unsigned long) --> void", "bToggle"_a);
		cl.def("ModifyEditorPower", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::ModifyEditorPower, "C++: PlayerControllerWrapper::ModifyEditorPower(int) --> void", "Direction"_a);
		cl.def("ToggleCameraPosition", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ToggleCameraPosition, "C++: PlayerControllerWrapper::ToggleCameraPosition() --> void");
		cl.def("EditorUndo", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorUndo, "C++: PlayerControllerWrapper::EditorUndo() --> void");
		cl.def("EditorRedo", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorRedo, "C++: PlayerControllerWrapper::EditorRedo() --> void");
		cl.def("EditorIncreaseRoundTime", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorIncreaseRoundTime, "C++: PlayerControllerWrapper::EditorIncreaseRoundTime() --> void");
		cl.def("EditorDecreaseRoundTime", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorDecreaseRoundTime, "C++: PlayerControllerWrapper::EditorDecreaseRoundTime() --> void");
		cl.def("EditorNextRound", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorNextRound, "C++: PlayerControllerWrapper::EditorNextRound() --> void");
		cl.def("EditorPrevRound", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorPrevRound, "C++: PlayerControllerWrapper::EditorPrevRound() --> void");
		cl.def("UpdateCrosshair", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::UpdateCrosshair, "C++: PlayerControllerWrapper::UpdateCrosshair() --> void");
		cl.def("NetClientInputRate", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::NetClientInputRate, "C++: PlayerControllerWrapper::NetClientInputRate(int) --> void", "Rate"_a);
		cl.def("ServerCreateMatchBroadcast", (void (PlayerControllerWrapper::*)(class ServerWrapper)) &PlayerControllerWrapper::ServerCreateMatchBroadcast, "C++: PlayerControllerWrapper::ServerCreateMatchBroadcast(class ServerWrapper) --> void", "GameEvent"_a);
		cl.def("ClampMoveActorGrabOffset", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ClampMoveActorGrabOffset, "C++: PlayerControllerWrapper::ClampMoveActorGrabOffset() --> void");
		cl.def("RevertToDefaultCameraHUDInput", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::RevertToDefaultCameraHUDInput, "C++: PlayerControllerWrapper::RevertToDefaultCameraHUDInput() --> void");
		cl.def("SwitchToEditPawn", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::SwitchToEditPawn, "C++: PlayerControllerWrapper::SwitchToEditPawn() --> void");
		cl.def("ServerResetPlayer", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::ServerResetPlayer, "C++: PlayerControllerWrapper::ServerResetPlayer(unsigned long) --> void", "bFullReset"_a);
		cl.def("ResetPlayerRun", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ResetPlayerRun, "C++: PlayerControllerWrapper::ResetPlayerRun() --> void");
		cl.def("ResetPlayerCheckpoint", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ResetPlayerCheckpoint, "C++: PlayerControllerWrapper::ResetPlayerCheckpoint() --> void");
		cl.def("ToggleEditorRound", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ToggleEditorRound, "C++: PlayerControllerWrapper::ToggleEditorRound() --> void");
		cl.def("ToggleBetweenCarAndEditPawn", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ToggleBetweenCarAndEditPawn, "C++: PlayerControllerWrapper::ToggleBetweenCarAndEditPawn() --> void");
		cl.def("Interact", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::Interact, "C++: PlayerControllerWrapper::Interact() --> void");
		cl.def("StopMovement", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::StopMovement, "C++: PlayerControllerWrapper::StopMovement(unsigned long) --> void", "bOnlyIfNoAccel"_a);
		cl.def("GetRotateActorCameraOffset", (struct Vector (PlayerControllerWrapper::*)(float, unsigned long)) &PlayerControllerWrapper::GetRotateActorCameraOffset, "C++: PlayerControllerWrapper::GetRotateActorCameraOffset(float, unsigned long) --> struct Vector", "DeltaTime"_a, "bSnap"_a);
		cl.def("RestoreEditorPawnOrientation", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::RestoreEditorPawnOrientation, "C++: PlayerControllerWrapper::RestoreEditorPawnOrientation() --> void");
		cl.def("BackupEditorPawnOrientation", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::BackupEditorPawnOrientation, "C++: PlayerControllerWrapper::BackupEditorPawnOrientation() --> void");
		cl.def("UpdateRotatedActorOrientation", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::UpdateRotatedActorOrientation, "C++: PlayerControllerWrapper::UpdateRotatedActorOrientation(float) --> void", "DeltaTime"_a);
		cl.def("OnOpenPauseMenu", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::OnOpenPauseMenu, "C++: PlayerControllerWrapper::OnOpenPauseMenu() --> void");
		cl.def("ResetMouseCenter", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ResetMouseCenter, "C++: PlayerControllerWrapper::ResetMouseCenter() --> void");
		cl.def("CalculateMouseAxis", (float (PlayerControllerWrapper::*)(float, float, float, float)) &PlayerControllerWrapper::CalculateMouseAxis, "C++: PlayerControllerWrapper::CalculateMouseAxis(float, float, float, float) --> float", "Center"_a, "CurrentLocation"_a, "Deadzone"_a, "MaxDist"_a);
		cl.def("ShowControllerApplet", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ShowControllerApplet, "C++: PlayerControllerWrapper::ShowControllerApplet() --> void");
		cl.def("ShowAccountPicker", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ShowAccountPicker, "C++: PlayerControllerWrapper::ShowAccountPicker() --> void");
		cl.def("QueSaveReplay", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::QueSaveReplay, "C++: PlayerControllerWrapper::QueSaveReplay() --> void");
		cl.def("SetFollowTarget2", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::SetFollowTarget2, "C++: PlayerControllerWrapper::SetFollowTarget2(class PriWrapper) --> void", "InTarget"_a);
		cl.def("FollowPlayer", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::FollowPlayer, "C++: PlayerControllerWrapper::FollowPlayer(class PriWrapper) --> void", "InPlayer"_a);
		cl.def("ClientSplitscreenJoinResponse", (void (PlayerControllerWrapper::*)(struct SteamID &, unsigned long, std::string)) &PlayerControllerWrapper::ClientSplitscreenJoinResponse, "C++: PlayerControllerWrapper::ClientSplitscreenJoinResponse(struct SteamID &, unsigned long, std::string) --> void", "PlayerID"_a, "bAllow"_a, "Error"_a);
		cl.def("ServerRequestSplitscreenJoin", (void (PlayerControllerWrapper::*)(struct SteamID &, std::string)) &PlayerControllerWrapper::ServerRequestSplitscreenJoin, "C++: PlayerControllerWrapper::ServerRequestSplitscreenJoin(struct SteamID &, std::string) --> void", "PlayerID"_a, "PlayerName"_a);
		cl.def("eventPreClientTravel", (bool (PlayerControllerWrapper::*)(std::string, unsigned char, unsigned long)) &PlayerControllerWrapper::eventPreClientTravel, "C++: PlayerControllerWrapper::eventPreClientTravel(std::string, unsigned char, unsigned long) --> bool", "PendingURL"_a, "TravelType"_a, "bIsSeamlessTravel"_a);
		cl.def("NotifyGoalScored", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::NotifyGoalScored, "C++: PlayerControllerWrapper::NotifyGoalScored(int) --> void", "ScoredOnTeam"_a);
		cl.def("eventDestroyed", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::eventDestroyed, "C++: PlayerControllerWrapper::eventDestroyed() --> void");
		cl.def("ShouldBeMuted", (bool (PlayerControllerWrapper::*)(class PlayerControllerWrapper)) &PlayerControllerWrapper::ShouldBeMuted, "C++: PlayerControllerWrapper::ShouldBeMuted(class PlayerControllerWrapper) --> bool", "Other"_a);
		cl.def("IsCommunicationFiltered", (bool (PlayerControllerWrapper::*)(unsigned char, class PlayerControllerWrapper, unsigned long)) &PlayerControllerWrapper::IsCommunicationFiltered, "C++: PlayerControllerWrapper::IsCommunicationFiltered(unsigned char, class PlayerControllerWrapper, unsigned long) --> bool", "Filter"_a, "Other"_a, "bPreset"_a);
		cl.def("RefreshMutedPlayers", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::RefreshMutedPlayers, "C++: PlayerControllerWrapper::RefreshMutedPlayers(unsigned long) --> void", "bForceRefresh"_a);
		cl.def("eventServerUnmutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID &)) &PlayerControllerWrapper::eventServerUnmutePlayer, "C++: PlayerControllerWrapper::eventServerUnmutePlayer(struct SteamID &) --> void", "PlayerNetId"_a);
		cl.def("eventServerMutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID &)) &PlayerControllerWrapper::eventServerMutePlayer, "C++: PlayerControllerWrapper::eventServerMutePlayer(struct SteamID &) --> void", "PlayerNetId"_a);
		cl.def("GameplayUnmutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID &)) &PlayerControllerWrapper::GameplayUnmutePlayer, "C++: PlayerControllerWrapper::GameplayUnmutePlayer(struct SteamID &) --> void", "PlayerNetId"_a);
		cl.def("GameplayMutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID &)) &PlayerControllerWrapper::GameplayMutePlayer, "C++: PlayerControllerWrapper::GameplayMutePlayer(struct SteamID &) --> void", "PlayerNetId"_a);
		cl.def("ServerSetChatFilter", (void (PlayerControllerWrapper::*)(unsigned char)) &PlayerControllerWrapper::ServerSetChatFilter, "C++: PlayerControllerWrapper::ServerSetChatFilter(unsigned char) --> void", "InVoiceFilter"_a);
		cl.def("ServerSetVoiceFilter", (void (PlayerControllerWrapper::*)(unsigned char)) &PlayerControllerWrapper::ServerSetVoiceFilter, "C++: PlayerControllerWrapper::ServerSetVoiceFilter(unsigned char) --> void", "InVoiceFilter"_a);
		cl.def("IsExplictlyMuted", (bool (PlayerControllerWrapper::*)(struct SteamID &)) &PlayerControllerWrapper::IsExplictlyMuted, "C++: PlayerControllerWrapper::IsExplictlyMuted(struct SteamID &) --> bool", "PlayerNetId"_a);
		cl.def("DebugAI", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::DebugAI, "C++: PlayerControllerWrapper::DebugAI() --> void");
		cl.def("SendPendingRPCs", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::SendPendingRPCs, "C++: PlayerControllerWrapper::SendPendingRPCs() --> void");
		cl.def("CanSendMessage", (bool (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::CanSendMessage, "C++: PlayerControllerWrapper::CanSendMessage(unsigned long) --> bool", "bQuickChatMessage"_a);
		cl.def("ClientNotifyChatBanned", (void (PlayerControllerWrapper::*)(unsigned long long)) &PlayerControllerWrapper::ClientNotifyChatBanned, "C++: PlayerControllerWrapper::ClientNotifyChatBanned(unsigned long long) --> void", "ChatBanExpiration"_a);
		cl.def("ClientNotifyChatDisabled", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::ClientNotifyChatDisabled, "C++: PlayerControllerWrapper::ClientNotifyChatDisabled(float) --> void", "Time"_a);
		cl.def("ChatMessage_TA", (void (PlayerControllerWrapper::*)(class PlayerReplicationInfoWrapper, std::string, unsigned char, unsigned long)) &PlayerControllerWrapper::ChatMessage_TA, "C++: PlayerControllerWrapper::ChatMessage_TA(class PlayerReplicationInfoWrapper, std::string, unsigned char, unsigned long) --> void", "InPRI"_a, "Message"_a, "ChatChannel"_a, "bPreset"_a);
		cl.def("ServerSayInternal_TA", (void (PlayerControllerWrapper::*)(std::string, unsigned char, unsigned long)) &PlayerControllerWrapper::ServerSayInternal_TA, "C++: PlayerControllerWrapper::ServerSayInternal_TA(std::string, unsigned char, unsigned long) --> void", "Message"_a, "ChatChannel"_a, "bPreset"_a);
		cl.def("ServerSay_TA", (void (PlayerControllerWrapper::*)(std::string, unsigned char, unsigned long)) &PlayerControllerWrapper::ServerSay_TA, "C++: PlayerControllerWrapper::ServerSay_TA(std::string, unsigned char, unsigned long) --> void", "Message"_a, "ChatChannel"_a, "bPreset"_a);
		cl.def("Say_TA2", (void (PlayerControllerWrapper::*)(std::string, unsigned char, struct SteamID &, unsigned long)) &PlayerControllerWrapper::Say_TA2, "C++: PlayerControllerWrapper::Say_TA2(std::string, unsigned char, struct SteamID &, unsigned long) --> void", "Message"_a, "ChatChannel"_a, "Recipient"_a, "bPreset"_a);
		cl.def("CanChatWith", (bool (PlayerControllerWrapper::*)(class PlayerControllerWrapper, unsigned long)) &PlayerControllerWrapper::CanChatWith, "C++: PlayerControllerWrapper::CanChatWith(class PlayerControllerWrapper, unsigned long) --> bool", "Other"_a, "bPreset"_a);
		cl.def("AllowTextMessage", (bool (PlayerControllerWrapper::*)(std::string)) &PlayerControllerWrapper::AllowTextMessage, "C++: PlayerControllerWrapper::AllowTextMessage(std::string) --> bool", "msg"_a);
		cl.def("PushToTalkEnd", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::PushToTalkEnd, "C++: PlayerControllerWrapper::PushToTalkEnd() --> void");
		cl.def("PushToTalk2", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::PushToTalk2, "C++: PlayerControllerWrapper::PushToTalk2() --> void");
		cl.def("HandleJoinGameMigrationCompleted", (void (PlayerControllerWrapper::*)(unsigned long, std::string)) &PlayerControllerWrapper::HandleJoinGameMigrationCompleted, "C++: PlayerControllerWrapper::HandleJoinGameMigrationCompleted(unsigned long, std::string) --> void", "bSuccess"_a, "FailReason"_a);
		cl.def("eventClientUnmutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID &)) &PlayerControllerWrapper::eventClientUnmutePlayer, "C++: PlayerControllerWrapper::eventClientUnmutePlayer(struct SteamID &) --> void", "PlayerNetId"_a);
		cl.def("eventClientMutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID &, unsigned long)) &PlayerControllerWrapper::eventClientMutePlayer, "C++: PlayerControllerWrapper::eventClientMutePlayer(struct SteamID &, unsigned long) --> void", "PlayerNetId"_a, "bAddToMuteList"_a);
		cl.def("ClientSetOnlineStatus", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ClientSetOnlineStatus, "C++: PlayerControllerWrapper::ClientSetOnlineStatus() --> void");
		cl.def("HandleGameDataSelected", (void (PlayerControllerWrapper::*)(int, int)) &PlayerControllerWrapper::HandleGameDataSelected, "C++: PlayerControllerWrapper::HandleGameDataSelected(int, int) --> void", "PlaylistId"_a, "MutatorIndex"_a);
		cl.def("GetGameEvent", (class GameEventWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetGameEvent, "C++: PlayerControllerWrapper::GetGameEvent() --> class GameEventWrapper");
		cl.def("ClientArbitratedMatchEnded", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ClientArbitratedMatchEnded, "C++: PlayerControllerWrapper::ClientArbitratedMatchEnded() --> void");
		cl.def("BannedKick", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::BannedKick, "C++: PlayerControllerWrapper::BannedKick() --> void");
		cl.def("NoReservationKick", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::NoReservationKick, "C++: PlayerControllerWrapper::NoReservationKick() --> void");
		cl.def("IdleKick2", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::IdleKick2, "C++: PlayerControllerWrapper::IdleKick2() --> void");
		cl.def("ServerReportServer", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ServerReportServer, "C++: PlayerControllerWrapper::ServerReportServer() --> void");
		cl.def("ClientUseItem", (void (PlayerControllerWrapper::*)(struct Vector &, struct Rotator &)) &PlayerControllerWrapper::ClientUseItem, "C++: PlayerControllerWrapper::ClientUseItem(struct Vector &, struct Rotator &) --> void", "UseLocation"_a, "UseRotation"_a);
		cl.def("ServerTeleportCar", (void (PlayerControllerWrapper::*)(struct Vector &, struct Rotator &)) &PlayerControllerWrapper::ServerTeleportCar, "C++: PlayerControllerWrapper::ServerTeleportCar(struct Vector &, struct Rotator &) --> void", "SpawnLocation"_a, "NewRotation"_a);
		cl.def("eventTeleportCar", (void (PlayerControllerWrapper::*)(struct Vector &, struct Rotator &)) &PlayerControllerWrapper::eventTeleportCar, "C++: PlayerControllerWrapper::eventTeleportCar(struct Vector &, struct Rotator &) --> void", "SpawnLocation"_a, "NewRotation"_a);
		cl.def("ServerUsePickup", (void (PlayerControllerWrapper::*)(class RBActorWrapper)) &PlayerControllerWrapper::ServerUsePickup, "C++: PlayerControllerWrapper::ServerUsePickup(class RBActorWrapper) --> void", "Target"_a);
		cl.def("UsePickup2", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::UsePickup2, "C++: PlayerControllerWrapper::UsePickup2() --> void");
		cl.def("ToggleHandbrake", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::ToggleHandbrake, "C++: PlayerControllerWrapper::ToggleHandbrake(unsigned long) --> void", "bHandbrake"_a);
		cl.def("ToggleBoost", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::ToggleBoost, "C++: PlayerControllerWrapper::ToggleBoost(unsigned long) --> void", "bBoost"_a);
		cl.def("ToggleJump", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::ToggleJump, "C++: PlayerControllerWrapper::ToggleJump(unsigned long) --> void", "bJump"_a);
		cl.def("TargetSelectLeft", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::TargetSelectLeft, "C++: PlayerControllerWrapper::TargetSelectLeft() --> void");
		cl.def("TargetSelectRight", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::TargetSelectRight, "C++: PlayerControllerWrapper::TargetSelectRight() --> void");
		cl.def("ReleaseRearCamera", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ReleaseRearCamera, "C++: PlayerControllerWrapper::ReleaseRearCamera() --> void");
		cl.def("PressRearCamera", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::PressRearCamera, "C++: PlayerControllerWrapper::PressRearCamera() --> void");
		cl.def("ReleaseSecondaryCamera", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ReleaseSecondaryCamera, "C++: PlayerControllerWrapper::ReleaseSecondaryCamera() --> void");
		cl.def("PressSecondaryCamera", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::PressSecondaryCamera, "C++: PlayerControllerWrapper::PressSecondaryCamera() --> void");
		cl.def("ReadyUp", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ReadyUp, "C++: PlayerControllerWrapper::ReadyUp() --> void");
		cl.def("Spectate", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::Spectate, "C++: PlayerControllerWrapper::Spectate() --> void");
		cl.def("ChangeTeam", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::ChangeTeam, "C++: PlayerControllerWrapper::ChangeTeam(int) --> void", "TeamNum"_a);
		cl.def("SwitchTeam", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::SwitchTeam, "C++: PlayerControllerWrapper::SwitchTeam() --> void");
		cl.def("SetDefaultCameraMode", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::SetDefaultCameraMode, "C++: PlayerControllerWrapper::SetDefaultCameraMode() --> void");
		cl.def("ResetCameraMode", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ResetCameraMode, "C++: PlayerControllerWrapper::ResetCameraMode() --> void");
		cl.def("ZeroMoveInput", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ZeroMoveInput, "C++: PlayerControllerWrapper::ZeroMoveInput() --> void");
		cl.def("PlayerMove", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::PlayerMove, "C++: PlayerControllerWrapper::PlayerMove(float) --> void", "DeltaTime"_a);
		cl.def("IgnoreMoveInput", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::IgnoreMoveInput, "C++: PlayerControllerWrapper::IgnoreMoveInput(unsigned long) --> void", "bNewMoveInput"_a);
		cl.def("eventSendClientAdjustment", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::eventSendClientAdjustment, "C++: PlayerControllerWrapper::eventSendClientAdjustment() --> void");
		cl.def("GetPrimaryPlayerController", (class PlayerControllerWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetPrimaryPlayerController, "C++: PlayerControllerWrapper::GetPrimaryPlayerController() --> class PlayerControllerWrapper");
		cl.def("HandleAddBoostComponent", (void (PlayerControllerWrapper::*)(class BoostWrapper)) &PlayerControllerWrapper::HandleAddBoostComponent, "C++: PlayerControllerWrapper::HandleAddBoostComponent(class BoostWrapper) --> void", "Boost"_a);
		cl.def("ReplicateLoadout", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ReplicateLoadout, "C++: PlayerControllerWrapper::ReplicateLoadout() --> void");
		cl.def("ReplicateCameraRotation", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ReplicateCameraRotation, "C++: PlayerControllerWrapper::ReplicateCameraRotation() --> void");
		cl.def("SetUsingFreecam", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetUsingFreecam, "C++: PlayerControllerWrapper::SetUsingFreecam(unsigned long) --> void", "bFreecam"_a);
		cl.def("SetUsingBehindView", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetUsingBehindView, "C++: PlayerControllerWrapper::SetUsingBehindView(unsigned long) --> void", "bBehindView"_a);
		cl.def("SetUsingSecondaryCamera", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetUsingSecondaryCamera, "C++: PlayerControllerWrapper::SetUsingSecondaryCamera(unsigned long) --> void", "bSecondaryCamera"_a);
		cl.def("ReplicateCameraSettings", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ReplicateCameraSettings, "C++: PlayerControllerWrapper::ReplicateCameraSettings() --> void");
		cl.def("HandleControllerLayoutChanged", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandleControllerLayoutChanged, "C++: PlayerControllerWrapper::HandleControllerLayoutChanged(class PriWrapper) --> void", "InPRI"_a);
		cl.def("HandlePawnTypeChanged", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandlePawnTypeChanged, "C++: PlayerControllerWrapper::HandlePawnTypeChanged(class PriWrapper) --> void", "InPRI"_a);
		cl.def("HandlePendingViewCarSet", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandlePendingViewCarSet, "C++: PlayerControllerWrapper::HandlePendingViewCarSet(class PriWrapper) --> void", "InPRI"_a);
		cl.def("HandleReplaceBot", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandleReplaceBot, "C++: PlayerControllerWrapper::HandleReplaceBot(class PriWrapper) --> void", "InPRI"_a);
		cl.def("HandleTeamChanged", (void (PlayerControllerWrapper::*)(class PriXWrapper)) &PlayerControllerWrapper::HandleTeamChanged, "C++: PlayerControllerWrapper::HandleTeamChanged(class PriXWrapper) --> void", "InPRI"_a);
		cl.def("HandleMatchEnded", (void (PlayerControllerWrapper::*)(class ServerWrapper)) &PlayerControllerWrapper::HandleMatchEnded, "C++: PlayerControllerWrapper::HandleMatchEnded(class ServerWrapper) --> void", "GameEvent"_a);
		cl.def("HandleStartNewRound", (void (PlayerControllerWrapper::*)(class ServerWrapper)) &PlayerControllerWrapper::HandleStartNewRound, "C++: PlayerControllerWrapper::HandleStartNewRound(class ServerWrapper) --> void", "GameEvent"_a);
		cl.def("HandleGameEventChanged", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandleGameEventChanged, "C++: PlayerControllerWrapper::HandleGameEventChanged(class PriWrapper) --> void", "InPRI"_a);
		cl.def("HandlePRICameraChanged", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandlePRICameraChanged, "C++: PlayerControllerWrapper::HandlePRICameraChanged(class PriWrapper) --> void", "InPRI"_a);
		cl.def("SetupLightBar", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::SetupLightBar, "C++: PlayerControllerWrapper::SetupLightBar() --> void");
		cl.def("HandlePersistentCameraSet", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandlePersistentCameraSet, "C++: PlayerControllerWrapper::HandlePersistentCameraSet(class PriWrapper) --> void", "InPRI"_a);
		cl.def("OnReceivedPlayerAndPRI", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::OnReceivedPlayerAndPRI, "C++: PlayerControllerWrapper::OnReceivedPlayerAndPRI() --> void");
		cl.def("UpdateVoiceFilter", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::UpdateVoiceFilter, "C++: PlayerControllerWrapper::UpdateVoiceFilter() --> void");
		cl.def("ReplicateLevelSessionID", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ReplicateLevelSessionID, "C++: PlayerControllerWrapper::ReplicateLevelSessionID() --> void");
		cl.def("ServerInitInputBuffer", (void (PlayerControllerWrapper::*)(unsigned char)) &PlayerControllerWrapper::ServerInitInputBuffer, "C++: PlayerControllerWrapper::ServerInitInputBuffer(unsigned char) --> void", "Type"_a);
		cl.def("eventReceivedPlayer", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::eventReceivedPlayer, "C++: PlayerControllerWrapper::eventReceivedPlayer() --> void");
		cl.def("eventPostBeginPlay", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::eventPostBeginPlay, "C++: PlayerControllerWrapper::eventPostBeginPlay() --> void");
		cl.def("EventChatMessage", (void (PlayerControllerWrapper::*)(class PlayerControllerWrapper, std::string, unsigned long)) &PlayerControllerWrapper::EventChatMessage, "C++: PlayerControllerWrapper::EventChatMessage(class PlayerControllerWrapper, std::string, unsigned long) --> void", "PC"_a, "Message"_a, "bPreset"_a);
		cl.def("EventResetPlayer", (void (PlayerControllerWrapper::*)(class PlayerControllerWrapper, unsigned long)) &PlayerControllerWrapper::EventResetPlayer, "C++: PlayerControllerWrapper::EventResetPlayer(class PlayerControllerWrapper, unsigned long) --> void", "PC"_a, "bFullReset"_a);
		cl.def("EventSelectBallCamTarget", (void (PlayerControllerWrapper::*)(class PlayerControllerWrapper, int)) &PlayerControllerWrapper::EventSelectBallCamTarget, "C++: PlayerControllerWrapper::EventSelectBallCamTarget(class PlayerControllerWrapper, int) --> void", "PC"_a, "Direction"_a);
		cl.def("EventTrainingEditorActorModified", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EventTrainingEditorActorModified, "C++: PlayerControllerWrapper::EventTrainingEditorActorModified() --> void");
		cl.def("EventMuteChanged", (void (PlayerControllerWrapper::*)(class PlayerControllerWrapper, struct SteamID &, unsigned long)) &PlayerControllerWrapper::EventMuteChanged, "C++: PlayerControllerWrapper::EventMuteChanged(class PlayerControllerWrapper, struct SteamID &, unsigned long) --> void", "PC"_a, "PlayerID"_a, "bMuted"_a);
		cl.def("EventLaunchControllerApplet", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EventLaunchControllerApplet, "C++: PlayerControllerWrapper::EventLaunchControllerApplet() --> void");
		cl.def("EventLaunchAccountPicker", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::EventLaunchAccountPicker, "C++: PlayerControllerWrapper::EventLaunchAccountPicker(int) --> void", "ControllerId"_a);
	}
}
