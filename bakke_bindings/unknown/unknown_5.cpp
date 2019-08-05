#include "pch.h"
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameEvent/GameSettingPlaylistWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/AirControlComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/StructArrayWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_unknown_unknown_5(py::module &M)
{
	{ // PriXWrapper file: line:8
		pybind11::class_<PriXWrapper, std::shared_ptr<PriXWrapper>, PlayerReplicationInfoWrapper> cl(M, "PriXWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](PriXWrapper const &o){ return new PriXWrapper(o); } ) );
		cl.def("assign", (class PriXWrapper & (PriXWrapper::*)(class PriXWrapper)) &PriXWrapper::operator=, "C++: PriXWrapper::operator=(class PriXWrapper) --> class PriXWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("eventDestroyed", (void (PriXWrapper::*)()) &PriXWrapper::eventDestroyed, "C++: PriXWrapper::eventDestroyed() --> void");
		cl.def("OnUniqueIdChanged", (void (PriXWrapper::*)()) &PriXWrapper::OnUniqueIdChanged, "C++: PriXWrapper::OnUniqueIdChanged() --> void");
		cl.def("SetUniqueId", (void (PriXWrapper::*)(struct SteamID &)) &PriXWrapper::SetUniqueId, "C++: PriXWrapper::SetUniqueId(struct SteamID &) --> void", "PlayerUniqueId"_a);
		cl.def("UnregisterPlayerFromSession", (void (PriXWrapper::*)()) &PriXWrapper::UnregisterPlayerFromSession, "C++: PriXWrapper::UnregisterPlayerFromSession() --> void");
		cl.def("RegisterPlayerWithSession", (void (PriXWrapper::*)()) &PriXWrapper::RegisterPlayerWithSession, "C++: PriXWrapper::RegisterPlayerWithSession() --> void");
		cl.def("OnTeamChanged", (void (PriXWrapper::*)()) &PriXWrapper::OnTeamChanged, "C++: PriXWrapper::OnTeamChanged() --> void");
		cl.def("SetPlayerTeam", (void (PriXWrapper::*)(class TeamInfoWrapper)) &PriXWrapper::SetPlayerTeam, "C++: PriXWrapper::SetPlayerTeam(class TeamInfoWrapper) --> void", "NewTeam"_a);
		cl.def("eventOnOwnerChanged", (void (PriXWrapper::*)()) &PriXWrapper::eventOnOwnerChanged, "C++: PriXWrapper::eventOnOwnerChanged() --> void");
		cl.def("eventSetPlayerName", (void (PriXWrapper::*)(std::string)) &PriXWrapper::eventSetPlayerName, "C++: PriXWrapper::eventSetPlayerName(std::string) --> void", "S"_a);
		cl.def("EventDestroyed", (void (PriXWrapper::*)(class PriXWrapper)) &PriXWrapper::EventDestroyed, "C++: PriXWrapper::EventDestroyed(class PriXWrapper) --> void", "PRI"_a);
		cl.def("EventTeamChanged", (void (PriXWrapper::*)(class PriXWrapper)) &PriXWrapper::EventTeamChanged, "C++: PriXWrapper::EventTeamChanged(class PriXWrapper) --> void", "PRI"_a);
		cl.def("EventUniqueIdChanged", (void (PriXWrapper::*)(class PriXWrapper)) &PriXWrapper::EventUniqueIdChanged, "C++: PriXWrapper::EventUniqueIdChanged(class PriXWrapper) --> void", "PRI"_a);
		cl.def("EventPlayerNameChanged", (void (PriXWrapper::*)(class PriXWrapper)) &PriXWrapper::EventPlayerNameChanged, "C++: PriXWrapper::EventPlayerNameChanged(class PriXWrapper) --> void", "PRI"_a);
	}
	{ // PriWrapper file: line:12
		pybind11::class_<PriWrapper, std::shared_ptr<PriWrapper>, PriXWrapper> cl(M, "PriWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](PriWrapper const &o){ return new PriWrapper(o); } ) );
		cl.def("assign", (class PriWrapper & (PriWrapper::*)(class PriWrapper)) &PriWrapper::operator=, "C++: PriWrapper::operator=(class PriWrapper) --> class PriWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetMatchScore", (int (PriWrapper::*)()) &PriWrapper::GetMatchScore, "C++: PriWrapper::GetMatchScore() --> int");
		cl.def("SetMatchScore", (void (PriWrapper::*)(int)) &PriWrapper::SetMatchScore, "C++: PriWrapper::SetMatchScore(int) --> void", "newMatchScore"_a);
		cl.def("GetMatchGoals", (int (PriWrapper::*)()) &PriWrapper::GetMatchGoals, "C++: PriWrapper::GetMatchGoals() --> int");
		cl.def("SetMatchGoals", (void (PriWrapper::*)(int)) &PriWrapper::SetMatchGoals, "C++: PriWrapper::SetMatchGoals(int) --> void", "newMatchGoals"_a);
		cl.def("GetMatchOwnGoals", (int (PriWrapper::*)()) &PriWrapper::GetMatchOwnGoals, "C++: PriWrapper::GetMatchOwnGoals() --> int");
		cl.def("SetMatchOwnGoals", (void (PriWrapper::*)(int)) &PriWrapper::SetMatchOwnGoals, "C++: PriWrapper::SetMatchOwnGoals(int) --> void", "newMatchOwnGoals"_a);
		cl.def("GetMatchAssists", (int (PriWrapper::*)()) &PriWrapper::GetMatchAssists, "C++: PriWrapper::GetMatchAssists() --> int");
		cl.def("SetMatchAssists", (void (PriWrapper::*)(int)) &PriWrapper::SetMatchAssists, "C++: PriWrapper::SetMatchAssists(int) --> void", "newMatchAssists"_a);
		cl.def("GetMatchSaves", (int (PriWrapper::*)()) &PriWrapper::GetMatchSaves, "C++: PriWrapper::GetMatchSaves() --> int");
		cl.def("SetMatchSaves", (void (PriWrapper::*)(int)) &PriWrapper::SetMatchSaves, "C++: PriWrapper::SetMatchSaves(int) --> void", "newMatchSaves"_a);
		cl.def("GetMatchShots", (int (PriWrapper::*)()) &PriWrapper::GetMatchShots, "C++: PriWrapper::GetMatchShots() --> int");
		cl.def("SetMatchShots", (void (PriWrapper::*)(int)) &PriWrapper::SetMatchShots, "C++: PriWrapper::SetMatchShots(int) --> void", "newMatchShots"_a);
		cl.def("GetMatchDemolishes", (int (PriWrapper::*)()) &PriWrapper::GetMatchDemolishes, "C++: PriWrapper::GetMatchDemolishes() --> int");
		cl.def("SetMatchDemolishes", (void (PriWrapper::*)(int)) &PriWrapper::SetMatchDemolishes, "C++: PriWrapper::SetMatchDemolishes(int) --> void", "newMatchDemolishes"_a);
		cl.def("GetMatchBonusXP", (int (PriWrapper::*)()) &PriWrapper::GetMatchBonusXP, "C++: PriWrapper::GetMatchBonusXP() --> int");
		cl.def("SetMatchBonusXP", (void (PriWrapper::*)(int)) &PriWrapper::SetMatchBonusXP, "C++: PriWrapper::SetMatchBonusXP(int) --> void", "newMatchBonusXP"_a);
		cl.def("GetMatchBreakoutDamage", (int (PriWrapper::*)()) &PriWrapper::GetMatchBreakoutDamage, "C++: PriWrapper::GetMatchBreakoutDamage() --> int");
		cl.def("SetMatchBreakoutDamage", (void (PriWrapper::*)(int)) &PriWrapper::SetMatchBreakoutDamage, "C++: PriWrapper::SetMatchBreakoutDamage(int) --> void", "newMatchBreakoutDamage"_a);
		cl.def("GetbMatchMVP", (unsigned long (PriWrapper::*)()) &PriWrapper::GetbMatchMVP, "C++: PriWrapper::GetbMatchMVP() --> unsigned long");
		cl.def("SetbMatchMVP", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetbMatchMVP, "C++: PriWrapper::SetbMatchMVP(unsigned long) --> void", "newbMatchMVP"_a);
		cl.def("GetbMatchAdmin", (unsigned long (PriWrapper::*)()) &PriWrapper::GetbMatchAdmin, "C++: PriWrapper::GetbMatchAdmin() --> unsigned long");
		cl.def("SetbMatchAdmin", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetbMatchAdmin, "C++: PriWrapper::SetbMatchAdmin(unsigned long) --> void", "newbMatchAdmin"_a);
		cl.def("GetbLoadoutSet", (unsigned long (PriWrapper::*)()) &PriWrapper::GetbLoadoutSet, "C++: PriWrapper::GetbLoadoutSet() --> unsigned long");
		cl.def("SetbLoadoutSet", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetbLoadoutSet, "C++: PriWrapper::SetbLoadoutSet(unsigned long) --> void", "newbLoadoutSet"_a);
		cl.def("GetbOnlineLoadoutSet", (unsigned long (PriWrapper::*)()) &PriWrapper::GetbOnlineLoadoutSet, "C++: PriWrapper::GetbOnlineLoadoutSet() --> unsigned long");
		cl.def("SetbOnlineLoadoutSet", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetbOnlineLoadoutSet, "C++: PriWrapper::SetbOnlineLoadoutSet(unsigned long) --> void", "newbOnlineLoadoutSet"_a);
		cl.def("GetbLoadoutsSet", (unsigned long (PriWrapper::*)()) &PriWrapper::GetbLoadoutsSet, "C++: PriWrapper::GetbLoadoutsSet() --> unsigned long");
		cl.def("SetbLoadoutsSet", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetbLoadoutsSet, "C++: PriWrapper::SetbLoadoutsSet(unsigned long) --> void", "newbLoadoutsSet"_a);
		cl.def("GetbOnlineLoadoutsSet", (unsigned long (PriWrapper::*)()) &PriWrapper::GetbOnlineLoadoutsSet, "C++: PriWrapper::GetbOnlineLoadoutsSet() --> unsigned long");
		cl.def("SetbOnlineLoadoutsSet", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetbOnlineLoadoutsSet, "C++: PriWrapper::SetbOnlineLoadoutsSet(unsigned long) --> void", "newbOnlineLoadoutsSet"_a);
		cl.def("GetbTeamPaintSet", (unsigned long (PriWrapper::*)()) &PriWrapper::GetbTeamPaintSet, "C++: PriWrapper::GetbTeamPaintSet() --> unsigned long");
		cl.def("SetbTeamPaintSet", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetbTeamPaintSet, "C++: PriWrapper::SetbTeamPaintSet(unsigned long) --> void", "newbTeamPaintSet"_a);
		cl.def("GetbReady", (unsigned long (PriWrapper::*)()) &PriWrapper::GetbReady, "C++: PriWrapper::GetbReady() --> unsigned long");
		cl.def("SetbReady", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetbReady, "C++: PriWrapper::SetbReady(unsigned long) --> void", "newbReady"_a);
		cl.def("GetbBusy", (unsigned long (PriWrapper::*)()) &PriWrapper::GetbBusy, "C++: PriWrapper::GetbBusy() --> unsigned long");
		cl.def("SetbBusy", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetbBusy, "C++: PriWrapper::SetbBusy(unsigned long) --> void", "newbBusy"_a);
		cl.def("GetbUsingSecondaryCamera", (unsigned long (PriWrapper::*)()) &PriWrapper::GetbUsingSecondaryCamera, "C++: PriWrapper::GetbUsingSecondaryCamera() --> unsigned long");
		cl.def("SetbUsingSecondaryCamera", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetbUsingSecondaryCamera, "C++: PriWrapper::SetbUsingSecondaryCamera(unsigned long) --> void", "newbUsingSecondaryCamera"_a);
		cl.def("GetbUsingBehindView", (unsigned long (PriWrapper::*)()) &PriWrapper::GetbUsingBehindView, "C++: PriWrapper::GetbUsingBehindView() --> unsigned long");
		cl.def("SetbUsingBehindView", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetbUsingBehindView, "C++: PriWrapper::SetbUsingBehindView(unsigned long) --> void", "newbUsingBehindView"_a);
		cl.def("GetbUsingFreecam", (unsigned long (PriWrapper::*)()) &PriWrapper::GetbUsingFreecam, "C++: PriWrapper::GetbUsingFreecam() --> unsigned long");
		cl.def("SetbUsingFreecam", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetbUsingFreecam, "C++: PriWrapper::SetbUsingFreecam(unsigned long) --> void", "newbUsingFreecam"_a);
		cl.def("GetbIsInSplitScreen", (unsigned long (PriWrapper::*)()) &PriWrapper::GetbIsInSplitScreen, "C++: PriWrapper::GetbIsInSplitScreen() --> unsigned long");
		cl.def("SetbIsInSplitScreen", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetbIsInSplitScreen, "C++: PriWrapper::SetbIsInSplitScreen(unsigned long) --> void", "newbIsInSplitScreen"_a);
		cl.def("GetbStartVoteToForfeitDisabled", (unsigned long (PriWrapper::*)()) &PriWrapper::GetbStartVoteToForfeitDisabled, "C++: PriWrapper::GetbStartVoteToForfeitDisabled() --> unsigned long");
		cl.def("SetbStartVoteToForfeitDisabled", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetbStartVoteToForfeitDisabled, "C++: PriWrapper::SetbStartVoteToForfeitDisabled(unsigned long) --> void", "newbStartVoteToForfeitDisabled"_a);
		cl.def("GetbUsingItems", (unsigned long (PriWrapper::*)()) &PriWrapper::GetbUsingItems, "C++: PriWrapper::GetbUsingItems() --> unsigned long");
		cl.def("SetbUsingItems", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetbUsingItems, "C++: PriWrapper::SetbUsingItems(unsigned long) --> void", "newbUsingItems"_a);
		cl.def("GetPlayerHistoryValid", (unsigned long (PriWrapper::*)()) &PriWrapper::GetPlayerHistoryValid, "C++: PriWrapper::GetPlayerHistoryValid() --> unsigned long");
		cl.def("SetPlayerHistoryValid", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetPlayerHistoryValid, "C++: PriWrapper::SetPlayerHistoryValid(unsigned long) --> void", "newPlayerHistoryValid"_a);
		cl.def("GetGameEvent", (class GameEventWrapper (PriWrapper::*)()) &PriWrapper::GetGameEvent, "C++: PriWrapper::GetGameEvent() --> class GameEventWrapper");
		cl.def("SetGameEvent", (void (PriWrapper::*)(class GameEventWrapper)) &PriWrapper::SetGameEvent, "C++: PriWrapper::SetGameEvent(class GameEventWrapper) --> void", "newGameEvent"_a);
		cl.def("GetReplicatedGameEvent", (class GameEventWrapper (PriWrapper::*)()) &PriWrapper::GetReplicatedGameEvent, "C++: PriWrapper::GetReplicatedGameEvent() --> class GameEventWrapper");
		cl.def("SetReplicatedGameEvent", (void (PriWrapper::*)(class GameEventWrapper)) &PriWrapper::SetReplicatedGameEvent, "C++: PriWrapper::SetReplicatedGameEvent(class GameEventWrapper) --> void", "newReplicatedGameEvent"_a);
		cl.def("GetCar", (class CarWrapper (PriWrapper::*)()) &PriWrapper::GetCar, "C++: PriWrapper::GetCar() --> class CarWrapper");
		cl.def("SetCar", (void (PriWrapper::*)(class CarWrapper)) &PriWrapper::SetCar, "C++: PriWrapper::SetCar(class CarWrapper) --> void", "newCar"_a);
		cl.def("GetRespawnTimeRemaining", (int (PriWrapper::*)()) &PriWrapper::GetRespawnTimeRemaining, "C++: PriWrapper::GetRespawnTimeRemaining() --> int");
		cl.def("SetRespawnTimeRemaining", (void (PriWrapper::*)(int)) &PriWrapper::SetRespawnTimeRemaining, "C++: PriWrapper::SetRespawnTimeRemaining(int) --> void", "newRespawnTimeRemaining"_a);
		cl.def("GetWaitingStartTime", (int (PriWrapper::*)()) &PriWrapper::GetWaitingStartTime, "C++: PriWrapper::GetWaitingStartTime() --> int");
		cl.def("SetWaitingStartTime", (void (PriWrapper::*)(int)) &PriWrapper::SetWaitingStartTime, "C++: PriWrapper::SetWaitingStartTime(int) --> void", "newWaitingStartTime"_a);
		cl.def("GetTotalGameTimePlayed", (float (PriWrapper::*)()) &PriWrapper::GetTotalGameTimePlayed, "C++: PriWrapper::GetTotalGameTimePlayed() --> float");
		cl.def("SetTotalGameTimePlayed", (void (PriWrapper::*)(float)) &PriWrapper::SetTotalGameTimePlayed, "C++: PriWrapper::SetTotalGameTimePlayed(float) --> void", "newTotalGameTimePlayed"_a);
		cl.def("GetCameraSettings", (struct ProfileCameraSettings (PriWrapper::*)()) &PriWrapper::GetCameraSettings, "C++: PriWrapper::GetCameraSettings() --> struct ProfileCameraSettings");
		cl.def("SetCameraSettings", (void (PriWrapper::*)(struct ProfileCameraSettings)) &PriWrapper::SetCameraSettings, "C++: PriWrapper::SetCameraSettings(struct ProfileCameraSettings) --> void", "newCameraSettings"_a);
		cl.def("GetCameraPitch", (unsigned char (PriWrapper::*)()) &PriWrapper::GetCameraPitch, "C++: PriWrapper::GetCameraPitch() --> unsigned char");
		cl.def("SetCameraPitch", (void (PriWrapper::*)(unsigned char)) &PriWrapper::SetCameraPitch, "C++: PriWrapper::SetCameraPitch(unsigned char) --> void", "newCameraPitch"_a);
		cl.def("GetCameraYaw", (unsigned char (PriWrapper::*)()) &PriWrapper::GetCameraYaw, "C++: PriWrapper::GetCameraYaw() --> unsigned char");
		cl.def("SetCameraYaw", (void (PriWrapper::*)(unsigned char)) &PriWrapper::SetCameraYaw, "C++: PriWrapper::SetCameraYaw(unsigned char) --> void", "newCameraYaw"_a);
		cl.def("GetPawnType", (unsigned char (PriWrapper::*)()) &PriWrapper::GetPawnType, "C++: PriWrapper::GetPawnType() --> unsigned char");
		cl.def("SetPawnType", (void (PriWrapper::*)(unsigned char)) &PriWrapper::SetPawnType, "C++: PriWrapper::SetPawnType(unsigned char) --> void", "newPawnType"_a);
		cl.def("GetReplicatedWorstNetQualityBeyondLatency", (unsigned char (PriWrapper::*)()) &PriWrapper::GetReplicatedWorstNetQualityBeyondLatency, "C++: PriWrapper::GetReplicatedWorstNetQualityBeyondLatency() --> unsigned char");
		cl.def("SetReplicatedWorstNetQualityBeyondLatency", (void (PriWrapper::*)(unsigned char)) &PriWrapper::SetReplicatedWorstNetQualityBeyondLatency, "C++: PriWrapper::SetReplicatedWorstNetQualityBeyondLatency(unsigned char) --> void", "newReplicatedWorstNetQualityBeyondLatency"_a);
		cl.def("GetPartyLeader", (struct SteamID (PriWrapper::*)()) &PriWrapper::GetPartyLeader, "C++: PriWrapper::GetPartyLeader() --> struct SteamID");
		cl.def("SetPartyLeader", (void (PriWrapper::*)(struct SteamID)) &PriWrapper::SetPartyLeader, "C++: PriWrapper::SetPartyLeader(struct SteamID) --> void", "newPartyLeader"_a);
		cl.def("GetDodgeInputThreshold", (float (PriWrapper::*)()) &PriWrapper::GetDodgeInputThreshold, "C++: PriWrapper::GetDodgeInputThreshold() --> float");
		cl.def("SetDodgeInputThreshold", (void (PriWrapper::*)(float)) &PriWrapper::SetDodgeInputThreshold, "C++: PriWrapper::SetDodgeInputThreshold(float) --> void", "newDodgeInputThreshold"_a);
		cl.def("GetSteeringSensitivity", (float (PriWrapper::*)()) &PriWrapper::GetSteeringSensitivity, "C++: PriWrapper::GetSteeringSensitivity() --> float");
		cl.def("SetSteeringSensitivity", (void (PriWrapper::*)(float)) &PriWrapper::SetSteeringSensitivity, "C++: PriWrapper::SetSteeringSensitivity(float) --> void", "newSteeringSensitivity"_a);
		cl.def("GetAirControlSensitivity", (float (PriWrapper::*)()) &PriWrapper::GetAirControlSensitivity, "C++: PriWrapper::GetAirControlSensitivity() --> float");
		cl.def("SetAirControlSensitivity", (void (PriWrapper::*)(float)) &PriWrapper::SetAirControlSensitivity, "C++: PriWrapper::SetAirControlSensitivity(float) --> void", "newAirControlSensitivity"_a);
		cl.def("GetNextTimeRestrictedStatEventAllowedTime", (float (PriWrapper::*)()) &PriWrapper::GetNextTimeRestrictedStatEventAllowedTime, "C++: PriWrapper::GetNextTimeRestrictedStatEventAllowedTime() --> float");
		cl.def("SetNextTimeRestrictedStatEventAllowedTime", (void (PriWrapper::*)(float)) &PriWrapper::SetNextTimeRestrictedStatEventAllowedTime, "C++: PriWrapper::SetNextTimeRestrictedStatEventAllowedTime(float) --> void", "newNextTimeRestrictedStatEventAllowedTime"_a);
		cl.def("GetLastTimeRestrictedStatEventTime", (float (PriWrapper::*)()) &PriWrapper::GetLastTimeRestrictedStatEventTime, "C++: PriWrapper::GetLastTimeRestrictedStatEventTime() --> float");
		cl.def("SetLastTimeRestrictedStatEventTime", (void (PriWrapper::*)(float)) &PriWrapper::SetLastTimeRestrictedStatEventTime, "C++: PriWrapper::SetLastTimeRestrictedStatEventTime(float) --> void", "newLastTimeRestrictedStatEventTime"_a);
		cl.def("GetTimeTillItem", (int (PriWrapper::*)()) &PriWrapper::GetTimeTillItem, "C++: PriWrapper::GetTimeTillItem() --> int");
		cl.def("SetTimeTillItem", (void (PriWrapper::*)(int)) &PriWrapper::SetTimeTillItem, "C++: PriWrapper::SetTimeTillItem(int) --> void", "newTimeTillItem"_a);
		cl.def("GetMaxTimeTillItem", (int (PriWrapper::*)()) &PriWrapper::GetMaxTimeTillItem, "C++: PriWrapper::GetMaxTimeTillItem() --> int");
		cl.def("SetMaxTimeTillItem", (void (PriWrapper::*)(int)) &PriWrapper::SetMaxTimeTillItem, "C++: PriWrapper::SetMaxTimeTillItem(int) --> void", "newMaxTimeTillItem"_a);
		cl.def("GetBoostPickups", (int (PriWrapper::*)()) &PriWrapper::GetBoostPickups, "C++: PriWrapper::GetBoostPickups() --> int");
		cl.def("SetBoostPickups", (void (PriWrapper::*)(int)) &PriWrapper::SetBoostPickups, "C++: PriWrapper::SetBoostPickups(int) --> void", "newBoostPickups"_a);
		cl.def("GetBallTouches", (int (PriWrapper::*)()) &PriWrapper::GetBallTouches, "C++: PriWrapper::GetBallTouches() --> int");
		cl.def("SetBallTouches", (void (PriWrapper::*)(int)) &PriWrapper::SetBallTouches, "C++: PriWrapper::SetBallTouches(int) --> void", "newBallTouches"_a);
		cl.def("GetCarTouches", (int (PriWrapper::*)()) &PriWrapper::GetCarTouches, "C++: PriWrapper::GetCarTouches() --> int");
		cl.def("SetCarTouches", (void (PriWrapper::*)(int)) &PriWrapper::SetCarTouches, "C++: PriWrapper::SetCarTouches(int) --> void", "newCarTouches"_a);
		cl.def("GetReplacingBotPRI", (class PriWrapper (PriWrapper::*)()) &PriWrapper::GetReplacingBotPRI, "C++: PriWrapper::GetReplacingBotPRI() --> class PriWrapper");
		cl.def("SetReplacingBotPRI", (void (PriWrapper::*)(class PriWrapper)) &PriWrapper::SetReplacingBotPRI, "C++: PriWrapper::SetReplacingBotPRI(class PriWrapper) --> void", "newReplacingBotPRI"_a);
		cl.def("GetClubID", (unsigned long long (PriWrapper::*)()) &PriWrapper::GetClubID, "C++: PriWrapper::GetClubID() --> unsigned long long");
		cl.def("SetClubID", (void (PriWrapper::*)(unsigned long long)) &PriWrapper::SetClubID, "C++: PriWrapper::SetClubID(unsigned long long) --> void", "newClubID"_a);
		cl.def("GetPublicIP", (class UnrealStringWrapper (PriWrapper::*)()) &PriWrapper::GetPublicIP, "C++: PriWrapper::GetPublicIP() --> class UnrealStringWrapper");
		cl.def("GetSpectatorShortcut", (int (PriWrapper::*)()) &PriWrapper::GetSpectatorShortcut, "C++: PriWrapper::GetSpectatorShortcut() --> int");
		cl.def("SetSpectatorShortcut", (void (PriWrapper::*)(int)) &PriWrapper::SetSpectatorShortcut, "C++: PriWrapper::SetSpectatorShortcut(int) --> void", "newSpectatorShortcut"_a);
		cl.def("__ClubID__ChangeNotifyFunc", (void (PriWrapper::*)()) &PriWrapper::__ClubID__ChangeNotifyFunc, "C++: PriWrapper::__ClubID__ChangeNotifyFunc() --> void");
		cl.def("__PREI__ChangeNotifyFunc", (void (PriWrapper::*)()) &PriWrapper::__PREI__ChangeNotifyFunc, "C++: PriWrapper::__PREI__ChangeNotifyFunc() --> void");
		cl.def("__ReplicatedWorstNetQualityBeyondLatency__ChangeNotifyFunc", (void (PriWrapper::*)()) &PriWrapper::__ReplicatedWorstNetQualityBeyondLatency__ChangeNotifyFunc, "C++: PriWrapper::__ReplicatedWorstNetQualityBeyondLatency__ChangeNotifyFunc() --> void");
		cl.def("eventDestroyed", (void (PriWrapper::*)()) &PriWrapper::eventDestroyed, "C++: PriWrapper::eventDestroyed() --> void");
		cl.def("OnSpectatorShortcutChanged", (void (PriWrapper::*)()) &PriWrapper::OnSpectatorShortcutChanged, "C++: PriWrapper::OnSpectatorShortcutChanged() --> void");
		cl.def("SetSpectatorShortcut2", (void (PriWrapper::*)(int)) &PriWrapper::SetSpectatorShortcut2, "C++: PriWrapper::SetSpectatorShortcut2(int) --> void", "InShortcut"_a);
		cl.def("ServerSetPublicIP", (void (PriWrapper::*)(std::string)) &PriWrapper::ServerSetPublicIP, "C++: PriWrapper::ServerSetPublicIP(std::string) --> void", "IP"_a);
		cl.def("OnUniqueIdChanged", (void (PriWrapper::*)()) &PriWrapper::OnUniqueIdChanged, "C++: PriWrapper::OnUniqueIdChanged() --> void");
		cl.def("UpdatePlayerAvatarBorder", (void (PriWrapper::*)()) &PriWrapper::UpdatePlayerAvatarBorder, "C++: PriWrapper::UpdatePlayerAvatarBorder() --> void");
		cl.def("UpdatePlayerBanner", (void (PriWrapper::*)()) &PriWrapper::UpdatePlayerBanner, "C++: PriWrapper::UpdatePlayerBanner() --> void");
		cl.def("ClientAchievementProgression", (void (PriWrapper::*)(int, unsigned char, float, float)) &PriWrapper::ClientAchievementProgression, "C++: PriWrapper::ClientAchievementProgression(int, unsigned char, float, float) --> void", "AchievementId"_a, "AchievementType"_a, "Progress"_a, "MaxProgress"_a);
		cl.def("ClientUnlockAchievement", (void (PriWrapper::*)(int, unsigned char)) &PriWrapper::ClientUnlockAchievement, "C++: PriWrapper::ClientUnlockAchievement(int, unsigned char) --> void", "AchievementId"_a, "AchievementType"_a);
		cl.def("ServerSetPlayerActivatedFX", (void (PriWrapper::*)(class FXActorWrapper)) &PriWrapper::ServerSetPlayerActivatedFX, "C++: PriWrapper::ServerSetPlayerActivatedFX(class FXActorWrapper) --> void", "FX"_a);
		cl.def("UpdateCarLocalPlayer", (void (PriWrapper::*)()) &PriWrapper::UpdateCarLocalPlayer, "C++: PriWrapper::UpdateCarLocalPlayer() --> void");
		cl.def("OnReplacingBotPRIChanged", (void (PriWrapper::*)()) &PriWrapper::OnReplacingBotPRIChanged, "C++: PriWrapper::OnReplacingBotPRIChanged() --> void");
		cl.def("OnTeamChanged", (void (PriWrapper::*)()) &PriWrapper::OnTeamChanged, "C++: PriWrapper::OnTeamChanged() --> void");
		cl.def("ClearBotReplacement", (void (PriWrapper::*)()) &PriWrapper::ClearBotReplacement, "C++: PriWrapper::ClearBotReplacement() --> void");
		cl.def("ReportCheater", (void (PriWrapper::*)(std::string)) &PriWrapper::ReportCheater, "C++: PriWrapper::ReportCheater(std::string) --> void", "Reason"_a);
		cl.def("ValidateLoadoutTeamPaints", (bool (PriWrapper::*)()) &PriWrapper::ValidateLoadoutTeamPaints, "C++: PriWrapper::ValidateLoadoutTeamPaints() --> bool");
		cl.def("ValidateLoadoutSlots", (bool (PriWrapper::*)()) &PriWrapper::ValidateLoadoutSlots, "C++: PriWrapper::ValidateLoadoutSlots() --> bool");
		cl.def("ValidateLoadoutDLC", (void (PriWrapper::*)()) &PriWrapper::ValidateLoadoutDLC, "C++: PriWrapper::ValidateLoadoutDLC() --> void");
		cl.def("OnStartVoteToForfeitDisabledChanged", (void (PriWrapper::*)()) &PriWrapper::OnStartVoteToForfeitDisabledChanged, "C++: PriWrapper::OnStartVoteToForfeitDisabledChanged() --> void");
		cl.def("SetStartVoteToForfeitDisabled", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetStartVoteToForfeitDisabled, "C++: PriWrapper::SetStartVoteToForfeitDisabled(unsigned long) --> void", "bDisabled"_a);
		cl.def("ServerVoteToForfeit", (void (PriWrapper::*)()) &PriWrapper::ServerVoteToForfeit, "C++: PriWrapper::ServerVoteToForfeit() --> void");
		cl.def("SetUserCarPreferences", (void (PriWrapper::*)(float, float, float)) &PriWrapper::SetUserCarPreferences, "C++: PriWrapper::SetUserCarPreferences(float, float, float) --> void", "NewDodgeThreshold"_a, "NewSteeringSensitivity"_a, "NewAirControlSensitivity"_a);
		cl.def("ServerSetUserCarPreferences", (void (PriWrapper::*)(float, float, float)) &PriWrapper::ServerSetUserCarPreferences, "C++: PriWrapper::ServerSetUserCarPreferences(float, float, float) --> void", "NewDodgeThreshold"_a, "NewSteeringSensitivity"_a, "NewAirControlSensitivity"_a);
		cl.def("ValidateUserInt", (int (PriWrapper::*)(std::string, int, int, int)) &PriWrapper::ValidateUserInt, "C++: PriWrapper::ValidateUserInt(std::string, int, int, int) --> int", "Reason"_a, "NewValue"_a, "Min"_a, "Max"_a);
		cl.def("ValidateUserFloat", (float (PriWrapper::*)(std::string, float, float, float)) &PriWrapper::ValidateUserFloat, "C++: PriWrapper::ValidateUserFloat(std::string, float, float, float) --> float", "Reason"_a, "NewValue"_a, "Min"_a, "Max"_a);
		cl.def("OnPawnTypeChanged", (void (PriWrapper::*)()) &PriWrapper::OnPawnTypeChanged, "C++: PriWrapper::OnPawnTypeChanged() --> void");
		cl.def("SetWaitingPlayer", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetWaitingPlayer, "C++: PriWrapper::SetWaitingPlayer(unsigned long) --> void", "B"_a);
		cl.def("SetPawnType2", (void (PriWrapper::*)(unsigned char)) &PriWrapper::SetPawnType2, "C++: PriWrapper::SetPawnType2(unsigned char) --> void", "NewPawnType"_a);
		cl.def("IsPlayer", (bool (PriWrapper::*)()) &PriWrapper::IsPlayer, "C++: PriWrapper::IsPlayer() --> bool");
		cl.def("IsEditor", (bool (PriWrapper::*)()) &PriWrapper::IsEditor, "C++: PriWrapper::IsEditor() --> bool");
		cl.def("IsSpectator", (bool (PriWrapper::*)()) &PriWrapper::IsSpectator, "C++: PriWrapper::IsSpectator() --> bool");
		cl.def("ServerSpectate", (void (PriWrapper::*)()) &PriWrapper::ServerSpectate, "C++: PriWrapper::ServerSpectate() --> void");
		cl.def("ClientChangeTeamFailed", (void (PriWrapper::*)(int)) &PriWrapper::ClientChangeTeamFailed, "C++: PriWrapper::ClientChangeTeamFailed(int) --> void", "TeamNum"_a);
		cl.def("ServerChangeTeam", (void (PriWrapper::*)(int)) &PriWrapper::ServerChangeTeam, "C++: PriWrapper::ServerChangeTeam(int) --> void", "TeamNum"_a);
		cl.def("ReplicatePodiumTitles", (void (PriWrapper::*)()) &PriWrapper::ReplicatePodiumTitles, "C++: PriWrapper::ReplicatePodiumTitles() --> void");
		cl.def("OnMatchAdmin", (void (PriWrapper::*)()) &PriWrapper::OnMatchAdmin, "C++: PriWrapper::OnMatchAdmin() --> void");
		cl.def("OnMVPChange", (void (PriWrapper::*)()) &PriWrapper::OnMVPChange, "C++: PriWrapper::OnMVPChange() --> void");
		cl.def("NotifyWonMVP", (void (PriWrapper::*)()) &PriWrapper::NotifyWonMVP, "C++: PriWrapper::NotifyWonMVP() --> void");
		cl.def("IsInvalidName", (bool (PriWrapper::*)()) &PriWrapper::IsInvalidName, "C++: PriWrapper::IsInvalidName() --> bool");
		cl.def("IsInWarmUpMode", (bool (PriWrapper::*)()) &PriWrapper::IsInWarmUpMode, "C++: PriWrapper::IsInWarmUpMode() --> bool");
		cl.def("SetReady", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetReady, "C++: PriWrapper::SetReady(unsigned long) --> void", "bNewReady"_a);
		cl.def("ServerMatchAdminSetPaused", (void (PriWrapper::*)(unsigned long)) &PriWrapper::ServerMatchAdminSetPaused, "C++: PriWrapper::ServerMatchAdminSetPaused(unsigned long) --> void", "bPause"_a);
		cl.def("ServerMatchAdminSetScoreAndTime", (void (PriWrapper::*)(int, int, int, unsigned long, unsigned long)) &PriWrapper::ServerMatchAdminSetScoreAndTime, "C++: PriWrapper::ServerMatchAdminSetScoreAndTime(int, int, int, unsigned long, unsigned long) --> void", "NewScoreTeam0"_a, "NewScoreTeam1"_a, "SecondsRemaining"_a, "bOverTime"_a, "bRestartRound"_a);
		cl.def("SetMatchAdmin", (void (PriWrapper::*)(unsigned long)) &PriWrapper::SetMatchAdmin, "C++: PriWrapper::SetMatchAdmin(unsigned long) --> void", "bIsMatchAdmin"_a);
		cl.def("ServerReadyUp", (void (PriWrapper::*)()) &PriWrapper::ServerReadyUp, "C++: PriWrapper::ServerReadyUp() --> void");
		cl.def("ShouldBroadCastWelcomeMessage", (bool (PriWrapper::*)(unsigned long)) &PriWrapper::ShouldBroadCastWelcomeMessage, "C++: PriWrapper::ShouldBroadCastWelcomeMessage(unsigned long) --> bool", "bExiting"_a);
		cl.def("UpdateOnlineProductStats", (void (PriWrapper::*)()) &PriWrapper::UpdateOnlineProductStats, "C++: PriWrapper::UpdateOnlineProductStats() --> void");
		cl.def("SetWaitingStartTime2", (void (PriWrapper::*)()) &PriWrapper::SetWaitingStartTime2, "C++: PriWrapper::SetWaitingStartTime2() --> void");
		cl.def("OnRespawnTimeRemainingChanged", (void (PriWrapper::*)()) &PriWrapper::OnRespawnTimeRemainingChanged, "C++: PriWrapper::OnRespawnTimeRemainingChanged() --> void");
		cl.def("SetRespawnTime2", (void (PriWrapper::*)(int)) &PriWrapper::SetRespawnTime2, "C++: PriWrapper::SetRespawnTime2(int) --> void", "NewTime"_a);
		cl.def("ClientScoredGoal", (void (PriWrapper::*)(struct Vector &)) &PriWrapper::ClientScoredGoal, "C++: PriWrapper::ClientScoredGoal(struct Vector &) --> void", "BallHitLocation"_a);
		cl.def("OnScoredGoal", (void (PriWrapper::*)(struct Vector &)) &PriWrapper::OnScoredGoal, "C++: PriWrapper::OnScoredGoal(struct Vector &) --> void", "BallHitLocation"_a);
		cl.def("OnRep_SteeringSensitivity", (void (PriWrapper::*)()) &PriWrapper::OnRep_SteeringSensitivity, "C++: PriWrapper::OnRep_SteeringSensitivity() --> void");
		cl.def("OnRep_ClientScorePoint", (void (PriWrapper::*)()) &PriWrapper::OnRep_ClientScorePoint, "C++: PriWrapper::OnRep_ClientScorePoint() --> void");
		cl.def("ResetScore", (void (PriWrapper::*)()) &PriWrapper::ResetScore, "C++: PriWrapper::ResetScore() --> void");
		cl.def("RemovePoints", (void (PriWrapper::*)(int)) &PriWrapper::RemovePoints, "C++: PriWrapper::RemovePoints(int) --> void", "Points"_a);
		cl.def("ScorePoint2", (void (PriWrapper::*)(int)) &PriWrapper::ScorePoint2, "C++: PriWrapper::ScorePoint2(int) --> void", "AdditionalScore"_a);
		cl.def("CanAwardTimeRestrictedStatEvent", (bool (PriWrapper::*)()) &PriWrapper::CanAwardTimeRestrictedStatEvent, "C++: PriWrapper::CanAwardTimeRestrictedStatEvent() --> bool");
		cl.def("RecordTimeRestrictedStatEvent", (void (PriWrapper::*)()) &PriWrapper::RecordTimeRestrictedStatEvent, "C++: PriWrapper::RecordTimeRestrictedStatEvent() --> void");
		cl.def("ResetTimeRestrictedStatEvent", (void (PriWrapper::*)()) &PriWrapper::ResetTimeRestrictedStatEvent, "C++: PriWrapper::ResetTimeRestrictedStatEvent() --> void");
		cl.def("GetMatchXP", (int (PriWrapper::*)()) &PriWrapper::GetMatchXP, "C++: PriWrapper::GetMatchXP() --> int");
		cl.def("CommitStats", (void (PriWrapper::*)()) &PriWrapper::CommitStats, "C++: PriWrapper::CommitStats() --> void");
		cl.def("UpdateFromLoadout", (void (PriWrapper::*)()) &PriWrapper::UpdateFromLoadout, "C++: PriWrapper::UpdateFromLoadout() --> void");
		cl.def("UpdateUserCarPreferences", (void (PriWrapper::*)(class AirControlComponentWrapper)) &PriWrapper::UpdateUserCarPreferences, "C++: PriWrapper::UpdateUserCarPreferences(class AirControlComponentWrapper) --> void", "AirControlComponent"_a);
		cl.def("HandleAirControl", (void (PriWrapper::*)(class AirControlComponentWrapper)) &PriWrapper::HandleAirControl, "C++: PriWrapper::HandleAirControl(class AirControlComponentWrapper) --> void", "AirControlComp"_a);
		cl.def("SetCar2", (void (PriWrapper::*)(class CarWrapper)) &PriWrapper::SetCar2, "C++: PriWrapper::SetCar2(class CarWrapper) --> void", "NewCar"_a);
		cl.def("IsClientPlayerPRI", (bool (PriWrapper::*)()) &PriWrapper::IsClientPlayerPRI, "C++: PriWrapper::IsClientPlayerPRI() --> bool");
		cl.def("IsLocalPlayerPRI", (bool (PriWrapper::*)()) &PriWrapper::IsLocalPlayerPRI, "C++: PriWrapper::IsLocalPlayerPRI() --> bool");
		cl.def("Unregister", (void (PriWrapper::*)()) &PriWrapper::Unregister, "C++: PriWrapper::Unregister() --> void");
		cl.def("AddLocalPlayerToGameEvent", (void (PriWrapper::*)()) &PriWrapper::AddLocalPlayerToGameEvent, "C++: PriWrapper::AddLocalPlayerToGameEvent() --> void");
		cl.def("OnLoadoutsSetInternal", (void (PriWrapper::*)()) &PriWrapper::OnLoadoutsSetInternal, "C++: PriWrapper::OnLoadoutsSetInternal() --> void");
		cl.def("AreLoadoutsSet", (bool (PriWrapper::*)()) &PriWrapper::AreLoadoutsSet, "C++: PriWrapper::AreLoadoutsSet() --> bool");
		cl.def("OnLoadoutsOnlineSet", (void (PriWrapper::*)()) &PriWrapper::OnLoadoutsOnlineSet, "C++: PriWrapper::OnLoadoutsOnlineSet() --> void");
		cl.def("OnLoadoutsSet2", (void (PriWrapper::*)()) &PriWrapper::OnLoadoutsSet2, "C++: PriWrapper::OnLoadoutsSet2() --> void");
		cl.def("RemoveCertifiedProductStat", (void (PriWrapper::*)(unsigned long long)) &PriWrapper::RemoveCertifiedProductStat, "C++: PriWrapper::RemoveCertifiedProductStat(unsigned long long) --> void", "InstanceID"_a);
		cl.def("InitLoadoutAttributesForTeam", (void (PriWrapper::*)(class PriXWrapper)) &PriWrapper::InitLoadoutAttributesForTeam, "C++: PriWrapper::InitLoadoutAttributesForTeam(class PriXWrapper) --> void", "PRI"_a);
		cl.def("ShouldValidateOnlineProducts", (bool (PriWrapper::*)()) &PriWrapper::ShouldValidateOnlineProducts, "C++: PriWrapper::ShouldValidateOnlineProducts() --> bool");
		cl.def("OnSplitScreenStatusChanged", (void (PriWrapper::*)()) &PriWrapper::OnSplitScreenStatusChanged, "C++: PriWrapper::OnSplitScreenStatusChanged() --> void");
		cl.def("ServerSplitScreenStatusChanged", (void (PriWrapper::*)(unsigned long)) &PriWrapper::ServerSplitScreenStatusChanged, "C++: PriWrapper::ServerSplitScreenStatusChanged(unsigned long) --> void", "bInSplitScreen"_a);
		cl.def("UpdateSplitScreenStatus", (void (PriWrapper::*)()) &PriWrapper::UpdateSplitScreenStatus, "C++: PriWrapper::UpdateSplitScreenStatus() --> void");
		cl.def("OnPartyLeaderChanged", (void (PriWrapper::*)()) &PriWrapper::OnPartyLeaderChanged, "C++: PriWrapper::OnPartyLeaderChanged() --> void");
		cl.def("ServerSetPartyLeader", (void (PriWrapper::*)(struct SteamID &, unsigned long)) &PriWrapper::ServerSetPartyLeader, "C++: PriWrapper::ServerSetPartyLeader(struct SteamID &, unsigned long) --> void", "InPartyLeader"_a, "bInParty"_a);
		cl.def("SetPartyLeader2", (void (PriWrapper::*)(struct SteamID &, unsigned long)) &PriWrapper::SetPartyLeader2, "C++: PriWrapper::SetPartyLeader2(struct SteamID &, unsigned long) --> void", "InPartyLeader"_a, "bInParty"_a);
		cl.def("UpdatePartyStatus", (void (PriWrapper::*)()) &PriWrapper::UpdatePartyStatus, "C++: PriWrapper::UpdatePartyStatus() --> void");
		cl.def("OnSkillTierChanged", (void (PriWrapper::*)()) &PriWrapper::OnSkillTierChanged, "C++: PriWrapper::OnSkillTierChanged() --> void");
		cl.def("ReplicateSkillTier", (void (PriWrapper::*)(int)) &PriWrapper::ReplicateSkillTier, "C++: PriWrapper::ReplicateSkillTier(int) --> void", "NewTier"_a);
		cl.def("OnTitleChanged", (void (PriWrapper::*)()) &PriWrapper::OnTitleChanged, "C++: PriWrapper::OnTitleChanged() --> void");
		cl.def("SyncPlayerTitle", (void (PriWrapper::*)()) &PriWrapper::SyncPlayerTitle, "C++: PriWrapper::SyncPlayerTitle() --> void");
		cl.def("UpdateTitleFromLoadout", (void (PriWrapper::*)()) &PriWrapper::UpdateTitleFromLoadout, "C++: PriWrapper::UpdateTitleFromLoadout() --> void");
		cl.def("UpdateTitle2", (void (PriWrapper::*)()) &PriWrapper::UpdateTitle2, "C++: PriWrapper::UpdateTitle2() --> void");
		cl.def("GetNewFriendKey", (void (PriWrapper::*)()) &PriWrapper::GetNewFriendKey, "C++: PriWrapper::GetNewFriendKey() --> void");
		cl.def("ServerSetPlayerHistoryKey", (void (PriWrapper::*)(unsigned char *)) &PriWrapper::ServerSetPlayerHistoryKey, "C++: PriWrapper::ServerSetPlayerHistoryKey(unsigned char *) --> void", "HistoryKeyArray"_a);
		cl.def("OnRep_UniqueId", (void (PriWrapper::*)()) &PriWrapper::OnRep_UniqueId, "C++: PriWrapper::OnRep_UniqueId() --> void");
		cl.def("EventOwnerChanged", (void (PriWrapper::*)(class PriWrapper)) &PriWrapper::EventOwnerChanged, "C++: PriWrapper::EventOwnerChanged(class PriWrapper) --> void", "PRI"_a);
		cl.def("EventSpectatorShortcutChanged", (void (PriWrapper::*)(class PriWrapper)) &PriWrapper::EventSpectatorShortcutChanged, "C++: PriWrapper::EventSpectatorShortcutChanged(class PriWrapper) --> void", "PRI"_a);
		cl.def("EventServerAchievementProgression", (void (PriWrapper::*)(class PriWrapper, int, unsigned char, float, float)) &PriWrapper::EventServerAchievementProgression, "C++: PriWrapper::EventServerAchievementProgression(class PriWrapper, int, unsigned char, float, float) --> void", "PRI"_a, "AchievementId"_a, "AchievementType"_a, "Progress"_a, "MaxProgress"_a);
		cl.def("EventStartVoteToForfeitDisabledChanged", (void (PriWrapper::*)(class PriWrapper)) &PriWrapper::EventStartVoteToForfeitDisabledChanged, "C++: PriWrapper::EventStartVoteToForfeitDisabledChanged(class PriWrapper) --> void", "PRI"_a);
		cl.def("EventCarPreUpdate", (void (PriWrapper::*)(class PriWrapper)) &PriWrapper::EventCarPreUpdate, "C++: PriWrapper::EventCarPreUpdate(class PriWrapper) --> void", "PRI"_a);
		cl.def("EventVanityChanged", (void (PriWrapper::*)()) &PriWrapper::EventVanityChanged, "C++: PriWrapper::EventVanityChanged() --> void");
	}
}
