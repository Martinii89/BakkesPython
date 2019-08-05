#include "pch.h"
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameEvent/GameSettingPlaylistWrapper.h>
#include <bakkesmod/wrappers/GameEvent/ReplayDirectorWrapper.h>
#include <bakkesmod/wrappers/GameEvent/ReplaySoccarWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/StructArrayWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_bakkesmod_wrappers_GameEvent_ReplayDirectorWrapper(py::module &M)
{
	{ // ReplayDirectorWrapper file:bakkesmod/wrappers/GameEvent/ReplayDirectorWrapper.h line:16
		pybind11::class_<ReplayDirectorWrapper, std::shared_ptr<ReplayDirectorWrapper>, ActorWrapper> cl(M, "ReplayDirectorWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ReplayDirectorWrapper const &o){ return new ReplayDirectorWrapper(o); } ) );
		cl.def("assign", (class ReplayDirectorWrapper & (ReplayDirectorWrapper::*)(class ReplayDirectorWrapper)) &ReplayDirectorWrapper::operator=, "C++: ReplayDirectorWrapper::operator=(class ReplayDirectorWrapper) --> class ReplayDirectorWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetSlomoPreScoreTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetSlomoPreScoreTime, "C++: ReplayDirectorWrapper::GetSlomoPreScoreTime() --> float");
		cl.def("SetSlomoPreScoreTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetSlomoPreScoreTime, "C++: ReplayDirectorWrapper::SetSlomoPreScoreTime(float) --> void", "newSlomoPreScoreTime"_a);
		cl.def("GetSlomoPostScoreTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetSlomoPostScoreTime, "C++: ReplayDirectorWrapper::GetSlomoPostScoreTime() --> float");
		cl.def("SetSlomoPostScoreTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetSlomoPostScoreTime, "C++: ReplayDirectorWrapper::SetSlomoPostScoreTime(float) --> void", "newSlomoPostScoreTime"_a);
		cl.def("GetSlomoDefendTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetSlomoDefendTime, "C++: ReplayDirectorWrapper::GetSlomoDefendTime() --> float");
		cl.def("SetSlomoDefendTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetSlomoDefendTime, "C++: ReplayDirectorWrapper::SetSlomoDefendTime(float) --> void", "newSlomoDefendTime"_a);
		cl.def("GetSlomoDefendDistance", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetSlomoDefendDistance, "C++: ReplayDirectorWrapper::GetSlomoDefendDistance() --> float");
		cl.def("SetSlomoDefendDistance", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetSlomoDefendDistance, "C++: ReplayDirectorWrapper::SetSlomoDefendDistance(float) --> void", "newSlomoDefendDistance"_a);
		cl.def("GetSlomoTimeDilation", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetSlomoTimeDilation, "C++: ReplayDirectorWrapper::GetSlomoTimeDilation() --> float");
		cl.def("SetSlomoTimeDilation", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetSlomoTimeDilation, "C++: ReplayDirectorWrapper::SetSlomoTimeDilation(float) --> void", "newSlomoTimeDilation"_a);
		cl.def("GetMinReplayTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetMinReplayTime, "C++: ReplayDirectorWrapper::GetMinReplayTime() --> float");
		cl.def("SetMinReplayTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetMinReplayTime, "C++: ReplayDirectorWrapper::SetMinReplayTime(float) --> void", "newMinReplayTime"_a);
		cl.def("GetMaxReplayTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetMaxReplayTime, "C++: ReplayDirectorWrapper::GetMaxReplayTime() --> float");
		cl.def("SetMaxReplayTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetMaxReplayTime, "C++: ReplayDirectorWrapper::SetMaxReplayTime(float) --> void", "newMaxReplayTime"_a);
		cl.def("GetReplayPadding", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetReplayPadding, "C++: ReplayDirectorWrapper::GetReplayPadding() --> float");
		cl.def("SetReplayPadding", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetReplayPadding, "C++: ReplayDirectorWrapper::SetReplayPadding(float) --> void", "newReplayPadding"_a);
		cl.def("GetHighlightReplayDuration", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetHighlightReplayDuration, "C++: ReplayDirectorWrapper::GetHighlightReplayDuration() --> float");
		cl.def("SetHighlightReplayDuration", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetHighlightReplayDuration, "C++: ReplayDirectorWrapper::SetHighlightReplayDuration(float) --> void", "newHighlightReplayDuration"_a);
		cl.def("GetTimeBeforeHighlightReplay", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetTimeBeforeHighlightReplay, "C++: ReplayDirectorWrapper::GetTimeBeforeHighlightReplay() --> float");
		cl.def("SetTimeBeforeHighlightReplay", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetTimeBeforeHighlightReplay, "C++: ReplayDirectorWrapper::SetTimeBeforeHighlightReplay(float) --> void", "newTimeBeforeHighlightReplay"_a);
		cl.def("GetReplay", (class ReplaySoccarWrapper (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetReplay, "C++: ReplayDirectorWrapper::GetReplay() --> class ReplaySoccarWrapper");
		cl.def("SetReplay", (void (ReplayDirectorWrapper::*)(class ReplaySoccarWrapper)) &ReplayDirectorWrapper::SetReplay, "C++: ReplayDirectorWrapper::SetReplay(class ReplaySoccarWrapper) --> void", "newReplay"_a);
		cl.def("GetFocusCar", (class ActorWrapper (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetFocusCar, "C++: ReplayDirectorWrapper::GetFocusCar() --> class ActorWrapper");
		cl.def("SetFocusCar", (void (ReplayDirectorWrapper::*)(class ActorWrapper)) &ReplayDirectorWrapper::SetFocusCar, "C++: ReplayDirectorWrapper::SetFocusCar(class ActorWrapper) --> void", "newFocusCar"_a);
		cl.def("GetFocusCarChangeTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetFocusCarChangeTime, "C++: ReplayDirectorWrapper::GetFocusCarChangeTime() --> float");
		cl.def("SetFocusCarChangeTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetFocusCarChangeTime, "C++: ReplayDirectorWrapper::SetFocusCarChangeTime(float) --> void", "newFocusCarChangeTime"_a);
		cl.def("GetFocusBall", (class ActorWrapper (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetFocusBall, "C++: ReplayDirectorWrapper::GetFocusBall() --> class ActorWrapper");
		cl.def("SetFocusBall", (void (ReplayDirectorWrapper::*)(class ActorWrapper)) &ReplayDirectorWrapper::SetFocusBall, "C++: ReplayDirectorWrapper::SetFocusBall(class ActorWrapper) --> void", "newFocusBall"_a);
		cl.def("GetScoreTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetScoreTime, "C++: ReplayDirectorWrapper::GetScoreTime() --> float");
		cl.def("SetScoreTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetScoreTime, "C++: ReplayDirectorWrapper::SetScoreTime(float) --> void", "newScoreTime"_a);
		cl.def("GetScoreHitIndex", (int (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetScoreHitIndex, "C++: ReplayDirectorWrapper::GetScoreHitIndex() --> int");
		cl.def("SetScoreHitIndex", (void (ReplayDirectorWrapper::*)(int)) &ReplayDirectorWrapper::SetScoreHitIndex, "C++: ReplayDirectorWrapper::SetScoreHitIndex(int) --> void", "newScoreHitIndex"_a);
		cl.def("GetScoredGoal", (class GoalWrapper (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetScoredGoal, "C++: ReplayDirectorWrapper::GetScoredGoal() --> class GoalWrapper");
		cl.def("SetScoredGoal", (void (ReplayDirectorWrapper::*)(class GoalWrapper)) &ReplayDirectorWrapper::SetScoredGoal, "C++: ReplayDirectorWrapper::SetScoredGoal(class GoalWrapper) --> void", "newScoredGoal"_a);
		cl.def("GetbSlomo", (unsigned long (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetbSlomo, "C++: ReplayDirectorWrapper::GetbSlomo() --> unsigned long");
		cl.def("SetbSlomo", (void (ReplayDirectorWrapper::*)(unsigned long)) &ReplayDirectorWrapper::SetbSlomo, "C++: ReplayDirectorWrapper::SetbSlomo(unsigned long) --> void", "newbSlomo"_a);
		cl.def("GetbSlomoForDefender", (unsigned long (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetbSlomoForDefender, "C++: ReplayDirectorWrapper::GetbSlomoForDefender() --> unsigned long");
		cl.def("SetbSlomoForDefender", (void (ReplayDirectorWrapper::*)(unsigned long)) &ReplayDirectorWrapper::SetbSlomoForDefender, "C++: ReplayDirectorWrapper::SetbSlomoForDefender(unsigned long) --> void", "newbSlomoForDefender"_a);
		cl.def("GetbAutoSave", (unsigned long (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetbAutoSave, "C++: ReplayDirectorWrapper::GetbAutoSave() --> unsigned long");
		cl.def("SetbAutoSave", (void (ReplayDirectorWrapper::*)(unsigned long)) &ReplayDirectorWrapper::SetbAutoSave, "C++: ReplayDirectorWrapper::SetbAutoSave(unsigned long) --> void", "newbAutoSave"_a);
		cl.def("GetFocusHitIndex", (int (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetFocusHitIndex, "C++: ReplayDirectorWrapper::GetFocusHitIndex() --> int");
		cl.def("SetFocusHitIndex", (void (ReplayDirectorWrapper::*)(int)) &ReplayDirectorWrapper::SetFocusHitIndex, "C++: ReplayDirectorWrapper::SetFocusHitIndex(int) --> void", "newFocusHitIndex"_a);
		cl.def("GetFocusCarIdx", (int (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetFocusCarIdx, "C++: ReplayDirectorWrapper::GetFocusCarIdx() --> int");
		cl.def("SetFocusCarIdx", (void (ReplayDirectorWrapper::*)(int)) &ReplayDirectorWrapper::SetFocusCarIdx, "C++: ReplayDirectorWrapper::SetFocusCarIdx(int) --> void", "newFocusCarIdx"_a);
		cl.def("GetReplayStartGameTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetReplayStartGameTime, "C++: ReplayDirectorWrapper::GetReplayStartGameTime() --> float");
		cl.def("SetReplayStartGameTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetReplayStartGameTime, "C++: ReplayDirectorWrapper::SetReplayStartGameTime(float) --> void", "newReplayStartGameTime"_a);
		cl.def("GetBallSpawnTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetBallSpawnTime, "C++: ReplayDirectorWrapper::GetBallSpawnTime() --> float");
		cl.def("SetBallSpawnTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetBallSpawnTime, "C++: ReplayDirectorWrapper::SetBallSpawnTime(float) --> void", "newBallSpawnTime"_a);
		cl.def("GetSoccarGame", (class ServerWrapper (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetSoccarGame, "C++: ReplayDirectorWrapper::GetSoccarGame() --> class ServerWrapper");
		cl.def("SetSoccarGame", (void (ReplayDirectorWrapper::*)(class ServerWrapper)) &ReplayDirectorWrapper::SetSoccarGame, "C++: ReplayDirectorWrapper::SetSoccarGame(class ServerWrapper) --> void", "newSoccarGame"_a);
		cl.def("GetScoredOnTeam", (unsigned char (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetScoredOnTeam, "C++: ReplayDirectorWrapper::GetScoredOnTeam() --> unsigned char");
		cl.def("SetScoredOnTeam", (void (ReplayDirectorWrapper::*)(unsigned char)) &ReplayDirectorWrapper::SetScoredOnTeam, "C++: ReplayDirectorWrapper::SetScoredOnTeam(unsigned char) --> void", "newScoredOnTeam"_a);
		cl.def("GetForceCutToFocusActors", (int (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetForceCutToFocusActors, "C++: ReplayDirectorWrapper::GetForceCutToFocusActors() --> int");
		cl.def("SetForceCutToFocusActors", (void (ReplayDirectorWrapper::*)(int)) &ReplayDirectorWrapper::SetForceCutToFocusActors, "C++: ReplayDirectorWrapper::SetForceCutToFocusActors(int) --> void", "newForceCutToFocusActors"_a);
		cl.def("HandleReplayFinished", (void (ReplayDirectorWrapper::*)(class ReplayWrapper)) &ReplayDirectorWrapper::HandleReplayFinished, "C++: ReplayDirectorWrapper::HandleReplayFinished(class ReplayWrapper) --> void", "InReplay"_a);
		cl.def("ShouldSlomo", (bool (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::ShouldSlomo, "C++: ReplayDirectorWrapper::ShouldSlomo() --> bool");
		cl.def("UpdateSlomo", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::UpdateSlomo, "C++: ReplayDirectorWrapper::UpdateSlomo() --> void");
		cl.def("UpdateFocusActors", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::UpdateFocusActors, "C++: ReplayDirectorWrapper::UpdateFocusActors() --> void");
		cl.def("PlayRandomHighlight", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::PlayRandomHighlight, "C++: ReplayDirectorWrapper::PlayRandomHighlight() --> void");
		cl.def("GetNextHighlightFrame", (int (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetNextHighlightFrame, "C++: ReplayDirectorWrapper::GetNextHighlightFrame() --> int");
		cl.def("SetAutoSave", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::SetAutoSave, "C++: ReplayDirectorWrapper::SetAutoSave() --> void");
		cl.def("SaveUserKeyframe", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::SaveUserKeyframe, "C++: ReplayDirectorWrapper::SaveUserKeyframe() --> void");
		cl.def("BuildFocusCars", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::BuildFocusCars, "C++: ReplayDirectorWrapper::BuildFocusCars() --> void");
		cl.def("SetSlomo2", (void (ReplayDirectorWrapper::*)(unsigned long)) &ReplayDirectorWrapper::SetSlomo2, "C++: ReplayDirectorWrapper::SetSlomo2(unsigned long) --> void", "bNewSlomo"_a);
		cl.def("eventTick", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::eventTick, "C++: ReplayDirectorWrapper::eventTick(float) --> void", "DeltaTime"_a);
		cl.def("eventDestroyed", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::eventDestroyed, "C++: ReplayDirectorWrapper::eventDestroyed() --> void");
		cl.def("GetReplayTimeSeconds", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetReplayTimeSeconds, "C++: ReplayDirectorWrapper::GetReplayTimeSeconds() --> float");
		cl.def("SetFocusActors", (void (ReplayDirectorWrapper::*)(class ActorWrapper, class ActorWrapper)) &ReplayDirectorWrapper::SetFocusActors, "C++: ReplayDirectorWrapper::SetFocusActors(class ActorWrapper, class ActorWrapper) --> void", "NewCar"_a, "NewBall"_a);
		cl.def("GetReplayStartTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetReplayStartTime, "C++: ReplayDirectorWrapper::GetReplayStartTime() --> float");
		cl.def("SetSlomoForDefender", (void (ReplayDirectorWrapper::*)(class BallWrapper, int)) &ReplayDirectorWrapper::SetSlomoForDefender, "C++: ReplayDirectorWrapper::SetSlomoForDefender(class BallWrapper, int) --> void", "Ball"_a, "DefendingTeam"_a);
		cl.def("OnScoreDataChanged", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::OnScoreDataChanged, "C++: ReplayDirectorWrapper::OnScoreDataChanged() --> void");
		cl.def("HandleScoreUpdated", (void (ReplayDirectorWrapper::*)(class TeamWrapper)) &ReplayDirectorWrapper::HandleScoreUpdated, "C++: ReplayDirectorWrapper::HandleScoreUpdated(class TeamWrapper) --> void", "Team"_a);
		cl.def("HandleAllTeamsCreated", (void (ReplayDirectorWrapper::*)(class TeamGameEventWrapper)) &ReplayDirectorWrapper::HandleAllTeamsCreated, "C++: ReplayDirectorWrapper::HandleAllTeamsCreated(class TeamGameEventWrapper) --> void", "TeamGame"_a);
		cl.def("RecordPlayers", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::RecordPlayers, "C++: ReplayDirectorWrapper::RecordPlayers() --> void");
		cl.def("HandleGameStateChanged", (void (ReplayDirectorWrapper::*)(class GameEventWrapper)) &ReplayDirectorWrapper::HandleGameStateChanged, "C++: ReplayDirectorWrapper::HandleGameStateChanged(class GameEventWrapper) --> void", "G"_a);
		cl.def("OnSoccarGameSet", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::OnSoccarGameSet, "C++: ReplayDirectorWrapper::OnSoccarGameSet() --> void");
		cl.def("SetGameEvent", (void (ReplayDirectorWrapper::*)(class ServerWrapper)) &ReplayDirectorWrapper::SetGameEvent, "C++: ReplayDirectorWrapper::SetGameEvent(class ServerWrapper) --> void", "InGameEvent"_a);
		cl.def("EventFocusCarChanged", (void (ReplayDirectorWrapper::*)(class ActorWrapper)) &ReplayDirectorWrapper::EventFocusCarChanged, "C++: ReplayDirectorWrapper::EventFocusCarChanged(class ActorWrapper) --> void", "NewFocusCar"_a);
		cl.def("EventAutoSaveChanged", (void (ReplayDirectorWrapper::*)(class ReplayDirectorWrapper)) &ReplayDirectorWrapper::EventAutoSaveChanged, "C++: ReplayDirectorWrapper::EventAutoSaveChanged(class ReplayDirectorWrapper) --> void", "Director"_a);
		cl.def("EventScoreDataChanged", (void (ReplayDirectorWrapper::*)(class ReplayDirectorWrapper)) &ReplayDirectorWrapper::EventScoreDataChanged, "C++: ReplayDirectorWrapper::EventScoreDataChanged(class ReplayDirectorWrapper) --> void", "Director"_a);
		cl.def("EventReplayFinished", (void (ReplayDirectorWrapper::*)(class ReplayDirectorWrapper)) &ReplayDirectorWrapper::EventReplayFinished, "C++: ReplayDirectorWrapper::EventReplayFinished(class ReplayDirectorWrapper) --> void", "Director"_a);
	}
}
