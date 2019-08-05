#include "pch.h"
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameEvent/ReplayDirectorWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/AirControlComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_unknown_unknown_4(py::module &M)
{
	{ // BallWrapper file: line:12
		pybind11::class_<BallWrapper, std::shared_ptr<BallWrapper>, RBActorWrapper> cl(M, "BallWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BallWrapper const &o){ return new BallWrapper(o); } ) );
		cl.def("assign", (class BallWrapper & (BallWrapper::*)(class BallWrapper)) &BallWrapper::operator=, "C++: BallWrapper::operator=(class BallWrapper) --> class BallWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetLastTouchTime", (float (BallWrapper::*)()) &BallWrapper::GetLastTouchTime, "C++: BallWrapper::GetLastTouchTime() --> float");
		cl.def("PredictPosition", (struct PredictionInfo (BallWrapper::*)(float)) &BallWrapper::PredictPosition, "C++: BallWrapper::PredictPosition(float) --> struct PredictionInfo", "timeAhead"_a);
		cl.def("GetEndOfGameFXArchetype", (class FXActorWrapper (BallWrapper::*)()) &BallWrapper::GetEndOfGameFXArchetype, "C++: BallWrapper::GetEndOfGameFXArchetype() --> class FXActorWrapper");
		cl.def("SetEndOfGameFXArchetype", (void (BallWrapper::*)(class FXActorWrapper)) &BallWrapper::SetEndOfGameFXArchetype, "C++: BallWrapper::SetEndOfGameFXArchetype(class FXActorWrapper) --> void", "newEndOfGameFXArchetype"_a);
		cl.def("GetbAllowPlayerExplosionOverride", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbAllowPlayerExplosionOverride, "C++: BallWrapper::GetbAllowPlayerExplosionOverride() --> unsigned long");
		cl.def("SetbAllowPlayerExplosionOverride", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbAllowPlayerExplosionOverride, "C++: BallWrapper::SetbAllowPlayerExplosionOverride(unsigned long) --> void", "newbAllowPlayerExplosionOverride"_a);
		cl.def("GetbNotifyGroundHit", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbNotifyGroundHit, "C++: BallWrapper::GetbNotifyGroundHit() --> unsigned long");
		cl.def("SetbNotifyGroundHit", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbNotifyGroundHit, "C++: BallWrapper::SetbNotifyGroundHit(unsigned long) --> void", "newbNotifyGroundHit"_a);
		cl.def("GetbEndOfGameHidden", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbEndOfGameHidden, "C++: BallWrapper::GetbEndOfGameHidden() --> unsigned long");
		cl.def("SetbEndOfGameHidden", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbEndOfGameHidden, "C++: BallWrapper::SetbEndOfGameHidden(unsigned long) --> void", "newbEndOfGameHidden"_a);
		cl.def("GetbFadeIn", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbFadeIn, "C++: BallWrapper::GetbFadeIn() --> unsigned long");
		cl.def("SetbFadeIn", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbFadeIn, "C++: BallWrapper::SetbFadeIn(unsigned long) --> void", "newbFadeIn"_a);
		cl.def("GetbFadeOut", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbFadeOut, "C++: BallWrapper::GetbFadeOut() --> unsigned long");
		cl.def("SetbFadeOut", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbFadeOut, "C++: BallWrapper::SetbFadeOut(unsigned long) --> void", "newbFadeOut"_a);
		cl.def("GetbPredictionOnGround", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbPredictionOnGround, "C++: BallWrapper::GetbPredictionOnGround() --> unsigned long");
		cl.def("SetbPredictionOnGround", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbPredictionOnGround, "C++: BallWrapper::SetbPredictionOnGround(unsigned long) --> void", "newbPredictionOnGround"_a);
		cl.def("GetbCanBeAttached", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbCanBeAttached, "C++: BallWrapper::GetbCanBeAttached() --> unsigned long");
		cl.def("SetbCanBeAttached", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbCanBeAttached, "C++: BallWrapper::SetbCanBeAttached(unsigned long) --> void", "newbCanBeAttached"_a);
		cl.def("GetbItemFreeze", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbItemFreeze, "C++: BallWrapper::GetbItemFreeze() --> unsigned long");
		cl.def("SetbItemFreeze", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbItemFreeze, "C++: BallWrapper::SetbItemFreeze(unsigned long) --> void", "newbItemFreeze"_a);
		cl.def("GetMagnusCoefficient", (struct Vector (BallWrapper::*)()) &BallWrapper::GetMagnusCoefficient, "C++: BallWrapper::GetMagnusCoefficient() --> struct Vector");
		cl.def("SetMagnusCoefficient", (void (BallWrapper::*)(struct Vector)) &BallWrapper::SetMagnusCoefficient, "C++: BallWrapper::SetMagnusCoefficient(struct Vector) --> void", "newMagnusCoefficient"_a);
		cl.def("GetRadius", (float (BallWrapper::*)()) &BallWrapper::GetRadius, "C++: BallWrapper::GetRadius() --> float");
		cl.def("SetRadius", (void (BallWrapper::*)(float)) &BallWrapper::SetRadius, "C++: BallWrapper::SetRadius(float) --> void", "newRadius"_a);
		cl.def("GetVisualRadius", (float (BallWrapper::*)()) &BallWrapper::GetVisualRadius, "C++: BallWrapper::GetVisualRadius() --> float");
		cl.def("SetVisualRadius", (void (BallWrapper::*)(float)) &BallWrapper::SetVisualRadius, "C++: BallWrapper::SetVisualRadius(float) --> void", "newVisualRadius"_a);
		cl.def("GetLastCalculateCarHit", (float (BallWrapper::*)()) &BallWrapper::GetLastCalculateCarHit, "C++: BallWrapper::GetLastCalculateCarHit() --> float");
		cl.def("GetInitialLocation", (struct Vector (BallWrapper::*)()) &BallWrapper::GetInitialLocation, "C++: BallWrapper::GetInitialLocation() --> struct Vector");
		cl.def("SetInitialLocation", (void (BallWrapper::*)(struct Vector)) &BallWrapper::SetInitialLocation, "C++: BallWrapper::SetInitialLocation(struct Vector) --> void", "newInitialLocation"_a);
		cl.def("SetInitialRotation", (void (BallWrapper::*)(struct Rotator)) &BallWrapper::SetInitialRotation, "C++: BallWrapper::SetInitialRotation(struct Rotator) --> void", "newInitialRotation"_a);
		cl.def("GetLastHitWorldTime", (float (BallWrapper::*)()) &BallWrapper::GetLastHitWorldTime, "C++: BallWrapper::GetLastHitWorldTime() --> float");
		cl.def("GetReplicatedBallScale", (float (BallWrapper::*)()) &BallWrapper::GetReplicatedBallScale, "C++: BallWrapper::GetReplicatedBallScale() --> float");
		cl.def("SetReplicatedBallScale", (void (BallWrapper::*)(float)) &BallWrapper::SetReplicatedBallScale, "C++: BallWrapper::SetReplicatedBallScale(float) --> void", "newReplicatedBallScale"_a);
		cl.def("GetReplicatedWorldBounceScale", (float (BallWrapper::*)()) &BallWrapper::GetReplicatedWorldBounceScale, "C++: BallWrapper::GetReplicatedWorldBounceScale() --> float");
		cl.def("SetReplicatedWorldBounceScale", (void (BallWrapper::*)(float)) &BallWrapper::SetReplicatedWorldBounceScale, "C++: BallWrapper::SetReplicatedWorldBounceScale(float) --> void", "newReplicatedWorldBounceScale"_a);
		cl.def("GetReplicatedBallGravityScale", (float (BallWrapper::*)()) &BallWrapper::GetReplicatedBallGravityScale, "C++: BallWrapper::GetReplicatedBallGravityScale() --> float");
		cl.def("SetReplicatedBallGravityScale", (void (BallWrapper::*)(float)) &BallWrapper::SetReplicatedBallGravityScale, "C++: BallWrapper::SetReplicatedBallGravityScale(float) --> void", "newReplicatedBallGravityScale"_a);
		cl.def("GetReplicatedBallMaxLinearSpeedScale", (float (BallWrapper::*)()) &BallWrapper::GetReplicatedBallMaxLinearSpeedScale, "C++: BallWrapper::GetReplicatedBallMaxLinearSpeedScale() --> float");
		cl.def("SetReplicatedBallMaxLinearSpeedScale", (void (BallWrapper::*)(float)) &BallWrapper::SetReplicatedBallMaxLinearSpeedScale, "C++: BallWrapper::SetReplicatedBallMaxLinearSpeedScale(float) --> void", "newReplicatedBallMaxLinearSpeedScale"_a);
		cl.def("GetReplicatedAddedCarBounceScale", (float (BallWrapper::*)()) &BallWrapper::GetReplicatedAddedCarBounceScale, "C++: BallWrapper::GetReplicatedAddedCarBounceScale() --> float");
		cl.def("SetReplicatedAddedCarBounceScale", (void (BallWrapper::*)(float)) &BallWrapper::SetReplicatedAddedCarBounceScale, "C++: BallWrapper::SetReplicatedAddedCarBounceScale(float) --> void", "newReplicatedAddedCarBounceScale"_a);
		cl.def("GetAdditionalCarGroundBounceScaleZ", (float (BallWrapper::*)()) &BallWrapper::GetAdditionalCarGroundBounceScaleZ, "C++: BallWrapper::GetAdditionalCarGroundBounceScaleZ() --> float");
		cl.def("SetAdditionalCarGroundBounceScaleZ", (void (BallWrapper::*)(float)) &BallWrapper::SetAdditionalCarGroundBounceScaleZ, "C++: BallWrapper::SetAdditionalCarGroundBounceScaleZ(float) --> void", "newAdditionalCarGroundBounceScaleZ"_a);
		cl.def("GetAdditionalCarGroundBounceScaleXY", (float (BallWrapper::*)()) &BallWrapper::GetAdditionalCarGroundBounceScaleXY, "C++: BallWrapper::GetAdditionalCarGroundBounceScaleXY() --> float");
		cl.def("SetAdditionalCarGroundBounceScaleXY", (void (BallWrapper::*)(float)) &BallWrapper::SetAdditionalCarGroundBounceScaleXY, "C++: BallWrapper::SetAdditionalCarGroundBounceScaleXY(float) --> void", "newAdditionalCarGroundBounceScaleXY"_a);
		cl.def("GetHitTeamNum", (unsigned char (BallWrapper::*)()) &BallWrapper::GetHitTeamNum, "C++: BallWrapper::GetHitTeamNum() --> unsigned char");
		cl.def("SetHitTeamNum", (void (BallWrapper::*)(unsigned char)) &BallWrapper::SetHitTeamNum, "C++: BallWrapper::SetHitTeamNum(unsigned char) --> void", "newHitTeamNum"_a);
		cl.def("GetGameEvent", (class ServerWrapper (BallWrapper::*)()) &BallWrapper::GetGameEvent, "C++: BallWrapper::GetGameEvent() --> class ServerWrapper");
		cl.def("GetExplosionTime", (float (BallWrapper::*)()) &BallWrapper::GetExplosionTime, "C++: BallWrapper::GetExplosionTime() --> float");
		cl.def("SetExplosionTime", (void (BallWrapper::*)(float)) &BallWrapper::SetExplosionTime, "C++: BallWrapper::SetExplosionTime(float) --> void", "newExplosionTime"_a);
		cl.def("GetOldLocation", (struct Vector (BallWrapper::*)()) &BallWrapper::GetOldLocation, "C++: BallWrapper::GetOldLocation() --> struct Vector");
		cl.def("SetOldLocation", (void (BallWrapper::*)(struct Vector)) &BallWrapper::SetOldLocation, "C++: BallWrapper::SetOldLocation(struct Vector) --> void", "newOldLocation"_a);
		cl.def("GetPredictionTimestep", (float (BallWrapper::*)()) &BallWrapper::GetPredictionTimestep, "C++: BallWrapper::GetPredictionTimestep() --> float");
		cl.def("SetPredictionTimestep", (void (BallWrapper::*)(float)) &BallWrapper::SetPredictionTimestep, "C++: BallWrapper::SetPredictionTimestep(float) --> void", "newPredictionTimestep"_a);
		cl.def("GetLastPredictionTime", (float (BallWrapper::*)()) &BallWrapper::GetLastPredictionTime, "C++: BallWrapper::GetLastPredictionTime() --> float");
		cl.def("SetLastPredictionTime", (void (BallWrapper::*)(float)) &BallWrapper::SetLastPredictionTime, "C++: BallWrapper::SetLastPredictionTime(float) --> void", "newLastPredictionTime"_a);
		cl.def("GetGroundForce", (float (BallWrapper::*)()) &BallWrapper::GetGroundForce, "C++: BallWrapper::GetGroundForce() --> float");
		cl.def("SetGroundForce", (void (BallWrapper::*)(float)) &BallWrapper::SetGroundForce, "C++: BallWrapper::SetGroundForce(float) --> void", "newGroundForce"_a);
		cl.def("GetCurrentAffector", (class CarWrapper (BallWrapper::*)()) &BallWrapper::GetCurrentAffector, "C++: BallWrapper::GetCurrentAffector() --> class CarWrapper");
		cl.def("SetCurrentAffector", (void (BallWrapper::*)(class CarWrapper)) &BallWrapper::SetCurrentAffector, "C++: BallWrapper::SetCurrentAffector(class CarWrapper) --> void", "newCurrentAffector"_a);
		cl.def("GetTrajectoryStartVelocity", (struct Vector (BallWrapper::*)()) &BallWrapper::GetTrajectoryStartVelocity, "C++: BallWrapper::GetTrajectoryStartVelocity() --> struct Vector");
		cl.def("GetTrajectoryStartRotation", (struct Rotator (BallWrapper::*)()) &BallWrapper::GetTrajectoryStartRotation, "C++: BallWrapper::GetTrajectoryStartRotation() --> struct Rotator");
		cl.def("GetTrajectoryStartLocation", (struct Vector (BallWrapper::*)()) &BallWrapper::GetTrajectoryStartLocation, "C++: BallWrapper::GetTrajectoryStartLocation() --> struct Vector");
		cl.def("ShouldDrawTrajectory", (bool (BallWrapper::*)()) &BallWrapper::ShouldDrawTrajectory, "C++: BallWrapper::ShouldDrawTrajectory() --> bool");
		cl.def("GetAdditionalCarBounceScaleZ", (float (BallWrapper::*)(class CarWrapper)) &BallWrapper::GetAdditionalCarBounceScaleZ, "C++: BallWrapper::GetAdditionalCarBounceScaleZ(class CarWrapper) --> float", "Car"_a);
		cl.def("SetEndOfGameHidden", (void (BallWrapper::*)()) &BallWrapper::SetEndOfGameHidden, "C++: BallWrapper::SetEndOfGameHidden() --> void");
		cl.def("Explode", (void (BallWrapper::*)(class GoalWrapper, struct Vector &, class PriWrapper)) &BallWrapper::Explode, "C++: BallWrapper::Explode(class GoalWrapper, struct Vector &, class PriWrapper) --> void", "ExplosionGoal"_a, "ExplodeLocation"_a, "Scorer"_a);
		cl.def("DoDestroy", (void (BallWrapper::*)()) &BallWrapper::DoDestroy, "C++: BallWrapper::DoDestroy() --> void");
		cl.def("DoExplode", (void (BallWrapper::*)()) &BallWrapper::DoExplode, "C++: BallWrapper::DoExplode() --> void");
		cl.def("Launch", (void (BallWrapper::*)(struct Vector &, struct Vector &)) &BallWrapper::Launch, "C++: BallWrapper::Launch(struct Vector &, struct Vector &) --> void", "LaunchPosition"_a, "LaunchDirection"_a);
		cl.def("OnCarTouch", (void (BallWrapper::*)(class CarWrapper, unsigned char)) &BallWrapper::OnCarTouch, "C++: BallWrapper::OnCarTouch(class CarWrapper, unsigned char) --> void", "HitCar"_a, "HitType"_a);
		cl.def("RecordCarHit", (void (BallWrapper::*)(class CarWrapper, struct Vector &, struct Vector &, unsigned char)) &BallWrapper::RecordCarHit, "C++: BallWrapper::RecordCarHit(class CarWrapper, struct Vector &, struct Vector &, unsigned char) --> void", "HitCar"_a, "HitLocation"_a, "HitNormal"_a, "HitType"_a);
		cl.def("IsGroundHit", (bool (BallWrapper::*)(struct Vector &)) &BallWrapper::IsGroundHit, "C++: BallWrapper::IsGroundHit(struct Vector &) --> bool", "HitNormal"_a);
		cl.def("FellOutOfWorld", (void (BallWrapper::*)()) &BallWrapper::FellOutOfWorld, "C++: BallWrapper::FellOutOfWorld() --> void");
		cl.def("IsRoundActive", (bool (BallWrapper::*)()) &BallWrapper::IsRoundActive, "C++: BallWrapper::IsRoundActive() --> bool");
		cl.def("eventOnHitGoal", (void (BallWrapper::*)(class GoalWrapper, struct Vector &)) &BallWrapper::eventOnHitGoal, "C++: BallWrapper::eventOnHitGoal(class GoalWrapper, struct Vector &) --> void", "Goal"_a, "HitLoc"_a);
		cl.def("TurnOff", (void (BallWrapper::*)()) &BallWrapper::TurnOff, "C++: BallWrapper::TurnOff() --> void");
		cl.def("InitAk", (void (BallWrapper::*)()) &BallWrapper::InitAk, "C++: BallWrapper::InitAk() --> void");
		cl.def("SetWorldBounceScale", (void (BallWrapper::*)(float)) &BallWrapper::SetWorldBounceScale, "C++: BallWrapper::SetWorldBounceScale(float) --> void", "NewScale"_a);
		cl.def("SetCarBounceScale", (void (BallWrapper::*)(float)) &BallWrapper::SetCarBounceScale, "C++: BallWrapper::SetCarBounceScale(float) --> void", "NewScale"_a);
		cl.def("SetBallMaxLinearSpeedScale", (void (BallWrapper::*)(float)) &BallWrapper::SetBallMaxLinearSpeedScale, "C++: BallWrapper::SetBallMaxLinearSpeedScale(float) --> void", "InMaxLinearSpeedScale"_a);
		cl.def("SetBallGravityScale", (void (BallWrapper::*)(float)) &BallWrapper::SetBallGravityScale, "C++: BallWrapper::SetBallGravityScale(float) --> void", "InBallGravityScale"_a);
		cl.def("SetBallScale", (void (BallWrapper::*)(float)) &BallWrapper::SetBallScale, "C++: BallWrapper::SetBallScale(float) --> void", "NewScale"_a);
		cl.def("EventHitGoal", (void (BallWrapper::*)(class BallWrapper, class GoalWrapper)) &BallWrapper::EventHitGoal, "C++: BallWrapper::EventHitGoal(class BallWrapper, class GoalWrapper) --> void", "Ball"_a, "Goal"_a);
	}
	{ // PlayerReplicationInfoWrapper file: line:9
		pybind11::class_<PlayerReplicationInfoWrapper, std::shared_ptr<PlayerReplicationInfoWrapper>, ActorWrapper> cl(M, "PlayerReplicationInfoWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](PlayerReplicationInfoWrapper const &o){ return new PlayerReplicationInfoWrapper(o); } ) );
		cl.def("assign", (class PlayerReplicationInfoWrapper & (PlayerReplicationInfoWrapper::*)(class PlayerReplicationInfoWrapper)) &PlayerReplicationInfoWrapper::operator=, "C++: PlayerReplicationInfoWrapper::operator=(class PlayerReplicationInfoWrapper) --> class PlayerReplicationInfoWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetScore", (int (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetScore, "C++: PlayerReplicationInfoWrapper::GetScore() --> int");
		cl.def("SetScore", (void (PlayerReplicationInfoWrapper::*)(int)) &PlayerReplicationInfoWrapper::SetScore, "C++: PlayerReplicationInfoWrapper::SetScore(int) --> void", "newScore"_a);
		cl.def("GetDeaths", (int (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetDeaths, "C++: PlayerReplicationInfoWrapper::GetDeaths() --> int");
		cl.def("SetDeaths", (void (PlayerReplicationInfoWrapper::*)(int)) &PlayerReplicationInfoWrapper::SetDeaths, "C++: PlayerReplicationInfoWrapper::SetDeaths(int) --> void", "newDeaths"_a);
		cl.def("GetPing", (unsigned char (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetPing, "C++: PlayerReplicationInfoWrapper::GetPing() --> unsigned char");
		cl.def("SetPing", (void (PlayerReplicationInfoWrapper::*)(unsigned char)) &PlayerReplicationInfoWrapper::SetPing, "C++: PlayerReplicationInfoWrapper::SetPing(unsigned char) --> void", "newPing"_a);
		cl.def("GetTTSSpeaker", (unsigned char (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetTTSSpeaker, "C++: PlayerReplicationInfoWrapper::GetTTSSpeaker() --> unsigned char");
		cl.def("SetTTSSpeaker", (void (PlayerReplicationInfoWrapper::*)(unsigned char)) &PlayerReplicationInfoWrapper::SetTTSSpeaker, "C++: PlayerReplicationInfoWrapper::SetTTSSpeaker(unsigned char) --> void", "newTTSSpeaker"_a);
		cl.def("GetNumLives", (int (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetNumLives, "C++: PlayerReplicationInfoWrapper::GetNumLives() --> int");
		cl.def("SetNumLives", (void (PlayerReplicationInfoWrapper::*)(int)) &PlayerReplicationInfoWrapper::SetNumLives, "C++: PlayerReplicationInfoWrapper::SetNumLives(int) --> void", "newNumLives"_a);
		cl.def("GetPlayerName", (class UnrealStringWrapper (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetPlayerName, "C++: PlayerReplicationInfoWrapper::GetPlayerName() --> class UnrealStringWrapper");
		cl.def("GetOldName", (class UnrealStringWrapper (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetOldName, "C++: PlayerReplicationInfoWrapper::GetOldName() --> class UnrealStringWrapper");
		cl.def("GetPlayerID", (int (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetPlayerID, "C++: PlayerReplicationInfoWrapper::GetPlayerID() --> int");
		cl.def("SetPlayerID", (void (PlayerReplicationInfoWrapper::*)(int)) &PlayerReplicationInfoWrapper::SetPlayerID, "C++: PlayerReplicationInfoWrapper::SetPlayerID(int) --> void", "newPlayerID"_a);
		cl.def("GetTeam", (class TeamInfoWrapper (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetTeam, "C++: PlayerReplicationInfoWrapper::GetTeam() --> class TeamInfoWrapper");
		cl.def("SetTeam", (void (PlayerReplicationInfoWrapper::*)(class TeamInfoWrapper)) &PlayerReplicationInfoWrapper::SetTeam, "C++: PlayerReplicationInfoWrapper::SetTeam(class TeamInfoWrapper) --> void", "newTeam"_a);
		cl.def("GetbAdmin", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbAdmin, "C++: PlayerReplicationInfoWrapper::GetbAdmin() --> unsigned long");
		cl.def("SetbAdmin", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbAdmin, "C++: PlayerReplicationInfoWrapper::SetbAdmin(unsigned long) --> void", "newbAdmin"_a);
		cl.def("GetbIsSpectator", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbIsSpectator, "C++: PlayerReplicationInfoWrapper::GetbIsSpectator() --> unsigned long");
		cl.def("SetbIsSpectator", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbIsSpectator, "C++: PlayerReplicationInfoWrapper::SetbIsSpectator(unsigned long) --> void", "newbIsSpectator"_a);
		cl.def("GetbOnlySpectator", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbOnlySpectator, "C++: PlayerReplicationInfoWrapper::GetbOnlySpectator() --> unsigned long");
		cl.def("SetbOnlySpectator", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbOnlySpectator, "C++: PlayerReplicationInfoWrapper::SetbOnlySpectator(unsigned long) --> void", "newbOnlySpectator"_a);
		cl.def("GetbWaitingPlayer", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbWaitingPlayer, "C++: PlayerReplicationInfoWrapper::GetbWaitingPlayer() --> unsigned long");
		cl.def("SetbWaitingPlayer", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbWaitingPlayer, "C++: PlayerReplicationInfoWrapper::SetbWaitingPlayer(unsigned long) --> void", "newbWaitingPlayer"_a);
		cl.def("GetbReadyToPlay", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbReadyToPlay, "C++: PlayerReplicationInfoWrapper::GetbReadyToPlay() --> unsigned long");
		cl.def("SetbReadyToPlay", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbReadyToPlay, "C++: PlayerReplicationInfoWrapper::SetbReadyToPlay(unsigned long) --> void", "newbReadyToPlay"_a);
		cl.def("GetbOutOfLives", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbOutOfLives, "C++: PlayerReplicationInfoWrapper::GetbOutOfLives() --> unsigned long");
		cl.def("SetbOutOfLives", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbOutOfLives, "C++: PlayerReplicationInfoWrapper::SetbOutOfLives(unsigned long) --> void", "newbOutOfLives"_a);
		cl.def("GetbBot", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbBot, "C++: PlayerReplicationInfoWrapper::GetbBot() --> unsigned long");
		cl.def("SetbBot", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbBot, "C++: PlayerReplicationInfoWrapper::SetbBot(unsigned long) --> void", "newbBot"_a);
		cl.def("GetbIsInactive", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbIsInactive, "C++: PlayerReplicationInfoWrapper::GetbIsInactive() --> unsigned long");
		cl.def("SetbIsInactive", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbIsInactive, "C++: PlayerReplicationInfoWrapper::SetbIsInactive(unsigned long) --> void", "newbIsInactive"_a);
		cl.def("GetbFromPreviousLevel", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbFromPreviousLevel, "C++: PlayerReplicationInfoWrapper::GetbFromPreviousLevel() --> unsigned long");
		cl.def("SetbFromPreviousLevel", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbFromPreviousLevel, "C++: PlayerReplicationInfoWrapper::SetbFromPreviousLevel(unsigned long) --> void", "newbFromPreviousLevel"_a);
		cl.def("GetbTimedOut", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbTimedOut, "C++: PlayerReplicationInfoWrapper::GetbTimedOut() --> unsigned long");
		cl.def("SetbTimedOut", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbTimedOut, "C++: PlayerReplicationInfoWrapper::SetbTimedOut(unsigned long) --> void", "newbTimedOut"_a);
		cl.def("GetbUnregistered", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbUnregistered, "C++: PlayerReplicationInfoWrapper::GetbUnregistered() --> unsigned long");
		cl.def("SetbUnregistered", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbUnregistered, "C++: PlayerReplicationInfoWrapper::SetbUnregistered(unsigned long) --> void", "newbUnregistered"_a);
		cl.def("GetStartTime", (int (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetStartTime, "C++: PlayerReplicationInfoWrapper::GetStartTime() --> int");
		cl.def("SetStartTime", (void (PlayerReplicationInfoWrapper::*)(int)) &PlayerReplicationInfoWrapper::SetStartTime, "C++: PlayerReplicationInfoWrapper::SetStartTime(int) --> void", "newStartTime"_a);
		cl.def("GetStringSpectating", (class UnrealStringWrapper (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetStringSpectating, "C++: PlayerReplicationInfoWrapper::GetStringSpectating() --> class UnrealStringWrapper");
		cl.def("GetStringUnknown", (class UnrealStringWrapper (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetStringUnknown, "C++: PlayerReplicationInfoWrapper::GetStringUnknown() --> class UnrealStringWrapper");
		cl.def("GetKills", (int (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetKills, "C++: PlayerReplicationInfoWrapper::GetKills() --> int");
		cl.def("SetKills", (void (PlayerReplicationInfoWrapper::*)(int)) &PlayerReplicationInfoWrapper::SetKills, "C++: PlayerReplicationInfoWrapper::SetKills(int) --> void", "newKills"_a);
		cl.def("GetExactPing", (float (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetExactPing, "C++: PlayerReplicationInfoWrapper::GetExactPing() --> float");
		cl.def("SetExactPing", (void (PlayerReplicationInfoWrapper::*)(float)) &PlayerReplicationInfoWrapper::SetExactPing, "C++: PlayerReplicationInfoWrapper::SetExactPing(float) --> void", "newExactPing"_a);
		cl.def("GetSavedNetworkAddress", (class UnrealStringWrapper (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetSavedNetworkAddress, "C++: PlayerReplicationInfoWrapper::GetSavedNetworkAddress() --> class UnrealStringWrapper");
		cl.def("GetUniqueId", (struct SteamID (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetUniqueId, "C++: PlayerReplicationInfoWrapper::GetUniqueId() --> struct SteamID");
		cl.def("SetUniqueId", (void (PlayerReplicationInfoWrapper::*)(struct SteamID)) &PlayerReplicationInfoWrapper::SetUniqueId, "C++: PlayerReplicationInfoWrapper::SetUniqueId(struct SteamID) --> void", "newUniqueId"_a);
		cl.def("UnregisterPlayerFromSession", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::UnregisterPlayerFromSession, "C++: PlayerReplicationInfoWrapper::UnregisterPlayerFromSession() --> void");
		cl.def("RegisterPlayerWithSession", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::RegisterPlayerWithSession, "C++: PlayerReplicationInfoWrapper::RegisterPlayerWithSession() --> void");
		cl.def("IsInvalidName", (bool (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::IsInvalidName, "C++: PlayerReplicationInfoWrapper::IsInvalidName() --> bool");
		cl.def("GetTeamNum", (unsigned char (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetTeamNum, "C++: PlayerReplicationInfoWrapper::GetTeamNum() --> unsigned char");
		cl.def("SetUniqueId2", (void (PlayerReplicationInfoWrapper::*)(struct SteamID &)) &PlayerReplicationInfoWrapper::SetUniqueId2, "C++: PlayerReplicationInfoWrapper::SetUniqueId2(struct SteamID &) --> void", "PlayerUniqueId"_a);
		cl.def("SeamlessTravelTo", (void (PlayerReplicationInfoWrapper::*)(class PlayerReplicationInfoWrapper)) &PlayerReplicationInfoWrapper::SeamlessTravelTo, "C++: PlayerReplicationInfoWrapper::SeamlessTravelTo(class PlayerReplicationInfoWrapper) --> void", "NewPRI"_a);
		cl.def("IncrementDeaths", (void (PlayerReplicationInfoWrapper::*)(int)) &PlayerReplicationInfoWrapper::IncrementDeaths, "C++: PlayerReplicationInfoWrapper::IncrementDeaths(int) --> void", "Amt"_a);
		cl.def("CopyProperties", (void (PlayerReplicationInfoWrapper::*)(class PlayerReplicationInfoWrapper)) &PlayerReplicationInfoWrapper::CopyProperties, "C++: PlayerReplicationInfoWrapper::CopyProperties(class PlayerReplicationInfoWrapper) --> void", "PRI"_a);
		cl.def("OverrideWith", (void (PlayerReplicationInfoWrapper::*)(class PlayerReplicationInfoWrapper)) &PlayerReplicationInfoWrapper::OverrideWith, "C++: PlayerReplicationInfoWrapper::OverrideWith(class PlayerReplicationInfoWrapper) --> void", "PRI"_a);
		cl.def("Duplicate", (class PlayerReplicationInfoWrapper (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::Duplicate, "C++: PlayerReplicationInfoWrapper::Duplicate() --> class PlayerReplicationInfoWrapper");
		cl.def("SetWaitingPlayer", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetWaitingPlayer, "C++: PlayerReplicationInfoWrapper::SetWaitingPlayer(unsigned long) --> void", "B"_a);
		cl.def("eventSetPlayerName", (void (PlayerReplicationInfoWrapper::*)(std::string)) &PlayerReplicationInfoWrapper::eventSetPlayerName, "C++: PlayerReplicationInfoWrapper::eventSetPlayerName(std::string) --> void", "S"_a);
		cl.def("Reset", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::Reset, "C++: PlayerReplicationInfoWrapper::Reset() --> void");
		cl.def("eventDestroyed", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::eventDestroyed, "C++: PlayerReplicationInfoWrapper::eventDestroyed() --> void");
		cl.def("Unregister2", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::Unregister2, "C++: PlayerReplicationInfoWrapper::Unregister2() --> void");
		cl.def("UpdatePing", (void (PlayerReplicationInfoWrapper::*)(float)) &PlayerReplicationInfoWrapper::UpdatePing, "C++: PlayerReplicationInfoWrapper::UpdatePing(float) --> void", "TimeStamp"_a);
		cl.def("RemoteUserDataReplicated", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::RemoteUserDataReplicated, "C++: PlayerReplicationInfoWrapper::RemoteUserDataReplicated() --> void");
		cl.def("SetPlayerTeam", (void (PlayerReplicationInfoWrapper::*)(class TeamInfoWrapper)) &PlayerReplicationInfoWrapper::SetPlayerTeam, "C++: PlayerReplicationInfoWrapper::SetPlayerTeam(class TeamInfoWrapper) --> void", "NewTeam"_a);
		cl.def("eventClientFillRemoteUserData", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::eventClientFillRemoteUserData, "C++: PlayerReplicationInfoWrapper::eventClientFillRemoteUserData() --> void");
		cl.def("eventPostBeginPlay", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::eventPostBeginPlay, "C++: PlayerReplicationInfoWrapper::eventPostBeginPlay() --> void");
		cl.def("eventOnOwnerChanged", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::eventOnOwnerChanged, "C++: PlayerReplicationInfoWrapper::eventOnOwnerChanged() --> void");
		cl.def("eventConstruct", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::eventConstruct, "C++: PlayerReplicationInfoWrapper::eventConstruct() --> void");
	}
}
