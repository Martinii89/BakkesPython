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
		cl.def("assign", (class BallWrapper & (BallWrapper::*)(class BallWrapper)) &BallWrapper::operator=, "C++: BallWrapper::operator=(class BallWrapper) --> class BallWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetLastTouchTime", (float (BallWrapper::*)()) &BallWrapper::GetLastTouchTime, "C++: BallWrapper::GetLastTouchTime() --> float");
		cl.def("PredictPosition", (struct PredictionInfo (BallWrapper::*)(float)) &BallWrapper::PredictPosition, "C++: BallWrapper::PredictPosition(float) --> struct PredictionInfo", pybind11::arg("timeAhead"));
		cl.def("GetEndOfGameFXArchetype", (class FXActorWrapper (BallWrapper::*)()) &BallWrapper::GetEndOfGameFXArchetype, "C++: BallWrapper::GetEndOfGameFXArchetype() --> class FXActorWrapper");
		cl.def("SetEndOfGameFXArchetype", (void (BallWrapper::*)(class FXActorWrapper)) &BallWrapper::SetEndOfGameFXArchetype, "C++: BallWrapper::SetEndOfGameFXArchetype(class FXActorWrapper) --> void", pybind11::arg("newEndOfGameFXArchetype"));
		cl.def("GetbAllowPlayerExplosionOverride", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbAllowPlayerExplosionOverride, "C++: BallWrapper::GetbAllowPlayerExplosionOverride() --> unsigned long");
		cl.def("SetbAllowPlayerExplosionOverride", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbAllowPlayerExplosionOverride, "C++: BallWrapper::SetbAllowPlayerExplosionOverride(unsigned long) --> void", pybind11::arg("newbAllowPlayerExplosionOverride"));
		cl.def("GetbNotifyGroundHit", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbNotifyGroundHit, "C++: BallWrapper::GetbNotifyGroundHit() --> unsigned long");
		cl.def("SetbNotifyGroundHit", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbNotifyGroundHit, "C++: BallWrapper::SetbNotifyGroundHit(unsigned long) --> void", pybind11::arg("newbNotifyGroundHit"));
		cl.def("GetbEndOfGameHidden", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbEndOfGameHidden, "C++: BallWrapper::GetbEndOfGameHidden() --> unsigned long");
		cl.def("SetbEndOfGameHidden", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbEndOfGameHidden, "C++: BallWrapper::SetbEndOfGameHidden(unsigned long) --> void", pybind11::arg("newbEndOfGameHidden"));
		cl.def("GetbFadeIn", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbFadeIn, "C++: BallWrapper::GetbFadeIn() --> unsigned long");
		cl.def("SetbFadeIn", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbFadeIn, "C++: BallWrapper::SetbFadeIn(unsigned long) --> void", pybind11::arg("newbFadeIn"));
		cl.def("GetbFadeOut", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbFadeOut, "C++: BallWrapper::GetbFadeOut() --> unsigned long");
		cl.def("SetbFadeOut", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbFadeOut, "C++: BallWrapper::SetbFadeOut(unsigned long) --> void", pybind11::arg("newbFadeOut"));
		cl.def("GetbPredictionOnGround", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbPredictionOnGround, "C++: BallWrapper::GetbPredictionOnGround() --> unsigned long");
		cl.def("SetbPredictionOnGround", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbPredictionOnGround, "C++: BallWrapper::SetbPredictionOnGround(unsigned long) --> void", pybind11::arg("newbPredictionOnGround"));
		cl.def("GetbCanBeAttached", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbCanBeAttached, "C++: BallWrapper::GetbCanBeAttached() --> unsigned long");
		cl.def("SetbCanBeAttached", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbCanBeAttached, "C++: BallWrapper::SetbCanBeAttached(unsigned long) --> void", pybind11::arg("newbCanBeAttached"));
		cl.def("GetbItemFreeze", (unsigned long (BallWrapper::*)()) &BallWrapper::GetbItemFreeze, "C++: BallWrapper::GetbItemFreeze() --> unsigned long");
		cl.def("SetbItemFreeze", (void (BallWrapper::*)(unsigned long)) &BallWrapper::SetbItemFreeze, "C++: BallWrapper::SetbItemFreeze(unsigned long) --> void", pybind11::arg("newbItemFreeze"));
		cl.def("GetMagnusCoefficient", (struct Vector (BallWrapper::*)()) &BallWrapper::GetMagnusCoefficient, "C++: BallWrapper::GetMagnusCoefficient() --> struct Vector");
		cl.def("SetMagnusCoefficient", (void (BallWrapper::*)(struct Vector)) &BallWrapper::SetMagnusCoefficient, "C++: BallWrapper::SetMagnusCoefficient(struct Vector) --> void", pybind11::arg("newMagnusCoefficient"));
		cl.def("GetRadius", (float (BallWrapper::*)()) &BallWrapper::GetRadius, "C++: BallWrapper::GetRadius() --> float");
		cl.def("SetRadius", (void (BallWrapper::*)(float)) &BallWrapper::SetRadius, "C++: BallWrapper::SetRadius(float) --> void", pybind11::arg("newRadius"));
		cl.def("GetVisualRadius", (float (BallWrapper::*)()) &BallWrapper::GetVisualRadius, "C++: BallWrapper::GetVisualRadius() --> float");
		cl.def("SetVisualRadius", (void (BallWrapper::*)(float)) &BallWrapper::SetVisualRadius, "C++: BallWrapper::SetVisualRadius(float) --> void", pybind11::arg("newVisualRadius"));
		cl.def("GetLastCalculateCarHit", (float (BallWrapper::*)()) &BallWrapper::GetLastCalculateCarHit, "C++: BallWrapper::GetLastCalculateCarHit() --> float");
		cl.def("GetInitialLocation", (struct Vector (BallWrapper::*)()) &BallWrapper::GetInitialLocation, "C++: BallWrapper::GetInitialLocation() --> struct Vector");
		cl.def("SetInitialLocation", (void (BallWrapper::*)(struct Vector)) &BallWrapper::SetInitialLocation, "C++: BallWrapper::SetInitialLocation(struct Vector) --> void", pybind11::arg("newInitialLocation"));
		cl.def("SetInitialRotation", (void (BallWrapper::*)(struct Rotator)) &BallWrapper::SetInitialRotation, "C++: BallWrapper::SetInitialRotation(struct Rotator) --> void", pybind11::arg("newInitialRotation"));
		cl.def("GetLastHitWorldTime", (float (BallWrapper::*)()) &BallWrapper::GetLastHitWorldTime, "C++: BallWrapper::GetLastHitWorldTime() --> float");
		cl.def("GetReplicatedBallScale", (float (BallWrapper::*)()) &BallWrapper::GetReplicatedBallScale, "C++: BallWrapper::GetReplicatedBallScale() --> float");
		cl.def("SetReplicatedBallScale", (void (BallWrapper::*)(float)) &BallWrapper::SetReplicatedBallScale, "C++: BallWrapper::SetReplicatedBallScale(float) --> void", pybind11::arg("newReplicatedBallScale"));
		cl.def("GetReplicatedWorldBounceScale", (float (BallWrapper::*)()) &BallWrapper::GetReplicatedWorldBounceScale, "C++: BallWrapper::GetReplicatedWorldBounceScale() --> float");
		cl.def("SetReplicatedWorldBounceScale", (void (BallWrapper::*)(float)) &BallWrapper::SetReplicatedWorldBounceScale, "C++: BallWrapper::SetReplicatedWorldBounceScale(float) --> void", pybind11::arg("newReplicatedWorldBounceScale"));
		cl.def("GetReplicatedBallGravityScale", (float (BallWrapper::*)()) &BallWrapper::GetReplicatedBallGravityScale, "C++: BallWrapper::GetReplicatedBallGravityScale() --> float");
		cl.def("SetReplicatedBallGravityScale", (void (BallWrapper::*)(float)) &BallWrapper::SetReplicatedBallGravityScale, "C++: BallWrapper::SetReplicatedBallGravityScale(float) --> void", pybind11::arg("newReplicatedBallGravityScale"));
		cl.def("GetReplicatedBallMaxLinearSpeedScale", (float (BallWrapper::*)()) &BallWrapper::GetReplicatedBallMaxLinearSpeedScale, "C++: BallWrapper::GetReplicatedBallMaxLinearSpeedScale() --> float");
		cl.def("SetReplicatedBallMaxLinearSpeedScale", (void (BallWrapper::*)(float)) &BallWrapper::SetReplicatedBallMaxLinearSpeedScale, "C++: BallWrapper::SetReplicatedBallMaxLinearSpeedScale(float) --> void", pybind11::arg("newReplicatedBallMaxLinearSpeedScale"));
		cl.def("GetReplicatedAddedCarBounceScale", (float (BallWrapper::*)()) &BallWrapper::GetReplicatedAddedCarBounceScale, "C++: BallWrapper::GetReplicatedAddedCarBounceScale() --> float");
		cl.def("SetReplicatedAddedCarBounceScale", (void (BallWrapper::*)(float)) &BallWrapper::SetReplicatedAddedCarBounceScale, "C++: BallWrapper::SetReplicatedAddedCarBounceScale(float) --> void", pybind11::arg("newReplicatedAddedCarBounceScale"));
		cl.def("GetAdditionalCarGroundBounceScaleZ", (float (BallWrapper::*)()) &BallWrapper::GetAdditionalCarGroundBounceScaleZ, "C++: BallWrapper::GetAdditionalCarGroundBounceScaleZ() --> float");
		cl.def("SetAdditionalCarGroundBounceScaleZ", (void (BallWrapper::*)(float)) &BallWrapper::SetAdditionalCarGroundBounceScaleZ, "C++: BallWrapper::SetAdditionalCarGroundBounceScaleZ(float) --> void", pybind11::arg("newAdditionalCarGroundBounceScaleZ"));
		cl.def("GetAdditionalCarGroundBounceScaleXY", (float (BallWrapper::*)()) &BallWrapper::GetAdditionalCarGroundBounceScaleXY, "C++: BallWrapper::GetAdditionalCarGroundBounceScaleXY() --> float");
		cl.def("SetAdditionalCarGroundBounceScaleXY", (void (BallWrapper::*)(float)) &BallWrapper::SetAdditionalCarGroundBounceScaleXY, "C++: BallWrapper::SetAdditionalCarGroundBounceScaleXY(float) --> void", pybind11::arg("newAdditionalCarGroundBounceScaleXY"));
		cl.def("GetHitTeamNum", (unsigned char (BallWrapper::*)()) &BallWrapper::GetHitTeamNum, "C++: BallWrapper::GetHitTeamNum() --> unsigned char");
		cl.def("SetHitTeamNum", (void (BallWrapper::*)(unsigned char)) &BallWrapper::SetHitTeamNum, "C++: BallWrapper::SetHitTeamNum(unsigned char) --> void", pybind11::arg("newHitTeamNum"));
		cl.def("GetGameEvent", (class ServerWrapper (BallWrapper::*)()) &BallWrapper::GetGameEvent, "C++: BallWrapper::GetGameEvent() --> class ServerWrapper");
		cl.def("GetExplosionTime", (float (BallWrapper::*)()) &BallWrapper::GetExplosionTime, "C++: BallWrapper::GetExplosionTime() --> float");
		cl.def("SetExplosionTime", (void (BallWrapper::*)(float)) &BallWrapper::SetExplosionTime, "C++: BallWrapper::SetExplosionTime(float) --> void", pybind11::arg("newExplosionTime"));
		cl.def("GetOldLocation", (struct Vector (BallWrapper::*)()) &BallWrapper::GetOldLocation, "C++: BallWrapper::GetOldLocation() --> struct Vector");
		cl.def("SetOldLocation", (void (BallWrapper::*)(struct Vector)) &BallWrapper::SetOldLocation, "C++: BallWrapper::SetOldLocation(struct Vector) --> void", pybind11::arg("newOldLocation"));
		cl.def("GetPredictionTimestep", (float (BallWrapper::*)()) &BallWrapper::GetPredictionTimestep, "C++: BallWrapper::GetPredictionTimestep() --> float");
		cl.def("SetPredictionTimestep", (void (BallWrapper::*)(float)) &BallWrapper::SetPredictionTimestep, "C++: BallWrapper::SetPredictionTimestep(float) --> void", pybind11::arg("newPredictionTimestep"));
		cl.def("GetLastPredictionTime", (float (BallWrapper::*)()) &BallWrapper::GetLastPredictionTime, "C++: BallWrapper::GetLastPredictionTime() --> float");
		cl.def("SetLastPredictionTime", (void (BallWrapper::*)(float)) &BallWrapper::SetLastPredictionTime, "C++: BallWrapper::SetLastPredictionTime(float) --> void", pybind11::arg("newLastPredictionTime"));
		cl.def("GetGroundForce", (float (BallWrapper::*)()) &BallWrapper::GetGroundForce, "C++: BallWrapper::GetGroundForce() --> float");
		cl.def("SetGroundForce", (void (BallWrapper::*)(float)) &BallWrapper::SetGroundForce, "C++: BallWrapper::SetGroundForce(float) --> void", pybind11::arg("newGroundForce"));
		cl.def("GetCurrentAffector", (class CarWrapper (BallWrapper::*)()) &BallWrapper::GetCurrentAffector, "C++: BallWrapper::GetCurrentAffector() --> class CarWrapper");
		cl.def("SetCurrentAffector", (void (BallWrapper::*)(class CarWrapper)) &BallWrapper::SetCurrentAffector, "C++: BallWrapper::SetCurrentAffector(class CarWrapper) --> void", pybind11::arg("newCurrentAffector"));
		cl.def("GetTrajectoryStartVelocity", (struct Vector (BallWrapper::*)()) &BallWrapper::GetTrajectoryStartVelocity, "C++: BallWrapper::GetTrajectoryStartVelocity() --> struct Vector");
		cl.def("GetTrajectoryStartRotation", (struct Rotator (BallWrapper::*)()) &BallWrapper::GetTrajectoryStartRotation, "C++: BallWrapper::GetTrajectoryStartRotation() --> struct Rotator");
		cl.def("GetTrajectoryStartLocation", (struct Vector (BallWrapper::*)()) &BallWrapper::GetTrajectoryStartLocation, "C++: BallWrapper::GetTrajectoryStartLocation() --> struct Vector");
		cl.def("ShouldDrawTrajectory", (bool (BallWrapper::*)()) &BallWrapper::ShouldDrawTrajectory, "C++: BallWrapper::ShouldDrawTrajectory() --> bool");
		cl.def("GetAdditionalCarBounceScaleZ", (float (BallWrapper::*)(class CarWrapper)) &BallWrapper::GetAdditionalCarBounceScaleZ, "C++: BallWrapper::GetAdditionalCarBounceScaleZ(class CarWrapper) --> float", pybind11::arg("Car"));
		cl.def("SetEndOfGameHidden", (void (BallWrapper::*)()) &BallWrapper::SetEndOfGameHidden, "C++: BallWrapper::SetEndOfGameHidden() --> void");
		cl.def("Explode", (void (BallWrapper::*)(class GoalWrapper, struct Vector &, class PriWrapper)) &BallWrapper::Explode, "C++: BallWrapper::Explode(class GoalWrapper, struct Vector &, class PriWrapper) --> void", pybind11::arg("ExplosionGoal"), pybind11::arg("ExplodeLocation"), pybind11::arg("Scorer"));
		cl.def("DoDestroy", (void (BallWrapper::*)()) &BallWrapper::DoDestroy, "C++: BallWrapper::DoDestroy() --> void");
		cl.def("DoExplode", (void (BallWrapper::*)()) &BallWrapper::DoExplode, "C++: BallWrapper::DoExplode() --> void");
		cl.def("Launch", (void (BallWrapper::*)(struct Vector &, struct Vector &)) &BallWrapper::Launch, "C++: BallWrapper::Launch(struct Vector &, struct Vector &) --> void", pybind11::arg("LaunchPosition"), pybind11::arg("LaunchDirection"));
		cl.def("OnCarTouch", (void (BallWrapper::*)(class CarWrapper, unsigned char)) &BallWrapper::OnCarTouch, "C++: BallWrapper::OnCarTouch(class CarWrapper, unsigned char) --> void", pybind11::arg("HitCar"), pybind11::arg("HitType"));
		cl.def("RecordCarHit", (void (BallWrapper::*)(class CarWrapper, struct Vector &, struct Vector &, unsigned char)) &BallWrapper::RecordCarHit, "C++: BallWrapper::RecordCarHit(class CarWrapper, struct Vector &, struct Vector &, unsigned char) --> void", pybind11::arg("HitCar"), pybind11::arg("HitLocation"), pybind11::arg("HitNormal"), pybind11::arg("HitType"));
		cl.def("IsGroundHit", (bool (BallWrapper::*)(struct Vector &)) &BallWrapper::IsGroundHit, "C++: BallWrapper::IsGroundHit(struct Vector &) --> bool", pybind11::arg("HitNormal"));
		cl.def("FellOutOfWorld", (void (BallWrapper::*)()) &BallWrapper::FellOutOfWorld, "C++: BallWrapper::FellOutOfWorld() --> void");
		cl.def("IsRoundActive", (bool (BallWrapper::*)()) &BallWrapper::IsRoundActive, "C++: BallWrapper::IsRoundActive() --> bool");
		cl.def("eventOnHitGoal", (void (BallWrapper::*)(class GoalWrapper, struct Vector &)) &BallWrapper::eventOnHitGoal, "C++: BallWrapper::eventOnHitGoal(class GoalWrapper, struct Vector &) --> void", pybind11::arg("Goal"), pybind11::arg("HitLoc"));
		cl.def("TurnOff", (void (BallWrapper::*)()) &BallWrapper::TurnOff, "C++: BallWrapper::TurnOff() --> void");
		cl.def("InitAk", (void (BallWrapper::*)()) &BallWrapper::InitAk, "C++: BallWrapper::InitAk() --> void");
		cl.def("SetWorldBounceScale", (void (BallWrapper::*)(float)) &BallWrapper::SetWorldBounceScale, "C++: BallWrapper::SetWorldBounceScale(float) --> void", pybind11::arg("NewScale"));
		cl.def("SetCarBounceScale", (void (BallWrapper::*)(float)) &BallWrapper::SetCarBounceScale, "C++: BallWrapper::SetCarBounceScale(float) --> void", pybind11::arg("NewScale"));
		cl.def("SetBallMaxLinearSpeedScale", (void (BallWrapper::*)(float)) &BallWrapper::SetBallMaxLinearSpeedScale, "C++: BallWrapper::SetBallMaxLinearSpeedScale(float) --> void", pybind11::arg("InMaxLinearSpeedScale"));
		cl.def("SetBallGravityScale", (void (BallWrapper::*)(float)) &BallWrapper::SetBallGravityScale, "C++: BallWrapper::SetBallGravityScale(float) --> void", pybind11::arg("InBallGravityScale"));
		cl.def("SetBallScale", (void (BallWrapper::*)(float)) &BallWrapper::SetBallScale, "C++: BallWrapper::SetBallScale(float) --> void", pybind11::arg("NewScale"));
		cl.def("EventHitGoal", (void (BallWrapper::*)(class BallWrapper, class GoalWrapper)) &BallWrapper::EventHitGoal, "C++: BallWrapper::EventHitGoal(class BallWrapper, class GoalWrapper) --> void", pybind11::arg("Ball"), pybind11::arg("Goal"));
	}
	{ // PlayerReplicationInfoWrapper file: line:9
		pybind11::class_<PlayerReplicationInfoWrapper, std::shared_ptr<PlayerReplicationInfoWrapper>, ActorWrapper> cl(M, "PlayerReplicationInfoWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](PlayerReplicationInfoWrapper const &o){ return new PlayerReplicationInfoWrapper(o); } ) );
		cl.def("assign", (class PlayerReplicationInfoWrapper & (PlayerReplicationInfoWrapper::*)(class PlayerReplicationInfoWrapper)) &PlayerReplicationInfoWrapper::operator=, "C++: PlayerReplicationInfoWrapper::operator=(class PlayerReplicationInfoWrapper) --> class PlayerReplicationInfoWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetScore", (int (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetScore, "C++: PlayerReplicationInfoWrapper::GetScore() --> int");
		cl.def("SetScore", (void (PlayerReplicationInfoWrapper::*)(int)) &PlayerReplicationInfoWrapper::SetScore, "C++: PlayerReplicationInfoWrapper::SetScore(int) --> void", pybind11::arg("newScore"));
		cl.def("GetDeaths", (int (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetDeaths, "C++: PlayerReplicationInfoWrapper::GetDeaths() --> int");
		cl.def("SetDeaths", (void (PlayerReplicationInfoWrapper::*)(int)) &PlayerReplicationInfoWrapper::SetDeaths, "C++: PlayerReplicationInfoWrapper::SetDeaths(int) --> void", pybind11::arg("newDeaths"));
		cl.def("GetPing", (unsigned char (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetPing, "C++: PlayerReplicationInfoWrapper::GetPing() --> unsigned char");
		cl.def("SetPing", (void (PlayerReplicationInfoWrapper::*)(unsigned char)) &PlayerReplicationInfoWrapper::SetPing, "C++: PlayerReplicationInfoWrapper::SetPing(unsigned char) --> void", pybind11::arg("newPing"));
		cl.def("GetTTSSpeaker", (unsigned char (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetTTSSpeaker, "C++: PlayerReplicationInfoWrapper::GetTTSSpeaker() --> unsigned char");
		cl.def("SetTTSSpeaker", (void (PlayerReplicationInfoWrapper::*)(unsigned char)) &PlayerReplicationInfoWrapper::SetTTSSpeaker, "C++: PlayerReplicationInfoWrapper::SetTTSSpeaker(unsigned char) --> void", pybind11::arg("newTTSSpeaker"));
		cl.def("GetNumLives", (int (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetNumLives, "C++: PlayerReplicationInfoWrapper::GetNumLives() --> int");
		cl.def("SetNumLives", (void (PlayerReplicationInfoWrapper::*)(int)) &PlayerReplicationInfoWrapper::SetNumLives, "C++: PlayerReplicationInfoWrapper::SetNumLives(int) --> void", pybind11::arg("newNumLives"));
		cl.def("GetPlayerName", (class UnrealStringWrapper (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetPlayerName, "C++: PlayerReplicationInfoWrapper::GetPlayerName() --> class UnrealStringWrapper");
		cl.def("GetOldName", (class UnrealStringWrapper (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetOldName, "C++: PlayerReplicationInfoWrapper::GetOldName() --> class UnrealStringWrapper");
		cl.def("GetPlayerID", (int (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetPlayerID, "C++: PlayerReplicationInfoWrapper::GetPlayerID() --> int");
		cl.def("SetPlayerID", (void (PlayerReplicationInfoWrapper::*)(int)) &PlayerReplicationInfoWrapper::SetPlayerID, "C++: PlayerReplicationInfoWrapper::SetPlayerID(int) --> void", pybind11::arg("newPlayerID"));
		cl.def("GetTeam", (class TeamInfoWrapper (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetTeam, "C++: PlayerReplicationInfoWrapper::GetTeam() --> class TeamInfoWrapper");
		cl.def("SetTeam", (void (PlayerReplicationInfoWrapper::*)(class TeamInfoWrapper)) &PlayerReplicationInfoWrapper::SetTeam, "C++: PlayerReplicationInfoWrapper::SetTeam(class TeamInfoWrapper) --> void", pybind11::arg("newTeam"));
		cl.def("GetbAdmin", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbAdmin, "C++: PlayerReplicationInfoWrapper::GetbAdmin() --> unsigned long");
		cl.def("SetbAdmin", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbAdmin, "C++: PlayerReplicationInfoWrapper::SetbAdmin(unsigned long) --> void", pybind11::arg("newbAdmin"));
		cl.def("GetbIsSpectator", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbIsSpectator, "C++: PlayerReplicationInfoWrapper::GetbIsSpectator() --> unsigned long");
		cl.def("SetbIsSpectator", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbIsSpectator, "C++: PlayerReplicationInfoWrapper::SetbIsSpectator(unsigned long) --> void", pybind11::arg("newbIsSpectator"));
		cl.def("GetbOnlySpectator", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbOnlySpectator, "C++: PlayerReplicationInfoWrapper::GetbOnlySpectator() --> unsigned long");
		cl.def("SetbOnlySpectator", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbOnlySpectator, "C++: PlayerReplicationInfoWrapper::SetbOnlySpectator(unsigned long) --> void", pybind11::arg("newbOnlySpectator"));
		cl.def("GetbWaitingPlayer", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbWaitingPlayer, "C++: PlayerReplicationInfoWrapper::GetbWaitingPlayer() --> unsigned long");
		cl.def("SetbWaitingPlayer", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbWaitingPlayer, "C++: PlayerReplicationInfoWrapper::SetbWaitingPlayer(unsigned long) --> void", pybind11::arg("newbWaitingPlayer"));
		cl.def("GetbReadyToPlay", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbReadyToPlay, "C++: PlayerReplicationInfoWrapper::GetbReadyToPlay() --> unsigned long");
		cl.def("SetbReadyToPlay", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbReadyToPlay, "C++: PlayerReplicationInfoWrapper::SetbReadyToPlay(unsigned long) --> void", pybind11::arg("newbReadyToPlay"));
		cl.def("GetbOutOfLives", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbOutOfLives, "C++: PlayerReplicationInfoWrapper::GetbOutOfLives() --> unsigned long");
		cl.def("SetbOutOfLives", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbOutOfLives, "C++: PlayerReplicationInfoWrapper::SetbOutOfLives(unsigned long) --> void", pybind11::arg("newbOutOfLives"));
		cl.def("GetbBot", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbBot, "C++: PlayerReplicationInfoWrapper::GetbBot() --> unsigned long");
		cl.def("SetbBot", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbBot, "C++: PlayerReplicationInfoWrapper::SetbBot(unsigned long) --> void", pybind11::arg("newbBot"));
		cl.def("GetbIsInactive", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbIsInactive, "C++: PlayerReplicationInfoWrapper::GetbIsInactive() --> unsigned long");
		cl.def("SetbIsInactive", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbIsInactive, "C++: PlayerReplicationInfoWrapper::SetbIsInactive(unsigned long) --> void", pybind11::arg("newbIsInactive"));
		cl.def("GetbFromPreviousLevel", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbFromPreviousLevel, "C++: PlayerReplicationInfoWrapper::GetbFromPreviousLevel() --> unsigned long");
		cl.def("SetbFromPreviousLevel", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbFromPreviousLevel, "C++: PlayerReplicationInfoWrapper::SetbFromPreviousLevel(unsigned long) --> void", pybind11::arg("newbFromPreviousLevel"));
		cl.def("GetbTimedOut", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbTimedOut, "C++: PlayerReplicationInfoWrapper::GetbTimedOut() --> unsigned long");
		cl.def("SetbTimedOut", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbTimedOut, "C++: PlayerReplicationInfoWrapper::SetbTimedOut(unsigned long) --> void", pybind11::arg("newbTimedOut"));
		cl.def("GetbUnregistered", (unsigned long (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetbUnregistered, "C++: PlayerReplicationInfoWrapper::GetbUnregistered() --> unsigned long");
		cl.def("SetbUnregistered", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetbUnregistered, "C++: PlayerReplicationInfoWrapper::SetbUnregistered(unsigned long) --> void", pybind11::arg("newbUnregistered"));
		cl.def("GetStartTime", (int (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetStartTime, "C++: PlayerReplicationInfoWrapper::GetStartTime() --> int");
		cl.def("SetStartTime", (void (PlayerReplicationInfoWrapper::*)(int)) &PlayerReplicationInfoWrapper::SetStartTime, "C++: PlayerReplicationInfoWrapper::SetStartTime(int) --> void", pybind11::arg("newStartTime"));
		cl.def("GetStringSpectating", (class UnrealStringWrapper (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetStringSpectating, "C++: PlayerReplicationInfoWrapper::GetStringSpectating() --> class UnrealStringWrapper");
		cl.def("GetStringUnknown", (class UnrealStringWrapper (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetStringUnknown, "C++: PlayerReplicationInfoWrapper::GetStringUnknown() --> class UnrealStringWrapper");
		cl.def("GetKills", (int (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetKills, "C++: PlayerReplicationInfoWrapper::GetKills() --> int");
		cl.def("SetKills", (void (PlayerReplicationInfoWrapper::*)(int)) &PlayerReplicationInfoWrapper::SetKills, "C++: PlayerReplicationInfoWrapper::SetKills(int) --> void", pybind11::arg("newKills"));
		cl.def("GetExactPing", (float (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetExactPing, "C++: PlayerReplicationInfoWrapper::GetExactPing() --> float");
		cl.def("SetExactPing", (void (PlayerReplicationInfoWrapper::*)(float)) &PlayerReplicationInfoWrapper::SetExactPing, "C++: PlayerReplicationInfoWrapper::SetExactPing(float) --> void", pybind11::arg("newExactPing"));
		cl.def("GetSavedNetworkAddress", (class UnrealStringWrapper (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetSavedNetworkAddress, "C++: PlayerReplicationInfoWrapper::GetSavedNetworkAddress() --> class UnrealStringWrapper");
		cl.def("GetUniqueId", (struct SteamID (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetUniqueId, "C++: PlayerReplicationInfoWrapper::GetUniqueId() --> struct SteamID");
		cl.def("SetUniqueId", (void (PlayerReplicationInfoWrapper::*)(struct SteamID)) &PlayerReplicationInfoWrapper::SetUniqueId, "C++: PlayerReplicationInfoWrapper::SetUniqueId(struct SteamID) --> void", pybind11::arg("newUniqueId"));
		cl.def("UnregisterPlayerFromSession", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::UnregisterPlayerFromSession, "C++: PlayerReplicationInfoWrapper::UnregisterPlayerFromSession() --> void");
		cl.def("RegisterPlayerWithSession", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::RegisterPlayerWithSession, "C++: PlayerReplicationInfoWrapper::RegisterPlayerWithSession() --> void");
		cl.def("IsInvalidName", (bool (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::IsInvalidName, "C++: PlayerReplicationInfoWrapper::IsInvalidName() --> bool");
		cl.def("GetTeamNum", (unsigned char (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::GetTeamNum, "C++: PlayerReplicationInfoWrapper::GetTeamNum() --> unsigned char");
		cl.def("SetUniqueId2", (void (PlayerReplicationInfoWrapper::*)(struct SteamID &)) &PlayerReplicationInfoWrapper::SetUniqueId2, "C++: PlayerReplicationInfoWrapper::SetUniqueId2(struct SteamID &) --> void", pybind11::arg("PlayerUniqueId"));
		cl.def("SeamlessTravelTo", (void (PlayerReplicationInfoWrapper::*)(class PlayerReplicationInfoWrapper)) &PlayerReplicationInfoWrapper::SeamlessTravelTo, "C++: PlayerReplicationInfoWrapper::SeamlessTravelTo(class PlayerReplicationInfoWrapper) --> void", pybind11::arg("NewPRI"));
		cl.def("IncrementDeaths", (void (PlayerReplicationInfoWrapper::*)(int)) &PlayerReplicationInfoWrapper::IncrementDeaths, "C++: PlayerReplicationInfoWrapper::IncrementDeaths(int) --> void", pybind11::arg("Amt"));
		cl.def("CopyProperties", (void (PlayerReplicationInfoWrapper::*)(class PlayerReplicationInfoWrapper)) &PlayerReplicationInfoWrapper::CopyProperties, "C++: PlayerReplicationInfoWrapper::CopyProperties(class PlayerReplicationInfoWrapper) --> void", pybind11::arg("PRI"));
		cl.def("OverrideWith", (void (PlayerReplicationInfoWrapper::*)(class PlayerReplicationInfoWrapper)) &PlayerReplicationInfoWrapper::OverrideWith, "C++: PlayerReplicationInfoWrapper::OverrideWith(class PlayerReplicationInfoWrapper) --> void", pybind11::arg("PRI"));
		cl.def("Duplicate", (class PlayerReplicationInfoWrapper (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::Duplicate, "C++: PlayerReplicationInfoWrapper::Duplicate() --> class PlayerReplicationInfoWrapper");
		cl.def("SetWaitingPlayer", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) &PlayerReplicationInfoWrapper::SetWaitingPlayer, "C++: PlayerReplicationInfoWrapper::SetWaitingPlayer(unsigned long) --> void", pybind11::arg("B"));
		cl.def("eventSetPlayerName", (void (PlayerReplicationInfoWrapper::*)(std::string)) &PlayerReplicationInfoWrapper::eventSetPlayerName, "C++: PlayerReplicationInfoWrapper::eventSetPlayerName(std::string) --> void", pybind11::arg("S"));
		cl.def("Reset", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::Reset, "C++: PlayerReplicationInfoWrapper::Reset() --> void");
		cl.def("eventDestroyed", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::eventDestroyed, "C++: PlayerReplicationInfoWrapper::eventDestroyed() --> void");
		cl.def("Unregister2", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::Unregister2, "C++: PlayerReplicationInfoWrapper::Unregister2() --> void");
		cl.def("UpdatePing", (void (PlayerReplicationInfoWrapper::*)(float)) &PlayerReplicationInfoWrapper::UpdatePing, "C++: PlayerReplicationInfoWrapper::UpdatePing(float) --> void", pybind11::arg("TimeStamp"));
		cl.def("RemoteUserDataReplicated", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::RemoteUserDataReplicated, "C++: PlayerReplicationInfoWrapper::RemoteUserDataReplicated() --> void");
		cl.def("SetPlayerTeam", (void (PlayerReplicationInfoWrapper::*)(class TeamInfoWrapper)) &PlayerReplicationInfoWrapper::SetPlayerTeam, "C++: PlayerReplicationInfoWrapper::SetPlayerTeam(class TeamInfoWrapper) --> void", pybind11::arg("NewTeam"));
		cl.def("eventClientFillRemoteUserData", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::eventClientFillRemoteUserData, "C++: PlayerReplicationInfoWrapper::eventClientFillRemoteUserData() --> void");
		cl.def("eventPostBeginPlay", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::eventPostBeginPlay, "C++: PlayerReplicationInfoWrapper::eventPostBeginPlay() --> void");
		cl.def("eventOnOwnerChanged", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::eventOnOwnerChanged, "C++: PlayerReplicationInfoWrapper::eventOnOwnerChanged() --> void");
		cl.def("eventConstruct", (void (PlayerReplicationInfoWrapper::*)()) &PlayerReplicationInfoWrapper::eventConstruct, "C++: PlayerReplicationInfoWrapper::eventConstruct() --> void");
	}
}
