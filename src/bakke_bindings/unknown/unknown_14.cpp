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

		cl.def( pybind11::init<unsigned long, long, struct std::type_index>(), pybind11::arg("mem"), pybind11::arg("pluginType"), pybind11::arg("idx") );

		cl.def( pybind11::init( [](GameWrapper const &o){ return new GameWrapper(o); } ) );
		//cl.def_readwrite("pimpl", &GameWrapper::pimpl);
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void (class ServerWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCaller<ServerWrapper,nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class ServerWrapper, void *, std::string)>) --> void", pybind11::arg("eventName"), pybind11::arg("callback"));
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void (class ActorWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCaller<ActorWrapper,nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class ActorWrapper, void *, std::string)>) --> void", pybind11::arg("eventName"), pybind11::arg("callback"));
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void (class CarWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCaller<CarWrapper,nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class CarWrapper, void *, std::string)>) --> void", pybind11::arg("eventName"), pybind11::arg("callback"));
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void (class CarComponentWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCaller<CarComponentWrapper,nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class CarComponentWrapper, void *, std::string)>) --> void", pybind11::arg("eventName"), pybind11::arg("callback"));
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void (class PlayerControllerWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCaller<PlayerControllerWrapper,nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class PlayerControllerWrapper, void *, std::string)>) --> void", pybind11::arg("eventName"), pybind11::arg("callback"));
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void (class BallWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCaller<BallWrapper,nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class BallWrapper, void *, std::string)>) --> void", pybind11::arg("eventName"), pybind11::arg("callback"));
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void (class ActorWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCallerPost<ActorWrapper,nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class ActorWrapper, void *, std::string)>) --> void", pybind11::arg("eventName"), pybind11::arg("callback"));
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void (class ServerWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCallerPost<ServerWrapper,nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class ServerWrapper, void *, std::string)>) --> void", pybind11::arg("eventName"), pybind11::arg("callback"));
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void (class CarWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCallerPost<CarWrapper,nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class CarWrapper, void *, std::string)>) --> void", pybind11::arg("eventName"), pybind11::arg("callback"));
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void (class CarComponentWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCallerPost<CarComponentWrapper,nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class CarComponentWrapper, void *, std::string)>) --> void", pybind11::arg("eventName"), pybind11::arg("callback"));
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void (class PlayerControllerWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCallerPost<PlayerControllerWrapper,nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class PlayerControllerWrapper, void *, std::string)>) --> void", pybind11::arg("eventName"), pybind11::arg("callback"));
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void (class BallWrapper, void *, std::string)>)) &GameWrapper::HookEventWithCallerPost<BallWrapper,nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class BallWrapper, void *, std::string)>) --> void", pybind11::arg("eventName"), pybind11::arg("callback"));
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
		cl.def("SetTimeout", (void (GameWrapper::*)(class std::function<void (class GameWrapper *)>, float)) &GameWrapper::SetTimeout, "C++: GameWrapper::SetTimeout(class std::function<void (class GameWrapper *)>, float) --> void", pybind11::arg("theLambda"), pybind11::arg("time"));
		cl.def("Execute", (void (GameWrapper::*)(class std::function<void (class GameWrapper *)>)) &GameWrapper::Execute, "C++: GameWrapper::Execute(class std::function<void (class GameWrapper *)>) --> void", pybind11::arg("theLambda"));
		cl.def("RegisterDrawable", (void (GameWrapper::*)(class std::function<void (class CanvasWrapper)>)) &GameWrapper::RegisterDrawable, "C++: GameWrapper::RegisterDrawable(class std::function<void (class CanvasWrapper)>) --> void", pybind11::arg("callback"));
		cl.def("UnregisterDrawables", (void (GameWrapper::*)()) &GameWrapper::UnregisterDrawables, "C++: GameWrapper::UnregisterDrawables() --> void");
		cl.def("GetFNameByIndex", (std::string (GameWrapper::*)(int)) &GameWrapper::GetFNameByIndex, "C++: GameWrapper::GetFNameByIndex(int) --> std::string", pybind11::arg("index"));
		cl.def("GetFNameIndexByString", (int (GameWrapper::*)(std::string)) &GameWrapper::GetFNameIndexByString, "C++: GameWrapper::GetFNameIndexByString(std::string) --> int", pybind11::arg("name"));
		cl.def("HookEvent", (void (GameWrapper::*)(std::string, class std::function<void (std::string)>)) &GameWrapper::HookEvent, "C++: GameWrapper::HookEvent(std::string, class std::function<void (std::string)>) --> void", pybind11::arg("eventName"), pybind11::arg("callback"));
		cl.def("UnhookEvent", (void (GameWrapper::*)(std::string)) &GameWrapper::UnhookEvent, "C++: GameWrapper::UnhookEvent(std::string) --> void", pybind11::arg("eventName"));
		cl.def("HookEventPost", (void (GameWrapper::*)(std::string, class std::function<void (std::string)>)) &GameWrapper::HookEventPost, "C++: GameWrapper::HookEventPost(std::string, class std::function<void (std::string)>) --> void", pybind11::arg("eventName"), pybind11::arg("callback"));
		cl.def("RegisterBot", (void (GameWrapper::*)(enum CARBODY, class std::function<void (float, struct ControllerInput *, class CarWrapper *, class ServerWrapper *)>, std::string, bool)) &GameWrapper::RegisterBot, "C++: GameWrapper::RegisterBot(enum CARBODY, class std::function<void (float, struct ControllerInput *, class CarWrapper *, class ServerWrapper *)>, std::string, bool) --> void", pybind11::arg("car"), pybind11::arg("tickfunc"), pybind11::arg("botName"), pybind11::arg("overridePlayer"));
		cl.def("LogToChatbox", (void (GameWrapper::*)(std::string, std::string)) &GameWrapper::LogToChatbox, "C++: GameWrapper::LogToChatbox(std::string, std::string) --> void", pybind11::arg("text"), pybind11::arg("sender"));
		cl.def("LoadToastTexture", (void (GameWrapper::*)(std::string, std::string)) &GameWrapper::LoadToastTexture, "C++: GameWrapper::LoadToastTexture(std::string, std::string) --> void", pybind11::arg("name"), pybind11::arg("path"));
		cl.def("Toast", (void (GameWrapper::*)(std::string, std::string, std::string, float, unsigned char, float, float)) &GameWrapper::Toast, "C++: GameWrapper::Toast(std::string, std::string, std::string, float, unsigned char, float, float) --> void", pybind11::arg("title"), pybind11::arg("text"), pybind11::arg("texture"), pybind11::arg("timeout"), pybind11::arg("toastType"), pybind11::arg("width"), pybind11::arg("height"));
		cl.def("IsKeyPressed", (bool (GameWrapper::*)(int)) &GameWrapper::IsKeyPressed, "C++: GameWrapper::IsKeyPressed(int) --> bool", pybind11::arg("keyName"));
		cl.def("ExecuteUnrealCommand", (void (GameWrapper::*)(std::string)) &GameWrapper::ExecuteUnrealCommand, "C++: GameWrapper::ExecuteUnrealCommand(std::string) --> void", pybind11::arg("command"));
		cl.def("GetRandomMap", (std::string (GameWrapper::*)()) &GameWrapper::GetRandomMap, "C++: GameWrapper::GetRandomMap() --> std::string");
		cl.def("GetSteamID", (unsigned long long (GameWrapper::*)()) &GameWrapper::GetSteamID, "C++: GameWrapper::GetSteamID() --> unsigned long long");
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
}
