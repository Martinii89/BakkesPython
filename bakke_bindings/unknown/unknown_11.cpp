#include "pch.h"
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameEvent/ReplaySoccarWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/AirControlComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_unknown_unknown_11(py::module &M)
{
	{ // ReplayWrapper file: line:9
		pybind11::class_<ReplayWrapper, std::shared_ptr<ReplayWrapper>, ObjectWrapper> cl(M, "ReplayWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ReplayWrapper const &o){ return new ReplayWrapper(o); } ) );
		cl.def("assign", (class ReplayWrapper & (ReplayWrapper::*)(class ReplayWrapper)) &ReplayWrapper::operator=, "C++: ReplayWrapper::operator=(class ReplayWrapper) --> class ReplayWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetReplayName", (class UnrealStringWrapper (ReplayWrapper::*)()) &ReplayWrapper::GetReplayName, "C++: ReplayWrapper::GetReplayName() --> class UnrealStringWrapper");
		cl.def("GetEngineVersion", (int (ReplayWrapper::*)()) &ReplayWrapper::GetEngineVersion, "C++: ReplayWrapper::GetEngineVersion() --> int");
		cl.def("SetEngineVersion", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetEngineVersion, "C++: ReplayWrapper::SetEngineVersion(int) --> void", "newEngineVersion"_a);
		cl.def("GetLicenseeVersion", (int (ReplayWrapper::*)()) &ReplayWrapper::GetLicenseeVersion, "C++: ReplayWrapper::GetLicenseeVersion() --> int");
		cl.def("SetLicenseeVersion", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetLicenseeVersion, "C++: ReplayWrapper::SetLicenseeVersion(int) --> void", "newLicenseeVersion"_a);
		cl.def("GetNetVersion", (int (ReplayWrapper::*)()) &ReplayWrapper::GetNetVersion, "C++: ReplayWrapper::GetNetVersion() --> int");
		cl.def("SetNetVersion", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetNetVersion, "C++: ReplayWrapper::SetNetVersion(int) --> void", "newNetVersion"_a);
		cl.def("GetReplayVersion", (int (ReplayWrapper::*)()) &ReplayWrapper::GetReplayVersion, "C++: ReplayWrapper::GetReplayVersion() --> int");
		cl.def("SetReplayVersion", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetReplayVersion, "C++: ReplayWrapper::SetReplayVersion(int) --> void", "newReplayVersion"_a);
		cl.def("GetReplayLastSaveVersion", (int (ReplayWrapper::*)()) &ReplayWrapper::GetReplayLastSaveVersion, "C++: ReplayWrapper::GetReplayLastSaveVersion() --> int");
		cl.def("SetReplayLastSaveVersion", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetReplayLastSaveVersion, "C++: ReplayWrapper::SetReplayLastSaveVersion(int) --> void", "newReplayLastSaveVersion"_a);
		cl.def("GetGameVersion", (int (ReplayWrapper::*)()) &ReplayWrapper::GetGameVersion, "C++: ReplayWrapper::GetGameVersion() --> int");
		cl.def("SetGameVersion", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetGameVersion, "C++: ReplayWrapper::SetGameVersion(int) --> void", "newGameVersion"_a);
		cl.def("GetBuildID", (int (ReplayWrapper::*)()) &ReplayWrapper::GetBuildID, "C++: ReplayWrapper::GetBuildID() --> int");
		cl.def("SetBuildID", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetBuildID, "C++: ReplayWrapper::SetBuildID(int) --> void", "newBuildID"_a);
		cl.def("GetChangelist", (int (ReplayWrapper::*)()) &ReplayWrapper::GetChangelist, "C++: ReplayWrapper::GetChangelist() --> int");
		cl.def("SetChangelist", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetChangelist, "C++: ReplayWrapper::SetChangelist(int) --> void", "newChangelist"_a);
		cl.def("GetBuildVersion", (class UnrealStringWrapper (ReplayWrapper::*)()) &ReplayWrapper::GetBuildVersion, "C++: ReplayWrapper::GetBuildVersion() --> class UnrealStringWrapper");
		cl.def("GetReserveMegabytes", (int (ReplayWrapper::*)()) &ReplayWrapper::GetReserveMegabytes, "C++: ReplayWrapper::GetReserveMegabytes() --> int");
		cl.def("SetReserveMegabytes", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetReserveMegabytes, "C++: ReplayWrapper::SetReserveMegabytes(int) --> void", "newReserveMegabytes"_a);
		cl.def("GetRecordFPS", (float (ReplayWrapper::*)()) &ReplayWrapper::GetRecordFPS, "C++: ReplayWrapper::GetRecordFPS() --> float");
		cl.def("SetRecordFPS", (void (ReplayWrapper::*)(float)) &ReplayWrapper::SetRecordFPS, "C++: ReplayWrapper::SetRecordFPS(float) --> void", "newRecordFPS"_a);
		cl.def("GetKeyframeDelay", (float (ReplayWrapper::*)()) &ReplayWrapper::GetKeyframeDelay, "C++: ReplayWrapper::GetKeyframeDelay() --> float");
		cl.def("SetKeyframeDelay", (void (ReplayWrapper::*)(float)) &ReplayWrapper::SetKeyframeDelay, "C++: ReplayWrapper::SetKeyframeDelay(float) --> void", "newKeyframeDelay"_a);
		cl.def("GetMaxChannels", (int (ReplayWrapper::*)()) &ReplayWrapper::GetMaxChannels, "C++: ReplayWrapper::GetMaxChannels() --> int");
		cl.def("SetMaxChannels", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetMaxChannels, "C++: ReplayWrapper::SetMaxChannels(int) --> void", "newMaxChannels"_a);
		cl.def("GetMaxReplaySizeMB", (int (ReplayWrapper::*)()) &ReplayWrapper::GetMaxReplaySizeMB, "C++: ReplayWrapper::GetMaxReplaySizeMB() --> int");
		cl.def("SetMaxReplaySizeMB", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetMaxReplaySizeMB, "C++: ReplayWrapper::SetMaxReplaySizeMB(int) --> void", "newMaxReplaySizeMB"_a);
		cl.def("GetFilename", (class UnrealStringWrapper (ReplayWrapper::*)()) &ReplayWrapper::GetFilename, "C++: ReplayWrapper::GetFilename() --> class UnrealStringWrapper");
		cl.def("GetId", (class UnrealStringWrapper (ReplayWrapper::*)()) &ReplayWrapper::GetId, "C++: ReplayWrapper::GetId() --> class UnrealStringWrapper");
		cl.def("GetDate", (class UnrealStringWrapper (ReplayWrapper::*)()) &ReplayWrapper::GetDate, "C++: ReplayWrapper::GetDate() --> class UnrealStringWrapper");
		cl.def("GetNumFrames", (int (ReplayWrapper::*)()) &ReplayWrapper::GetNumFrames, "C++: ReplayWrapper::GetNumFrames() --> int");
		cl.def("SetNumFrames", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetNumFrames, "C++: ReplayWrapper::SetNumFrames(int) --> void", "newNumFrames"_a);
		cl.def("GetPlayerName", (class UnrealStringWrapper (ReplayWrapper::*)()) &ReplayWrapper::GetPlayerName, "C++: ReplayWrapper::GetPlayerName() --> class UnrealStringWrapper");
		cl.def("GetbFileCorrupted", (unsigned long (ReplayWrapper::*)()) &ReplayWrapper::GetbFileCorrupted, "C++: ReplayWrapper::GetbFileCorrupted() --> unsigned long");
		cl.def("SetbFileCorrupted", (void (ReplayWrapper::*)(unsigned long)) &ReplayWrapper::SetbFileCorrupted, "C++: ReplayWrapper::SetbFileCorrupted(unsigned long) --> void", "newbFileCorrupted"_a);
		cl.def("GetbForceKeyframe", (unsigned long (ReplayWrapper::*)()) &ReplayWrapper::GetbForceKeyframe, "C++: ReplayWrapper::GetbForceKeyframe() --> unsigned long");
		cl.def("SetbForceKeyframe", (void (ReplayWrapper::*)(unsigned long)) &ReplayWrapper::SetbForceKeyframe, "C++: ReplayWrapper::SetbForceKeyframe(unsigned long) --> void", "newbForceKeyframe"_a);
		cl.def("GetbLoadedNetPackages", (unsigned long (ReplayWrapper::*)()) &ReplayWrapper::GetbLoadedNetPackages, "C++: ReplayWrapper::GetbLoadedNetPackages() --> unsigned long");
		cl.def("SetbLoadedNetPackages", (void (ReplayWrapper::*)(unsigned long)) &ReplayWrapper::SetbLoadedNetPackages, "C++: ReplayWrapper::SetbLoadedNetPackages(unsigned long) --> void", "newbLoadedNetPackages"_a);
		cl.def("GetbDebug", (unsigned long (ReplayWrapper::*)()) &ReplayWrapper::GetbDebug, "C++: ReplayWrapper::GetbDebug() --> unsigned long");
		cl.def("SetbDebug", (void (ReplayWrapper::*)(unsigned long)) &ReplayWrapper::SetbDebug, "C++: ReplayWrapper::SetbDebug(unsigned long) --> void", "newbDebug"_a);
		cl.def("GetReplayState", (unsigned char (ReplayWrapper::*)()) &ReplayWrapper::GetReplayState, "C++: ReplayWrapper::GetReplayState() --> unsigned char");
		cl.def("SetReplayState", (void (ReplayWrapper::*)(unsigned char)) &ReplayWrapper::SetReplayState, "C++: ReplayWrapper::SetReplayState(unsigned char) --> void", "newReplayState"_a);
		cl.def("GetCurrentFrame", (int (ReplayWrapper::*)()) &ReplayWrapper::GetCurrentFrame, "C++: ReplayWrapper::GetCurrentFrame() --> int");
		cl.def("SetCurrentFrame", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetCurrentFrame, "C++: ReplayWrapper::SetCurrentFrame(int) --> void", "newCurrentFrame"_a);
		cl.def("GetNextKeyframe", (int (ReplayWrapper::*)()) &ReplayWrapper::GetNextKeyframe, "C++: ReplayWrapper::GetNextKeyframe() --> int");
		cl.def("SetNextKeyframe", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetNextKeyframe, "C++: ReplayWrapper::SetNextKeyframe(int) --> void", "newNextKeyframe"_a);
		//cl.def("GetCurrentTime", (float (ReplayWrapper::*)()) &ReplayWrapper::GetCurrentTime, "C++: ReplayWrapper::GetCurrentTime() --> float");
		cl.def("SetCurrentTime", (void (ReplayWrapper::*)(float)) &ReplayWrapper::SetCurrentTime, "C++: ReplayWrapper::SetCurrentTime(float) --> void", "newCurrentTime"_a);
		cl.def("GetAccumulatedDeltaTime", (float (ReplayWrapper::*)()) &ReplayWrapper::GetAccumulatedDeltaTime, "C++: ReplayWrapper::GetAccumulatedDeltaTime() --> float");
		cl.def("SetAccumulatedDeltaTime", (void (ReplayWrapper::*)(float)) &ReplayWrapper::SetAccumulatedDeltaTime, "C++: ReplayWrapper::SetAccumulatedDeltaTime(float) --> void", "newAccumulatedDeltaTime"_a);
		cl.def("GetTimeToSkipTo", (float (ReplayWrapper::*)()) &ReplayWrapper::GetTimeToSkipTo, "C++: ReplayWrapper::GetTimeToSkipTo() --> float");
		cl.def("SetTimeToSkipTo", (void (ReplayWrapper::*)(float)) &ReplayWrapper::SetTimeToSkipTo, "C++: ReplayWrapper::SetTimeToSkipTo(float) --> void", "newTimeToSkipTo"_a);
		cl.def("GetFrameToSkipTo", (int (ReplayWrapper::*)()) &ReplayWrapper::GetFrameToSkipTo, "C++: ReplayWrapper::GetFrameToSkipTo() --> int");
		cl.def("SetFrameToSkipTo", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetFrameToSkipTo, "C++: ReplayWrapper::SetFrameToSkipTo(int) --> void", "newFrameToSkipTo"_a);
		cl.def("GetPlayersOnlyTicks", (int (ReplayWrapper::*)()) &ReplayWrapper::GetPlayersOnlyTicks, "C++: ReplayWrapper::GetPlayersOnlyTicks() --> int");
		cl.def("SetPlayersOnlyTicks", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetPlayersOnlyTicks, "C++: ReplayWrapper::SetPlayersOnlyTicks(int) --> void", "newPlayersOnlyTicks"_a);
		cl.def("GetPlaybackTime", (float (ReplayWrapper::*)()) &ReplayWrapper::GetPlaybackTime, "C++: ReplayWrapper::GetPlaybackTime() --> float");
		cl.def("IsFromBeforeGameVersion", (bool (ReplayWrapper::*)(unsigned char)) &ReplayWrapper::IsFromBeforeGameVersion, "C++: ReplayWrapper::IsFromBeforeGameVersion(unsigned char) --> bool", "BeforeGameVersion"_a);
		cl.def("IsFromBeforeReplayVersion", (bool (ReplayWrapper::*)(unsigned char)) &ReplayWrapper::IsFromBeforeReplayVersion, "C++: ReplayWrapper::IsFromBeforeReplayVersion(unsigned char) --> bool", "BeforeReplayVersion"_a);
		cl.def("SetReplayName", (void (ReplayWrapper::*)(std::string)) &ReplayWrapper::SetReplayName, "C++: ReplayWrapper::SetReplayName(std::string) --> void", "NewName"_a);
		cl.def("RemoveTimelineKeyframe", (void (ReplayWrapper::*)(int)) &ReplayWrapper::RemoveTimelineKeyframe, "C++: ReplayWrapper::RemoveTimelineKeyframe(int) --> void", "KeyframeIndex"_a);
		cl.def("eventTrimData", (void (ReplayWrapper::*)(int, int)) &ReplayWrapper::eventTrimData, "C++: ReplayWrapper::eventTrimData(int, int) --> void", "FirstKeyframe"_a, "FirstFrame"_a);
		cl.def("CreateCopy", (class ReplayWrapper (ReplayWrapper::*)(float)) &ReplayWrapper::CreateCopy, "C++: ReplayWrapper::CreateCopy(float) --> class ReplayWrapper", "StartTime"_a);
		cl.def("ImportReplay", (void (ReplayWrapper::*)(std::string)) &ReplayWrapper::ImportReplay, "C++: ReplayWrapper::ImportReplay(std::string) --> void", "Path"_a);
		cl.def("ExportReplay", (void (ReplayWrapper::*)(std::string)) &ReplayWrapper::ExportReplay, "C++: ReplayWrapper::ExportReplay(std::string) --> void", "Path"_a);
		cl.def("SkipToFrame", (void (ReplayWrapper::*)(int, unsigned long)) &ReplayWrapper::SkipToFrame, "C++: ReplayWrapper::SkipToFrame(int, unsigned long) --> void", "frame"_a, "bFlush"_a);
		cl.def("SkipToTime", (void (ReplayWrapper::*)(float, unsigned long)) &ReplayWrapper::SkipToTime, "C++: ReplayWrapper::SkipToTime(float, unsigned long) --> void", "Time"_a, "bFlush"_a);
		cl.def("GetReplayTimeSeconds", (float (ReplayWrapper::*)()) &ReplayWrapper::GetReplayTimeSeconds, "C++: ReplayWrapper::GetReplayTimeSeconds() --> float");
		cl.def("StopPlayback", (void (ReplayWrapper::*)()) &ReplayWrapper::StopPlayback, "C++: ReplayWrapper::StopPlayback() --> void");
		cl.def("StartPlaybackAtFrame", (void (ReplayWrapper::*)(int)) &ReplayWrapper::StartPlaybackAtFrame, "C++: ReplayWrapper::StartPlaybackAtFrame(int) --> void", "StartFrame"_a);
		cl.def("StartPlaybackAtTimeSeconds", (void (ReplayWrapper::*)(float)) &ReplayWrapper::StartPlaybackAtTimeSeconds, "C++: ReplayWrapper::StartPlaybackAtTimeSeconds(float) --> void", "StartTime"_a);
		cl.def("StopRecord", (void (ReplayWrapper::*)()) &ReplayWrapper::StopRecord, "C++: ReplayWrapper::StopRecord() --> void");
		cl.def("StartRecord", (void (ReplayWrapper::*)()) &ReplayWrapper::StartRecord, "C++: ReplayWrapper::StartRecord() --> void");
		cl.def("Tick2", (void (ReplayWrapper::*)(float)) &ReplayWrapper::Tick2, "C++: ReplayWrapper::Tick2(float) --> void", "DeltaTime"_a);
		cl.def("eventPreExport", (void (ReplayWrapper::*)()) &ReplayWrapper::eventPreExport, "C++: ReplayWrapper::eventPreExport() --> void");
		cl.def("EventPlayedFrame", (void (ReplayWrapper::*)(class ReplayWrapper)) &ReplayWrapper::EventPlayedFrame, "C++: ReplayWrapper::EventPlayedFrame(class ReplayWrapper) --> void", "Replay"_a);
		cl.def("EventPostTimeSkip", (void (ReplayWrapper::*)(class ReplayWrapper)) &ReplayWrapper::EventPostTimeSkip, "C++: ReplayWrapper::EventPostTimeSkip(class ReplayWrapper) --> void", "Replay"_a);
		cl.def("EventPreTimeSkip", (void (ReplayWrapper::*)(class ReplayWrapper)) &ReplayWrapper::EventPreTimeSkip, "C++: ReplayWrapper::EventPreTimeSkip(class ReplayWrapper) --> void", "Replay"_a);
		cl.def("EventSpawned", (void (ReplayWrapper::*)(class ReplayWrapper, class ActorWrapper)) &ReplayWrapper::EventSpawned, "C++: ReplayWrapper::EventSpawned(class ReplayWrapper, class ActorWrapper) --> void", "Replay"_a, "A"_a);
		cl.def("EventPlaybackStopped", (void (ReplayWrapper::*)(class ReplayWrapper)) &ReplayWrapper::EventPlaybackStopped, "C++: ReplayWrapper::EventPlaybackStopped(class ReplayWrapper) --> void", "Replay"_a);
	}
	{ // ReplaySoccarWrapper file:bakkesmod/wrappers/GameEvent/ReplaySoccarWrapper.h line:8
		pybind11::class_<ReplaySoccarWrapper, std::shared_ptr<ReplaySoccarWrapper>, ReplayWrapper> cl(M, "ReplaySoccarWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ReplaySoccarWrapper const &o){ return new ReplaySoccarWrapper(o); } ) );
		cl.def("assign", (class ReplaySoccarWrapper & (ReplaySoccarWrapper::*)(class ReplaySoccarWrapper)) &ReplaySoccarWrapper::operator=, "C++: ReplaySoccarWrapper::operator=(class ReplaySoccarWrapper) --> class ReplaySoccarWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetTeamSize", (int (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::GetTeamSize, "C++: ReplaySoccarWrapper::GetTeamSize() --> int");
		cl.def("SetTeamSize", (void (ReplaySoccarWrapper::*)(int)) &ReplaySoccarWrapper::SetTeamSize, "C++: ReplaySoccarWrapper::SetTeamSize(int) --> void", "newTeamSize"_a);
		cl.def("GetUnfairTeamSize", (int (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::GetUnfairTeamSize, "C++: ReplaySoccarWrapper::GetUnfairTeamSize() --> int");
		cl.def("SetUnfairTeamSize", (void (ReplaySoccarWrapper::*)(int)) &ReplaySoccarWrapper::SetUnfairTeamSize, "C++: ReplaySoccarWrapper::SetUnfairTeamSize(int) --> void", "newUnfairTeamSize"_a);
		cl.def("GetbUnfairBots", (unsigned long (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::GetbUnfairBots, "C++: ReplaySoccarWrapper::GetbUnfairBots() --> unsigned long");
		cl.def("SetbUnfairBots", (void (ReplaySoccarWrapper::*)(unsigned long)) &ReplaySoccarWrapper::SetbUnfairBots, "C++: ReplaySoccarWrapper::SetbUnfairBots(unsigned long) --> void", "newbUnfairBots"_a);
		cl.def("GetPrimaryPlayerTeam", (int (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::GetPrimaryPlayerTeam, "C++: ReplaySoccarWrapper::GetPrimaryPlayerTeam() --> int");
		cl.def("SetPrimaryPlayerTeam", (void (ReplaySoccarWrapper::*)(int)) &ReplaySoccarWrapper::SetPrimaryPlayerTeam, "C++: ReplaySoccarWrapper::SetPrimaryPlayerTeam(int) --> void", "newPrimaryPlayerTeam"_a);
		cl.def("GetTeam0Score", (int (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::GetTeam0Score, "C++: ReplaySoccarWrapper::GetTeam0Score() --> int");
		cl.def("SetTeam0Score", (void (ReplaySoccarWrapper::*)(int)) &ReplaySoccarWrapper::SetTeam0Score, "C++: ReplaySoccarWrapper::SetTeam0Score(int) --> void", "newTeam0Score"_a);
		cl.def("GetTeam1Score", (int (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::GetTeam1Score, "C++: ReplaySoccarWrapper::GetTeam1Score() --> int");
		cl.def("SetTeam1Score", (void (ReplaySoccarWrapper::*)(int)) &ReplaySoccarWrapper::SetTeam1Score, "C++: ReplaySoccarWrapper::SetTeam1Score(int) --> void", "newTeam1Score"_a);
		cl.def("eventPreExport", (void (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::eventPreExport, "C++: ReplaySoccarWrapper::eventPreExport() --> void");
		cl.def("RemoveTimelineKeyframe", (void (ReplaySoccarWrapper::*)(int)) &ReplaySoccarWrapper::RemoveTimelineKeyframe, "C++: ReplaySoccarWrapper::RemoveTimelineKeyframe(int) --> void", "KeyframeIndex"_a);
		cl.def("RecordUserEvent", (void (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::RecordUserEvent, "C++: ReplaySoccarWrapper::RecordUserEvent() --> void");
		cl.def("AddPlayer", (void (ReplaySoccarWrapper::*)(class PriWrapper)) &ReplaySoccarWrapper::AddPlayer, "C++: ReplaySoccarWrapper::AddPlayer(class PriWrapper) --> void", "PRI"_a);
	}
}
