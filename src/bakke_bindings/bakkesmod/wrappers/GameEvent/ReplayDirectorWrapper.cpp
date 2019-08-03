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
		cl.def("assign", (class ReplayDirectorWrapper & (ReplayDirectorWrapper::*)(class ReplayDirectorWrapper)) &ReplayDirectorWrapper::operator=, "C++: ReplayDirectorWrapper::operator=(class ReplayDirectorWrapper) --> class ReplayDirectorWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetSlomoPreScoreTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetSlomoPreScoreTime, "C++: ReplayDirectorWrapper::GetSlomoPreScoreTime() --> float");
		cl.def("SetSlomoPreScoreTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetSlomoPreScoreTime, "C++: ReplayDirectorWrapper::SetSlomoPreScoreTime(float) --> void", pybind11::arg("newSlomoPreScoreTime"));
		cl.def("GetSlomoPostScoreTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetSlomoPostScoreTime, "C++: ReplayDirectorWrapper::GetSlomoPostScoreTime() --> float");
		cl.def("SetSlomoPostScoreTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetSlomoPostScoreTime, "C++: ReplayDirectorWrapper::SetSlomoPostScoreTime(float) --> void", pybind11::arg("newSlomoPostScoreTime"));
		cl.def("GetSlomoDefendTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetSlomoDefendTime, "C++: ReplayDirectorWrapper::GetSlomoDefendTime() --> float");
		cl.def("SetSlomoDefendTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetSlomoDefendTime, "C++: ReplayDirectorWrapper::SetSlomoDefendTime(float) --> void", pybind11::arg("newSlomoDefendTime"));
		cl.def("GetSlomoDefendDistance", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetSlomoDefendDistance, "C++: ReplayDirectorWrapper::GetSlomoDefendDistance() --> float");
		cl.def("SetSlomoDefendDistance", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetSlomoDefendDistance, "C++: ReplayDirectorWrapper::SetSlomoDefendDistance(float) --> void", pybind11::arg("newSlomoDefendDistance"));
		cl.def("GetSlomoTimeDilation", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetSlomoTimeDilation, "C++: ReplayDirectorWrapper::GetSlomoTimeDilation() --> float");
		cl.def("SetSlomoTimeDilation", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetSlomoTimeDilation, "C++: ReplayDirectorWrapper::SetSlomoTimeDilation(float) --> void", pybind11::arg("newSlomoTimeDilation"));
		cl.def("GetMinReplayTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetMinReplayTime, "C++: ReplayDirectorWrapper::GetMinReplayTime() --> float");
		cl.def("SetMinReplayTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetMinReplayTime, "C++: ReplayDirectorWrapper::SetMinReplayTime(float) --> void", pybind11::arg("newMinReplayTime"));
		cl.def("GetMaxReplayTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetMaxReplayTime, "C++: ReplayDirectorWrapper::GetMaxReplayTime() --> float");
		cl.def("SetMaxReplayTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetMaxReplayTime, "C++: ReplayDirectorWrapper::SetMaxReplayTime(float) --> void", pybind11::arg("newMaxReplayTime"));
		cl.def("GetReplayPadding", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetReplayPadding, "C++: ReplayDirectorWrapper::GetReplayPadding() --> float");
		cl.def("SetReplayPadding", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetReplayPadding, "C++: ReplayDirectorWrapper::SetReplayPadding(float) --> void", pybind11::arg("newReplayPadding"));
		cl.def("GetHighlightReplayDuration", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetHighlightReplayDuration, "C++: ReplayDirectorWrapper::GetHighlightReplayDuration() --> float");
		cl.def("SetHighlightReplayDuration", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetHighlightReplayDuration, "C++: ReplayDirectorWrapper::SetHighlightReplayDuration(float) --> void", pybind11::arg("newHighlightReplayDuration"));
		cl.def("GetTimeBeforeHighlightReplay", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetTimeBeforeHighlightReplay, "C++: ReplayDirectorWrapper::GetTimeBeforeHighlightReplay() --> float");
		cl.def("SetTimeBeforeHighlightReplay", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetTimeBeforeHighlightReplay, "C++: ReplayDirectorWrapper::SetTimeBeforeHighlightReplay(float) --> void", pybind11::arg("newTimeBeforeHighlightReplay"));
		cl.def("GetReplay", (class ReplaySoccarWrapper (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetReplay, "C++: ReplayDirectorWrapper::GetReplay() --> class ReplaySoccarWrapper");
		cl.def("SetReplay", (void (ReplayDirectorWrapper::*)(class ReplaySoccarWrapper)) &ReplayDirectorWrapper::SetReplay, "C++: ReplayDirectorWrapper::SetReplay(class ReplaySoccarWrapper) --> void", pybind11::arg("newReplay"));
		cl.def("GetFocusCar", (class ActorWrapper (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetFocusCar, "C++: ReplayDirectorWrapper::GetFocusCar() --> class ActorWrapper");
		cl.def("SetFocusCar", (void (ReplayDirectorWrapper::*)(class ActorWrapper)) &ReplayDirectorWrapper::SetFocusCar, "C++: ReplayDirectorWrapper::SetFocusCar(class ActorWrapper) --> void", pybind11::arg("newFocusCar"));
		cl.def("GetFocusCarChangeTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetFocusCarChangeTime, "C++: ReplayDirectorWrapper::GetFocusCarChangeTime() --> float");
		cl.def("SetFocusCarChangeTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetFocusCarChangeTime, "C++: ReplayDirectorWrapper::SetFocusCarChangeTime(float) --> void", pybind11::arg("newFocusCarChangeTime"));
		cl.def("GetFocusBall", (class ActorWrapper (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetFocusBall, "C++: ReplayDirectorWrapper::GetFocusBall() --> class ActorWrapper");
		cl.def("SetFocusBall", (void (ReplayDirectorWrapper::*)(class ActorWrapper)) &ReplayDirectorWrapper::SetFocusBall, "C++: ReplayDirectorWrapper::SetFocusBall(class ActorWrapper) --> void", pybind11::arg("newFocusBall"));
		cl.def("GetScoreTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetScoreTime, "C++: ReplayDirectorWrapper::GetScoreTime() --> float");
		cl.def("SetScoreTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetScoreTime, "C++: ReplayDirectorWrapper::SetScoreTime(float) --> void", pybind11::arg("newScoreTime"));
		cl.def("GetScoreHitIndex", (int (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetScoreHitIndex, "C++: ReplayDirectorWrapper::GetScoreHitIndex() --> int");
		cl.def("SetScoreHitIndex", (void (ReplayDirectorWrapper::*)(int)) &ReplayDirectorWrapper::SetScoreHitIndex, "C++: ReplayDirectorWrapper::SetScoreHitIndex(int) --> void", pybind11::arg("newScoreHitIndex"));
		cl.def("GetScoredGoal", (class GoalWrapper (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetScoredGoal, "C++: ReplayDirectorWrapper::GetScoredGoal() --> class GoalWrapper");
		cl.def("SetScoredGoal", (void (ReplayDirectorWrapper::*)(class GoalWrapper)) &ReplayDirectorWrapper::SetScoredGoal, "C++: ReplayDirectorWrapper::SetScoredGoal(class GoalWrapper) --> void", pybind11::arg("newScoredGoal"));
		cl.def("GetbSlomo", (unsigned long (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetbSlomo, "C++: ReplayDirectorWrapper::GetbSlomo() --> unsigned long");
		cl.def("SetbSlomo", (void (ReplayDirectorWrapper::*)(unsigned long)) &ReplayDirectorWrapper::SetbSlomo, "C++: ReplayDirectorWrapper::SetbSlomo(unsigned long) --> void", pybind11::arg("newbSlomo"));
		cl.def("GetbSlomoForDefender", (unsigned long (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetbSlomoForDefender, "C++: ReplayDirectorWrapper::GetbSlomoForDefender() --> unsigned long");
		cl.def("SetbSlomoForDefender", (void (ReplayDirectorWrapper::*)(unsigned long)) &ReplayDirectorWrapper::SetbSlomoForDefender, "C++: ReplayDirectorWrapper::SetbSlomoForDefender(unsigned long) --> void", pybind11::arg("newbSlomoForDefender"));
		cl.def("GetbAutoSave", (unsigned long (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetbAutoSave, "C++: ReplayDirectorWrapper::GetbAutoSave() --> unsigned long");
		cl.def("SetbAutoSave", (void (ReplayDirectorWrapper::*)(unsigned long)) &ReplayDirectorWrapper::SetbAutoSave, "C++: ReplayDirectorWrapper::SetbAutoSave(unsigned long) --> void", pybind11::arg("newbAutoSave"));
		cl.def("GetFocusHitIndex", (int (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetFocusHitIndex, "C++: ReplayDirectorWrapper::GetFocusHitIndex() --> int");
		cl.def("SetFocusHitIndex", (void (ReplayDirectorWrapper::*)(int)) &ReplayDirectorWrapper::SetFocusHitIndex, "C++: ReplayDirectorWrapper::SetFocusHitIndex(int) --> void", pybind11::arg("newFocusHitIndex"));
		cl.def("GetFocusCarIdx", (int (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetFocusCarIdx, "C++: ReplayDirectorWrapper::GetFocusCarIdx() --> int");
		cl.def("SetFocusCarIdx", (void (ReplayDirectorWrapper::*)(int)) &ReplayDirectorWrapper::SetFocusCarIdx, "C++: ReplayDirectorWrapper::SetFocusCarIdx(int) --> void", pybind11::arg("newFocusCarIdx"));
		cl.def("GetReplayStartGameTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetReplayStartGameTime, "C++: ReplayDirectorWrapper::GetReplayStartGameTime() --> float");
		cl.def("SetReplayStartGameTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetReplayStartGameTime, "C++: ReplayDirectorWrapper::SetReplayStartGameTime(float) --> void", pybind11::arg("newReplayStartGameTime"));
		cl.def("GetBallSpawnTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetBallSpawnTime, "C++: ReplayDirectorWrapper::GetBallSpawnTime() --> float");
		cl.def("SetBallSpawnTime", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::SetBallSpawnTime, "C++: ReplayDirectorWrapper::SetBallSpawnTime(float) --> void", pybind11::arg("newBallSpawnTime"));
		cl.def("GetSoccarGame", (class ServerWrapper (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetSoccarGame, "C++: ReplayDirectorWrapper::GetSoccarGame() --> class ServerWrapper");
		cl.def("SetSoccarGame", (void (ReplayDirectorWrapper::*)(class ServerWrapper)) &ReplayDirectorWrapper::SetSoccarGame, "C++: ReplayDirectorWrapper::SetSoccarGame(class ServerWrapper) --> void", pybind11::arg("newSoccarGame"));
		cl.def("GetScoredOnTeam", (unsigned char (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetScoredOnTeam, "C++: ReplayDirectorWrapper::GetScoredOnTeam() --> unsigned char");
		cl.def("SetScoredOnTeam", (void (ReplayDirectorWrapper::*)(unsigned char)) &ReplayDirectorWrapper::SetScoredOnTeam, "C++: ReplayDirectorWrapper::SetScoredOnTeam(unsigned char) --> void", pybind11::arg("newScoredOnTeam"));
		cl.def("GetForceCutToFocusActors", (int (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetForceCutToFocusActors, "C++: ReplayDirectorWrapper::GetForceCutToFocusActors() --> int");
		cl.def("SetForceCutToFocusActors", (void (ReplayDirectorWrapper::*)(int)) &ReplayDirectorWrapper::SetForceCutToFocusActors, "C++: ReplayDirectorWrapper::SetForceCutToFocusActors(int) --> void", pybind11::arg("newForceCutToFocusActors"));
		cl.def("HandleReplayFinished", (void (ReplayDirectorWrapper::*)(class ReplayWrapper)) &ReplayDirectorWrapper::HandleReplayFinished, "C++: ReplayDirectorWrapper::HandleReplayFinished(class ReplayWrapper) --> void", pybind11::arg("InReplay"));
		cl.def("ShouldSlomo", (bool (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::ShouldSlomo, "C++: ReplayDirectorWrapper::ShouldSlomo() --> bool");
		cl.def("UpdateSlomo", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::UpdateSlomo, "C++: ReplayDirectorWrapper::UpdateSlomo() --> void");
		cl.def("UpdateFocusActors", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::UpdateFocusActors, "C++: ReplayDirectorWrapper::UpdateFocusActors() --> void");
		cl.def("PlayRandomHighlight", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::PlayRandomHighlight, "C++: ReplayDirectorWrapper::PlayRandomHighlight() --> void");
		cl.def("GetNextHighlightFrame", (int (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetNextHighlightFrame, "C++: ReplayDirectorWrapper::GetNextHighlightFrame() --> int");
		cl.def("SetAutoSave", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::SetAutoSave, "C++: ReplayDirectorWrapper::SetAutoSave() --> void");
		cl.def("SaveUserKeyframe", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::SaveUserKeyframe, "C++: ReplayDirectorWrapper::SaveUserKeyframe() --> void");
		cl.def("BuildFocusCars", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::BuildFocusCars, "C++: ReplayDirectorWrapper::BuildFocusCars() --> void");
		cl.def("SetSlomo2", (void (ReplayDirectorWrapper::*)(unsigned long)) &ReplayDirectorWrapper::SetSlomo2, "C++: ReplayDirectorWrapper::SetSlomo2(unsigned long) --> void", pybind11::arg("bNewSlomo"));
		cl.def("eventTick", (void (ReplayDirectorWrapper::*)(float)) &ReplayDirectorWrapper::eventTick, "C++: ReplayDirectorWrapper::eventTick(float) --> void", pybind11::arg("DeltaTime"));
		cl.def("eventDestroyed", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::eventDestroyed, "C++: ReplayDirectorWrapper::eventDestroyed() --> void");
		cl.def("GetReplayTimeSeconds", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetReplayTimeSeconds, "C++: ReplayDirectorWrapper::GetReplayTimeSeconds() --> float");
		cl.def("SetFocusActors", (void (ReplayDirectorWrapper::*)(class ActorWrapper, class ActorWrapper)) &ReplayDirectorWrapper::SetFocusActors, "C++: ReplayDirectorWrapper::SetFocusActors(class ActorWrapper, class ActorWrapper) --> void", pybind11::arg("NewCar"), pybind11::arg("NewBall"));
		cl.def("GetReplayStartTime", (float (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::GetReplayStartTime, "C++: ReplayDirectorWrapper::GetReplayStartTime() --> float");
		cl.def("SetSlomoForDefender", (void (ReplayDirectorWrapper::*)(class BallWrapper, int)) &ReplayDirectorWrapper::SetSlomoForDefender, "C++: ReplayDirectorWrapper::SetSlomoForDefender(class BallWrapper, int) --> void", pybind11::arg("Ball"), pybind11::arg("DefendingTeam"));
		cl.def("OnScoreDataChanged", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::OnScoreDataChanged, "C++: ReplayDirectorWrapper::OnScoreDataChanged() --> void");
		cl.def("HandleScoreUpdated", (void (ReplayDirectorWrapper::*)(class TeamWrapper)) &ReplayDirectorWrapper::HandleScoreUpdated, "C++: ReplayDirectorWrapper::HandleScoreUpdated(class TeamWrapper) --> void", pybind11::arg("Team"));
		cl.def("HandleAllTeamsCreated", (void (ReplayDirectorWrapper::*)(class TeamGameEventWrapper)) &ReplayDirectorWrapper::HandleAllTeamsCreated, "C++: ReplayDirectorWrapper::HandleAllTeamsCreated(class TeamGameEventWrapper) --> void", pybind11::arg("TeamGame"));
		cl.def("RecordPlayers", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::RecordPlayers, "C++: ReplayDirectorWrapper::RecordPlayers() --> void");
		cl.def("HandleGameStateChanged", (void (ReplayDirectorWrapper::*)(class GameEventWrapper)) &ReplayDirectorWrapper::HandleGameStateChanged, "C++: ReplayDirectorWrapper::HandleGameStateChanged(class GameEventWrapper) --> void", pybind11::arg("G"));
		cl.def("OnSoccarGameSet", (void (ReplayDirectorWrapper::*)()) &ReplayDirectorWrapper::OnSoccarGameSet, "C++: ReplayDirectorWrapper::OnSoccarGameSet() --> void");
		cl.def("SetGameEvent", (void (ReplayDirectorWrapper::*)(class ServerWrapper)) &ReplayDirectorWrapper::SetGameEvent, "C++: ReplayDirectorWrapper::SetGameEvent(class ServerWrapper) --> void", pybind11::arg("InGameEvent"));
		cl.def("EventFocusCarChanged", (void (ReplayDirectorWrapper::*)(class ActorWrapper)) &ReplayDirectorWrapper::EventFocusCarChanged, "C++: ReplayDirectorWrapper::EventFocusCarChanged(class ActorWrapper) --> void", pybind11::arg("NewFocusCar"));
		cl.def("EventAutoSaveChanged", (void (ReplayDirectorWrapper::*)(class ReplayDirectorWrapper)) &ReplayDirectorWrapper::EventAutoSaveChanged, "C++: ReplayDirectorWrapper::EventAutoSaveChanged(class ReplayDirectorWrapper) --> void", pybind11::arg("Director"));
		cl.def("EventScoreDataChanged", (void (ReplayDirectorWrapper::*)(class ReplayDirectorWrapper)) &ReplayDirectorWrapper::EventScoreDataChanged, "C++: ReplayDirectorWrapper::EventScoreDataChanged(class ReplayDirectorWrapper) --> void", pybind11::arg("Director"));
		cl.def("EventReplayFinished", (void (ReplayDirectorWrapper::*)(class ReplayDirectorWrapper)) &ReplayDirectorWrapper::EventReplayFinished, "C++: ReplayDirectorWrapper::EventReplayFinished(class ReplayDirectorWrapper) --> void", pybind11::arg("Director"));
	}
}
