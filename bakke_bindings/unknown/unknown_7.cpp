#include "pch.h"
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/AirControlComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/StructArrayWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_unknown_unknown_7(py::module &M)
{
	{ // TeamInfoWrapper file: line:8
		pybind11::class_<TeamInfoWrapper, std::shared_ptr<TeamInfoWrapper>, ActorWrapper> cl(M, "TeamInfoWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](TeamInfoWrapper const &o){ return new TeamInfoWrapper(o); } ) );
		cl.def("assign", (class TeamInfoWrapper & (TeamInfoWrapper::*)(class TeamInfoWrapper)) &TeamInfoWrapper::operator=, "C++: TeamInfoWrapper::operator=(class TeamInfoWrapper) --> class TeamInfoWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetTeamName", (class UnrealStringWrapper (TeamInfoWrapper::*)()) &TeamInfoWrapper::GetTeamName, "C++: TeamInfoWrapper::GetTeamName() --> class UnrealStringWrapper");
		cl.def("GetSize", (int (TeamInfoWrapper::*)()) &TeamInfoWrapper::GetSize, "C++: TeamInfoWrapper::GetSize() --> int");
		cl.def("SetSize", (void (TeamInfoWrapper::*)(int)) &TeamInfoWrapper::SetSize, "C++: TeamInfoWrapper::SetSize(int) --> void", "newSize"_a);
		cl.def("GetScore", (int (TeamInfoWrapper::*)()) &TeamInfoWrapper::GetScore, "C++: TeamInfoWrapper::GetScore() --> int");
		cl.def("SetScore", (void (TeamInfoWrapper::*)(int)) &TeamInfoWrapper::SetScore, "C++: TeamInfoWrapper::SetScore(int) --> void", "newScore"_a);
		cl.def("GetTeamIndex", (int (TeamInfoWrapper::*)()) &TeamInfoWrapper::GetTeamIndex, "C++: TeamInfoWrapper::GetTeamIndex() --> int");
		cl.def("SetTeamIndex", (void (TeamInfoWrapper::*)(int)) &TeamInfoWrapper::SetTeamIndex, "C++: TeamInfoWrapper::SetTeamIndex(int) --> void", "newTeamIndex"_a);
		cl.def("GetTeamColor", (struct UnrealColor (TeamInfoWrapper::*)()) &TeamInfoWrapper::GetTeamColor, "C++: TeamInfoWrapper::GetTeamColor() --> struct UnrealColor");
		cl.def("SetTeamColor", (void (TeamInfoWrapper::*)(struct UnrealColor)) &TeamInfoWrapper::SetTeamColor, "C++: TeamInfoWrapper::SetTeamColor(struct UnrealColor) --> void", "newTeamColor"_a);
		cl.def("GetTeamNum", (unsigned char (TeamInfoWrapper::*)()) &TeamInfoWrapper::GetTeamNum, "C++: TeamInfoWrapper::GetTeamNum() --> unsigned char");
		cl.def("eventDestroyed", (void (TeamInfoWrapper::*)()) &TeamInfoWrapper::eventDestroyed, "C++: TeamInfoWrapper::eventDestroyed() --> void");
	}
	{ // TeamWrapper file: line:12
		pybind11::class_<TeamWrapper, std::shared_ptr<TeamWrapper>, TeamInfoWrapper> cl(M, "TeamWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](TeamWrapper const &o){ return new TeamWrapper(o); } ) );
		cl.def("assign", (class TeamWrapper & (TeamWrapper::*)(class TeamWrapper)) &TeamWrapper::operator=, "C++: TeamWrapper::operator=(class TeamWrapper) --> class TeamWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetFontColor", (struct LinearColor (TeamWrapper::*)()) &TeamWrapper::GetFontColor, "C++: TeamWrapper::GetFontColor() --> struct LinearColor");
		cl.def("SetFontColor", (void (TeamWrapper::*)(struct LinearColor)) &TeamWrapper::SetFontColor, "C++: TeamWrapper::SetFontColor(struct LinearColor) --> void", "newFontColor"_a);
		cl.def("GetColorBlindFontColor", (struct LinearColor (TeamWrapper::*)()) &TeamWrapper::GetColorBlindFontColor, "C++: TeamWrapper::GetColorBlindFontColor() --> struct LinearColor");
		cl.def("SetColorBlindFontColor", (void (TeamWrapper::*)(struct LinearColor)) &TeamWrapper::SetColorBlindFontColor, "C++: TeamWrapper::SetColorBlindFontColor(struct LinearColor) --> void", "newColorBlindFontColor"_a);
		cl.def("GetTeamControllerColor", (struct UnrealColor (TeamWrapper::*)()) &TeamWrapper::GetTeamControllerColor, "C++: TeamWrapper::GetTeamControllerColor() --> struct UnrealColor");
		cl.def("SetTeamControllerColor", (void (TeamWrapper::*)(struct UnrealColor)) &TeamWrapper::SetTeamControllerColor, "C++: TeamWrapper::SetTeamControllerColor(struct UnrealColor) --> void", "newTeamControllerColor"_a);
		cl.def("GetTeamScoreStrobeColor", (struct UnrealColor (TeamWrapper::*)()) &TeamWrapper::GetTeamScoreStrobeColor, "C++: TeamWrapper::GetTeamScoreStrobeColor() --> struct UnrealColor");
		cl.def("SetTeamScoreStrobeColor", (void (TeamWrapper::*)(struct UnrealColor)) &TeamWrapper::SetTeamScoreStrobeColor, "C++: TeamWrapper::SetTeamScoreStrobeColor(struct UnrealColor) --> void", "newTeamScoreStrobeColor"_a);
		cl.def("GetDefaultColorList", (class StructArrayWrapper<struct LinearColor> (TeamWrapper::*)()) &TeamWrapper::GetDefaultColorList, "C++: TeamWrapper::GetDefaultColorList() --> class StructArrayWrapper<struct LinearColor>");
		cl.def("GetColorBlindColorList", (class StructArrayWrapper<struct LinearColor> (TeamWrapper::*)()) &TeamWrapper::GetColorBlindColorList, "C++: TeamWrapper::GetColorBlindColorList() --> class StructArrayWrapper<struct LinearColor>");
		cl.def("GetCurrentColorList", (class StructArrayWrapper<struct LinearColor> (TeamWrapper::*)()) &TeamWrapper::GetCurrentColorList, "C++: TeamWrapper::GetCurrentColorList() --> class StructArrayWrapper<struct LinearColor>");
		cl.def("GetGameEvent", (class TeamGameEventWrapper (TeamWrapper::*)()) &TeamWrapper::GetGameEvent, "C++: TeamWrapper::GetGameEvent() --> class TeamGameEventWrapper");
		cl.def("SetGameEvent", (void (TeamWrapper::*)(class TeamGameEventWrapper)) &TeamWrapper::SetGameEvent, "C++: TeamWrapper::SetGameEvent(class TeamGameEventWrapper) --> void", "newGameEvent"_a);
		cl.def("GetMembers", (class ArrayWrapper<class PriWrapper> (TeamWrapper::*)()) &TeamWrapper::GetMembers, "C++: TeamWrapper::GetMembers() --> class ArrayWrapper<class PriWrapper>");
		cl.def("GetCustomTeamName", (class UnrealStringWrapper (TeamWrapper::*)()) &TeamWrapper::GetCustomTeamName, "C++: TeamWrapper::GetCustomTeamName() --> class UnrealStringWrapper");
		cl.def("GetSanitizedTeamName", (class UnrealStringWrapper (TeamWrapper::*)()) &TeamWrapper::GetSanitizedTeamName, "C++: TeamWrapper::GetSanitizedTeamName() --> class UnrealStringWrapper");
		cl.def("GetClubID", (unsigned long long (TeamWrapper::*)()) &TeamWrapper::GetClubID, "C++: TeamWrapper::GetClubID() --> unsigned long long");
		cl.def("SetClubID", (void (TeamWrapper::*)(unsigned long long)) &TeamWrapper::SetClubID, "C++: TeamWrapper::SetClubID(unsigned long long) --> void", "newClubID"_a);
		cl.def("GetbForfeit", (unsigned long (TeamWrapper::*)()) &TeamWrapper::GetbForfeit, "C++: TeamWrapper::GetbForfeit() --> unsigned long");
		cl.def("SetbForfeit", (void (TeamWrapper::*)(unsigned long)) &TeamWrapper::SetbForfeit, "C++: TeamWrapper::SetbForfeit(unsigned long) --> void", "newbForfeit"_a);
		cl.def("__Team_TA__GetHumanPlayers", (bool (TeamWrapper::*)(class PriWrapper)) &TeamWrapper::__Team_TA__GetHumanPlayers, "C++: TeamWrapper::__Team_TA__GetHumanPlayers(class PriWrapper) --> bool", "PRI"_a);
		cl.def("__Team_TA__GetHumanPrimaryPlayers", (bool (TeamWrapper::*)(class PriWrapper)) &TeamWrapper::__Team_TA__GetHumanPrimaryPlayers, "C++: TeamWrapper::__Team_TA__GetHumanPrimaryPlayers(class PriWrapper) --> bool", "PRI"_a);
		cl.def("__Team_TA__GetNumOfMembersThatCanStartForfeit", (bool (TeamWrapper::*)(class PriWrapper)) &TeamWrapper::__Team_TA__GetNumOfMembersThatCanStartForfeit, "C++: TeamWrapper::__Team_TA__GetNumOfMembersThatCanStartForfeit(class PriWrapper) --> bool", "P"_a);
		cl.def("__Team_TA__EnableAllMembersStartVoteToForfeit", (void (TeamWrapper::*)(class PriWrapper)) &TeamWrapper::__Team_TA__EnableAllMembersStartVoteToForfeit, "C++: TeamWrapper::__Team_TA__EnableAllMembersStartVoteToForfeit(class PriWrapper) --> void", "Member"_a);
		cl.def("OnClubColorsChanged", (void (TeamWrapper::*)()) &TeamWrapper::OnClubColorsChanged, "C++: TeamWrapper::OnClubColorsChanged() --> void");
		cl.def("Forfeit2", (void (TeamWrapper::*)()) &TeamWrapper::Forfeit2, "C++: TeamWrapper::Forfeit2() --> void");
		cl.def("EnableAllMembersStartVoteToForfeit2", (void (TeamWrapper::*)()) &TeamWrapper::EnableAllMembersStartVoteToForfeit2, "C++: TeamWrapper::EnableAllMembersStartVoteToForfeit2() --> void");
		cl.def("EnableAllMembersStartVoteToForfeitIfNecessary", (void (TeamWrapper::*)()) &TeamWrapper::EnableAllMembersStartVoteToForfeitIfNecessary, "C++: TeamWrapper::EnableAllMembersStartVoteToForfeitIfNecessary() --> void");
		cl.def("VoteToForfeit22", (void (TeamWrapper::*)(class PriWrapper)) &TeamWrapper::VoteToForfeit22, "C++: TeamWrapper::VoteToForfeit22(class PriWrapper) --> void", "PRI"_a);
		cl.def("NotifyKismetTeamColorChanged", (void (TeamWrapper::*)()) &TeamWrapper::NotifyKismetTeamColorChanged, "C++: TeamWrapper::NotifyKismetTeamColorChanged() --> void");
		cl.def("UpdateColors", (void (TeamWrapper::*)()) &TeamWrapper::UpdateColors, "C++: TeamWrapper::UpdateColors() --> void");
		cl.def("SetLogo", (void (TeamWrapper::*)(int, unsigned long)) &TeamWrapper::SetLogo, "C++: TeamWrapper::SetLogo(int, unsigned long) --> void", "LogoID"_a, "bSwapColors"_a);
		cl.def("HandleTeamNameSanitized", (void (TeamWrapper::*)(std::string, std::string)) &TeamWrapper::HandleTeamNameSanitized, "C++: TeamWrapper::HandleTeamNameSanitized(std::string, std::string) --> void", "Original"_a, "Sanitized"_a);
		cl.def("SetClubID2", (void (TeamWrapper::*)(unsigned long long)) &TeamWrapper::SetClubID2, "C++: TeamWrapper::SetClubID2(unsigned long long) --> void", "InClubID"_a);
		cl.def("SetCustomTeamName", (void (TeamWrapper::*)(std::string)) &TeamWrapper::SetCustomTeamName, "C++: TeamWrapper::SetCustomTeamName(std::string) --> void", "NewName"_a);
		cl.def("SetDefaultColors", (void (TeamWrapper::*)()) &TeamWrapper::SetDefaultColors, "C++: TeamWrapper::SetDefaultColors() --> void");
		cl.def("IsSingleParty", (bool (TeamWrapper::*)()) &TeamWrapper::IsSingleParty, "C++: TeamWrapper::IsSingleParty() --> bool");
		cl.def("GetTeamMemberNamed", (class PriWrapper (TeamWrapper::*)(std::string)) &TeamWrapper::GetTeamMemberNamed, "C++: TeamWrapper::GetTeamMemberNamed(std::string) --> class PriWrapper", "PlayerName"_a);
		cl.def("GetNumBots", (int (TeamWrapper::*)()) &TeamWrapper::GetNumBots, "C++: TeamWrapper::GetNumBots() --> int");
		cl.def("GetNumHumans", (int (TeamWrapper::*)()) &TeamWrapper::GetNumHumans, "C++: TeamWrapper::GetNumHumans() --> int");
		cl.def("OnScoreUpdated", (void (TeamWrapper::*)()) &TeamWrapper::OnScoreUpdated, "C++: TeamWrapper::OnScoreUpdated() --> void");
		cl.def("ResetScore", (void (TeamWrapper::*)()) &TeamWrapper::ResetScore, "C++: TeamWrapper::ResetScore() --> void");
		cl.def("RemovePoints", (void (TeamWrapper::*)(int)) &TeamWrapper::RemovePoints, "C++: TeamWrapper::RemovePoints(int) --> void", "Points"_a);
		cl.def("SetScore", (void (TeamWrapper::*)(int)) &TeamWrapper::SetScore, "C++: TeamWrapper::SetScore(int) --> void", "Points"_a);
		cl.def("ScorePoint", (void (TeamWrapper::*)(int)) &TeamWrapper::ScorePoint, "C++: TeamWrapper::ScorePoint(int) --> void", "AdditionalScore"_a);
		cl.def("MuteOtherTeam", (void (TeamWrapper::*)(class TeamWrapper, unsigned long)) &TeamWrapper::MuteOtherTeam, "C++: TeamWrapper::MuteOtherTeam(class TeamWrapper, unsigned long) --> void", "OtherTeam"_a, "bMute"_a);
		cl.def("ClearTemporarySpawnSpots", (void (TeamWrapper::*)()) &TeamWrapper::ClearTemporarySpawnSpots, "C++: TeamWrapper::ClearTemporarySpawnSpots() --> void");
		cl.def("ExpireTemporarySpawnSpots", (void (TeamWrapper::*)()) &TeamWrapper::ExpireTemporarySpawnSpots, "C++: TeamWrapper::ExpireTemporarySpawnSpots() --> void");
		cl.def("AddTemporarySpawnSpot", (void (TeamWrapper::*)(class ActorWrapper)) &TeamWrapper::AddTemporarySpawnSpot, "C++: TeamWrapper::AddTemporarySpawnSpot(class ActorWrapper) --> void", "AtActor"_a);
		cl.def("OnGameEventSet", (void (TeamWrapper::*)()) &TeamWrapper::OnGameEventSet, "C++: TeamWrapper::OnGameEventSet() --> void");
		cl.def("SetGameEvent2", (void (TeamWrapper::*)(class TeamGameEventWrapper)) &TeamWrapper::SetGameEvent2, "C++: TeamWrapper::SetGameEvent2(class TeamGameEventWrapper) --> void", "InGameEvent"_a);
	}
	{ // GoalWrapper file: line:10
		pybind11::class_<GoalWrapper, std::shared_ptr<GoalWrapper>, ObjectWrapper> cl(M, "GoalWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](GoalWrapper const &o){ return new GoalWrapper(o); } ) );
		cl.def("assign", (class GoalWrapper & (GoalWrapper::*)(class GoalWrapper)) &GoalWrapper::operator=, "C++: GoalWrapper::operator=(class GoalWrapper) --> class GoalWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetGoalOrientation", (class ActorWrapper (GoalWrapper::*)()) &GoalWrapper::GetGoalOrientation, "C++: GoalWrapper::GetGoalOrientation() --> class ActorWrapper");
		cl.def("SetGoalOrientation", (void (GoalWrapper::*)(class ActorWrapper)) &GoalWrapper::SetGoalOrientation, "C++: GoalWrapper::SetGoalOrientation(class ActorWrapper) --> void", "newGoalOrientation"_a);
		cl.def("GetOverrideGoalIndicatorOrientations", (class ArrayWrapper<class ActorWrapper> (GoalWrapper::*)()) &GoalWrapper::GetOverrideGoalIndicatorOrientations, "C++: GoalWrapper::GetOverrideGoalIndicatorOrientations() --> class ArrayWrapper<class ActorWrapper>");
		cl.def("GetTeamNum", (unsigned char (GoalWrapper::*)()) &GoalWrapper::GetTeamNum, "C++: GoalWrapper::GetTeamNum() --> unsigned char");
		cl.def("SetTeamNum", (void (GoalWrapper::*)(unsigned char)) &GoalWrapper::SetTeamNum, "C++: GoalWrapper::SetTeamNum(unsigned char) --> void", "newTeamNum"_a);
		cl.def("GetScoreFX", (class FXActorWrapper (GoalWrapper::*)()) &GoalWrapper::GetScoreFX, "C++: GoalWrapper::GetScoreFX() --> class FXActorWrapper");
		cl.def("SetScoreFX", (void (GoalWrapper::*)(class FXActorWrapper)) &GoalWrapper::SetScoreFX, "C++: GoalWrapper::SetScoreFX(class FXActorWrapper) --> void", "newScoreFX"_a);
		cl.def("GetGoalIndicatorArchetype", (class UnrealStringWrapper (GoalWrapper::*)()) &GoalWrapper::GetGoalIndicatorArchetype, "C++: GoalWrapper::GetGoalIndicatorArchetype() --> class UnrealStringWrapper");
		cl.def("GetbNoGoalIndicator", (unsigned long (GoalWrapper::*)()) &GoalWrapper::GetbNoGoalIndicator, "C++: GoalWrapper::GetbNoGoalIndicator() --> unsigned long");
		cl.def("SetbNoGoalIndicator", (void (GoalWrapper::*)(unsigned long)) &GoalWrapper::SetbNoGoalIndicator, "C++: GoalWrapper::SetbNoGoalIndicator(unsigned long) --> void", "newbNoGoalIndicator"_a);
		cl.def("GetbOnlyGoalsFromDirection", (unsigned long (GoalWrapper::*)()) &GoalWrapper::GetbOnlyGoalsFromDirection, "C++: GoalWrapper::GetbOnlyGoalsFromDirection() --> unsigned long");
		cl.def("SetbOnlyGoalsFromDirection", (void (GoalWrapper::*)(unsigned long)) &GoalWrapper::SetbOnlyGoalsFromDirection, "C++: GoalWrapper::SetbOnlyGoalsFromDirection(unsigned long) --> void", "newbOnlyGoalsFromDirection"_a);
		cl.def("GetbShowFocusExtent", (unsigned long (GoalWrapper::*)()) &GoalWrapper::GetbShowFocusExtent, "C++: GoalWrapper::GetbShowFocusExtent() --> unsigned long");
		cl.def("SetbShowFocusExtent", (void (GoalWrapper::*)(unsigned long)) &GoalWrapper::SetbShowFocusExtent, "C++: GoalWrapper::SetbShowFocusExtent(unsigned long) --> void", "newbShowFocusExtent"_a);
		cl.def("GetGoalDirection", (class ActorWrapper (GoalWrapper::*)()) &GoalWrapper::GetGoalDirection, "C++: GoalWrapper::GetGoalDirection() --> class ActorWrapper");
		cl.def("SetGoalDirection", (void (GoalWrapper::*)(class ActorWrapper)) &GoalWrapper::SetGoalDirection, "C++: GoalWrapper::SetGoalDirection(class ActorWrapper) --> void", "newGoalDirection"_a);
		cl.def("GetPointsToAward", (int (GoalWrapper::*)()) &GoalWrapper::GetPointsToAward, "C++: GoalWrapper::GetPointsToAward() --> int");
		cl.def("SetPointsToAward", (void (GoalWrapper::*)(int)) &GoalWrapper::SetPointsToAward, "C++: GoalWrapper::SetPointsToAward(int) --> void", "newPointsToAward"_a);
		cl.def("GetAutoCamFocusExtent", (struct Vector (GoalWrapper::*)()) &GoalWrapper::GetAutoCamFocusExtent, "C++: GoalWrapper::GetAutoCamFocusExtent() --> struct Vector");
		cl.def("SetAutoCamFocusExtent", (void (GoalWrapper::*)(struct Vector)) &GoalWrapper::SetAutoCamFocusExtent, "C++: GoalWrapper::SetAutoCamFocusExtent(struct Vector) --> void", "newAutoCamFocusExtent"_a);
		cl.def("GetGoalFocusLocationOffset", (struct Vector (GoalWrapper::*)()) &GoalWrapper::GetGoalFocusLocationOffset, "C++: GoalWrapper::GetGoalFocusLocationOffset() --> struct Vector");
		cl.def("SetGoalFocusLocationOffset", (void (GoalWrapper::*)(struct Vector)) &GoalWrapper::SetGoalFocusLocationOffset, "C++: GoalWrapper::SetGoalFocusLocationOffset(struct Vector) --> void", "newGoalFocusLocationOffset"_a);
		cl.def("GetMaxGoalScorerAttachRadius", (float (GoalWrapper::*)()) &GoalWrapper::GetMaxGoalScorerAttachRadius, "C++: GoalWrapper::GetMaxGoalScorerAttachRadius() --> float");
		cl.def("SetMaxGoalScorerAttachRadius", (void (GoalWrapper::*)(float)) &GoalWrapper::SetMaxGoalScorerAttachRadius, "C++: GoalWrapper::SetMaxGoalScorerAttachRadius(float) --> void", "newMaxGoalScorerAttachRadius"_a);
		cl.def("GetGoalScoredDotDirection", (struct Vector (GoalWrapper::*)()) &GoalWrapper::GetGoalScoredDotDirection, "C++: GoalWrapper::GetGoalScoredDotDirection() --> struct Vector");
		cl.def("SetGoalScoredDotDirection", (void (GoalWrapper::*)(struct Vector)) &GoalWrapper::SetGoalScoredDotDirection, "C++: GoalWrapper::SetGoalScoredDotDirection(struct Vector) --> void", "newGoalScoredDotDirection"_a);
		cl.def("GetMinAttachGoalToScorerDot", (float (GoalWrapper::*)()) &GoalWrapper::GetMinAttachGoalToScorerDot, "C++: GoalWrapper::GetMinAttachGoalToScorerDot() --> float");
		cl.def("SetMinAttachGoalToScorerDot", (void (GoalWrapper::*)(float)) &GoalWrapper::SetMinAttachGoalToScorerDot, "C++: GoalWrapper::SetMinAttachGoalToScorerDot(float) --> void", "newMinAttachGoalToScorerDot"_a);
		cl.def("GetLocation", (struct Vector (GoalWrapper::*)()) &GoalWrapper::GetLocation, "C++: GoalWrapper::GetLocation() --> struct Vector");
		cl.def("SetLocation", (void (GoalWrapper::*)(struct Vector)) &GoalWrapper::SetLocation, "C++: GoalWrapper::SetLocation(struct Vector) --> void", "newLocation"_a);
		cl.def("GetDirection", (struct Vector (GoalWrapper::*)()) &GoalWrapper::GetDirection, "C++: GoalWrapper::GetDirection() --> struct Vector");
		cl.def("SetDirection", (void (GoalWrapper::*)(struct Vector)) &GoalWrapper::SetDirection, "C++: GoalWrapper::SetDirection(struct Vector) --> void", "newDirection"_a);
		cl.def("GetRight", (struct Vector (GoalWrapper::*)()) &GoalWrapper::GetRight, "C++: GoalWrapper::GetRight() --> struct Vector");
		cl.def("SetRight", (void (GoalWrapper::*)(struct Vector)) &GoalWrapper::SetRight, "C++: GoalWrapper::SetRight(struct Vector) --> void", "newRight"_a);
		cl.def("GetUp", (struct Vector (GoalWrapper::*)()) &GoalWrapper::GetUp, "C++: GoalWrapper::GetUp() --> struct Vector");
		cl.def("SetUp", (void (GoalWrapper::*)(struct Vector)) &GoalWrapper::SetUp, "C++: GoalWrapper::SetUp(struct Vector) --> void", "newUp"_a);
		cl.def("GetRotation", (struct Rotator (GoalWrapper::*)()) &GoalWrapper::GetRotation, "C++: GoalWrapper::GetRotation() --> struct Rotator");
		cl.def("SetRotation", (void (GoalWrapper::*)(struct Rotator)) &GoalWrapper::SetRotation, "C++: GoalWrapper::SetRotation(struct Rotator) --> void", "newRotation"_a);
		cl.def("GetLocalExtent", (struct Vector (GoalWrapper::*)()) &GoalWrapper::GetLocalExtent, "C++: GoalWrapper::GetLocalExtent() --> struct Vector");
		cl.def("SetLocalExtent", (void (GoalWrapper::*)(struct Vector)) &GoalWrapper::SetLocalExtent, "C++: GoalWrapper::SetLocalExtent(struct Vector) --> void", "newLocalExtent"_a);
		cl.def("GetWorldCenter", (struct Vector (GoalWrapper::*)()) &GoalWrapper::GetWorldCenter, "C++: GoalWrapper::GetWorldCenter() --> struct Vector");
		cl.def("SetWorldCenter", (void (GoalWrapper::*)(struct Vector)) &GoalWrapper::SetWorldCenter, "C++: GoalWrapper::SetWorldCenter(struct Vector) --> void", "newWorldCenter"_a);
		cl.def("GetWorldExtent", (struct Vector (GoalWrapper::*)()) &GoalWrapper::GetWorldExtent, "C++: GoalWrapper::GetWorldExtent() --> struct Vector");
		cl.def("SetWorldExtent", (void (GoalWrapper::*)(struct Vector)) &GoalWrapper::SetWorldExtent, "C++: GoalWrapper::SetWorldExtent(struct Vector) --> void", "newWorldExtent"_a);
		cl.def("GetWorldFrontCenter", (struct Vector (GoalWrapper::*)()) &GoalWrapper::GetWorldFrontCenter, "C++: GoalWrapper::GetWorldFrontCenter() --> struct Vector");
		cl.def("SetWorldFrontCenter", (void (GoalWrapper::*)(struct Vector)) &GoalWrapper::SetWorldFrontCenter, "C++: GoalWrapper::SetWorldFrontCenter(struct Vector) --> void", "newWorldFrontCenter"_a);
		cl.def("GetGoalFocusExtentCenter", (struct Vector (GoalWrapper::*)()) &GoalWrapper::GetGoalFocusExtentCenter, "C++: GoalWrapper::GetGoalFocusExtentCenter() --> struct Vector");
		cl.def("Init", (void (GoalWrapper::*)()) &GoalWrapper::Init, "C++: GoalWrapper::Init() --> void");
		cl.def("eventBeginPlay", (void (GoalWrapper::*)()) &GoalWrapper::eventBeginPlay, "C++: GoalWrapper::eventBeginPlay() --> void");
	}
}
