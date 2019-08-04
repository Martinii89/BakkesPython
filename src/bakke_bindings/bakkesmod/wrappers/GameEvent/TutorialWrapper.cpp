#include "pch.h"
#include <bakkesmod/wrappers/Engine/EngineTAWrapper.h>
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameEvent/GameSettingPlaylistWrapper.h>
#include <bakkesmod/wrappers/GameEvent/TutorialWrapper.h>
#include <bakkesmod/wrappers/GameObject/BaseCameraWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/BoostWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/StructArrayWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_bakkesmod_wrappers_GameEvent_TutorialWrapper(py::module &M)
{
	{ // TutorialWrapper file:bakkesmod/wrappers/GameEvent/TutorialWrapper.h line:14
		pybind11::class_<TutorialWrapper, std::shared_ptr<TutorialWrapper>, ServerWrapper> cl(M, "TutorialWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](TutorialWrapper const &o){ return new TutorialWrapper(o); } ) );
		cl.def("assign", (class TutorialWrapper & (TutorialWrapper::*)(class TutorialWrapper)) &TutorialWrapper::operator=, "C++: TutorialWrapper::operator=(class TutorialWrapper) --> class TutorialWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("Redo", (void (TutorialWrapper::*)()) &TutorialWrapper::Redo, "C++: TutorialWrapper::Redo() --> void");
		cl.def("GetCarSpawnLocation", (struct Vector (TutorialWrapper::*)()) &TutorialWrapper::GetCarSpawnLocation, "C++: TutorialWrapper::GetCarSpawnLocation() --> struct Vector");
		cl.def("SetCarSpawnLocation", (void (TutorialWrapper::*)(struct Vector)) &TutorialWrapper::SetCarSpawnLocation, "C++: TutorialWrapper::SetCarSpawnLocation(struct Vector) --> void", pybind11::arg("v"));
		cl.def("GetCarSpawnRotation", (struct Rotator (TutorialWrapper::*)()) &TutorialWrapper::GetCarSpawnRotation, "C++: TutorialWrapper::GetCarSpawnRotation() --> struct Rotator");
		cl.def("SetCarSpawnRotation", (void (TutorialWrapper::*)(struct Rotator)) &TutorialWrapper::SetCarSpawnRotation, "C++: TutorialWrapper::SetCarSpawnRotation(struct Rotator) --> void", pybind11::arg("v"));
		cl.def("GetGameCar", (class CarWrapper (TutorialWrapper::*)()) &TutorialWrapper::GetGameCar, "C++: TutorialWrapper::GetGameCar() --> class CarWrapper");
		cl.def("IsBallMovingTowardsGoal", (bool (TutorialWrapper::*)(int, class BallWrapper)) &TutorialWrapper::IsBallMovingTowardsGoal, "C++: TutorialWrapper::IsBallMovingTowardsGoal(int, class BallWrapper) --> bool", pybind11::arg("goalNo"), pybind11::arg("bw"));
		cl.def("IsInGoal", (bool (TutorialWrapper::*)(struct Vector)) &TutorialWrapper::IsInGoal, "C++: TutorialWrapper::IsInGoal(struct Vector) --> bool", pybind11::arg("vec"));
		cl.def("DisableGoalReset", (void (TutorialWrapper::*)()) &TutorialWrapper::DisableGoalReset, "C++: TutorialWrapper::DisableGoalReset() --> void");
		cl.def("EnableGoalReset", (void (TutorialWrapper::*)()) &TutorialWrapper::EnableGoalReset, "C++: TutorialWrapper::EnableGoalReset() --> void");
		cl.def("GenerateShot", (struct Vector (TutorialWrapper::*)(struct Vector, struct Vector, float)) &TutorialWrapper::GenerateShot, "C++: TutorialWrapper::GenerateShot(struct Vector, struct Vector, float) --> struct Vector", pybind11::arg("startPos"), pybind11::arg("destination"), pybind11::arg("speed"));
		cl.def("GenerateGoalAimLocation", (struct Vector (TutorialWrapper::*)(int, struct Vector)) &TutorialWrapper::GenerateGoalAimLocation, "C++: TutorialWrapper::GenerateGoalAimLocation(int, struct Vector) --> struct Vector", pybind11::arg("goalNumber"), pybind11::arg("currentBallLocation"));
		cl.def("GetGoalExtent", [](TutorialWrapper &o) -> Vector { return o.GetGoalExtent(); }, "");
		cl.def("GetGoalExtent", (struct Vector (TutorialWrapper::*)(int)) &TutorialWrapper::GetGoalExtent, "C++: TutorialWrapper::GetGoalExtent(int) --> struct Vector", pybind11::arg("goalNumber"));
		cl.def("GetGoalLocation", [](TutorialWrapper &o) -> Vector { return o.GetGoalLocation(); }, "");
		cl.def("GetGoalLocation", (struct Vector (TutorialWrapper::*)(int)) &TutorialWrapper::GetGoalLocation, "C++: TutorialWrapper::GetGoalLocation(int) --> struct Vector", pybind11::arg("goalNumber"));
		cl.def("GetTotalFieldExtent", (struct Vector (TutorialWrapper::*)()) &TutorialWrapper::GetTotalFieldExtent, "C++: TutorialWrapper::GetTotalFieldExtent() --> struct Vector");
		cl.def("SetTotalFieldExtent", (void (TutorialWrapper::*)(struct Vector)) &TutorialWrapper::SetTotalFieldExtent, "C++: TutorialWrapper::SetTotalFieldExtent(struct Vector) --> void", pybind11::arg("newTotalFieldExtent"));
		cl.def("GetTeamNum", (int (TutorialWrapper::*)()) &TutorialWrapper::GetTeamNum, "C++: TutorialWrapper::GetTeamNum() --> int");
		cl.def("SetTeamNum", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetTeamNum, "C++: TutorialWrapper::SetTeamNum(int) --> void", pybind11::arg("newTeamNum"));
		cl.def("GetBallGoalNum", (int (TutorialWrapper::*)()) &TutorialWrapper::GetBallGoalNum, "C++: TutorialWrapper::GetBallGoalNum() --> int");
		cl.def("SetBallGoalNum", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetBallGoalNum, "C++: TutorialWrapper::SetBallGoalNum(int) --> void", pybind11::arg("newBallGoalNum"));
		cl.def("GetbOnlyScoreInBallGoalNum", (unsigned long (TutorialWrapper::*)()) &TutorialWrapper::GetbOnlyScoreInBallGoalNum, "C++: TutorialWrapper::GetbOnlyScoreInBallGoalNum() --> unsigned long");
		cl.def("SetbOnlyScoreInBallGoalNum", (void (TutorialWrapper::*)(unsigned long)) &TutorialWrapper::SetbOnlyScoreInBallGoalNum, "C++: TutorialWrapper::SetbOnlyScoreInBallGoalNum(unsigned long) --> void", pybind11::arg("newbOnlyScoreInBallGoalNum"));
		cl.def("GetbRedoRound", (unsigned long (TutorialWrapper::*)()) &TutorialWrapper::GetbRedoRound, "C++: TutorialWrapper::GetbRedoRound() --> unsigned long");
		cl.def("SetbRedoRound", (void (TutorialWrapper::*)(unsigned long)) &TutorialWrapper::SetbRedoRound, "C++: TutorialWrapper::SetbRedoRound(unsigned long) --> void", pybind11::arg("newbRedoRound"));
		cl.def("GetbAllowSuperBoost", (unsigned long (TutorialWrapper::*)()) &TutorialWrapper::GetbAllowSuperBoost, "C++: TutorialWrapper::GetbAllowSuperBoost() --> unsigned long");
		cl.def("SetbAllowSuperBoost", (void (TutorialWrapper::*)(unsigned long)) &TutorialWrapper::SetbAllowSuperBoost, "C++: TutorialWrapper::SetbAllowSuperBoost(unsigned long) --> void", pybind11::arg("newbAllowSuperBoost"));
		cl.def("GetbDisplayedRedoPenaltyMessage", (unsigned long (TutorialWrapper::*)()) &TutorialWrapper::GetbDisplayedRedoPenaltyMessage, "C++: TutorialWrapper::GetbDisplayedRedoPenaltyMessage() --> unsigned long");
		cl.def("SetbDisplayedRedoPenaltyMessage", (void (TutorialWrapper::*)(unsigned long)) &TutorialWrapper::SetbDisplayedRedoPenaltyMessage, "C++: TutorialWrapper::SetbDisplayedRedoPenaltyMessage(unsigned long) --> void", pybind11::arg("newbDisplayedRedoPenaltyMessage"));
		cl.def("GetbShowBoostMeter", (unsigned long (TutorialWrapper::*)()) &TutorialWrapper::GetbShowBoostMeter, "C++: TutorialWrapper::GetbShowBoostMeter() --> unsigned long");
		cl.def("SetbShowBoostMeter", (void (TutorialWrapper::*)(unsigned long)) &TutorialWrapper::SetbShowBoostMeter, "C++: TutorialWrapper::SetbShowBoostMeter(unsigned long) --> void", pybind11::arg("newbShowBoostMeter"));
		cl.def("GetDifficulty", (unsigned char (TutorialWrapper::*)()) &TutorialWrapper::GetDifficulty, "C++: TutorialWrapper::GetDifficulty() --> unsigned char");
		cl.def("SetDifficulty", (void (TutorialWrapper::*)(unsigned char)) &TutorialWrapper::SetDifficulty, "C++: TutorialWrapper::SetDifficulty(unsigned char) --> void", pybind11::arg("newDifficulty"));
		cl.def("GetDebugRotationType", (unsigned char (TutorialWrapper::*)()) &TutorialWrapper::GetDebugRotationType, "C++: TutorialWrapper::GetDebugRotationType() --> unsigned char");
		cl.def("SetDebugRotationType", (void (TutorialWrapper::*)(unsigned char)) &TutorialWrapper::SetDebugRotationType, "C++: TutorialWrapper::SetDebugRotationType(unsigned char) --> void", pybind11::arg("newDebugRotationType"));
		cl.def("GetGoalDepth", (float (TutorialWrapper::*)()) &TutorialWrapper::GetGoalDepth, "C++: TutorialWrapper::GetGoalDepth() --> float");
		cl.def("SetGoalDepth", (void (TutorialWrapper::*)(float)) &TutorialWrapper::SetGoalDepth, "C++: TutorialWrapper::SetGoalDepth(float) --> void", pybind11::arg("newGoalDepth"));
		cl.def("GetGameEventRounds", (int (TutorialWrapper::*)()) &TutorialWrapper::GetGameEventRounds, "C++: TutorialWrapper::GetGameEventRounds() --> int");
		cl.def("SetGameEventRounds", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetGameEventRounds, "C++: TutorialWrapper::SetGameEventRounds(int) --> void", pybind11::arg("newGameEventRounds"));
		cl.def("GetEventStartTime", (float (TutorialWrapper::*)()) &TutorialWrapper::GetEventStartTime, "C++: TutorialWrapper::GetEventStartTime() --> float");
		cl.def("SetEventStartTime", (void (TutorialWrapper::*)(float)) &TutorialWrapper::SetEventStartTime, "C++: TutorialWrapper::SetEventStartTime(float) --> void", pybind11::arg("newEventStartTime"));
		cl.def("GetBallInitialVelocity", (struct Vector (TutorialWrapper::*)()) &TutorialWrapper::GetBallInitialVelocity, "C++: TutorialWrapper::GetBallInitialVelocity() --> struct Vector");
		cl.def("SetBallInitialVelocity", (void (TutorialWrapper::*)(struct Vector)) &TutorialWrapper::SetBallInitialVelocity, "C++: TutorialWrapper::SetBallInitialVelocity(struct Vector) --> void", pybind11::arg("newBallInitialVelocity"));
		cl.def("GetSpawnIndexTypeOverride", (int (TutorialWrapper::*)()) &TutorialWrapper::GetSpawnIndexTypeOverride, "C++: TutorialWrapper::GetSpawnIndexTypeOverride() --> int");
		cl.def("SetSpawnIndexTypeOverride", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetSpawnIndexTypeOverride, "C++: TutorialWrapper::SetSpawnIndexTypeOverride(int) --> void", pybind11::arg("newSpawnIndexTypeOverride"));
		cl.def("GetWaveIndex", (int (TutorialWrapper::*)()) &TutorialWrapper::GetWaveIndex, "C++: TutorialWrapper::GetWaveIndex() --> int");
		cl.def("SetWaveIndex", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetWaveIndex, "C++: TutorialWrapper::SetWaveIndex(int) --> void", pybind11::arg("newWaveIndex"));
		cl.def("GetWaveSpawnCount", (int (TutorialWrapper::*)()) &TutorialWrapper::GetWaveSpawnCount, "C++: TutorialWrapper::GetWaveSpawnCount() --> int");
		cl.def("SetWaveSpawnCount", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetWaveSpawnCount, "C++: TutorialWrapper::SetWaveSpawnCount(int) --> void", pybind11::arg("newWaveSpawnCount"));
		cl.def("GetRandomSpawnIndex", (int (TutorialWrapper::*)()) &TutorialWrapper::GetRandomSpawnIndex, "C++: TutorialWrapper::GetRandomSpawnIndex() --> int");
		cl.def("SetRandomSpawnIndex", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetRandomSpawnIndex, "C++: TutorialWrapper::SetRandomSpawnIndex(int) --> void", pybind11::arg("newRandomSpawnIndex"));
		cl.def("GetStartMessageArchetype", (class UnrealStringWrapper (TutorialWrapper::*)()) &TutorialWrapper::GetStartMessageArchetype, "C++: TutorialWrapper::GetStartMessageArchetype() --> class UnrealStringWrapper");
		cl.def("GetBallSpawnLocation", (struct Vector (TutorialWrapper::*)()) &TutorialWrapper::GetBallSpawnLocation, "C++: TutorialWrapper::GetBallSpawnLocation() --> struct Vector");
		cl.def("SetBallSpawnLocation", (void (TutorialWrapper::*)(struct Vector)) &TutorialWrapper::SetBallSpawnLocation, "C++: TutorialWrapper::SetBallSpawnLocation(struct Vector) --> void", pybind11::arg("newBallSpawnLocation"));
		cl.def("GetPointsScoredThisRound", (int (TutorialWrapper::*)()) &TutorialWrapper::GetPointsScoredThisRound, "C++: TutorialWrapper::GetPointsScoredThisRound() --> int");
		cl.def("SetPointsScoredThisRound", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetPointsScoredThisRound, "C++: TutorialWrapper::SetPointsScoredThisRound(int) --> void", pybind11::arg("newPointsScoredThisRound"));
		cl.def("GetBallSpawnCount", (int (TutorialWrapper::*)()) &TutorialWrapper::GetBallSpawnCount, "C++: TutorialWrapper::GetBallSpawnCount() --> int");
		cl.def("SetBallSpawnCount", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetBallSpawnCount, "C++: TutorialWrapper::SetBallSpawnCount(int) --> void", pybind11::arg("newBallSpawnCount"));
		cl.def("GetBallBounceScale", (float (TutorialWrapper::*)()) &TutorialWrapper::GetBallBounceScale, "C++: TutorialWrapper::GetBallBounceScale() --> float");
		cl.def("SetBallBounceScale", (void (TutorialWrapper::*)(float)) &TutorialWrapper::SetBallBounceScale, "C++: TutorialWrapper::SetBallBounceScale(float) --> void", pybind11::arg("newBallBounceScale"));
		cl.def("GetCurrentDebugStepX", (int (TutorialWrapper::*)()) &TutorialWrapper::GetCurrentDebugStepX, "C++: TutorialWrapper::GetCurrentDebugStepX() --> int");
		cl.def("SetCurrentDebugStepX", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetCurrentDebugStepX, "C++: TutorialWrapper::SetCurrentDebugStepX(int) --> void", pybind11::arg("newCurrentDebugStepX"));
		cl.def("GetCurrentDebugStepY", (int (TutorialWrapper::*)()) &TutorialWrapper::GetCurrentDebugStepY, "C++: TutorialWrapper::GetCurrentDebugStepY() --> int");
		cl.def("SetCurrentDebugStepY", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetCurrentDebugStepY, "C++: TutorialWrapper::SetCurrentDebugStepY(int) --> void", pybind11::arg("newCurrentDebugStepY"));
		cl.def("GetCurrentDebugStepZ", (int (TutorialWrapper::*)()) &TutorialWrapper::GetCurrentDebugStepZ, "C++: TutorialWrapper::GetCurrentDebugStepZ() --> int");
		cl.def("SetCurrentDebugStepZ", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetCurrentDebugStepZ, "C++: TutorialWrapper::SetCurrentDebugStepZ(int) --> void", pybind11::arg("newCurrentDebugStepZ"));
		cl.def("GetRedoCount", (int (TutorialWrapper::*)()) &TutorialWrapper::GetRedoCount, "C++: TutorialWrapper::GetRedoCount() --> int");
		cl.def("SetRedoCount", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetRedoCount, "C++: TutorialWrapper::SetRedoCount(int) --> void", pybind11::arg("newRedoCount"));
		cl.def("GetRedoTotal", (int (TutorialWrapper::*)()) &TutorialWrapper::GetRedoTotal, "C++: TutorialWrapper::GetRedoTotal() --> int");
		cl.def("SetRedoTotal", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetRedoTotal, "C++: TutorialWrapper::SetRedoTotal(int) --> void", pybind11::arg("newRedoTotal"));
		cl.def("InitIntro", (void (TutorialWrapper::*)()) &TutorialWrapper::InitIntro, "C++: TutorialWrapper::InitIntro() --> void");
		cl.def("OnLoadingMovieClosed", (void (TutorialWrapper::*)()) &TutorialWrapper::OnLoadingMovieClosed, "C++: TutorialWrapper::OnLoadingMovieClosed() --> void");
		cl.def("StartTimers", (void (TutorialWrapper::*)()) &TutorialWrapper::StartTimers, "C++: TutorialWrapper::StartTimers() --> void");
		cl.def("UpdateMVP", (void (TutorialWrapper::*)()) &TutorialWrapper::UpdateMVP, "C++: TutorialWrapper::UpdateMVP() --> void");
		cl.def("AllowDynamicCrowd", (bool (TutorialWrapper::*)()) &TutorialWrapper::AllowDynamicCrowd, "C++: TutorialWrapper::AllowDynamicCrowd() --> bool");
		cl.def("SetTutorialTip", (void (TutorialWrapper::*)(std::string)) &TutorialWrapper::SetTutorialTip, "C++: TutorialWrapper::SetTutorialTip(std::string) --> void", pybind11::arg("NewTip"));
		cl.def("SetShowBoostMeter", (void (TutorialWrapper::*)(unsigned long)) &TutorialWrapper::SetShowBoostMeter, "C++: TutorialWrapper::SetShowBoostMeter(unsigned long) --> void", pybind11::arg("bShow"));
		cl.def("GetStepLoc", (float (TutorialWrapper::*)(int, float, unsigned long, int *)) &TutorialWrapper::GetStepLoc, "C++: TutorialWrapper::GetStepLoc(int, float, unsigned long, int *) --> float", pybind11::arg("Steps"), pybind11::arg("TotalDist"), pybind11::arg("bIncrement"), pybind11::arg("Out_CurrentStep"));
		cl.def("GetDebugLocationInExtent", (struct Vector (TutorialWrapper::*)(struct Vector &)) &TutorialWrapper::GetDebugLocationInExtent, "C++: TutorialWrapper::GetDebugLocationInExtent(struct Vector &) --> struct Vector", pybind11::arg("Extent"));
		cl.def("InitDebugSetup", (void (TutorialWrapper::*)(class CarWrapper)) &TutorialWrapper::InitDebugSetup, "C++: TutorialWrapper::InitDebugSetup(class CarWrapper) --> void", pybind11::arg("Car"));
		cl.def("SkipTutorial", (void (TutorialWrapper::*)()) &TutorialWrapper::SkipTutorial, "C++: TutorialWrapper::SkipTutorial() --> void");
		cl.def("UpdateBotCount", (void (TutorialWrapper::*)()) &TutorialWrapper::UpdateBotCount, "C++: TutorialWrapper::UpdateBotCount() --> void");
		cl.def("InitMutators", (void (TutorialWrapper::*)()) &TutorialWrapper::InitMutators, "C++: TutorialWrapper::InitMutators() --> void");
		cl.def("IsPrimaryPlayer", (bool (TutorialWrapper::*)(class CarWrapper)) &TutorialWrapper::IsPrimaryPlayer, "C++: TutorialWrapper::IsPrimaryPlayer(class CarWrapper) --> bool", pybind11::arg("Car"));
		cl.def("CanAwardPoints", (bool (TutorialWrapper::*)()) &TutorialWrapper::CanAwardPoints, "C++: TutorialWrapper::CanAwardPoints() --> bool");
		cl.def("ShowResetRoundMessage", (void (TutorialWrapper::*)()) &TutorialWrapper::ShowResetRoundMessage, "C++: TutorialWrapper::ShowResetRoundMessage() --> void");
		cl.def("Destroyed", (void (TutorialWrapper::*)()) &TutorialWrapper::Destroyed, "C++: TutorialWrapper::Destroyed() --> void");
		cl.def("EndTutorial", (bool (TutorialWrapper::*)()) &TutorialWrapper::EndTutorial, "C++: TutorialWrapper::EndTutorial() --> bool");
		cl.def("CommitRedoRound", (void (TutorialWrapper::*)()) &TutorialWrapper::CommitRedoRound, "C++: TutorialWrapper::CommitRedoRound() --> void");
		cl.def("RedoRound2", (void (TutorialWrapper::*)()) &TutorialWrapper::RedoRound2, "C++: TutorialWrapper::RedoRound2() --> void");
		cl.def("CanRedoRound", (bool (TutorialWrapper::*)()) &TutorialWrapper::CanRedoRound, "C++: TutorialWrapper::CanRedoRound() --> bool");
		cl.def("StartNewRound", (void (TutorialWrapper::*)()) &TutorialWrapper::StartNewRound, "C++: TutorialWrapper::StartNewRound() --> void");
		cl.def("SaveLocalPlayerStats", (void (TutorialWrapper::*)()) &TutorialWrapper::SaveLocalPlayerStats, "C++: TutorialWrapper::SaveLocalPlayerStats() --> void");
		cl.def("GetWinningTeam", (class TeamWrapper (TutorialWrapper::*)()) &TutorialWrapper::GetWinningTeam, "C++: TutorialWrapper::GetWinningTeam() --> class TeamWrapper");
		cl.def("CleanupRoundActors", (void (TutorialWrapper::*)()) &TutorialWrapper::CleanupRoundActors, "C++: TutorialWrapper::CleanupRoundActors() --> void");
		cl.def("CanQueSaveReplay", (bool (TutorialWrapper::*)()) &TutorialWrapper::CanQueSaveReplay, "C++: TutorialWrapper::CanQueSaveReplay() --> bool");
		cl.def("ResetBalls", (void (TutorialWrapper::*)()) &TutorialWrapper::ResetBalls, "C++: TutorialWrapper::ResetBalls() --> void");
		cl.def("GetScore", (int (TutorialWrapper::*)()) &TutorialWrapper::GetScore, "C++: TutorialWrapper::GetScore() --> int");
		cl.def("StartRound", (void (TutorialWrapper::*)()) &TutorialWrapper::StartRound, "C++: TutorialWrapper::StartRound() --> void");
		cl.def("GetGameEventRounds2", (int (TutorialWrapper::*)()) &TutorialWrapper::GetGameEventRounds2, "C++: TutorialWrapper::GetGameEventRounds2() --> int");
		cl.def("GetTotalRounds", (int (TutorialWrapper::*)()) &TutorialWrapper::GetTotalRounds, "C++: TutorialWrapper::GetTotalRounds() --> int");
		cl.def("ResetRoundTime", (void (TutorialWrapper::*)()) &TutorialWrapper::ResetRoundTime, "C++: TutorialWrapper::ResetRoundTime() --> void");
		cl.def("OnPlayerRestarted", (void (TutorialWrapper::*)(class CarWrapper)) &TutorialWrapper::OnPlayerRestarted, "C++: TutorialWrapper::OnPlayerRestarted(class CarWrapper) --> void", pybind11::arg("PlayerCar"));
		cl.def("GetTrainingType", (unsigned char (TutorialWrapper::*)()) &TutorialWrapper::GetTrainingType, "C++: TutorialWrapper::GetTrainingType() --> unsigned char");
		cl.def("EndGame", (void (TutorialWrapper::*)()) &TutorialWrapper::EndGame, "C++: TutorialWrapper::EndGame() --> void");
		cl.def("GetRandomLocationInExtent", (struct Vector (TutorialWrapper::*)(struct Vector &)) &TutorialWrapper::GetRandomLocationInExtent, "C++: TutorialWrapper::GetRandomLocationInExtent(struct Vector &) --> struct Vector", pybind11::arg("Extent"));
		cl.def("Chance", (bool (TutorialWrapper::*)(int)) &TutorialWrapper::Chance, "C++: TutorialWrapper::Chance(int) --> bool", pybind11::arg("Chances"));
		cl.def("GetOppositeTeamNum", (int (TutorialWrapper::*)()) &TutorialWrapper::GetOppositeTeamNum, "C++: TutorialWrapper::GetOppositeTeamNum() --> int");
		cl.def("GetDirectionToGoal", (struct Vector (TutorialWrapper::*)(int)) &TutorialWrapper::GetDirectionToGoal, "C++: TutorialWrapper::GetDirectionToGoal(int) --> struct Vector", pybind11::arg("GoalNum"));
		cl.def("IsGameEventComplete", (bool (TutorialWrapper::*)()) &TutorialWrapper::IsGameEventComplete, "C++: TutorialWrapper::IsGameEventComplete() --> bool");
		cl.def("ClampPointToExtent", (struct Vector (TutorialWrapper::*)(struct Vector &, struct Vector &, struct Vector &)) &TutorialWrapper::ClampPointToExtent, "C++: TutorialWrapper::ClampPointToExtent(struct Vector &, struct Vector &, struct Vector &) --> struct Vector", pybind11::arg("ExtentCenter"), pybind11::arg("Point"), pybind11::arg("Extent"));
		cl.def("PredictInitialVelocity", (struct Vector (TutorialWrapper::*)(struct Vector &, struct Vector &, float)) &TutorialWrapper::PredictInitialVelocity, "C++: TutorialWrapper::PredictInitialVelocity(struct Vector &, struct Vector &, float) --> struct Vector", pybind11::arg("StartLoc"), pybind11::arg("EndLoc"), pybind11::arg("Z"));
		cl.def("GetGameBall", (class BallWrapper (TutorialWrapper::*)()) &TutorialWrapper::GetGameBall, "C++: TutorialWrapper::GetGameBall() --> class BallWrapper");
		cl.def("GetGamePawn", (class CarWrapper (TutorialWrapper::*)()) &TutorialWrapper::GetGamePawn, "C++: TutorialWrapper::GetGamePawn() --> class CarWrapper");
		cl.def("ResetGameEvent", (void (TutorialWrapper::*)()) &TutorialWrapper::ResetGameEvent, "C++: TutorialWrapper::ResetGameEvent() --> void");
		cl.def("CheckForReset", (void (TutorialWrapper::*)()) &TutorialWrapper::CheckForReset, "C++: TutorialWrapper::CheckForReset() --> void");
		cl.def("GetGoalViewWidth", (float (TutorialWrapper::*)(class GoalWrapper, struct Vector &)) &TutorialWrapper::GetGoalViewWidth, "C++: TutorialWrapper::GetGoalViewWidth(class GoalWrapper, struct Vector &) --> float", pybind11::arg("Goal"), pybind11::arg("ViewerLoc"));
		cl.def("IsBallMovingTowardsGoal2", (bool (TutorialWrapper::*)(class GoalWrapper, class BallWrapper, float, float)) &TutorialWrapper::IsBallMovingTowardsGoal2, "C++: TutorialWrapper::IsBallMovingTowardsGoal2(class GoalWrapper, class BallWrapper, float, float) --> bool", pybind11::arg("Goal"), pybind11::arg("Ball"), pybind11::arg("MinVelocityForDestroy"), pybind11::arg("InGoalDepth"));
		cl.def("SetGoalDepth2", (void (TutorialWrapper::*)()) &TutorialWrapper::SetGoalDepth2, "C++: TutorialWrapper::SetGoalDepth2() --> void");
		cl.def("GetShuffledSpawnIndex", (int (TutorialWrapper::*)()) &TutorialWrapper::GetShuffledSpawnIndex, "C++: TutorialWrapper::GetShuffledSpawnIndex() --> int");
		cl.def("DestroyCannon", (void (TutorialWrapper::*)()) &TutorialWrapper::DestroyCannon, "C++: TutorialWrapper::DestroyCannon() --> void");
		cl.def("SetCannonOrientation", (void (TutorialWrapper::*)(struct Vector &, struct Rotator &)) &TutorialWrapper::SetCannonOrientation, "C++: TutorialWrapper::SetCannonOrientation(struct Vector &, struct Rotator &) --> void", pybind11::arg("NewLocation"), pybind11::arg("NewRotation"));
		cl.def("SpawnBall", (class BallWrapper (TutorialWrapper::*)(struct Vector &, unsigned long, unsigned long, std::string)) &TutorialWrapper::SpawnBall, "C++: TutorialWrapper::SpawnBall(struct Vector &, unsigned long, unsigned long, std::string) --> class BallWrapper", pybind11::arg("SpawnLoc"), pybind11::arg("bWake"), pybind11::arg("bSpawnCannon"), pybind11::arg("BallArch"));
		cl.def("InitBallEffects", (void (TutorialWrapper::*)()) &TutorialWrapper::InitBallEffects, "C++: TutorialWrapper::InitBallEffects() --> void");
		cl.def("InitBallVelocity", (void (TutorialWrapper::*)()) &TutorialWrapper::InitBallVelocity, "C++: TutorialWrapper::InitBallVelocity() --> void");
		cl.def("GetRandomGoalAimLocation", (struct Vector (TutorialWrapper::*)(int, struct Vector &)) &TutorialWrapper::GetRandomGoalAimLocation, "C++: TutorialWrapper::GetRandomGoalAimLocation(int, struct Vector &) --> struct Vector", pybind11::arg("InTeamNum"), pybind11::arg("BallLoc"));
		cl.def("GetGoalExtent2", (struct Vector (TutorialWrapper::*)(class GoalWrapper)) &TutorialWrapper::GetGoalExtent2, "C++: TutorialWrapper::GetGoalExtent2(class GoalWrapper) --> struct Vector", pybind11::arg("Goal"));
		cl.def("SetBallVelocity", (void (TutorialWrapper::*)(struct Vector &, class BallWrapper)) &TutorialWrapper::SetBallVelocity, "C++: TutorialWrapper::SetBallVelocity(struct Vector &, class BallWrapper) --> void", pybind11::arg("InitialVelocity"), pybind11::arg("Ball"));
		cl.def("InitGameSetup", (void (TutorialWrapper::*)(class CarWrapper)) &TutorialWrapper::InitGameSetup, "C++: TutorialWrapper::InitGameSetup(class CarWrapper) --> void", pybind11::arg("Car"));
		cl.def("ShouldAllowSuperBoost", (bool (TutorialWrapper::*)()) &TutorialWrapper::ShouldAllowSuperBoost, "C++: TutorialWrapper::ShouldAllowSuperBoost() --> bool");
		cl.def("OnVehicleSetup", (void (TutorialWrapper::*)(class CarWrapper)) &TutorialWrapper::OnVehicleSetup, "C++: TutorialWrapper::OnVehicleSetup(class CarWrapper) --> void", pybind11::arg("Car"));
		cl.def("HandleVehicleSetup", (void (TutorialWrapper::*)(class CarWrapper)) &TutorialWrapper::HandleVehicleSetup, "C++: TutorialWrapper::HandleVehicleSetup(class CarWrapper) --> void", pybind11::arg("Car"));
		cl.def("InitCrowdManager", (void (TutorialWrapper::*)()) &TutorialWrapper::InitCrowdManager, "C++: TutorialWrapper::InitCrowdManager() --> void");
		cl.def("HandleScoreUpdated", (void (TutorialWrapper::*)(class TeamWrapper)) &TutorialWrapper::HandleScoreUpdated, "C++: TutorialWrapper::HandleScoreUpdated(class TeamWrapper) --> void", pybind11::arg("Team"));
		cl.def("SetDifficulty2", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetDifficulty2, "C++: TutorialWrapper::SetDifficulty2(int) --> void", pybind11::arg("InDifficulty"));
		cl.def("UpdateStats", (void (TutorialWrapper::*)()) &TutorialWrapper::UpdateStats, "C++: TutorialWrapper::UpdateStats() --> void");
		cl.def("AddLocalPlayer", (void (TutorialWrapper::*)(class PlayerControllerWrapper)) &TutorialWrapper::AddLocalPlayer, "C++: TutorialWrapper::AddLocalPlayer(class PlayerControllerWrapper) --> void", pybind11::arg("Player"));
		cl.def("HandlePlayerResetTraining", (void (TutorialWrapper::*)(class GameEventWrapper)) &TutorialWrapper::HandlePlayerResetTraining, "C++: TutorialWrapper::HandlePlayerResetTraining(class GameEventWrapper) --> void", pybind11::arg("GameEvent"));
		cl.def("OnInit", (void (TutorialWrapper::*)()) &TutorialWrapper::OnInit, "C++: TutorialWrapper::OnInit() --> void");
		cl.def("EventTutorialTipChanged", (void (TutorialWrapper::*)(class TutorialWrapper, std::string)) &TutorialWrapper::EventTutorialTipChanged, "C++: TutorialWrapper::EventTutorialTipChanged(class TutorialWrapper, std::string) --> void", pybind11::arg("GameEvent"), pybind11::arg("NewTip"));
	}
}
