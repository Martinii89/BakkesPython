#include "pch.h"
#include <bakkesmod/wrappers/Engine/EngineTAWrapper.h>
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameEvent/GameSettingPlaylistWrapper.h>
#include <bakkesmod/wrappers/GameEvent/ReplayDirectorWrapper.h>
#include <bakkesmod/wrappers/GameObject/BaseCameraWrapper.h>
#include <bakkesmod/wrappers/GameObject/CameraWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/AirControlComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/BoostWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/StatGraphSystemWrapper.h>
#include <bakkesmod/wrappers/GameWrapper.h>
#include <bakkesmod/wrappers/StructArrayWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
//#include <bits/std_function.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>
#include <typeindex>
#include <typeinfo>


void bind_unknown_unknown_14(py::module &M)
{
	{ // MMRWrapper file: line:4
		pybind11::class_<MMRWrapper, std::shared_ptr<MMRWrapper>, ObjectWrapper> cl(M, "MMRWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](MMRWrapper const &o){ return new MMRWrapper(o); } ) );
		cl.def("assign", (class MMRWrapper & (MMRWrapper::*)(class MMRWrapper)) &MMRWrapper::operator=, "C++: MMRWrapper::operator=(class MMRWrapper) --> class MMRWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("IsSyncing", (bool (MMRWrapper::*)(struct SteamID)) &MMRWrapper::IsSyncing, "C++: MMRWrapper::IsSyncing(struct SteamID) --> bool", pybind11::arg("playerID"));
		cl.def("IsSynced", (bool (MMRWrapper::*)(struct SteamID, int)) &MMRWrapper::IsSynced, "C++: MMRWrapper::IsSynced(struct SteamID, int) --> bool", pybind11::arg("playerID"), pybind11::arg("playlistID"));
		cl.def("IsRanked", (bool (MMRWrapper::*)(int)) &MMRWrapper::IsRanked, "C++: MMRWrapper::IsRanked(int) --> bool", pybind11::arg("playlistID"));
		cl.def("GetPlayerSkillRating", (struct SkillRating (MMRWrapper::*)(struct SteamID, int)) &MMRWrapper::GetPlayerSkillRating, "C++: MMRWrapper::GetPlayerSkillRating(struct SteamID, int) --> struct SkillRating", pybind11::arg("playerID"), pybind11::arg("playlistID"));
		cl.def("GetPlayerMMR", (float (MMRWrapper::*)(struct SteamID, int)) &MMRWrapper::GetPlayerMMR, "C++: MMRWrapper::GetPlayerMMR(struct SteamID, int) --> float", pybind11::arg("playerID"), pybind11::arg("playlistID"));
		cl.def("CalculateMMR", (float (MMRWrapper::*)(struct SkillRating, bool)) &MMRWrapper::CalculateMMR, "C++: MMRWrapper::CalculateMMR(struct SkillRating, bool) --> float", pybind11::arg("sr"), pybind11::arg("disregardPlacements"));
		cl.def("GetCurrentPlaylist", (int (MMRWrapper::*)()) &MMRWrapper::GetCurrentPlaylist, "C++: MMRWrapper::GetCurrentPlaylist() --> int");
	}
	{ // GameWrapper file:bakkesmod/wrappers/GameWrapper.h line:20
		pybind11::class_<GameWrapper, std::shared_ptr<GameWrapper>> cl(M, "GameWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](GameWrapper const &o){ return new GameWrapper(o); } ) );
		//cl.def_readwrite("pimpl", &GameWrapper::pimpl);
		cl.def("assign", (class GameWrapper & (GameWrapper::*)(class GameWrapper)) &GameWrapper::operator=, "C++: GameWrapper::operator=(class GameWrapper) --> class GameWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("IsInGame", (bool (GameWrapper::*)()) &GameWrapper::IsInGame, "C++: GameWrapper::IsInGame() --> bool");
		cl.def("IsInOnlineGame", (bool (GameWrapper::*)()) &GameWrapper::IsInOnlineGame, "C++: GameWrapper::IsInOnlineGame() --> bool");
		cl.def("IsInFreeplay", (bool (GameWrapper::*)()) &GameWrapper::IsInFreeplay, "C++: GameWrapper::IsInFreeplay() --> bool");
		cl.def("IsInReplay", (bool (GameWrapper::*)()) &GameWrapper::IsInReplay, "C++: GameWrapper::IsInReplay() --> bool");
		cl.def("IsInCustomTraining", (bool (GameWrapper::*)()) &GameWrapper::IsInCustomTraining, "C++: GameWrapper::IsInCustomTraining() --> bool");
		cl.def("IsSpectatingInOnlineGame", (bool (GameWrapper::*)()) &GameWrapper::IsSpectatingInOnlineGame, "C++: GameWrapper::IsSpectatingInOnlineGame() --> bool");
		cl.def("GetOnlineGame", (class ServerWrapper (GameWrapper::*)()) &GameWrapper::GetOnlineGame, "C++: GameWrapper::GetOnlineGame() --> class ServerWrapper");
		cl.def("GetGameEventAsServer", (class ServerWrapper (GameWrapper::*)()) &GameWrapper::GetGameEventAsServer, "C++: GameWrapper::GetGameEventAsServer() --> class ServerWrapper");
		cl.def("GetGameEventAsReplay", (class ReplayServerWrapper (GameWrapper::*)()) &GameWrapper::GetGameEventAsReplay, "C++: GameWrapper::GetGameEventAsReplay() --> class ReplayServerWrapper");
		cl.def("GetMMRWrapper", (class MMRWrapper (GameWrapper::*)()) &GameWrapper::GetMMRWrapper, "C++: GameWrapper::GetMMRWrapper() --> class MMRWrapper");
		cl.def("GetLocalCar", (class CarWrapper (GameWrapper::*)()) &GameWrapper::GetLocalCar, "C++: GameWrapper::GetLocalCar() --> class CarWrapper");
		cl.def("GetCamera", (class CameraWrapper (GameWrapper::*)()) &GameWrapper::GetCamera, "C++: GameWrapper::GetCamera() --> class CameraWrapper");
		cl.def("GetEngine", (class EngineTAWrapper (GameWrapper::*)()) &GameWrapper::GetEngine, "C++: GameWrapper::GetEngine() --> class EngineTAWrapper");
		cl.def("OverrideParams", (void (GameWrapper::*)(void *, unsigned long)) &GameWrapper::OverrideParams, "C++: GameWrapper::OverrideParams(void *, unsigned long) --> void", pybind11::arg("src"), pybind11::arg("memsize"));
		cl.def("UnregisterDrawables", (void (GameWrapper::*)()) &GameWrapper::UnregisterDrawables, "C++: GameWrapper::UnregisterDrawables() --> void");
		cl.def("IsKeyPressed", (bool (GameWrapper::*)(int)) &GameWrapper::IsKeyPressed, "C++: GameWrapper::IsKeyPressed(int) --> bool", pybind11::arg("keyName"));
		cl.def("GetSteamID", (unsigned long long (GameWrapper::*)()) &GameWrapper::GetSteamID, "C++: GameWrapper::GetSteamID() --> unsigned long long");
		cl.def("HookEvent", &GameWrapper::HookEvent);
		cl.def("HookEventPost", &GameWrapper::HookEventPost);
		cl.def("UnhookEvent", &GameWrapper::UnhookEvent);
	}
	{ // FXActorWrapper file: line:7
		pybind11::class_<FXActorWrapper, std::shared_ptr<FXActorWrapper>, ActorWrapper> cl(M, "FXActorWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](FXActorWrapper const &o){ return new FXActorWrapper(o); } ) );
		cl.def("assign", (class FXActorWrapper & (FXActorWrapper::*)(class FXActorWrapper)) &FXActorWrapper::operator=, "C++: FXActorWrapper::operator=(class FXActorWrapper) --> class FXActorWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetbDeactivateWhenOwnerDestroyed", (unsigned long (FXActorWrapper::*)()) &FXActorWrapper::GetbDeactivateWhenOwnerDestroyed, "C++: FXActorWrapper::GetbDeactivateWhenOwnerDestroyed() --> unsigned long");
		cl.def("SetbDeactivateWhenOwnerDestroyed", (void (FXActorWrapper::*)(unsigned long)) &FXActorWrapper::SetbDeactivateWhenOwnerDestroyed, "C++: FXActorWrapper::SetbDeactivateWhenOwnerDestroyed(unsigned long) --> void", pybind11::arg("newbDeactivateWhenOwnerDestroyed"));
		cl.def("GetbAllowShadowCasting", (unsigned long (FXActorWrapper::*)()) &FXActorWrapper::GetbAllowShadowCasting, "C++: FXActorWrapper::GetbAllowShadowCasting() --> unsigned long");
		cl.def("SetbAllowShadowCasting", (void (FXActorWrapper::*)(unsigned long)) &FXActorWrapper::SetbAllowShadowCasting, "C++: FXActorWrapper::SetbAllowShadowCasting(unsigned long) --> void", pybind11::arg("newbAllowShadowCasting"));
		cl.def("GetbAutoActivate", (unsigned long (FXActorWrapper::*)()) &FXActorWrapper::GetbAutoActivate, "C++: FXActorWrapper::GetbAutoActivate() --> unsigned long");
		cl.def("SetbAutoActivate", (void (FXActorWrapper::*)(unsigned long)) &FXActorWrapper::SetbAutoActivate, "C++: FXActorWrapper::SetbAutoActivate(unsigned long) --> void", pybind11::arg("newbAutoActivate"));
		cl.def("GetbRenderInactive", (unsigned long (FXActorWrapper::*)()) &FXActorWrapper::GetbRenderInactive, "C++: FXActorWrapper::GetbRenderInactive() --> unsigned long");
		cl.def("SetbRenderInactive", (void (FXActorWrapper::*)(unsigned long)) &FXActorWrapper::SetbRenderInactive, "C++: FXActorWrapper::SetbRenderInactive(unsigned long) --> void", pybind11::arg("newbRenderInactive"));
		cl.def("GetbActive", (unsigned long (FXActorWrapper::*)()) &FXActorWrapper::GetbActive, "C++: FXActorWrapper::GetbActive() --> unsigned long");
		cl.def("SetbActive", (void (FXActorWrapper::*)(unsigned long)) &FXActorWrapper::SetbActive, "C++: FXActorWrapper::SetbActive(unsigned long) --> void", pybind11::arg("newbActive"));
		cl.def("GetbHadOwner", (unsigned long (FXActorWrapper::*)()) &FXActorWrapper::GetbHadOwner, "C++: FXActorWrapper::GetbHadOwner() --> unsigned long");
		cl.def("SetbHadOwner", (void (FXActorWrapper::*)(unsigned long)) &FXActorWrapper::SetbHadOwner, "C++: FXActorWrapper::SetbHadOwner(unsigned long) --> void", pybind11::arg("newbHadOwner"));
		cl.def("GetParent", (class FXActorWrapper (FXActorWrapper::*)()) &FXActorWrapper::GetParent, "C++: FXActorWrapper::GetParent() --> class FXActorWrapper");
		cl.def("SetParent", (void (FXActorWrapper::*)(class FXActorWrapper)) &FXActorWrapper::SetParent, "C++: FXActorWrapper::SetParent(class FXActorWrapper) --> void", pybind11::arg("newParent"));
		cl.def("GetAttachmentActor", (class ActorWrapper (FXActorWrapper::*)()) &FXActorWrapper::GetAttachmentActor, "C++: FXActorWrapper::GetAttachmentActor() --> class ActorWrapper");
		cl.def("SetAttachmentActor", (void (FXActorWrapper::*)(class ActorWrapper)) &FXActorWrapper::SetAttachmentActor, "C++: FXActorWrapper::SetAttachmentActor(class ActorWrapper) --> void", pybind11::arg("newAttachmentActor"));
		cl.def("GetDestroyWaitTime", (float (FXActorWrapper::*)()) &FXActorWrapper::GetDestroyWaitTime, "C++: FXActorWrapper::GetDestroyWaitTime() --> float");
		cl.def("SetDestroyWaitTime", (void (FXActorWrapper::*)(float)) &FXActorWrapper::SetDestroyWaitTime, "C++: FXActorWrapper::SetDestroyWaitTime(float) --> void", pybind11::arg("newDestroyWaitTime"));
		cl.def("GetDestroyTime", (float (FXActorWrapper::*)()) &FXActorWrapper::GetDestroyTime, "C++: FXActorWrapper::GetDestroyTime() --> float");
		cl.def("SetDestroyTime", (void (FXActorWrapper::*)(float)) &FXActorWrapper::SetDestroyTime, "C++: FXActorWrapper::SetDestroyTime(float) --> void", pybind11::arg("newDestroyTime"));
		cl.def("GetEditID", (int (FXActorWrapper::*)()) &FXActorWrapper::GetEditID, "C++: FXActorWrapper::GetEditID() --> int");
		cl.def("SetEditID", (void (FXActorWrapper::*)(int)) &FXActorWrapper::SetEditID, "C++: FXActorWrapper::SetEditID(int) --> void", pybind11::arg("newEditID"));
		cl.def("eventDumpDebugInfo", (void (FXActorWrapper::*)()) &FXActorWrapper::eventDumpDebugInfo, "C++: FXActorWrapper::eventDumpDebugInfo() --> void");
		cl.def("eventDestroyed", (void (FXActorWrapper::*)()) &FXActorWrapper::eventDestroyed, "C++: FXActorWrapper::eventDestroyed() --> void");
		cl.def("Inherit", (void (FXActorWrapper::*)(class FXActorWrapper)) &FXActorWrapper::Inherit, "C++: FXActorWrapper::Inherit(class FXActorWrapper) --> void", pybind11::arg("Other"));
		cl.def("ResetParticles", (void (FXActorWrapper::*)()) &FXActorWrapper::ResetParticles, "C++: FXActorWrapper::ResetParticles() --> void");
		cl.def("StopAllEffects", (void (FXActorWrapper::*)()) &FXActorWrapper::StopAllEffects, "C++: FXActorWrapper::StopAllEffects() --> void");
		cl.def("eventDeactivateAndDestroy", (void (FXActorWrapper::*)()) &FXActorWrapper::eventDeactivateAndDestroy, "C++: FXActorWrapper::eventDeactivateAndDestroy() --> void");
		cl.def("UpdateFXStates", (void (FXActorWrapper::*)()) &FXActorWrapper::UpdateFXStates, "C++: FXActorWrapper::UpdateFXStates() --> void");
		cl.def("IsLocallyControlled", (bool (FXActorWrapper::*)()) &FXActorWrapper::IsLocallyControlled, "C++: FXActorWrapper::IsLocallyControlled() --> bool");
		cl.def("Deactivate2", (void (FXActorWrapper::*)()) &FXActorWrapper::Deactivate2, "C++: FXActorWrapper::Deactivate2() --> void");
		cl.def("Activate2", (void (FXActorWrapper::*)()) &FXActorWrapper::Activate2, "C++: FXActorWrapper::Activate2() --> void");
		cl.def("BindTo", (void (FXActorWrapper::*)(class FXActorWrapper)) &FXActorWrapper::BindTo, "C++: FXActorWrapper::BindTo(class FXActorWrapper) --> void", pybind11::arg("ParentFXActor"));
		cl.def("SetAttachmentActor2", (void (FXActorWrapper::*)(class ActorWrapper)) &FXActorWrapper::SetAttachmentActor2, "C++: FXActorWrapper::SetAttachmentActor2(class ActorWrapper) --> void", pybind11::arg("AttachToActor"));
		cl.def("PostBeginPlay", (void (FXActorWrapper::*)()) &FXActorWrapper::PostBeginPlay, "C++: FXActorWrapper::PostBeginPlay() --> void");
	}
	{ // PhysicalMaterialPropertyWrapper file: line:7
		pybind11::class_<PhysicalMaterialPropertyWrapper, std::shared_ptr<PhysicalMaterialPropertyWrapper>, ObjectWrapper> cl(M, "PhysicalMaterialPropertyWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](PhysicalMaterialPropertyWrapper const &o){ return new PhysicalMaterialPropertyWrapper(o); } ) );
		cl.def("assign", (class PhysicalMaterialPropertyWrapper & (PhysicalMaterialPropertyWrapper::*)(class PhysicalMaterialPropertyWrapper)) &PhysicalMaterialPropertyWrapper::operator=, "C++: PhysicalMaterialPropertyWrapper::operator=(class PhysicalMaterialPropertyWrapper) --> class PhysicalMaterialPropertyWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetTireFrictionScale", (float (PhysicalMaterialPropertyWrapper::*)()) &PhysicalMaterialPropertyWrapper::GetTireFrictionScale, "C++: PhysicalMaterialPropertyWrapper::GetTireFrictionScale() --> float");
		cl.def("SetTireFrictionScale", (void (PhysicalMaterialPropertyWrapper::*)(float)) &PhysicalMaterialPropertyWrapper::SetTireFrictionScale, "C++: PhysicalMaterialPropertyWrapper::SetTireFrictionScale(float) --> void", pybind11::arg("newTireFrictionScale"));
		cl.def("GetbStickyWheels", (unsigned long (PhysicalMaterialPropertyWrapper::*)()) &PhysicalMaterialPropertyWrapper::GetbStickyWheels, "C++: PhysicalMaterialPropertyWrapper::GetbStickyWheels() --> unsigned long");
		cl.def("SetbStickyWheels", (void (PhysicalMaterialPropertyWrapper::*)(unsigned long)) &PhysicalMaterialPropertyWrapper::SetbStickyWheels, "C++: PhysicalMaterialPropertyWrapper::SetbStickyWheels(unsigned long) --> void", pybind11::arg("newbStickyWheels"));
		cl.def("GetbConsiderForGround", (unsigned long (PhysicalMaterialPropertyWrapper::*)()) &PhysicalMaterialPropertyWrapper::GetbConsiderForGround, "C++: PhysicalMaterialPropertyWrapper::GetbConsiderForGround() --> unsigned long");
		cl.def("SetbConsiderForGround", (void (PhysicalMaterialPropertyWrapper::*)(unsigned long)) &PhysicalMaterialPropertyWrapper::SetbConsiderForGround, "C++: PhysicalMaterialPropertyWrapper::SetbConsiderForGround(unsigned long) --> void", pybind11::arg("newbConsiderForGround"));
	}
	{ // PlayerControllerWrapper file: line:18
		pybind11::class_<PlayerControllerWrapper, std::shared_ptr<PlayerControllerWrapper>, ActorWrapper> cl(M, "PlayerControllerWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](PlayerControllerWrapper const &o){ return new PlayerControllerWrapper(o); } ) );
		cl.def("assign", (class PlayerControllerWrapper & (PlayerControllerWrapper::*)(class PlayerControllerWrapper)) &PlayerControllerWrapper::operator=, "C++: PlayerControllerWrapper::operator=(class PlayerControllerWrapper) --> class PlayerControllerWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetCar", (class CarWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetCar, "C++: PlayerControllerWrapper::GetCar() --> class CarWrapper");
		cl.def("SetCar", (void (PlayerControllerWrapper::*)(class CarWrapper)) &PlayerControllerWrapper::SetCar, "C++: PlayerControllerWrapper::SetCar(class CarWrapper) --> void", pybind11::arg("newCar"));
		cl.def("GetPRI", (class PriWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetPRI, "C++: PlayerControllerWrapper::GetPRI() --> class PriWrapper");
		cl.def("SetPRI", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::SetPRI, "C++: PlayerControllerWrapper::SetPRI(class PriWrapper) --> void", pybind11::arg("newPRI"));
		cl.def("GetVehicleInput", (struct ControllerInput (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetVehicleInput, "C++: PlayerControllerWrapper::GetVehicleInput() --> struct ControllerInput");
		cl.def("SetVehicleInput", (void (PlayerControllerWrapper::*)(struct ControllerInput)) &PlayerControllerWrapper::SetVehicleInput, "C++: PlayerControllerWrapper::SetVehicleInput(struct ControllerInput) --> void", pybind11::arg("newVehicleInput"));
		cl.def("GetbReceivedServerShutdownMessage", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbReceivedServerShutdownMessage, "C++: PlayerControllerWrapper::GetbReceivedServerShutdownMessage() --> unsigned long");
		cl.def("SetbReceivedServerShutdownMessage", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbReceivedServerShutdownMessage, "C++: PlayerControllerWrapper::SetbReceivedServerShutdownMessage(unsigned long) --> void", pybind11::arg("newbReceivedServerShutdownMessage"));
		//cl.def("GetbPendingIdleKick", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbPendingIdleKick, "C++: PlayerControllerWrapper::GetbPendingIdleKick() --> unsigned long");
		//cl.def("SetbPendingIdleKick", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbPendingIdleKick, "C++: PlayerControllerWrapper::SetbPendingIdleKick(unsigned long) --> void", pybind11::arg("newbPendingIdleKick"));
		cl.def("GetbUseDebugInputs", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbUseDebugInputs, "C++: PlayerControllerWrapper::GetbUseDebugInputs() --> unsigned long");
		cl.def("SetbUseDebugInputs", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbUseDebugInputs, "C++: PlayerControllerWrapper::SetbUseDebugInputs(unsigned long) --> void", pybind11::arg("newbUseDebugInputs"));
		cl.def("GetbJumpPressed", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbJumpPressed, "C++: PlayerControllerWrapper::GetbJumpPressed() --> unsigned long");
		cl.def("SetbJumpPressed", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbJumpPressed, "C++: PlayerControllerWrapper::SetbJumpPressed(unsigned long) --> void", pybind11::arg("newbJumpPressed"));
		cl.def("GetbBoostPressed", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbBoostPressed, "C++: PlayerControllerWrapper::GetbBoostPressed() --> unsigned long");
		cl.def("SetbBoostPressed", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbBoostPressed, "C++: PlayerControllerWrapper::SetbBoostPressed(unsigned long) --> void", pybind11::arg("newbBoostPressed"));
		cl.def("GetbHandbrakePressed", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbHandbrakePressed, "C++: PlayerControllerWrapper::GetbHandbrakePressed() --> unsigned long");
		cl.def("SetbHandbrakePressed", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbHandbrakePressed, "C++: PlayerControllerWrapper::SetbHandbrakePressed(unsigned long) --> void", pybind11::arg("newbHandbrakePressed"));
		cl.def("GetbHasPitchedBack", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbHasPitchedBack, "C++: PlayerControllerWrapper::GetbHasPitchedBack() --> unsigned long");
		cl.def("SetbHasPitchedBack", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbHasPitchedBack, "C++: PlayerControllerWrapper::SetbHasPitchedBack(unsigned long) --> void", pybind11::arg("newbHasPitchedBack"));
		cl.def("GetbAllowAsymmetricalMute", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbAllowAsymmetricalMute, "C++: PlayerControllerWrapper::GetbAllowAsymmetricalMute() --> unsigned long");
		cl.def("SetbAllowAsymmetricalMute", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbAllowAsymmetricalMute, "C++: PlayerControllerWrapper::SetbAllowAsymmetricalMute(unsigned long) --> void", pybind11::arg("newbAllowAsymmetricalMute"));
		cl.def("GetbResetCamera", (unsigned long (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetbResetCamera, "C++: PlayerControllerWrapper::GetbResetCamera() --> unsigned long");
		cl.def("SetbResetCamera", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetbResetCamera, "C++: PlayerControllerWrapper::SetbResetCamera(unsigned long) --> void", pybind11::arg("newbResetCamera"));
		cl.def("GetLoginURL", (class UnrealStringWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLoginURL, "C++: PlayerControllerWrapper::GetLoginURL() --> class UnrealStringWrapper");
		cl.def("GetVoiceFilter", (unsigned char (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetVoiceFilter, "C++: PlayerControllerWrapper::GetVoiceFilter() --> unsigned char");
		cl.def("SetVoiceFilter", (void (PlayerControllerWrapper::*)(unsigned char)) &PlayerControllerWrapper::SetVoiceFilter, "C++: PlayerControllerWrapper::SetVoiceFilter(unsigned char) --> void", pybind11::arg("newVoiceFilter"));
		cl.def("GetChatFilter", (unsigned char (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetChatFilter, "C++: PlayerControllerWrapper::GetChatFilter() --> unsigned char");
		cl.def("SetChatFilter", (void (PlayerControllerWrapper::*)(unsigned char)) &PlayerControllerWrapper::SetChatFilter, "C++: PlayerControllerWrapper::SetChatFilter(unsigned char) --> void", pybind11::arg("newChatFilter"));
		cl.def("GetFollowTarget", (class PriWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetFollowTarget, "C++: PlayerControllerWrapper::GetFollowTarget() --> class PriWrapper");
		cl.def("SetFollowTarget", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::SetFollowTarget, "C++: PlayerControllerWrapper::SetFollowTarget(class PriWrapper) --> void", pybind11::arg("newFollowTarget"));
		cl.def("GetSpectatorCameraArchetype", (class BaseCameraWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetSpectatorCameraArchetype, "C++: PlayerControllerWrapper::GetSpectatorCameraArchetype() --> class BaseCameraWrapper");
		cl.def("SetSpectatorCameraArchetype", (void (PlayerControllerWrapper::*)(class BaseCameraWrapper)) &PlayerControllerWrapper::SetSpectatorCameraArchetype, "C++: PlayerControllerWrapper::SetSpectatorCameraArchetype(class BaseCameraWrapper) --> void", pybind11::arg("newSpectatorCameraArchetype"));
		cl.def("GetEditorCameraArchetype", (class BaseCameraWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetEditorCameraArchetype, "C++: PlayerControllerWrapper::GetEditorCameraArchetype() --> class BaseCameraWrapper");
		cl.def("SetEditorCameraArchetype", (void (PlayerControllerWrapper::*)(class BaseCameraWrapper)) &PlayerControllerWrapper::SetEditorCameraArchetype, "C++: PlayerControllerWrapper::SetEditorCameraArchetype(class BaseCameraWrapper) --> void", pybind11::arg("newEditorCameraArchetype"));
		cl.def("GetMoveActorGrabOffset", (struct Vector (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMoveActorGrabOffset, "C++: PlayerControllerWrapper::GetMoveActorGrabOffset() --> struct Vector");
		cl.def("SetMoveActorGrabOffset", (void (PlayerControllerWrapper::*)(struct Vector)) &PlayerControllerWrapper::SetMoveActorGrabOffset, "C++: PlayerControllerWrapper::SetMoveActorGrabOffset(struct Vector) --> void", pybind11::arg("newMoveActorGrabOffset"));
		cl.def("GetMoveActorGrabIncrement", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMoveActorGrabIncrement, "C++: PlayerControllerWrapper::GetMoveActorGrabIncrement() --> float");
		cl.def("SetMoveActorGrabIncrement", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMoveActorGrabIncrement, "C++: PlayerControllerWrapper::SetMoveActorGrabIncrement(float) --> void", pybind11::arg("newMoveActorGrabIncrement"));
		cl.def("GetMinMoveActorGrabDistance", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMinMoveActorGrabDistance, "C++: PlayerControllerWrapper::GetMinMoveActorGrabDistance() --> float");
		cl.def("SetMinMoveActorGrabDistance", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMinMoveActorGrabDistance, "C++: PlayerControllerWrapper::SetMinMoveActorGrabDistance(float) --> void", pybind11::arg("newMinMoveActorGrabDistance"));
		cl.def("GetMouseIncrementSpeed", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMouseIncrementSpeed, "C++: PlayerControllerWrapper::GetMouseIncrementSpeed() --> float");
		cl.def("SetMouseIncrementSpeed", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMouseIncrementSpeed, "C++: PlayerControllerWrapper::SetMouseIncrementSpeed(float) --> void", pybind11::arg("newMouseIncrementSpeed"));
		cl.def("GetBallVelocityIncrementAmount", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetBallVelocityIncrementAmount, "C++: PlayerControllerWrapper::GetBallVelocityIncrementAmount() --> float");
		cl.def("SetBallVelocityIncrementAmount", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetBallVelocityIncrementAmount, "C++: PlayerControllerWrapper::SetBallVelocityIncrementAmount(float) --> void", pybind11::arg("newBallVelocityIncrementAmount"));
		cl.def("GetBallVelocityIncrementFireCount", (int (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetBallVelocityIncrementFireCount, "C++: PlayerControllerWrapper::GetBallVelocityIncrementFireCount() --> int");
		cl.def("SetBallVelocityIncrementFireCount", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::SetBallVelocityIncrementFireCount, "C++: PlayerControllerWrapper::SetBallVelocityIncrementFireCount(int) --> void", pybind11::arg("newBallVelocityIncrementFireCount"));
		cl.def("GetBallVelocityIncrementFireCountMax", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetBallVelocityIncrementFireCountMax, "C++: PlayerControllerWrapper::GetBallVelocityIncrementFireCountMax() --> float");
		cl.def("SetBallVelocityIncrementFireCountMax", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetBallVelocityIncrementFireCountMax, "C++: PlayerControllerWrapper::SetBallVelocityIncrementFireCountMax(float) --> void", pybind11::arg("newBallVelocityIncrementFireCountMax"));
		cl.def("GetBallVelocityIncrementSpeedDefault", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetBallVelocityIncrementSpeedDefault, "C++: PlayerControllerWrapper::GetBallVelocityIncrementSpeedDefault() --> float");
		cl.def("SetBallVelocityIncrementSpeedDefault", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetBallVelocityIncrementSpeedDefault, "C++: PlayerControllerWrapper::SetBallVelocityIncrementSpeedDefault(float) --> void", pybind11::arg("newBallVelocityIncrementSpeedDefault"));
		cl.def("GetBallVelocityIncrementSpeedMax", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetBallVelocityIncrementSpeedMax, "C++: PlayerControllerWrapper::GetBallVelocityIncrementSpeedMax() --> float");
		cl.def("SetBallVelocityIncrementSpeedMax", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetBallVelocityIncrementSpeedMax, "C++: PlayerControllerWrapper::SetBallVelocityIncrementSpeedMax(float) --> void", pybind11::arg("newBallVelocityIncrementSpeedMax"));
		cl.def("GetCrosshairTraceDistance", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetCrosshairTraceDistance, "C++: PlayerControllerWrapper::GetCrosshairTraceDistance() --> float");
		cl.def("SetCrosshairTraceDistance", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetCrosshairTraceDistance, "C++: PlayerControllerWrapper::SetCrosshairTraceDistance(float) --> void", pybind11::arg("newCrosshairTraceDistance"));
		cl.def("GetTracedCrosshairActor", (class ActorWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetTracedCrosshairActor, "C++: PlayerControllerWrapper::GetTracedCrosshairActor() --> class ActorWrapper");
		cl.def("SetTracedCrosshairActor", (void (PlayerControllerWrapper::*)(class ActorWrapper)) &PlayerControllerWrapper::SetTracedCrosshairActor, "C++: PlayerControllerWrapper::SetTracedCrosshairActor(class ActorWrapper) --> void", pybind11::arg("newTracedCrosshairActor"));
		cl.def("GetRotateActorCameraLocationOffset", (struct Vector (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetRotateActorCameraLocationOffset, "C++: PlayerControllerWrapper::GetRotateActorCameraLocationOffset() --> struct Vector");
		cl.def("SetRotateActorCameraLocationOffset", (void (PlayerControllerWrapper::*)(struct Vector)) &PlayerControllerWrapper::SetRotateActorCameraLocationOffset, "C++: PlayerControllerWrapper::SetRotateActorCameraLocationOffset(struct Vector) --> void", pybind11::arg("newRotateActorCameraLocationOffset"));
		cl.def("GetRotateActorCameraRotationOffset", (struct Vector (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetRotateActorCameraRotationOffset, "C++: PlayerControllerWrapper::GetRotateActorCameraRotationOffset() --> struct Vector");
		cl.def("SetRotateActorCameraRotationOffset", (void (PlayerControllerWrapper::*)(struct Vector)) &PlayerControllerWrapper::SetRotateActorCameraRotationOffset, "C++: PlayerControllerWrapper::SetRotateActorCameraRotationOffset(struct Vector) --> void", pybind11::arg("newRotateActorCameraRotationOffset"));
		cl.def("GetRotateActorCameraSide", (int (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetRotateActorCameraSide, "C++: PlayerControllerWrapper::GetRotateActorCameraSide() --> int");
		cl.def("SetRotateActorCameraSide", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::SetRotateActorCameraSide, "C++: PlayerControllerWrapper::SetRotateActorCameraSide(int) --> void", pybind11::arg("newRotateActorCameraSide"));
		cl.def("GetDesiredCameraSide", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetDesiredCameraSide, "C++: PlayerControllerWrapper::GetDesiredCameraSide() --> float");
		cl.def("SetDesiredCameraSide", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetDesiredCameraSide, "C++: PlayerControllerWrapper::SetDesiredCameraSide(float) --> void", pybind11::arg("newDesiredCameraSide"));
		cl.def("GetPawnTypeChangedTime", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetPawnTypeChangedTime, "C++: PlayerControllerWrapper::GetPawnTypeChangedTime() --> float");
		cl.def("SetPawnTypeChangedTime", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetPawnTypeChangedTime, "C++: PlayerControllerWrapper::SetPawnTypeChangedTime(float) --> void", pybind11::arg("newPawnTypeChangedTime"));
		cl.def("GetSelectedSpawnArchetype", (int (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetSelectedSpawnArchetype, "C++: PlayerControllerWrapper::GetSelectedSpawnArchetype() --> int");
		cl.def("SetSelectedSpawnArchetype", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::SetSelectedSpawnArchetype, "C++: PlayerControllerWrapper::SetSelectedSpawnArchetype(int) --> void", pybind11::arg("newSelectedSpawnArchetype"));
		cl.def("GetDebugInputs", (struct ControllerInput (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetDebugInputs, "C++: PlayerControllerWrapper::GetDebugInputs() --> struct ControllerInput");
		cl.def("SetDebugInputs", (void (PlayerControllerWrapper::*)(struct ControllerInput)) &PlayerControllerWrapper::SetDebugInputs, "C++: PlayerControllerWrapper::SetDebugInputs(struct ControllerInput) --> void", pybind11::arg("newDebugInputs"));
		cl.def("GetMinClientInputRate", (int (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMinClientInputRate, "C++: PlayerControllerWrapper::GetMinClientInputRate() --> int");
		cl.def("SetMinClientInputRate", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::SetMinClientInputRate, "C++: PlayerControllerWrapper::SetMinClientInputRate(int) --> void", pybind11::arg("newMinClientInputRate"));
		cl.def("GetMedianClientInputRate", (int (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMedianClientInputRate, "C++: PlayerControllerWrapper::GetMedianClientInputRate() --> int");
		cl.def("SetMedianClientInputRate", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::SetMedianClientInputRate, "C++: PlayerControllerWrapper::SetMedianClientInputRate(int) --> void", pybind11::arg("newMedianClientInputRate"));
		cl.def("GetMaxClientInputRate", (int (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMaxClientInputRate, "C++: PlayerControllerWrapper::GetMaxClientInputRate() --> int");
		cl.def("SetMaxClientInputRate", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::SetMaxClientInputRate, "C++: PlayerControllerWrapper::SetMaxClientInputRate(int) --> void", pybind11::arg("newMaxClientInputRate"));
		cl.def("GetConfiguredClientInputRate", (int (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetConfiguredClientInputRate, "C++: PlayerControllerWrapper::GetConfiguredClientInputRate() --> int");
		cl.def("SetConfiguredClientInputRate", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::SetConfiguredClientInputRate, "C++: PlayerControllerWrapper::SetConfiguredClientInputRate(int) --> void", pybind11::arg("newConfiguredClientInputRate"));
		cl.def("GetTimeSinceLastMovePacket", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetTimeSinceLastMovePacket, "C++: PlayerControllerWrapper::GetTimeSinceLastMovePacket() --> float");
		cl.def("SetTimeSinceLastMovePacket", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetTimeSinceLastMovePacket, "C++: PlayerControllerWrapper::SetTimeSinceLastMovePacket(float) --> void", pybind11::arg("newTimeSinceLastMovePacket"));
		cl.def("GetTimeLastReplicatedMovePacket", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetTimeLastReplicatedMovePacket, "C++: PlayerControllerWrapper::GetTimeLastReplicatedMovePacket() --> float");
		cl.def("SetTimeLastReplicatedMovePacket", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetTimeLastReplicatedMovePacket, "C++: PlayerControllerWrapper::SetTimeLastReplicatedMovePacket(float) --> void", pybind11::arg("newTimeLastReplicatedMovePacket"));
		cl.def("GetMouseXDeadZone", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMouseXDeadZone, "C++: PlayerControllerWrapper::GetMouseXDeadZone() --> float");
		cl.def("SetMouseXDeadZone", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMouseXDeadZone, "C++: PlayerControllerWrapper::SetMouseXDeadZone(float) --> void", pybind11::arg("newMouseXDeadZone"));
		cl.def("GetMouseYDeadZone", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMouseYDeadZone, "C++: PlayerControllerWrapper::GetMouseYDeadZone() --> float");
		cl.def("SetMouseYDeadZone", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMouseYDeadZone, "C++: PlayerControllerWrapper::SetMouseYDeadZone(float) --> void", pybind11::arg("newMouseYDeadZone"));
		cl.def("GetMouseXDeadZoneAir", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMouseXDeadZoneAir, "C++: PlayerControllerWrapper::GetMouseXDeadZoneAir() --> float");
		cl.def("SetMouseXDeadZoneAir", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMouseXDeadZoneAir, "C++: PlayerControllerWrapper::SetMouseXDeadZoneAir(float) --> void", pybind11::arg("newMouseXDeadZoneAir"));
		cl.def("GetMouseYDeadZoneAir", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMouseYDeadZoneAir, "C++: PlayerControllerWrapper::GetMouseYDeadZoneAir() --> float");
		cl.def("SetMouseYDeadZoneAir", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMouseYDeadZoneAir, "C++: PlayerControllerWrapper::SetMouseYDeadZoneAir(float) --> void", pybind11::arg("newMouseYDeadZoneAir"));
		cl.def("GetLastInputs", (struct ControllerInput (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLastInputs, "C++: PlayerControllerWrapper::GetLastInputs() --> struct ControllerInput");
		cl.def("SetLastInputs", (void (PlayerControllerWrapper::*)(struct ControllerInput)) &PlayerControllerWrapper::SetLastInputs, "C++: PlayerControllerWrapper::SetLastInputs(struct ControllerInput) --> void", pybind11::arg("newLastInputs"));
		cl.def("GetPendingViewPRI", (class PriWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetPendingViewPRI, "C++: PlayerControllerWrapper::GetPendingViewPRI() --> class PriWrapper");
		cl.def("SetPendingViewPRI", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::SetPendingViewPRI, "C++: PlayerControllerWrapper::SetPendingViewPRI(class PriWrapper) --> void", pybind11::arg("newPendingViewPRI"));
		cl.def("GetLastInputPitchUp", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLastInputPitchUp, "C++: PlayerControllerWrapper::GetLastInputPitchUp() --> float");
		cl.def("SetLastInputPitchUp", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetLastInputPitchUp, "C++: PlayerControllerWrapper::SetLastInputPitchUp(float) --> void", pybind11::arg("newLastInputPitchUp"));
		cl.def("GetLastInputPitchDown", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLastInputPitchDown, "C++: PlayerControllerWrapper::GetLastInputPitchDown() --> float");
		cl.def("SetLastInputPitchDown", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetLastInputPitchDown, "C++: PlayerControllerWrapper::SetLastInputPitchDown(float) --> void", pybind11::arg("newLastInputPitchDown"));
		cl.def("GetLastInputYawLeft", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLastInputYawLeft, "C++: PlayerControllerWrapper::GetLastInputYawLeft() --> float");
		cl.def("SetLastInputYawLeft", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetLastInputYawLeft, "C++: PlayerControllerWrapper::SetLastInputYawLeft(float) --> void", pybind11::arg("newLastInputYawLeft"));
		cl.def("GetLastInputYawRight", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLastInputYawRight, "C++: PlayerControllerWrapper::GetLastInputYawRight() --> float");
		cl.def("SetLastInputYawRight", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetLastInputYawRight, "C++: PlayerControllerWrapper::SetLastInputYawRight(float) --> void", pybind11::arg("newLastInputYawRight"));
		cl.def("GetLastInputPitch", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLastInputPitch, "C++: PlayerControllerWrapper::GetLastInputPitch() --> float");
		cl.def("SetLastInputPitch", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetLastInputPitch, "C++: PlayerControllerWrapper::SetLastInputPitch(float) --> void", pybind11::arg("newLastInputPitch"));
		cl.def("GetLastInputYaw", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetLastInputYaw, "C++: PlayerControllerWrapper::GetLastInputYaw() --> float");
		cl.def("SetLastInputYaw", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetLastInputYaw, "C++: PlayerControllerWrapper::SetLastInputYaw(float) --> void", pybind11::arg("newLastInputYaw"));
		cl.def("GetMouseInputMax", (float (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetMouseInputMax, "C++: PlayerControllerWrapper::GetMouseInputMax() --> float");
		cl.def("SetMouseInputMax", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::SetMouseInputMax, "C++: PlayerControllerWrapper::SetMouseInputMax(float) --> void", pybind11::arg("newMouseInputMax"));
		cl.def("GetEngineShare", (class EngineTAWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetEngineShare, "C++: PlayerControllerWrapper::GetEngineShare() --> class EngineTAWrapper");
		cl.def("SetEngineShare", (void (PlayerControllerWrapper::*)(class EngineTAWrapper)) &PlayerControllerWrapper::SetEngineShare, "C++: PlayerControllerWrapper::SetEngineShare(class EngineTAWrapper) --> void", pybind11::arg("newEngineShare"));
		cl.def("HandleCarSet", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandleCarSet, "C++: PlayerControllerWrapper::HandleCarSet(class PriWrapper) --> void", pybind11::arg("InPRI"));
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
		cl.def("EditorIncreasePowerToggle2", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::EditorIncreasePowerToggle2, "C++: PlayerControllerWrapper::EditorIncreasePowerToggle2(unsigned long) --> void", pybind11::arg("bToggle"));
		cl.def("EditorDecreasePowerToggle2", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::EditorDecreasePowerToggle2, "C++: PlayerControllerWrapper::EditorDecreasePowerToggle2(unsigned long) --> void", pybind11::arg("bToggle"));
		cl.def("ModifyEditorPower", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::ModifyEditorPower, "C++: PlayerControllerWrapper::ModifyEditorPower(int) --> void", pybind11::arg("Direction"));
		cl.def("ToggleCameraPosition", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ToggleCameraPosition, "C++: PlayerControllerWrapper::ToggleCameraPosition() --> void");
		cl.def("EditorUndo", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorUndo, "C++: PlayerControllerWrapper::EditorUndo() --> void");
		cl.def("EditorRedo", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorRedo, "C++: PlayerControllerWrapper::EditorRedo() --> void");
		cl.def("EditorIncreaseRoundTime", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorIncreaseRoundTime, "C++: PlayerControllerWrapper::EditorIncreaseRoundTime() --> void");
		cl.def("EditorDecreaseRoundTime", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorDecreaseRoundTime, "C++: PlayerControllerWrapper::EditorDecreaseRoundTime() --> void");
		cl.def("EditorNextRound", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorNextRound, "C++: PlayerControllerWrapper::EditorNextRound() --> void");
		cl.def("EditorPrevRound", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EditorPrevRound, "C++: PlayerControllerWrapper::EditorPrevRound() --> void");
		cl.def("UpdateCrosshair", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::UpdateCrosshair, "C++: PlayerControllerWrapper::UpdateCrosshair() --> void");
		cl.def("NetClientInputRate", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::NetClientInputRate, "C++: PlayerControllerWrapper::NetClientInputRate(int) --> void", pybind11::arg("Rate"));
		cl.def("ServerCreateMatchBroadcast", (void (PlayerControllerWrapper::*)(class ServerWrapper)) &PlayerControllerWrapper::ServerCreateMatchBroadcast, "C++: PlayerControllerWrapper::ServerCreateMatchBroadcast(class ServerWrapper) --> void", pybind11::arg("GameEvent"));
		cl.def("ClampMoveActorGrabOffset", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ClampMoveActorGrabOffset, "C++: PlayerControllerWrapper::ClampMoveActorGrabOffset() --> void");
		cl.def("RevertToDefaultCameraHUDInput", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::RevertToDefaultCameraHUDInput, "C++: PlayerControllerWrapper::RevertToDefaultCameraHUDInput() --> void");
		cl.def("SwitchToEditPawn", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::SwitchToEditPawn, "C++: PlayerControllerWrapper::SwitchToEditPawn() --> void");
		cl.def("ServerResetPlayer", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::ServerResetPlayer, "C++: PlayerControllerWrapper::ServerResetPlayer(unsigned long) --> void", pybind11::arg("bFullReset"));
		cl.def("ResetPlayerRun", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ResetPlayerRun, "C++: PlayerControllerWrapper::ResetPlayerRun() --> void");
		cl.def("ResetPlayerCheckpoint", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ResetPlayerCheckpoint, "C++: PlayerControllerWrapper::ResetPlayerCheckpoint() --> void");
		cl.def("ToggleEditorRound", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ToggleEditorRound, "C++: PlayerControllerWrapper::ToggleEditorRound() --> void");
		cl.def("ToggleBetweenCarAndEditPawn", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ToggleBetweenCarAndEditPawn, "C++: PlayerControllerWrapper::ToggleBetweenCarAndEditPawn() --> void");
		cl.def("Interact", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::Interact, "C++: PlayerControllerWrapper::Interact() --> void");
		cl.def("StopMovement", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::StopMovement, "C++: PlayerControllerWrapper::StopMovement(unsigned long) --> void", pybind11::arg("bOnlyIfNoAccel"));
		cl.def("GetRotateActorCameraOffset", (struct Vector (PlayerControllerWrapper::*)(float, unsigned long)) &PlayerControllerWrapper::GetRotateActorCameraOffset, "C++: PlayerControllerWrapper::GetRotateActorCameraOffset(float, unsigned long) --> struct Vector", pybind11::arg("DeltaTime"), pybind11::arg("bSnap"));
		cl.def("RestoreEditorPawnOrientation", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::RestoreEditorPawnOrientation, "C++: PlayerControllerWrapper::RestoreEditorPawnOrientation() --> void");
		cl.def("BackupEditorPawnOrientation", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::BackupEditorPawnOrientation, "C++: PlayerControllerWrapper::BackupEditorPawnOrientation() --> void");
		cl.def("UpdateRotatedActorOrientation", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::UpdateRotatedActorOrientation, "C++: PlayerControllerWrapper::UpdateRotatedActorOrientation(float) --> void", pybind11::arg("DeltaTime"));
		cl.def("OnOpenPauseMenu", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::OnOpenPauseMenu, "C++: PlayerControllerWrapper::OnOpenPauseMenu() --> void");
		cl.def("ResetMouseCenter", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ResetMouseCenter, "C++: PlayerControllerWrapper::ResetMouseCenter() --> void");
		cl.def("CalculateMouseAxis", (float (PlayerControllerWrapper::*)(float, float, float, float)) &PlayerControllerWrapper::CalculateMouseAxis, "C++: PlayerControllerWrapper::CalculateMouseAxis(float, float, float, float) --> float", pybind11::arg("Center"), pybind11::arg("CurrentLocation"), pybind11::arg("Deadzone"), pybind11::arg("MaxDist"));
		cl.def("ShowControllerApplet", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ShowControllerApplet, "C++: PlayerControllerWrapper::ShowControllerApplet() --> void");
		cl.def("ShowAccountPicker", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ShowAccountPicker, "C++: PlayerControllerWrapper::ShowAccountPicker() --> void");
		cl.def("QueSaveReplay", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::QueSaveReplay, "C++: PlayerControllerWrapper::QueSaveReplay() --> void");
		cl.def("SetFollowTarget2", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::SetFollowTarget2, "C++: PlayerControllerWrapper::SetFollowTarget2(class PriWrapper) --> void", pybind11::arg("InTarget"));
		cl.def("FollowPlayer", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::FollowPlayer, "C++: PlayerControllerWrapper::FollowPlayer(class PriWrapper) --> void", pybind11::arg("InPlayer"));
		//cl.def("OnPendingIdleKickChanged", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::OnPendingIdleKickChanged, "C++: PlayerControllerWrapper::OnPendingIdleKickChanged() --> void");
		//cl.def("SetPendingIdleKick", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetPendingIdleKick, "C++: PlayerControllerWrapper::SetPendingIdleKick(unsigned long) --> void", pybind11::arg("bPending"));
		//cl.def("KickTrialPlayer", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::KickTrialPlayer, "C++: PlayerControllerWrapper::KickTrialPlayer() --> void");
		cl.def("NotifyGoalScored", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::NotifyGoalScored, "C++: PlayerControllerWrapper::NotifyGoalScored(int) --> void", pybind11::arg("ScoredOnTeam"));
		cl.def("eventDestroyed", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::eventDestroyed, "C++: PlayerControllerWrapper::eventDestroyed() --> void");
		cl.def("ShouldBeMuted", (bool (PlayerControllerWrapper::*)(class PlayerControllerWrapper)) &PlayerControllerWrapper::ShouldBeMuted, "C++: PlayerControllerWrapper::ShouldBeMuted(class PlayerControllerWrapper) --> bool", pybind11::arg("Other"));
		cl.def("IsCommunicationFiltered", (bool (PlayerControllerWrapper::*)(unsigned char, class PlayerControllerWrapper, unsigned long)) &PlayerControllerWrapper::IsCommunicationFiltered, "C++: PlayerControllerWrapper::IsCommunicationFiltered(unsigned char, class PlayerControllerWrapper, unsigned long) --> bool", pybind11::arg("Filter"), pybind11::arg("Other"), pybind11::arg("bPreset"));
		cl.def("RefreshMutedPlayers", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::RefreshMutedPlayers, "C++: PlayerControllerWrapper::RefreshMutedPlayers(unsigned long) --> void", pybind11::arg("bForceRefresh"));
		cl.def("eventServerUnmutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID &)) &PlayerControllerWrapper::eventServerUnmutePlayer, "C++: PlayerControllerWrapper::eventServerUnmutePlayer(struct SteamID &) --> void", pybind11::arg("PlayerNetId"));
		cl.def("eventServerMutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID &)) &PlayerControllerWrapper::eventServerMutePlayer, "C++: PlayerControllerWrapper::eventServerMutePlayer(struct SteamID &) --> void", pybind11::arg("PlayerNetId"));
		cl.def("GameplayUnmutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID &)) &PlayerControllerWrapper::GameplayUnmutePlayer, "C++: PlayerControllerWrapper::GameplayUnmutePlayer(struct SteamID &) --> void", pybind11::arg("PlayerNetId"));
		cl.def("GameplayMutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID &)) &PlayerControllerWrapper::GameplayMutePlayer, "C++: PlayerControllerWrapper::GameplayMutePlayer(struct SteamID &) --> void", pybind11::arg("PlayerNetId"));
		cl.def("ServerSetChatFilter", (void (PlayerControllerWrapper::*)(unsigned char)) &PlayerControllerWrapper::ServerSetChatFilter, "C++: PlayerControllerWrapper::ServerSetChatFilter(unsigned char) --> void", pybind11::arg("InVoiceFilter"));
		cl.def("ServerSetVoiceFilter", (void (PlayerControllerWrapper::*)(unsigned char)) &PlayerControllerWrapper::ServerSetVoiceFilter, "C++: PlayerControllerWrapper::ServerSetVoiceFilter(unsigned char) --> void", pybind11::arg("InVoiceFilter"));
		cl.def("IsExplictlyMuted", (bool (PlayerControllerWrapper::*)(struct SteamID &)) &PlayerControllerWrapper::IsExplictlyMuted, "C++: PlayerControllerWrapper::IsExplictlyMuted(struct SteamID &) --> bool", pybind11::arg("PlayerNetId"));
		cl.def("DebugAI", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::DebugAI, "C++: PlayerControllerWrapper::DebugAI() --> void");
		cl.def("SendPendingRPCs", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::SendPendingRPCs, "C++: PlayerControllerWrapper::SendPendingRPCs() --> void");
		cl.def("CanSendMessage", (bool (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::CanSendMessage, "C++: PlayerControllerWrapper::CanSendMessage(unsigned long) --> bool", pybind11::arg("bQuickChatMessage"));
		//cl.def("RemoveChatBan", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::RemoveChatBan, "C++: PlayerControllerWrapper::RemoveChatBan() --> void");
		//cl.def("ApplyChatBan", (void (PlayerControllerWrapper::*)(unsigned long long)) &PlayerControllerWrapper::ApplyChatBan, "C++: PlayerControllerWrapper::ApplyChatBan(unsigned long long) --> void", pybind11::arg("Expiration"));
		cl.def("ClientNotifyChatBanned", (void (PlayerControllerWrapper::*)(unsigned long long)) &PlayerControllerWrapper::ClientNotifyChatBanned, "C++: PlayerControllerWrapper::ClientNotifyChatBanned(unsigned long long) --> void", pybind11::arg("ChatBanExpiration"));
		cl.def("ClientNotifyChatDisabled", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::ClientNotifyChatDisabled, "C++: PlayerControllerWrapper::ClientNotifyChatDisabled(float) --> void", pybind11::arg("Time"));
		cl.def("CanChatWith", (bool (PlayerControllerWrapper::*)(class PlayerControllerWrapper, unsigned long)) &PlayerControllerWrapper::CanChatWith, "C++: PlayerControllerWrapper::CanChatWith(class PlayerControllerWrapper, unsigned long) --> bool", pybind11::arg("Other"), pybind11::arg("bPreset"));
		cl.def("PushToTalkEnd", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::PushToTalkEnd, "C++: PlayerControllerWrapper::PushToTalkEnd() --> void");
		cl.def("PushToTalk2", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::PushToTalk2, "C++: PlayerControllerWrapper::PushToTalk2() --> void");
		cl.def("eventClientUnmutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID &)) &PlayerControllerWrapper::eventClientUnmutePlayer, "C++: PlayerControllerWrapper::eventClientUnmutePlayer(struct SteamID &) --> void", pybind11::arg("PlayerNetId"));
		cl.def("eventClientMutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID &, unsigned long)) &PlayerControllerWrapper::eventClientMutePlayer, "C++: PlayerControllerWrapper::eventClientMutePlayer(struct SteamID &, unsigned long) --> void", pybind11::arg("PlayerNetId"), pybind11::arg("bAddToMuteList"));
		cl.def("ClientSetOnlineStatus", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ClientSetOnlineStatus, "C++: PlayerControllerWrapper::ClientSetOnlineStatus() --> void");
		cl.def("HandleGameDataSelected", (void (PlayerControllerWrapper::*)(int, int)) &PlayerControllerWrapper::HandleGameDataSelected, "C++: PlayerControllerWrapper::HandleGameDataSelected(int, int) --> void", pybind11::arg("PlaylistId"), pybind11::arg("MutatorIndex"));
		cl.def("GetGameEvent", (class GameEventWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetGameEvent, "C++: PlayerControllerWrapper::GetGameEvent() --> class GameEventWrapper");
		cl.def("ClientArbitratedMatchEnded", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ClientArbitratedMatchEnded, "C++: PlayerControllerWrapper::ClientArbitratedMatchEnded() --> void");
		cl.def("BannedKick", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::BannedKick, "C++: PlayerControllerWrapper::BannedKick() --> void");
		cl.def("NoReservationKick", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::NoReservationKick, "C++: PlayerControllerWrapper::NoReservationKick() --> void");
		cl.def("IdleKick2", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::IdleKick2, "C++: PlayerControllerWrapper::IdleKick2() --> void");
		cl.def("ServerReportServer", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ServerReportServer, "C++: PlayerControllerWrapper::ServerReportServer() --> void");
		cl.def("ClientUseItem", (void (PlayerControllerWrapper::*)(struct Vector &, struct Rotator &)) &PlayerControllerWrapper::ClientUseItem, "C++: PlayerControllerWrapper::ClientUseItem(struct Vector &, struct Rotator &) --> void", pybind11::arg("UseLocation"), pybind11::arg("UseRotation"));
		cl.def("ServerTeleportCar", (void (PlayerControllerWrapper::*)(struct Vector &, struct Rotator &)) &PlayerControllerWrapper::ServerTeleportCar, "C++: PlayerControllerWrapper::ServerTeleportCar(struct Vector &, struct Rotator &) --> void", pybind11::arg("SpawnLocation"), pybind11::arg("NewRotation"));
		cl.def("eventTeleportCar", (void (PlayerControllerWrapper::*)(struct Vector &, struct Rotator &)) &PlayerControllerWrapper::eventTeleportCar, "C++: PlayerControllerWrapper::eventTeleportCar(struct Vector &, struct Rotator &) --> void", pybind11::arg("SpawnLocation"), pybind11::arg("NewRotation"));
		cl.def("ServerUsePickup", (void (PlayerControllerWrapper::*)(class RBActorWrapper)) &PlayerControllerWrapper::ServerUsePickup, "C++: PlayerControllerWrapper::ServerUsePickup(class RBActorWrapper) --> void", pybind11::arg("Target"));
		cl.def("UsePickup2", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::UsePickup2, "C++: PlayerControllerWrapper::UsePickup2() --> void");
		cl.def("ToggleHandbrake", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::ToggleHandbrake, "C++: PlayerControllerWrapper::ToggleHandbrake(unsigned long) --> void", pybind11::arg("bHandbrake"));
		cl.def("ToggleBoost", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::ToggleBoost, "C++: PlayerControllerWrapper::ToggleBoost(unsigned long) --> void", pybind11::arg("bBoost"));
		cl.def("ToggleJump", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::ToggleJump, "C++: PlayerControllerWrapper::ToggleJump(unsigned long) --> void", pybind11::arg("bJump"));
		cl.def("TargetSelectLeft", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::TargetSelectLeft, "C++: PlayerControllerWrapper::TargetSelectLeft() --> void");
		cl.def("TargetSelectRight", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::TargetSelectRight, "C++: PlayerControllerWrapper::TargetSelectRight() --> void");
		cl.def("ReleaseRearCamera", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ReleaseRearCamera, "C++: PlayerControllerWrapper::ReleaseRearCamera() --> void");
		cl.def("PressRearCamera", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::PressRearCamera, "C++: PlayerControllerWrapper::PressRearCamera() --> void");
		cl.def("ReleaseSecondaryCamera", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ReleaseSecondaryCamera, "C++: PlayerControllerWrapper::ReleaseSecondaryCamera() --> void");
		cl.def("PressSecondaryCamera", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::PressSecondaryCamera, "C++: PlayerControllerWrapper::PressSecondaryCamera() --> void");
		cl.def("ReadyUp", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ReadyUp, "C++: PlayerControllerWrapper::ReadyUp() --> void");
		cl.def("Spectate", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::Spectate, "C++: PlayerControllerWrapper::Spectate() --> void");
		cl.def("ChangeTeam", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::ChangeTeam, "C++: PlayerControllerWrapper::ChangeTeam(int) --> void", pybind11::arg("TeamNum"));
		cl.def("SwitchTeam", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::SwitchTeam, "C++: PlayerControllerWrapper::SwitchTeam() --> void");
		cl.def("SetDefaultCameraMode", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::SetDefaultCameraMode, "C++: PlayerControllerWrapper::SetDefaultCameraMode() --> void");
		cl.def("ResetCameraMode", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ResetCameraMode, "C++: PlayerControllerWrapper::ResetCameraMode() --> void");
		cl.def("ZeroMoveInput", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ZeroMoveInput, "C++: PlayerControllerWrapper::ZeroMoveInput() --> void");
		cl.def("PlayerMove", (void (PlayerControllerWrapper::*)(float)) &PlayerControllerWrapper::PlayerMove, "C++: PlayerControllerWrapper::PlayerMove(float) --> void", pybind11::arg("DeltaTime"));
		cl.def("IgnoreMoveInput", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::IgnoreMoveInput, "C++: PlayerControllerWrapper::IgnoreMoveInput(unsigned long) --> void", pybind11::arg("bNewMoveInput"));
		cl.def("eventSendClientAdjustment", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::eventSendClientAdjustment, "C++: PlayerControllerWrapper::eventSendClientAdjustment() --> void");
		cl.def("GetPrimaryPlayerController", (class PlayerControllerWrapper (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::GetPrimaryPlayerController, "C++: PlayerControllerWrapper::GetPrimaryPlayerController() --> class PlayerControllerWrapper");
		cl.def("HandleAddBoostComponent", (void (PlayerControllerWrapper::*)(class BoostWrapper)) &PlayerControllerWrapper::HandleAddBoostComponent, "C++: PlayerControllerWrapper::HandleAddBoostComponent(class BoostWrapper) --> void", pybind11::arg("Boost"));
		cl.def("ReplicateLoadout", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ReplicateLoadout, "C++: PlayerControllerWrapper::ReplicateLoadout() --> void");
		cl.def("ReplicateCameraRotation", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ReplicateCameraRotation, "C++: PlayerControllerWrapper::ReplicateCameraRotation() --> void");
		cl.def("SetUsingFreecam", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetUsingFreecam, "C++: PlayerControllerWrapper::SetUsingFreecam(unsigned long) --> void", pybind11::arg("bFreecam"));
		cl.def("SetUsingBehindView", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetUsingBehindView, "C++: PlayerControllerWrapper::SetUsingBehindView(unsigned long) --> void", pybind11::arg("bBehindView"));
		cl.def("SetUsingSecondaryCamera", (void (PlayerControllerWrapper::*)(unsigned long)) &PlayerControllerWrapper::SetUsingSecondaryCamera, "C++: PlayerControllerWrapper::SetUsingSecondaryCamera(unsigned long) --> void", pybind11::arg("bSecondaryCamera"));
		cl.def("ReplicateCameraSettings", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ReplicateCameraSettings, "C++: PlayerControllerWrapper::ReplicateCameraSettings() --> void");
		cl.def("HandleControllerLayoutChanged", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandleControllerLayoutChanged, "C++: PlayerControllerWrapper::HandleControllerLayoutChanged(class PriWrapper) --> void", pybind11::arg("InPRI"));
		cl.def("HandlePawnTypeChanged", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandlePawnTypeChanged, "C++: PlayerControllerWrapper::HandlePawnTypeChanged(class PriWrapper) --> void", pybind11::arg("InPRI"));
		cl.def("HandlePendingViewCarSet", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandlePendingViewCarSet, "C++: PlayerControllerWrapper::HandlePendingViewCarSet(class PriWrapper) --> void", pybind11::arg("InPRI"));
		cl.def("HandleReplaceBot", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandleReplaceBot, "C++: PlayerControllerWrapper::HandleReplaceBot(class PriWrapper) --> void", pybind11::arg("InPRI"));
		cl.def("HandleTeamChanged", (void (PlayerControllerWrapper::*)(class PriXWrapper)) &PlayerControllerWrapper::HandleTeamChanged, "C++: PlayerControllerWrapper::HandleTeamChanged(class PriXWrapper) --> void", pybind11::arg("InPRI"));
		cl.def("HandleMatchEnded", (void (PlayerControllerWrapper::*)(class ServerWrapper)) &PlayerControllerWrapper::HandleMatchEnded, "C++: PlayerControllerWrapper::HandleMatchEnded(class ServerWrapper) --> void", pybind11::arg("GameEvent"));
		cl.def("HandleStartNewRound", (void (PlayerControllerWrapper::*)(class ServerWrapper)) &PlayerControllerWrapper::HandleStartNewRound, "C++: PlayerControllerWrapper::HandleStartNewRound(class ServerWrapper) --> void", pybind11::arg("GameEvent"));
		cl.def("HandleGameEventChanged", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandleGameEventChanged, "C++: PlayerControllerWrapper::HandleGameEventChanged(class PriWrapper) --> void", pybind11::arg("InPRI"));
		cl.def("HandlePRICameraChanged", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandlePRICameraChanged, "C++: PlayerControllerWrapper::HandlePRICameraChanged(class PriWrapper) --> void", pybind11::arg("InPRI"));
		cl.def("SetupLightBar", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::SetupLightBar, "C++: PlayerControllerWrapper::SetupLightBar() --> void");
		cl.def("HandlePersistentCameraSet", (void (PlayerControllerWrapper::*)(class PriWrapper)) &PlayerControllerWrapper::HandlePersistentCameraSet, "C++: PlayerControllerWrapper::HandlePersistentCameraSet(class PriWrapper) --> void", pybind11::arg("InPRI"));
		cl.def("OnReceivedPlayerAndPRI", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::OnReceivedPlayerAndPRI, "C++: PlayerControllerWrapper::OnReceivedPlayerAndPRI() --> void");
		cl.def("UpdateVoiceFilter", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::UpdateVoiceFilter, "C++: PlayerControllerWrapper::UpdateVoiceFilter() --> void");
		cl.def("ReplicateLevelSessionID", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::ReplicateLevelSessionID, "C++: PlayerControllerWrapper::ReplicateLevelSessionID() --> void");
		cl.def("ServerInitInputBuffer", (void (PlayerControllerWrapper::*)(unsigned char)) &PlayerControllerWrapper::ServerInitInputBuffer, "C++: PlayerControllerWrapper::ServerInitInputBuffer(unsigned char) --> void", pybind11::arg("Type"));
		cl.def("eventReceivedPlayer", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::eventReceivedPlayer, "C++: PlayerControllerWrapper::eventReceivedPlayer() --> void");
		cl.def("eventPostBeginPlay", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::eventPostBeginPlay, "C++: PlayerControllerWrapper::eventPostBeginPlay() --> void");
		cl.def("EventResetPlayer", (void (PlayerControllerWrapper::*)(class PlayerControllerWrapper, unsigned long)) &PlayerControllerWrapper::EventResetPlayer, "C++: PlayerControllerWrapper::EventResetPlayer(class PlayerControllerWrapper, unsigned long) --> void", pybind11::arg("PC"), pybind11::arg("bFullReset"));
		cl.def("EventSelectBallCamTarget", (void (PlayerControllerWrapper::*)(class PlayerControllerWrapper, int)) &PlayerControllerWrapper::EventSelectBallCamTarget, "C++: PlayerControllerWrapper::EventSelectBallCamTarget(class PlayerControllerWrapper, int) --> void", pybind11::arg("PC"), pybind11::arg("Direction"));
		cl.def("EventTrainingEditorActorModified", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EventTrainingEditorActorModified, "C++: PlayerControllerWrapper::EventTrainingEditorActorModified() --> void");
		cl.def("EventMuteChanged", (void (PlayerControllerWrapper::*)(class PlayerControllerWrapper, struct SteamID &, unsigned long)) &PlayerControllerWrapper::EventMuteChanged, "C++: PlayerControllerWrapper::EventMuteChanged(class PlayerControllerWrapper, struct SteamID &, unsigned long) --> void", pybind11::arg("PC"), pybind11::arg("PlayerID"), pybind11::arg("bMuted"));
		//cl.def("EventPendingIdleKickChanged", (void (PlayerControllerWrapper::*)(class PlayerControllerWrapper)) &PlayerControllerWrapper::EventPendingIdleKickChanged, "C++: PlayerControllerWrapper::EventPendingIdleKickChanged(class PlayerControllerWrapper) --> void", pybind11::arg("PC"));
		cl.def("EventLaunchControllerApplet", (void (PlayerControllerWrapper::*)()) &PlayerControllerWrapper::EventLaunchControllerApplet, "C++: PlayerControllerWrapper::EventLaunchControllerApplet() --> void");
		cl.def("EventLaunchAccountPicker", (void (PlayerControllerWrapper::*)(int)) &PlayerControllerWrapper::EventLaunchAccountPicker, "C++: PlayerControllerWrapper::EventLaunchAccountPicker(int) --> void", pybind11::arg("ControllerId"));
	}
}
