#include "pch.h"
#include <bakkesmod/wrappers/Engine/EngineTAWrapper.h>
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameEvent/GameEditorWrapper.h>
#include <bakkesmod/wrappers/GameEvent/GameSettingPlaylistWrapper.h>
#include <bakkesmod/wrappers/GameObject/BaseCameraWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/BoostWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_bakkesmod_wrappers_GameEvent_GameEditorWrapper(py::module &M)
{
	{ // GameEditorWrapper file:bakkesmod/wrappers/GameEvent/GameEditorWrapper.h line:11
		pybind11::class_<GameEditorWrapper, std::shared_ptr<GameEditorWrapper>, ServerWrapper> cl(M, "GameEditorWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](GameEditorWrapper const &o){ return new GameEditorWrapper(o); } ) );
		cl.def("assign", (class GameEditorWrapper & (GameEditorWrapper::*)(class GameEditorWrapper)) &GameEditorWrapper::operator=, "C++: GameEditorWrapper::operator=(class GameEditorWrapper) --> class GameEditorWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetActiveRoundNumber", (int (GameEditorWrapper::*)()) &GameEditorWrapper::GetActiveRoundNumber, "C++: GameEditorWrapper::GetActiveRoundNumber() --> int");
		cl.def("SetActiveRoundNumber", (void (GameEditorWrapper::*)(int)) &GameEditorWrapper::SetActiveRoundNumber, "C++: GameEditorWrapper::SetActiveRoundNumber(int) --> void", "newActiveRoundNumber"_a);
		cl.def("GetMaxRounds", (int (GameEditorWrapper::*)()) &GameEditorWrapper::GetMaxRounds, "C++: GameEditorWrapper::GetMaxRounds() --> int");
		cl.def("SetMaxRounds", (void (GameEditorWrapper::*)(int)) &GameEditorWrapper::SetMaxRounds, "C++: GameEditorWrapper::SetMaxRounds(int) --> void", "newMaxRounds"_a);
		cl.def("GetHistoryPosition", (int (GameEditorWrapper::*)()) &GameEditorWrapper::GetHistoryPosition, "C++: GameEditorWrapper::GetHistoryPosition() --> int");
		cl.def("SetHistoryPosition", (void (GameEditorWrapper::*)(int)) &GameEditorWrapper::SetHistoryPosition, "C++: GameEditorWrapper::SetHistoryPosition(int) --> void", "newHistoryPosition"_a);
		cl.def("GetMaxUndoHistory", (int (GameEditorWrapper::*)()) &GameEditorWrapper::GetMaxUndoHistory, "C++: GameEditorWrapper::GetMaxUndoHistory() --> int");
		cl.def("SetMaxUndoHistory", (void (GameEditorWrapper::*)(int)) &GameEditorWrapper::SetMaxUndoHistory, "C++: GameEditorWrapper::SetMaxUndoHistory(int) --> void", "newMaxUndoHistory"_a);
		cl.def("GetFXActorArchetype", (class FXActorWrapper (GameEditorWrapper::*)()) &GameEditorWrapper::GetFXActorArchetype, "C++: GameEditorWrapper::GetFXActorArchetype() --> class FXActorWrapper");
		cl.def("SetFXActorArchetype", (void (GameEditorWrapper::*)(class FXActorWrapper)) &GameEditorWrapper::SetFXActorArchetype, "C++: GameEditorWrapper::SetFXActorArchetype(class FXActorWrapper) --> void", "newFXActorArchetype"_a);
		cl.def("GetFXActor", (class FXActorWrapper (GameEditorWrapper::*)()) &GameEditorWrapper::GetFXActor, "C++: GameEditorWrapper::GetFXActor() --> class FXActorWrapper");
		cl.def("SetFXActor", (void (GameEditorWrapper::*)(class FXActorWrapper)) &GameEditorWrapper::SetFXActor, "C++: GameEditorWrapper::SetFXActor(class FXActorWrapper) --> void", "newFXActor"_a);
		cl.def("RotateActor", (void (GameEditorWrapper::*)(class PlayerControllerWrapper, unsigned long)) &GameEditorWrapper::RotateActor, "C++: GameEditorWrapper::RotateActor(class PlayerControllerWrapper, unsigned long) --> void", "PC"_a, "bSnapOrientation"_a);
		cl.def("PrevRound", (void (GameEditorWrapper::*)()) &GameEditorWrapper::PrevRound, "C++: GameEditorWrapper::PrevRound() --> void");
		cl.def("NextRound", (void (GameEditorWrapper::*)()) &GameEditorWrapper::NextRound, "C++: GameEditorWrapper::NextRound() --> void");
		cl.def("DecreaseTime", (void (GameEditorWrapper::*)()) &GameEditorWrapper::DecreaseTime, "C++: GameEditorWrapper::DecreaseTime() --> void");
		cl.def("IncreaseTime", (void (GameEditorWrapper::*)()) &GameEditorWrapper::IncreaseTime, "C++: GameEditorWrapper::IncreaseTime() --> void");
		cl.def("StopEditing", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) &GameEditorWrapper::StopEditing, "C++: GameEditorWrapper::StopEditing(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("StartEditing", (void (GameEditorWrapper::*)()) &GameEditorWrapper::StartEditing, "C++: GameEditorWrapper::StartEditing() --> void");
		cl.def("CycleActor", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) &GameEditorWrapper::CycleActor, "C++: GameEditorWrapper::CycleActor(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("ReleaseGrabbedActor", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) &GameEditorWrapper::ReleaseGrabbedActor, "C++: GameEditorWrapper::ReleaseGrabbedActor(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("ReleaseRotateActor", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) &GameEditorWrapper::ReleaseRotateActor, "C++: GameEditorWrapper::ReleaseRotateActor(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("ToggleRotateActor", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) &GameEditorWrapper::ToggleRotateActor, "C++: GameEditorWrapper::ToggleRotateActor(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("ToggleGrabActor", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) &GameEditorWrapper::ToggleGrabActor, "C++: GameEditorWrapper::ToggleGrabActor(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("ToggleReleaseActor", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) &GameEditorWrapper::ToggleReleaseActor, "C++: GameEditorWrapper::ToggleReleaseActor(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("ReleaseActor2", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) &GameEditorWrapper::ReleaseActor2, "C++: GameEditorWrapper::ReleaseActor2(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("GrabActor2", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) &GameEditorWrapper::GrabActor2, "C++: GameEditorWrapper::GrabActor2(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("CanQueSaveReplay", (bool (GameEditorWrapper::*)()) &GameEditorWrapper::CanQueSaveReplay, "C++: GameEditorWrapper::CanQueSaveReplay() --> bool");
		cl.def("ShouldUpdateCrosshair", (bool (GameEditorWrapper::*)()) &GameEditorWrapper::ShouldUpdateCrosshair, "C++: GameEditorWrapper::ShouldUpdateCrosshair() --> bool");
		cl.def("GetPlayerTeamNumber", (int (GameEditorWrapper::*)()) &GameEditorWrapper::GetPlayerTeamNumber, "C++: GameEditorWrapper::GetPlayerTeamNumber() --> int");
		cl.def("CanAddHistory", (bool (GameEditorWrapper::*)()) &GameEditorWrapper::CanAddHistory, "C++: GameEditorWrapper::CanAddHistory() --> bool");
		cl.def("ToggleEditorRound", (void (GameEditorWrapper::*)()) &GameEditorWrapper::ToggleEditorRound, "C++: GameEditorWrapper::ToggleEditorRound() --> void");
		cl.def("CommitRedoRound", (void (GameEditorWrapper::*)()) &GameEditorWrapper::CommitRedoRound, "C++: GameEditorWrapper::CommitRedoRound() --> void");
		cl.def("ResetRound", (void (GameEditorWrapper::*)()) &GameEditorWrapper::ResetRound, "C++: GameEditorWrapper::ResetRound() --> void");
		cl.def("Save2", (void (GameEditorWrapper::*)()) &GameEditorWrapper::Save2, "C++: GameEditorWrapper::Save2() --> void");
		cl.def("Redo2", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) &GameEditorWrapper::Redo2, "C++: GameEditorWrapper::Redo2(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("Undo2", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) &GameEditorWrapper::Undo2, "C++: GameEditorWrapper::Undo2(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("GetOtherHistoryType", (unsigned char (GameEditorWrapper::*)(unsigned char)) &GameEditorWrapper::GetOtherHistoryType, "C++: GameEditorWrapper::GetOtherHistoryType(unsigned char) --> unsigned char", "HistoryType"_a);
		cl.def("ClampUndoHistory", (void (GameEditorWrapper::*)()) &GameEditorWrapper::ClampUndoHistory, "C++: GameEditorWrapper::ClampUndoHistory() --> void");
		cl.def("ClearRedoHistory", (void (GameEditorWrapper::*)()) &GameEditorWrapper::ClearRedoHistory, "C++: GameEditorWrapper::ClearRedoHistory() --> void");
		cl.def("ClearAllHistory", (void (GameEditorWrapper::*)()) &GameEditorWrapper::ClearAllHistory, "C++: GameEditorWrapper::ClearAllHistory() --> void");
		cl.def("DestroyActor", (bool (GameEditorWrapper::*)(class ActorWrapper, unsigned char)) &GameEditorWrapper::DestroyActor, "C++: GameEditorWrapper::DestroyActor(class ActorWrapper, unsigned char) --> bool", "A"_a, "HistoryType"_a);
		cl.def("IsInEditorMode", (bool (GameEditorWrapper::*)()) &GameEditorWrapper::IsInEditorMode, "C++: GameEditorWrapper::IsInEditorMode() --> bool");
		cl.def("RemoveAllPointsFromScore", (void (GameEditorWrapper::*)(int)) &GameEditorWrapper::RemoveAllPointsFromScore, "C++: GameEditorWrapper::RemoveAllPointsFromScore(int) --> void", "TeamIndex"_a);
		cl.def("RemovePointsFromScore", (void (GameEditorWrapper::*)(int, int)) &GameEditorWrapper::RemovePointsFromScore, "C++: GameEditorWrapper::RemovePointsFromScore(int, int) --> void", "PointsToRemove"_a, "TeamIndex"_a);
		cl.def("DeleteAllExistingActorsBasedOffSpawnList", (void (GameEditorWrapper::*)()) &GameEditorWrapper::DeleteAllExistingActorsBasedOffSpawnList, "C++: GameEditorWrapper::DeleteAllExistingActorsBasedOffSpawnList() --> void");
		cl.def("RoundContainsASwitch", (bool (GameEditorWrapper::*)()) &GameEditorWrapper::RoundContainsASwitch, "C++: GameEditorWrapper::RoundContainsASwitch() --> bool");
		cl.def("EnableTriggers", (void (GameEditorWrapper::*)(unsigned long)) &GameEditorWrapper::EnableTriggers, "C++: GameEditorWrapper::EnableTriggers(unsigned long) --> void", "bEnable"_a);
		cl.def("HideCarSpawnPoints", (void (GameEditorWrapper::*)(unsigned long)) &GameEditorWrapper::HideCarSpawnPoints, "C++: GameEditorWrapper::HideCarSpawnPoints(unsigned long) --> void", "bHide"_a);
		cl.def("ResetSpawnLocations", (void (GameEditorWrapper::*)()) &GameEditorWrapper::ResetSpawnLocations, "C++: GameEditorWrapper::ResetSpawnLocations() --> void");
		cl.def("OnSpawnedArchetype", (void (GameEditorWrapper::*)(class ActorWrapper, unsigned char)) &GameEditorWrapper::OnSpawnedArchetype, "C++: GameEditorWrapper::OnSpawnedArchetype(class ActorWrapper, unsigned char) --> void", "SpawnedActor"_a, "HistoryType"_a);
		cl.def("SpawnArchetype", (void (GameEditorWrapper::*)(class PlayerControllerWrapper, int)) &GameEditorWrapper::SpawnArchetype, "C++: GameEditorWrapper::SpawnArchetype(class PlayerControllerWrapper, int) --> void", "Controller"_a, "ArchetypeIndex"_a);
		cl.def("IncrementSelectedSpawnArchetypeIndex", (void (GameEditorWrapper::*)(int, int *)) &GameEditorWrapper::IncrementSelectedSpawnArchetypeIndex, "C++: GameEditorWrapper::IncrementSelectedSpawnArchetypeIndex(int, int *) --> void", "Direction"_a, "Index"_a);
		cl.def("CanChangeTeam", (bool (GameEditorWrapper::*)()) &GameEditorWrapper::CanChangeTeam, "C++: GameEditorWrapper::CanChangeTeam() --> bool");
		cl.def("ResetBallsToDefaultPosition", (void (GameEditorWrapper::*)()) &GameEditorWrapper::ResetBallsToDefaultPosition, "C++: GameEditorWrapper::ResetBallsToDefaultPosition() --> void");
		cl.def("FireBalls", (void (GameEditorWrapper::*)()) &GameEditorWrapper::FireBalls, "C++: GameEditorWrapper::FireBalls() --> void");
		cl.def("Interact", (void (GameEditorWrapper::*)()) &GameEditorWrapper::Interact, "C++: GameEditorWrapper::Interact() --> void");
		cl.def("ShouldResetBalls", (bool (GameEditorWrapper::*)()) &GameEditorWrapper::ShouldResetBalls, "C++: GameEditorWrapper::ShouldResetBalls() --> bool");
		cl.def("OnVehicleSetup", (void (GameEditorWrapper::*)(class CarWrapper)) &GameEditorWrapper::OnVehicleSetup, "C++: GameEditorWrapper::OnVehicleSetup(class CarWrapper) --> void", "Car"_a);
		cl.def("HandleVehicleSetup", (void (GameEditorWrapper::*)(class CarWrapper)) &GameEditorWrapper::HandleVehicleSetup, "C++: GameEditorWrapper::HandleVehicleSetup(class CarWrapper) --> void", "Car"_a);
		cl.def("OnPlayerRestarted", (void (GameEditorWrapper::*)(class CarWrapper)) &GameEditorWrapper::OnPlayerRestarted, "C++: GameEditorWrapper::OnPlayerRestarted(class CarWrapper) --> void", "PlayerCar"_a);
		cl.def("ChooseTeam", (bool (GameEditorWrapper::*)(int, class PlayerControllerWrapper)) &GameEditorWrapper::ChooseTeam, "C++: GameEditorWrapper::ChooseTeam(int, class PlayerControllerWrapper) --> bool", "TeamIndex"_a, "Player"_a);
		cl.def("InitFX", (void (GameEditorWrapper::*)()) &GameEditorWrapper::InitFX, "C++: GameEditorWrapper::InitFX() --> void");
		cl.def("eventPostBeginPlay", (void (GameEditorWrapper::*)()) &GameEditorWrapper::eventPostBeginPlay, "C++: GameEditorWrapper::eventPostBeginPlay() --> void");
	}
	{ // GameSettingPlaylistWrapper file:bakkesmod/wrappers/GameEvent/GameSettingPlaylistWrapper.h line:8
		pybind11::class_<GameSettingPlaylistWrapper, std::shared_ptr<GameSettingPlaylistWrapper>, ObjectWrapper> cl(M, "GameSettingPlaylistWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](GameSettingPlaylistWrapper const &o){ return new GameSettingPlaylistWrapper(o); } ) );
		cl.def("assign", (class GameSettingPlaylistWrapper & (GameSettingPlaylistWrapper::*)(class GameSettingPlaylistWrapper)) &GameSettingPlaylistWrapper::operator=, "C++: GameSettingPlaylistWrapper::operator=(class GameSettingPlaylistWrapper) --> class GameSettingPlaylistWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetTitle", (class UnrealStringWrapper (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetTitle, "C++: GameSettingPlaylistWrapper::GetTitle() --> class UnrealStringWrapper");
		cl.def("GetDescription", (class UnrealStringWrapper (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetDescription, "C++: GameSettingPlaylistWrapper::GetDescription() --> class UnrealStringWrapper");
		cl.def("GetPlayerCount", (int (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetPlayerCount, "C++: GameSettingPlaylistWrapper::GetPlayerCount() --> int");
		cl.def("SetPlayerCount", (void (GameSettingPlaylistWrapper::*)(int)) &GameSettingPlaylistWrapper::SetPlayerCount, "C++: GameSettingPlaylistWrapper::SetPlayerCount(int) --> void", "newPlayerCount"_a);
		cl.def("GetbStandard", (unsigned long (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetbStandard, "C++: GameSettingPlaylistWrapper::GetbStandard() --> unsigned long");
		cl.def("SetbStandard", (void (GameSettingPlaylistWrapper::*)(unsigned long)) &GameSettingPlaylistWrapper::SetbStandard, "C++: GameSettingPlaylistWrapper::SetbStandard(unsigned long) --> void", "newbStandard"_a);
		cl.def("GetbRanked", (unsigned long (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetbRanked, "C++: GameSettingPlaylistWrapper::GetbRanked() --> unsigned long");
		cl.def("SetbRanked", (void (GameSettingPlaylistWrapper::*)(unsigned long)) &GameSettingPlaylistWrapper::SetbRanked, "C++: GameSettingPlaylistWrapper::SetbRanked(unsigned long) --> void", "newbRanked"_a);
		cl.def("GetbSolo", (unsigned long (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetbSolo, "C++: GameSettingPlaylistWrapper::GetbSolo() --> unsigned long");
		cl.def("SetbSolo", (void (GameSettingPlaylistWrapper::*)(unsigned long)) &GameSettingPlaylistWrapper::SetbSolo, "C++: GameSettingPlaylistWrapper::SetbSolo(unsigned long) --> void", "newbSolo"_a);
		cl.def("GetbNew", (unsigned long (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetbNew, "C++: GameSettingPlaylistWrapper::GetbNew() --> unsigned long");
		cl.def("SetbNew", (void (GameSettingPlaylistWrapper::*)(unsigned long)) &GameSettingPlaylistWrapper::SetbNew, "C++: GameSettingPlaylistWrapper::SetbNew(unsigned long) --> void", "newbNew"_a);
		cl.def("GetbApplyQuitPenalty", (unsigned long (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetbApplyQuitPenalty, "C++: GameSettingPlaylistWrapper::GetbApplyQuitPenalty() --> unsigned long");
		cl.def("SetbApplyQuitPenalty", (void (GameSettingPlaylistWrapper::*)(unsigned long)) &GameSettingPlaylistWrapper::SetbApplyQuitPenalty, "C++: GameSettingPlaylistWrapper::SetbApplyQuitPenalty(unsigned long) --> void", "newbApplyQuitPenalty"_a);
		cl.def("GetbAllowForfeit", (unsigned long (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetbAllowForfeit, "C++: GameSettingPlaylistWrapper::GetbAllowForfeit() --> unsigned long");
		cl.def("SetbAllowForfeit", (void (GameSettingPlaylistWrapper::*)(unsigned long)) &GameSettingPlaylistWrapper::SetbAllowForfeit, "C++: GameSettingPlaylistWrapper::SetbAllowForfeit(unsigned long) --> void", "newbAllowForfeit"_a);
		cl.def("GetbDisableRankedReconnect", (unsigned long (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetbDisableRankedReconnect, "C++: GameSettingPlaylistWrapper::GetbDisableRankedReconnect() --> unsigned long");
		cl.def("SetbDisableRankedReconnect", (void (GameSettingPlaylistWrapper::*)(unsigned long)) &GameSettingPlaylistWrapper::SetbDisableRankedReconnect, "C++: GameSettingPlaylistWrapper::SetbDisableRankedReconnect(unsigned long) --> void", "newbDisableRankedReconnect"_a);
		cl.def("GetbIgnoreAssignTeams", (unsigned long (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetbIgnoreAssignTeams, "C++: GameSettingPlaylistWrapper::GetbIgnoreAssignTeams() --> unsigned long");
		cl.def("SetbIgnoreAssignTeams", (void (GameSettingPlaylistWrapper::*)(unsigned long)) &GameSettingPlaylistWrapper::SetbIgnoreAssignTeams, "C++: GameSettingPlaylistWrapper::SetbIgnoreAssignTeams(unsigned long) --> void", "newbIgnoreAssignTeams"_a);
		cl.def("GetbKickOnMigrate", (unsigned long (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetbKickOnMigrate, "C++: GameSettingPlaylistWrapper::GetbKickOnMigrate() --> unsigned long");
		cl.def("SetbKickOnMigrate", (void (GameSettingPlaylistWrapper::*)(unsigned long)) &GameSettingPlaylistWrapper::SetbKickOnMigrate, "C++: GameSettingPlaylistWrapper::SetbKickOnMigrate(unsigned long) --> void", "newbKickOnMigrate"_a);
		cl.def("GetbAllowClubs", (unsigned long (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetbAllowClubs, "C++: GameSettingPlaylistWrapper::GetbAllowClubs() --> unsigned long");
		cl.def("SetbAllowClubs", (void (GameSettingPlaylistWrapper::*)(unsigned long)) &GameSettingPlaylistWrapper::SetbAllowClubs, "C++: GameSettingPlaylistWrapper::SetbAllowClubs(unsigned long) --> void", "newbAllowClubs"_a);
		cl.def("GetbPlayersVSBots", (unsigned long (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetbPlayersVSBots, "C++: GameSettingPlaylistWrapper::GetbPlayersVSBots() --> unsigned long");
		cl.def("SetbPlayersVSBots", (void (GameSettingPlaylistWrapper::*)(unsigned long)) &GameSettingPlaylistWrapper::SetbPlayersVSBots, "C++: GameSettingPlaylistWrapper::SetbPlayersVSBots(unsigned long) --> void", "newbPlayersVSBots"_a);
		cl.def("GetPlaylistId", (int (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetPlaylistId, "C++: GameSettingPlaylistWrapper::GetPlaylistId() --> int");
		cl.def("SetPlaylistId", (void (GameSettingPlaylistWrapper::*)(int)) &GameSettingPlaylistWrapper::SetPlaylistId, "C++: GameSettingPlaylistWrapper::SetPlaylistId(int) --> void", "newPlaylistId"_a);
		cl.def("GetServerCommand", (class UnrealStringWrapper (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::GetServerCommand, "C++: GameSettingPlaylistWrapper::GetServerCommand() --> class UnrealStringWrapper");
		cl.def("IsLanMatch", (bool (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::IsLanMatch, "C++: GameSettingPlaylistWrapper::IsLanMatch() --> bool");
		cl.def("IsPrivateMatch", (bool (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::IsPrivateMatch, "C++: GameSettingPlaylistWrapper::IsPrivateMatch() --> bool");
		cl.def("ShouldUpdateSkills", (bool (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::ShouldUpdateSkills, "C++: GameSettingPlaylistWrapper::ShouldUpdateSkills() --> bool");
		cl.def("IsValidID", (bool (GameSettingPlaylistWrapper::*)(int)) &GameSettingPlaylistWrapper::IsValidID, "C++: GameSettingPlaylistWrapper::IsValidID(int) --> bool", "InPlaylistID"_a);
		cl.def("IsValid2", (bool (GameSettingPlaylistWrapper::*)()) &GameSettingPlaylistWrapper::IsValid2, "C++: GameSettingPlaylistWrapper::IsValid2() --> bool");
	}
}
