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
		cl.def("assign", (class TutorialWrapper & (TutorialWrapper::*)(class TutorialWrapper)) &TutorialWrapper::operator=, "C++: TutorialWrapper::operator=(class TutorialWrapper) --> class TutorialWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Redo", (void (TutorialWrapper::*)()) &TutorialWrapper::Redo, "C++: TutorialWrapper::Redo() --> void");
		cl.def("GetCarSpawnLocation", (struct Vector (TutorialWrapper::*)()) &TutorialWrapper::GetCarSpawnLocation, "C++: TutorialWrapper::GetCarSpawnLocation() --> struct Vector");
		cl.def("SetCarSpawnLocation", (void (TutorialWrapper::*)(struct Vector)) &TutorialWrapper::SetCarSpawnLocation, "C++: TutorialWrapper::SetCarSpawnLocation(struct Vector) --> void", "v"_a);
		cl.def("GetCarSpawnRotation", (struct Rotator (TutorialWrapper::*)()) &TutorialWrapper::GetCarSpawnRotation, "C++: TutorialWrapper::GetCarSpawnRotation() --> struct Rotator");
		cl.def("SetCarSpawnRotation", (void (TutorialWrapper::*)(struct Rotator)) &TutorialWrapper::SetCarSpawnRotation, "C++: TutorialWrapper::SetCarSpawnRotation(struct Rotator) --> void", "v"_a);
		cl.def("GetGameCar", (class CarWrapper (TutorialWrapper::*)()) &TutorialWrapper::GetGameCar, "C++: TutorialWrapper::GetGameCar() --> class CarWrapper");
		cl.def("IsBallMovingTowardsGoal", (bool (TutorialWrapper::*)(int, class BallWrapper)) &TutorialWrapper::IsBallMovingTowardsGoal, "C++: TutorialWrapper::IsBallMovingTowardsGoal(int, class BallWrapper) --> bool", "goalNo"_a, "bw"_a);
		cl.def("IsInGoal", (bool (TutorialWrapper::*)(struct Vector)) &TutorialWrapper::IsInGoal, "C++: TutorialWrapper::IsInGoal(struct Vector) --> bool", "vec"_a);
		cl.def("DisableGoalReset", (void (TutorialWrapper::*)()) &TutorialWrapper::DisableGoalReset, "C++: TutorialWrapper::DisableGoalReset() --> void");
		cl.def("EnableGoalReset", (void (TutorialWrapper::*)()) &TutorialWrapper::EnableGoalReset, "C++: TutorialWrapper::EnableGoalReset() --> void");
		cl.def("GenerateShot", (struct Vector (TutorialWrapper::*)(struct Vector, struct Vector, float)) &TutorialWrapper::GenerateShot, "C++: TutorialWrapper::GenerateShot(struct Vector, struct Vector, float) --> struct Vector", "startPos"_a, "destination"_a, "speed"_a);
		cl.def("GenerateGoalAimLocation", (struct Vector (TutorialWrapper::*)(int, struct Vector)) &TutorialWrapper::GenerateGoalAimLocation, "C++: TutorialWrapper::GenerateGoalAimLocation(int, struct Vector) --> struct Vector", "goalNumber"_a, "currentBallLocation"_a);
		cl.def("GetGoalExtent", [](TutorialWrapper &o) -> Vector { return o.GetGoalExtent(); }, "");
		cl.def("GetGoalExtent", (struct Vector (TutorialWrapper::*)(int)) &TutorialWrapper::GetGoalExtent, "C++: TutorialWrapper::GetGoalExtent(int) --> struct Vector", "goalNumber"_a = 0);
		cl.def("GetGoalLocation", [](TutorialWrapper &o) -> Vector { return o.GetGoalLocation(); }, "");
		cl.def("GetGoalLocation", (struct Vector (TutorialWrapper::*)(int)) &TutorialWrapper::GetGoalLocation, "C++: TutorialWrapper::GetGoalLocation(int) --> struct Vector", "goalNumber"_a = 0);
		cl.def("GetTotalFieldExtent", (struct Vector (TutorialWrapper::*)()) &TutorialWrapper::GetTotalFieldExtent, "C++: TutorialWrapper::GetTotalFieldExtent() --> struct Vector");
		cl.def("SetTotalFieldExtent", (void (TutorialWrapper::*)(struct Vector)) &TutorialWrapper::SetTotalFieldExtent, "C++: TutorialWrapper::SetTotalFieldExtent(struct Vector) --> void", "newTotalFieldExtent"_a);
		cl.def("GetTeamNum", (int (TutorialWrapper::*)()) &TutorialWrapper::GetTeamNum, "C++: TutorialWrapper::GetTeamNum() --> int");
		cl.def("SetTeamNum", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetTeamNum, "C++: TutorialWrapper::SetTeamNum(int) --> void", "newTeamNum"_a);
		cl.def("GetBallGoalNum", (int (TutorialWrapper::*)()) &TutorialWrapper::GetBallGoalNum, "C++: TutorialWrapper::GetBallGoalNum() --> int");
		cl.def("SetBallGoalNum", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetBallGoalNum, "C++: TutorialWrapper::SetBallGoalNum(int) --> void", "newBallGoalNum"_a);
		cl.def("GetbOnlyScoreInBallGoalNum", (unsigned long (TutorialWrapper::*)()) &TutorialWrapper::GetbOnlyScoreInBallGoalNum, "C++: TutorialWrapper::GetbOnlyScoreInBallGoalNum() --> unsigned long");
		cl.def("SetbOnlyScoreInBallGoalNum", (void (TutorialWrapper::*)(unsigned long)) &TutorialWrapper::SetbOnlyScoreInBallGoalNum, "C++: TutorialWrapper::SetbOnlyScoreInBallGoalNum(unsigned long) --> void", "newbOnlyScoreInBallGoalNum"_a);
		cl.def("GetbRedoRound", (unsigned long (TutorialWrapper::*)()) &TutorialWrapper::GetbRedoRound, "C++: TutorialWrapper::GetbRedoRound() --> unsigned long");
		cl.def("SetbRedoRound", (void (TutorialWrapper::*)(unsigned long)) &TutorialWrapper::SetbRedoRound, "C++: TutorialWrapper::SetbRedoRound(unsigned long) --> void", "newbRedoRound"_a);
		cl.def("GetbAllowSuperBoost", (unsigned long (TutorialWrapper::*)()) &TutorialWrapper::GetbAllowSuperBoost, "C++: TutorialWrapper::GetbAllowSuperBoost() --> unsigned long");
		cl.def("SetbAllowSuperBoost", (void (TutorialWrapper::*)(unsigned long)) &TutorialWrapper::SetbAllowSuperBoost, "C++: TutorialWrapper::SetbAllowSuperBoost(unsigned long) --> void", "newbAllowSuperBoost"_a);
		cl.def("GetbDisplayedRedoPenaltyMessage", (unsigned long (TutorialWrapper::*)()) &TutorialWrapper::GetbDisplayedRedoPenaltyMessage, "C++: TutorialWrapper::GetbDisplayedRedoPenaltyMessage() --> unsigned long");
		cl.def("SetbDisplayedRedoPenaltyMessage", (void (TutorialWrapper::*)(unsigned long)) &TutorialWrapper::SetbDisplayedRedoPenaltyMessage, "C++: TutorialWrapper::SetbDisplayedRedoPenaltyMessage(unsigned long) --> void", "newbDisplayedRedoPenaltyMessage"_a);
		cl.def("GetbShowBoostMeter", (unsigned long (TutorialWrapper::*)()) &TutorialWrapper::GetbShowBoostMeter, "C++: TutorialWrapper::GetbShowBoostMeter() --> unsigned long");
		cl.def("SetbShowBoostMeter", (void (TutorialWrapper::*)(unsigned long)) &TutorialWrapper::SetbShowBoostMeter, "C++: TutorialWrapper::SetbShowBoostMeter(unsigned long) --> void", "newbShowBoostMeter"_a);
		cl.def("GetDifficulty", (unsigned char (TutorialWrapper::*)()) &TutorialWrapper::GetDifficulty, "C++: TutorialWrapper::GetDifficulty() --> unsigned char");
		cl.def("SetDifficulty", (void (TutorialWrapper::*)(unsigned char)) &TutorialWrapper::SetDifficulty, "C++: TutorialWrapper::SetDifficulty(unsigned char) --> void", "newDifficulty"_a);
		cl.def("GetDebugRotationType", (unsigned char (TutorialWrapper::*)()) &TutorialWrapper::GetDebugRotationType, "C++: TutorialWrapper::GetDebugRotationType() --> unsigned char");
		cl.def("SetDebugRotationType", (void (TutorialWrapper::*)(unsigned char)) &TutorialWrapper::SetDebugRotationType, "C++: TutorialWrapper::SetDebugRotationType(unsigned char) --> void", "newDebugRotationType"_a);
		cl.def("GetGoalDepth", (float (TutorialWrapper::*)()) &TutorialWrapper::GetGoalDepth, "C++: TutorialWrapper::GetGoalDepth() --> float");
		cl.def("SetGoalDepth", (void (TutorialWrapper::*)(float)) &TutorialWrapper::SetGoalDepth, "C++: TutorialWrapper::SetGoalDepth(float) --> void", "newGoalDepth"_a);
		cl.def("GetGameEventRounds", (int (TutorialWrapper::*)()) &TutorialWrapper::GetGameEventRounds, "C++: TutorialWrapper::GetGameEventRounds() --> int");
		cl.def("SetGameEventRounds", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetGameEventRounds, "C++: TutorialWrapper::SetGameEventRounds(int) --> void", "newGameEventRounds"_a);
		cl.def("GetEventStartTime", (float (TutorialWrapper::*)()) &TutorialWrapper::GetEventStartTime, "C++: TutorialWrapper::GetEventStartTime() --> float");
		cl.def("SetEventStartTime", (void (TutorialWrapper::*)(float)) &TutorialWrapper::SetEventStartTime, "C++: TutorialWrapper::SetEventStartTime(float) --> void", "newEventStartTime"_a);
		cl.def("GetBallInitialVelocity", (struct Vector (TutorialWrapper::*)()) &TutorialWrapper::GetBallInitialVelocity, "C++: TutorialWrapper::GetBallInitialVelocity() --> struct Vector");
		cl.def("SetBallInitialVelocity", (void (TutorialWrapper::*)(struct Vector)) &TutorialWrapper::SetBallInitialVelocity, "C++: TutorialWrapper::SetBallInitialVelocity(struct Vector) --> void", "newBallInitialVelocity"_a);
		cl.def("GetSpawnIndexTypeOverride", (int (TutorialWrapper::*)()) &TutorialWrapper::GetSpawnIndexTypeOverride, "C++: TutorialWrapper::GetSpawnIndexTypeOverride() --> int");
		cl.def("SetSpawnIndexTypeOverride", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetSpawnIndexTypeOverride, "C++: TutorialWrapper::SetSpawnIndexTypeOverride(int) --> void", "newSpawnIndexTypeOverride"_a);
		cl.def("GetWaveIndex", (int (TutorialWrapper::*)()) &TutorialWrapper::GetWaveIndex, "C++: TutorialWrapper::GetWaveIndex() --> int");
		cl.def("SetWaveIndex", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetWaveIndex, "C++: TutorialWrapper::SetWaveIndex(int) --> void", "newWaveIndex"_a);
		cl.def("GetWaveSpawnCount", (int (TutorialWrapper::*)()) &TutorialWrapper::GetWaveSpawnCount, "C++: TutorialWrapper::GetWaveSpawnCount() --> int");
		cl.def("SetWaveSpawnCount", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetWaveSpawnCount, "C++: TutorialWrapper::SetWaveSpawnCount(int) --> void", "newWaveSpawnCount"_a);
		cl.def("GetRandomSpawnIndex", (int (TutorialWrapper::*)()) &TutorialWrapper::GetRandomSpawnIndex, "C++: TutorialWrapper::GetRandomSpawnIndex() --> int");
		cl.def("SetRandomSpawnIndex", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetRandomSpawnIndex, "C++: TutorialWrapper::SetRandomSpawnIndex(int) --> void", "newRandomSpawnIndex"_a);
		cl.def("GetStartMessageArchetype", (class UnrealStringWrapper (TutorialWrapper::*)()) &TutorialWrapper::GetStartMessageArchetype, "C++: TutorialWrapper::GetStartMessageArchetype() --> class UnrealStringWrapper");
		cl.def("GetBallSpawnLocation", (struct Vector (TutorialWrapper::*)()) &TutorialWrapper::GetBallSpawnLocation, "C++: TutorialWrapper::GetBallSpawnLocation() --> struct Vector");
		cl.def("SetBallSpawnLocation", (void (TutorialWrapper::*)(struct Vector)) &TutorialWrapper::SetBallSpawnLocation, "C++: TutorialWrapper::SetBallSpawnLocation(struct Vector) --> void", "newBallSpawnLocation"_a);
		cl.def("GetPointsScoredThisRound", (int (TutorialWrapper::*)()) &TutorialWrapper::GetPointsScoredThisRound, "C++: TutorialWrapper::GetPointsScoredThisRound() --> int");
		cl.def("SetPointsScoredThisRound", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetPointsScoredThisRound, "C++: TutorialWrapper::SetPointsScoredThisRound(int) --> void", "newPointsScoredThisRound"_a);
		cl.def("GetBallSpawnCount", (int (TutorialWrapper::*)()) &TutorialWrapper::GetBallSpawnCount, "C++: TutorialWrapper::GetBallSpawnCount() --> int");
		cl.def("SetBallSpawnCount", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetBallSpawnCount, "C++: TutorialWrapper::SetBallSpawnCount(int) --> void", "newBallSpawnCount"_a);
		cl.def("GetBallBounceScale", (float (TutorialWrapper::*)()) &TutorialWrapper::GetBallBounceScale, "C++: TutorialWrapper::GetBallBounceScale() --> float");
		cl.def("SetBallBounceScale", (void (TutorialWrapper::*)(float)) &TutorialWrapper::SetBallBounceScale, "C++: TutorialWrapper::SetBallBounceScale(float) --> void", "newBallBounceScale"_a);
		cl.def("GetCurrentDebugStepX", (int (TutorialWrapper::*)()) &TutorialWrapper::GetCurrentDebugStepX, "C++: TutorialWrapper::GetCurrentDebugStepX() --> int");
		cl.def("SetCurrentDebugStepX", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetCurrentDebugStepX, "C++: TutorialWrapper::SetCurrentDebugStepX(int) --> void", "newCurrentDebugStepX"_a);
		cl.def("GetCurrentDebugStepY", (int (TutorialWrapper::*)()) &TutorialWrapper::GetCurrentDebugStepY, "C++: TutorialWrapper::GetCurrentDebugStepY() --> int");
		cl.def("SetCurrentDebugStepY", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetCurrentDebugStepY, "C++: TutorialWrapper::SetCurrentDebugStepY(int) --> void", "newCurrentDebugStepY"_a);
		cl.def("GetCurrentDebugStepZ", (int (TutorialWrapper::*)()) &TutorialWrapper::GetCurrentDebugStepZ, "C++: TutorialWrapper::GetCurrentDebugStepZ() --> int");
		cl.def("SetCurrentDebugStepZ", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetCurrentDebugStepZ, "C++: TutorialWrapper::SetCurrentDebugStepZ(int) --> void", "newCurrentDebugStepZ"_a);
		cl.def("GetRedoCount", (int (TutorialWrapper::*)()) &TutorialWrapper::GetRedoCount, "C++: TutorialWrapper::GetRedoCount() --> int");
		cl.def("SetRedoCount", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetRedoCount, "C++: TutorialWrapper::SetRedoCount(int) --> void", "newRedoCount"_a);
		cl.def("GetRedoTotal", (int (TutorialWrapper::*)()) &TutorialWrapper::GetRedoTotal, "C++: TutorialWrapper::GetRedoTotal() --> int");
		cl.def("SetRedoTotal", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetRedoTotal, "C++: TutorialWrapper::SetRedoTotal(int) --> void", "newRedoTotal"_a);
		cl.def("InitIntro", (void (TutorialWrapper::*)()) &TutorialWrapper::InitIntro, "C++: TutorialWrapper::InitIntro() --> void");
		cl.def("OnLoadingMovieClosed", (void (TutorialWrapper::*)()) &TutorialWrapper::OnLoadingMovieClosed, "C++: TutorialWrapper::OnLoadingMovieClosed() --> void");
		cl.def("StartTimers", (void (TutorialWrapper::*)()) &TutorialWrapper::StartTimers, "C++: TutorialWrapper::StartTimers() --> void");
		cl.def("UpdateMVP", (void (TutorialWrapper::*)()) &TutorialWrapper::UpdateMVP, "C++: TutorialWrapper::UpdateMVP() --> void");
		cl.def("AllowDynamicCrowd", (bool (TutorialWrapper::*)()) &TutorialWrapper::AllowDynamicCrowd, "C++: TutorialWrapper::AllowDynamicCrowd() --> bool");
		cl.def("SetTutorialTip", (void (TutorialWrapper::*)(std::string)) &TutorialWrapper::SetTutorialTip, "C++: TutorialWrapper::SetTutorialTip(std::string) --> void", "NewTip"_a);
		cl.def("SetShowBoostMeter", (void (TutorialWrapper::*)(unsigned long)) &TutorialWrapper::SetShowBoostMeter, "C++: TutorialWrapper::SetShowBoostMeter(unsigned long) --> void", "bShow"_a);
		cl.def("GetStepLoc", (float (TutorialWrapper::*)(int, float, unsigned long, int *)) &TutorialWrapper::GetStepLoc, "C++: TutorialWrapper::GetStepLoc(int, float, unsigned long, int *) --> float", "Steps"_a, "TotalDist"_a, "bIncrement"_a, "Out_CurrentStep"_a);
		cl.def("GetDebugLocationInExtent", (struct Vector (TutorialWrapper::*)(struct Vector &)) &TutorialWrapper::GetDebugLocationInExtent, "C++: TutorialWrapper::GetDebugLocationInExtent(struct Vector &) --> struct Vector", "Extent"_a);
		cl.def("InitDebugSetup", (void (TutorialWrapper::*)(class CarWrapper)) &TutorialWrapper::InitDebugSetup, "C++: TutorialWrapper::InitDebugSetup(class CarWrapper) --> void", "Car"_a);
		cl.def("SkipTutorial", (void (TutorialWrapper::*)()) &TutorialWrapper::SkipTutorial, "C++: TutorialWrapper::SkipTutorial() --> void");
		cl.def("UpdateBotCount", (void (TutorialWrapper::*)()) &TutorialWrapper::UpdateBotCount, "C++: TutorialWrapper::UpdateBotCount() --> void");
		cl.def("InitMutators", (void (TutorialWrapper::*)()) &TutorialWrapper::InitMutators, "C++: TutorialWrapper::InitMutators() --> void");
		cl.def("IsPrimaryPlayer", (bool (TutorialWrapper::*)(class CarWrapper)) &TutorialWrapper::IsPrimaryPlayer, "C++: TutorialWrapper::IsPrimaryPlayer(class CarWrapper) --> bool", "Car"_a);
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
		cl.def("OnPlayerRestarted", (void (TutorialWrapper::*)(class CarWrapper)) &TutorialWrapper::OnPlayerRestarted, "C++: TutorialWrapper::OnPlayerRestarted(class CarWrapper) --> void", "PlayerCar"_a);
		cl.def("GetTrainingType", (unsigned char (TutorialWrapper::*)()) &TutorialWrapper::GetTrainingType, "C++: TutorialWrapper::GetTrainingType() --> unsigned char");
		cl.def("EndGame", (void (TutorialWrapper::*)()) &TutorialWrapper::EndGame, "C++: TutorialWrapper::EndGame() --> void");
		cl.def("GetRandomLocationInExtent", (struct Vector (TutorialWrapper::*)(struct Vector &)) &TutorialWrapper::GetRandomLocationInExtent, "C++: TutorialWrapper::GetRandomLocationInExtent(struct Vector &) --> struct Vector", "Extent"_a);
		cl.def("Chance", (bool (TutorialWrapper::*)(int)) &TutorialWrapper::Chance, "C++: TutorialWrapper::Chance(int) --> bool", "Chances"_a);
		cl.def("GetOppositeTeamNum", (int (TutorialWrapper::*)()) &TutorialWrapper::GetOppositeTeamNum, "C++: TutorialWrapper::GetOppositeTeamNum() --> int");
		cl.def("GetDirectionToGoal", (struct Vector (TutorialWrapper::*)(int)) &TutorialWrapper::GetDirectionToGoal, "C++: TutorialWrapper::GetDirectionToGoal(int) --> struct Vector", "GoalNum"_a);
		cl.def("IsGameEventComplete", (bool (TutorialWrapper::*)()) &TutorialWrapper::IsGameEventComplete, "C++: TutorialWrapper::IsGameEventComplete() --> bool");
		cl.def("ClampPointToExtent", (struct Vector (TutorialWrapper::*)(struct Vector &, struct Vector &, struct Vector &)) &TutorialWrapper::ClampPointToExtent, "C++: TutorialWrapper::ClampPointToExtent(struct Vector &, struct Vector &, struct Vector &) --> struct Vector", "ExtentCenter"_a, "Point"_a, "Extent"_a);
		cl.def("PredictInitialVelocity", (struct Vector (TutorialWrapper::*)(struct Vector &, struct Vector &, float)) &TutorialWrapper::PredictInitialVelocity, "C++: TutorialWrapper::PredictInitialVelocity(struct Vector &, struct Vector &, float) --> struct Vector", "StartLoc"_a, "EndLoc"_a, "Z"_a);
		cl.def("GetGameBall", (class BallWrapper (TutorialWrapper::*)()) &TutorialWrapper::GetGameBall, "C++: TutorialWrapper::GetGameBall() --> class BallWrapper");
		cl.def("GetGamePawn", (class CarWrapper (TutorialWrapper::*)()) &TutorialWrapper::GetGamePawn, "C++: TutorialWrapper::GetGamePawn() --> class CarWrapper");
		cl.def("ResetGameEvent", (void (TutorialWrapper::*)()) &TutorialWrapper::ResetGameEvent, "C++: TutorialWrapper::ResetGameEvent() --> void");
		cl.def("CheckForReset", (void (TutorialWrapper::*)()) &TutorialWrapper::CheckForReset, "C++: TutorialWrapper::CheckForReset() --> void");
		cl.def("GetGoalViewWidth", (float (TutorialWrapper::*)(class GoalWrapper, struct Vector &)) &TutorialWrapper::GetGoalViewWidth, "C++: TutorialWrapper::GetGoalViewWidth(class GoalWrapper, struct Vector &) --> float", "Goal"_a, "ViewerLoc"_a);
		cl.def("IsBallMovingTowardsGoal2", (bool (TutorialWrapper::*)(class GoalWrapper, class BallWrapper, float, float)) &TutorialWrapper::IsBallMovingTowardsGoal2, "C++: TutorialWrapper::IsBallMovingTowardsGoal2(class GoalWrapper, class BallWrapper, float, float) --> bool", "Goal"_a, "Ball"_a, "MinVelocityForDestroy"_a, "InGoalDepth"_a);
		cl.def("SetGoalDepth2", (void (TutorialWrapper::*)()) &TutorialWrapper::SetGoalDepth2, "C++: TutorialWrapper::SetGoalDepth2() --> void");
		cl.def("GetShuffledSpawnIndex", (int (TutorialWrapper::*)()) &TutorialWrapper::GetShuffledSpawnIndex, "C++: TutorialWrapper::GetShuffledSpawnIndex() --> int");
		cl.def("DestroyCannon", (void (TutorialWrapper::*)()) &TutorialWrapper::DestroyCannon, "C++: TutorialWrapper::DestroyCannon() --> void");
		cl.def("SetCannonOrientation", (void (TutorialWrapper::*)(struct Vector &, struct Rotator &)) &TutorialWrapper::SetCannonOrientation, "C++: TutorialWrapper::SetCannonOrientation(struct Vector &, struct Rotator &) --> void", "NewLocation"_a, "NewRotation"_a);
		cl.def("SpawnBall", (class BallWrapper (TutorialWrapper::*)(struct Vector &, unsigned long, unsigned long, std::string)) &TutorialWrapper::SpawnBall, "C++: TutorialWrapper::SpawnBall(struct Vector &, unsigned long, unsigned long, std::string) --> class BallWrapper", "SpawnLoc"_a, "bWake"_a, "bSpawnCannon"_a, "BallArch"_a);
		cl.def("InitBallEffects", (void (TutorialWrapper::*)()) &TutorialWrapper::InitBallEffects, "C++: TutorialWrapper::InitBallEffects() --> void");
		cl.def("InitBallVelocity", (void (TutorialWrapper::*)()) &TutorialWrapper::InitBallVelocity, "C++: TutorialWrapper::InitBallVelocity() --> void");
		cl.def("GetRandomGoalAimLocation", (struct Vector (TutorialWrapper::*)(int, struct Vector &)) &TutorialWrapper::GetRandomGoalAimLocation, "C++: TutorialWrapper::GetRandomGoalAimLocation(int, struct Vector &) --> struct Vector", "InTeamNum"_a, "BallLoc"_a);
		cl.def("GetGoalExtent2", (struct Vector (TutorialWrapper::*)(class GoalWrapper)) &TutorialWrapper::GetGoalExtent2, "C++: TutorialWrapper::GetGoalExtent2(class GoalWrapper) --> struct Vector", "Goal"_a);
		cl.def("SetBallVelocity", (void (TutorialWrapper::*)(struct Vector &, class BallWrapper)) &TutorialWrapper::SetBallVelocity, "C++: TutorialWrapper::SetBallVelocity(struct Vector &, class BallWrapper) --> void", "InitialVelocity"_a, "Ball"_a);
		cl.def("InitGameSetup", (void (TutorialWrapper::*)(class CarWrapper)) &TutorialWrapper::InitGameSetup, "C++: TutorialWrapper::InitGameSetup(class CarWrapper) --> void", "Car"_a);
		cl.def("ShouldAllowSuperBoost", (bool (TutorialWrapper::*)()) &TutorialWrapper::ShouldAllowSuperBoost, "C++: TutorialWrapper::ShouldAllowSuperBoost() --> bool");
		cl.def("OnVehicleSetup", (void (TutorialWrapper::*)(class CarWrapper)) &TutorialWrapper::OnVehicleSetup, "C++: TutorialWrapper::OnVehicleSetup(class CarWrapper) --> void", "Car"_a);
		cl.def("HandleVehicleSetup", (void (TutorialWrapper::*)(class CarWrapper)) &TutorialWrapper::HandleVehicleSetup, "C++: TutorialWrapper::HandleVehicleSetup(class CarWrapper) --> void", "Car"_a);
		cl.def("InitCrowdManager", (void (TutorialWrapper::*)()) &TutorialWrapper::InitCrowdManager, "C++: TutorialWrapper::InitCrowdManager() --> void");
		cl.def("HandleScoreUpdated", (void (TutorialWrapper::*)(class TeamWrapper)) &TutorialWrapper::HandleScoreUpdated, "C++: TutorialWrapper::HandleScoreUpdated(class TeamWrapper) --> void", "Team"_a);
		cl.def("SetDifficulty2", (void (TutorialWrapper::*)(int)) &TutorialWrapper::SetDifficulty2, "C++: TutorialWrapper::SetDifficulty2(int) --> void", "InDifficulty"_a);
		cl.def("UpdateStats", (void (TutorialWrapper::*)()) &TutorialWrapper::UpdateStats, "C++: TutorialWrapper::UpdateStats() --> void");
		cl.def("AddLocalPlayer", (void (TutorialWrapper::*)(class PlayerControllerWrapper)) &TutorialWrapper::AddLocalPlayer, "C++: TutorialWrapper::AddLocalPlayer(class PlayerControllerWrapper) --> void", "Player"_a);
		cl.def("HandlePlayerResetTraining", (void (TutorialWrapper::*)(class GameEventWrapper)) &TutorialWrapper::HandlePlayerResetTraining, "C++: TutorialWrapper::HandlePlayerResetTraining(class GameEventWrapper) --> void", "GameEvent"_a);
		cl.def("OnInit", (void (TutorialWrapper::*)()) &TutorialWrapper::OnInit, "C++: TutorialWrapper::OnInit() --> void");
		cl.def("EventTutorialTipChanged", (void (TutorialWrapper::*)(class TutorialWrapper, std::string)) &TutorialWrapper::EventTutorialTipChanged, "C++: TutorialWrapper::EventTutorialTipChanged(class TutorialWrapper, std::string) --> void", "GameEvent"_a, "NewTip"_a);
	}
}
