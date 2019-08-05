#include "pch.h"
#include <bakkesmod/wrappers/Engine/EngineTAWrapper.h>
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameEvent/ReplayDirectorWrapper.h>
#include <bakkesmod/wrappers/GameObject/BaseCameraWrapper.h>
#include <bakkesmod/wrappers/GameObject/CameraWrapper.h>
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
		cl.def("assign", (class MMRWrapper & (MMRWrapper::*)(class MMRWrapper)) &MMRWrapper::operator=, "C++: MMRWrapper::operator=(class MMRWrapper) --> class MMRWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("IsSyncing", (bool (MMRWrapper::*)(struct SteamID)) &MMRWrapper::IsSyncing, "C++: MMRWrapper::IsSyncing(struct SteamID) --> bool", "playerID"_a);
		cl.def("IsSynced", (bool (MMRWrapper::*)(struct SteamID, int)) &MMRWrapper::IsSynced, "C++: MMRWrapper::IsSynced(struct SteamID, int) --> bool", "playerID"_a, "playlistID"_a);
		cl.def("IsRanked", (bool (MMRWrapper::*)(int)) &MMRWrapper::IsRanked, "C++: MMRWrapper::IsRanked(int) --> bool", "playlistID"_a);
		cl.def("GetPlayerSkillRating", (struct SkillRating (MMRWrapper::*)(struct SteamID, int)) &MMRWrapper::GetPlayerSkillRating, "C++: MMRWrapper::GetPlayerSkillRating(struct SteamID, int) --> struct SkillRating", "playerID"_a, "playlistID"_a);
		cl.def("GetPlayerMMR", (float (MMRWrapper::*)(struct SteamID, int)) &MMRWrapper::GetPlayerMMR, "C++: MMRWrapper::GetPlayerMMR(struct SteamID, int) --> float", "playerID"_a, "playlistID"_a);
		cl.def("CalculateMMR", (float (MMRWrapper::*)(struct SkillRating, bool)) &MMRWrapper::CalculateMMR, "C++: MMRWrapper::CalculateMMR(struct SkillRating, bool) --> float", "sr"_a, "disregardPlacements"_a);
		cl.def("GetCurrentPlaylist", (int (MMRWrapper::*)()) &MMRWrapper::GetCurrentPlaylist, "C++: MMRWrapper::GetCurrentPlaylist() --> int");
	}
	{ // GameWrapper file:bakkesmod/wrappers/GameWrapper.h line:20
		pybind11::class_<GameWrapper, std::shared_ptr<GameWrapper>> cl(M, "GameWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long, long, struct std::type_index>(), pybind11::arg("mem"), pybind11::arg("pluginType"), pybind11::arg("idx") );

		cl.def( pybind11::init( [](GameWrapper const &o){ return new GameWrapper(o); } ) );
		//cl.def_readwrite("pimpl", &GameWrapper::pimpl);
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void (class ServerWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCaller<ServerWrapper,nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class ServerWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void (class ActorWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCaller<ActorWrapper,nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class ActorWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void (class CarWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCaller<CarWrapper,nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class CarWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void (class CarComponentWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCaller<CarComponentWrapper,nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class CarComponentWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void (class PlayerControllerWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCaller<PlayerControllerWrapper,nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class PlayerControllerWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void (class BallWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCaller<BallWrapper,nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class BallWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void (class ActorWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCallerPost<ActorWrapper,nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class ActorWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void (class ServerWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCallerPost<ServerWrapper,nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class ServerWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void (class CarWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCallerPost<CarWrapper,nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class CarWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void (class CarComponentWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCallerPost<CarComponentWrapper,nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class CarComponentWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void (class PlayerControllerWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCallerPost<PlayerControllerWrapper,nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class PlayerControllerWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void (class BallWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCallerPost<BallWrapper,nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class BallWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("assign", (class GameWrapper & (GameWrapper::*)(class GameWrapper)) &GameWrapper::operator=, "C++: GameWrapper::operator=(class GameWrapper) --> class GameWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
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
		cl.def("OverrideParams", (void (GameWrapper::*)(void *, unsigned long)) &GameWrapper::OverrideParams, "C++: GameWrapper::OverrideParams(void *, unsigned long) --> void", "src"_a, "memsize"_a);
		cl.def("SetTimeout", (void (GameWrapper::*)(class std::function<void (class GameWrapper *)>, float)) &GameWrapper::SetTimeout, "C++: GameWrapper::SetTimeout(class std::function<void (class GameWrapper *)>, float) --> void", "theLambda"_a, "time"_a);
		cl.def("Execute", (void (GameWrapper::*)(class std::function<void (class GameWrapper *)>)) &GameWrapper::Execute, "C++: GameWrapper::Execute(class std::function<void (class GameWrapper *)>) --> void", "theLambda"_a);
		cl.def("RegisterDrawable", (void (GameWrapper::*)(class std::function<void (class CanvasWrapper)>)) &GameWrapper::RegisterDrawable, "C++: GameWrapper::RegisterDrawable(class std::function<void (class CanvasWrapper)>) --> void", "callback"_a);
		cl.def("UnregisterDrawables", (void (GameWrapper::*)()) &GameWrapper::UnregisterDrawables, "C++: GameWrapper::UnregisterDrawables() --> void");
		cl.def("GetFNameByIndex", (std::string (GameWrapper::*)(int)) &GameWrapper::GetFNameByIndex, "C++: GameWrapper::GetFNameByIndex(int) --> std::string", "index"_a);
		cl.def("GetFNameIndexByString", (int (GameWrapper::*)(std::string)) &GameWrapper::GetFNameIndexByString, "C++: GameWrapper::GetFNameIndexByString(std::string) --> int", "name"_a);
		cl.def("HookEvent", (void (GameWrapper::*)(std::string, class std::function<void (std::string)>)) &GameWrapper::HookEvent, "C++: GameWrapper::HookEvent(std::string, class std::function<void (std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("UnhookEvent", (void (GameWrapper::*)(std::string)) &GameWrapper::UnhookEvent, "C++: GameWrapper::UnhookEvent(std::string) --> void", "eventName"_a);
		cl.def("HookEventPost", (void (GameWrapper::*)(std::string, class std::function<void (std::string)>)) &GameWrapper::HookEventPost, "C++: GameWrapper::HookEventPost(std::string, class std::function<void (std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("RegisterBot", (void (GameWrapper::*)(enum CARBODY, class std::function<void (float, struct ControllerInput *, class CarWrapper *, class ServerWrapper *)>, std::string, bool)) &GameWrapper::RegisterBot, "C++: GameWrapper::RegisterBot(enum CARBODY, class std::function<void (float, struct ControllerInput *, class CarWrapper *, class ServerWrapper *)>, std::string, bool) --> void", "car"_a, "tickfunc"_a, "botName"_a, "overridePlayer"_a);
		cl.def("LogToChatbox", (void (GameWrapper::*)(std::string, std::string)) &GameWrapper::LogToChatbox, "C++: GameWrapper::LogToChatbox(std::string, std::string) --> void", "text"_a, "sender"_a = "BAKKESMOD");
		cl.def("LoadToastTexture", (void (GameWrapper::*)(std::string, std::string)) &GameWrapper::LoadToastTexture, "C++: GameWrapper::LoadToastTexture(std::string, std::string) --> void", "name"_a, "path"_a);
		cl.def("Toast", (void (GameWrapper::*)(std::string, std::string, std::string, float, unsigned char, float, float)) &GameWrapper::Toast, "C++: GameWrapper::Toast(std::string, std::string, std::string, float, unsigned char, float, float) --> void", "title"_a, "text"_a, "texture"_a = "default", "timeout"_a = 3.5F, "toastType"_a = 0, "width"_a = 290.F, "height"_a = 60.F);
		cl.def("IsKeyPressed", (bool (GameWrapper::*)(int)) &GameWrapper::IsKeyPressed, "C++: GameWrapper::IsKeyPressed(int) --> bool", "keyName"_a);
		cl.def("ExecuteUnrealCommand", (void (GameWrapper::*)(std::string)) &GameWrapper::ExecuteUnrealCommand, "C++: GameWrapper::ExecuteUnrealCommand(std::string) --> void", "command"_a);
		cl.def("GetRandomMap", (std::string (GameWrapper::*)()) &GameWrapper::GetRandomMap, "C++: GameWrapper::GetRandomMap() --> std::string");
		cl.def("GetSteamID", (unsigned long long (GameWrapper::*)()) &GameWrapper::GetSteamID, "C++: GameWrapper::GetSteamID() --> unsigned long long");
	}
	{ // FXActorWrapper file: line:7
		pybind11::class_<FXActorWrapper, std::shared_ptr<FXActorWrapper>, ActorWrapper> cl(M, "FXActorWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](FXActorWrapper const &o){ return new FXActorWrapper(o); } ) );
		cl.def("assign", (class FXActorWrapper & (FXActorWrapper::*)(class FXActorWrapper)) &FXActorWrapper::operator=, "C++: FXActorWrapper::operator=(class FXActorWrapper) --> class FXActorWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetbDeactivateWhenOwnerDestroyed", (unsigned long (FXActorWrapper::*)()) &FXActorWrapper::GetbDeactivateWhenOwnerDestroyed, "C++: FXActorWrapper::GetbDeactivateWhenOwnerDestroyed() --> unsigned long");
		cl.def("SetbDeactivateWhenOwnerDestroyed", (void (FXActorWrapper::*)(unsigned long)) &FXActorWrapper::SetbDeactivateWhenOwnerDestroyed, "C++: FXActorWrapper::SetbDeactivateWhenOwnerDestroyed(unsigned long) --> void", "newbDeactivateWhenOwnerDestroyed"_a);
		cl.def("GetbAllowShadowCasting", (unsigned long (FXActorWrapper::*)()) &FXActorWrapper::GetbAllowShadowCasting, "C++: FXActorWrapper::GetbAllowShadowCasting() --> unsigned long");
		cl.def("SetbAllowShadowCasting", (void (FXActorWrapper::*)(unsigned long)) &FXActorWrapper::SetbAllowShadowCasting, "C++: FXActorWrapper::SetbAllowShadowCasting(unsigned long) --> void", "newbAllowShadowCasting"_a);
		cl.def("GetbAutoActivate", (unsigned long (FXActorWrapper::*)()) &FXActorWrapper::GetbAutoActivate, "C++: FXActorWrapper::GetbAutoActivate() --> unsigned long");
		cl.def("SetbAutoActivate", (void (FXActorWrapper::*)(unsigned long)) &FXActorWrapper::SetbAutoActivate, "C++: FXActorWrapper::SetbAutoActivate(unsigned long) --> void", "newbAutoActivate"_a);
		cl.def("GetbRenderInactive", (unsigned long (FXActorWrapper::*)()) &FXActorWrapper::GetbRenderInactive, "C++: FXActorWrapper::GetbRenderInactive() --> unsigned long");
		cl.def("SetbRenderInactive", (void (FXActorWrapper::*)(unsigned long)) &FXActorWrapper::SetbRenderInactive, "C++: FXActorWrapper::SetbRenderInactive(unsigned long) --> void", "newbRenderInactive"_a);
		cl.def("GetbActive", (unsigned long (FXActorWrapper::*)()) &FXActorWrapper::GetbActive, "C++: FXActorWrapper::GetbActive() --> unsigned long");
		cl.def("SetbActive", (void (FXActorWrapper::*)(unsigned long)) &FXActorWrapper::SetbActive, "C++: FXActorWrapper::SetbActive(unsigned long) --> void", "newbActive"_a);
		cl.def("GetbHadOwner", (unsigned long (FXActorWrapper::*)()) &FXActorWrapper::GetbHadOwner, "C++: FXActorWrapper::GetbHadOwner() --> unsigned long");
		cl.def("SetbHadOwner", (void (FXActorWrapper::*)(unsigned long)) &FXActorWrapper::SetbHadOwner, "C++: FXActorWrapper::SetbHadOwner(unsigned long) --> void", "newbHadOwner"_a);
		cl.def("GetParent", (class FXActorWrapper (FXActorWrapper::*)()) &FXActorWrapper::GetParent, "C++: FXActorWrapper::GetParent() --> class FXActorWrapper");
		cl.def("SetParent", (void (FXActorWrapper::*)(class FXActorWrapper)) &FXActorWrapper::SetParent, "C++: FXActorWrapper::SetParent(class FXActorWrapper) --> void", "newParent"_a);
		cl.def("GetAttachmentActor", (class ActorWrapper (FXActorWrapper::*)()) &FXActorWrapper::GetAttachmentActor, "C++: FXActorWrapper::GetAttachmentActor() --> class ActorWrapper");
		cl.def("SetAttachmentActor", (void (FXActorWrapper::*)(class ActorWrapper)) &FXActorWrapper::SetAttachmentActor, "C++: FXActorWrapper::SetAttachmentActor(class ActorWrapper) --> void", "newAttachmentActor"_a);
		cl.def("GetDestroyWaitTime", (float (FXActorWrapper::*)()) &FXActorWrapper::GetDestroyWaitTime, "C++: FXActorWrapper::GetDestroyWaitTime() --> float");
		cl.def("SetDestroyWaitTime", (void (FXActorWrapper::*)(float)) &FXActorWrapper::SetDestroyWaitTime, "C++: FXActorWrapper::SetDestroyWaitTime(float) --> void", "newDestroyWaitTime"_a);
		cl.def("GetDestroyTime", (float (FXActorWrapper::*)()) &FXActorWrapper::GetDestroyTime, "C++: FXActorWrapper::GetDestroyTime() --> float");
		cl.def("SetDestroyTime", (void (FXActorWrapper::*)(float)) &FXActorWrapper::SetDestroyTime, "C++: FXActorWrapper::SetDestroyTime(float) --> void", "newDestroyTime"_a);
		cl.def("GetEditID", (int (FXActorWrapper::*)()) &FXActorWrapper::GetEditID, "C++: FXActorWrapper::GetEditID() --> int");
		cl.def("SetEditID", (void (FXActorWrapper::*)(int)) &FXActorWrapper::SetEditID, "C++: FXActorWrapper::SetEditID(int) --> void", "newEditID"_a);
		cl.def("eventDumpDebugInfo", (void (FXActorWrapper::*)()) &FXActorWrapper::eventDumpDebugInfo, "C++: FXActorWrapper::eventDumpDebugInfo() --> void");
		cl.def("eventDestroyed", (void (FXActorWrapper::*)()) &FXActorWrapper::eventDestroyed, "C++: FXActorWrapper::eventDestroyed() --> void");
		cl.def("Inherit", (void (FXActorWrapper::*)(class FXActorWrapper)) &FXActorWrapper::Inherit, "C++: FXActorWrapper::Inherit(class FXActorWrapper) --> void", "Other"_a);
		cl.def("ResetParticles", (void (FXActorWrapper::*)()) &FXActorWrapper::ResetParticles, "C++: FXActorWrapper::ResetParticles() --> void");
		cl.def("StopAllEffects", (void (FXActorWrapper::*)()) &FXActorWrapper::StopAllEffects, "C++: FXActorWrapper::StopAllEffects() --> void");
		cl.def("eventDeactivateAndDestroy", (void (FXActorWrapper::*)()) &FXActorWrapper::eventDeactivateAndDestroy, "C++: FXActorWrapper::eventDeactivateAndDestroy() --> void");
		cl.def("UpdateFXStates", (void (FXActorWrapper::*)()) &FXActorWrapper::UpdateFXStates, "C++: FXActorWrapper::UpdateFXStates() --> void");
		cl.def("IsLocallyControlled", (bool (FXActorWrapper::*)()) &FXActorWrapper::IsLocallyControlled, "C++: FXActorWrapper::IsLocallyControlled() --> bool");
		cl.def("Deactivate2", (void (FXActorWrapper::*)()) &FXActorWrapper::Deactivate2, "C++: FXActorWrapper::Deactivate2() --> void");
		cl.def("Activate2", (void (FXActorWrapper::*)()) &FXActorWrapper::Activate2, "C++: FXActorWrapper::Activate2() --> void");
		cl.def("BindTo", (void (FXActorWrapper::*)(class FXActorWrapper)) &FXActorWrapper::BindTo, "C++: FXActorWrapper::BindTo(class FXActorWrapper) --> void", "ParentFXActor"_a);
		cl.def("SetAttachmentActor2", (void (FXActorWrapper::*)(class ActorWrapper)) &FXActorWrapper::SetAttachmentActor2, "C++: FXActorWrapper::SetAttachmentActor2(class ActorWrapper) --> void", "AttachToActor"_a);
		cl.def("PostBeginPlay", (void (FXActorWrapper::*)()) &FXActorWrapper::PostBeginPlay, "C++: FXActorWrapper::PostBeginPlay() --> void");
	}
}
