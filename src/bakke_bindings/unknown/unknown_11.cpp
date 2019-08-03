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
		cl.def("assign", (class ReplayWrapper & (ReplayWrapper::*)(class ReplayWrapper)) &ReplayWrapper::operator=, "C++: ReplayWrapper::operator=(class ReplayWrapper) --> class ReplayWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetReplayName", (class UnrealStringWrapper (ReplayWrapper::*)()) &ReplayWrapper::GetReplayName, "C++: ReplayWrapper::GetReplayName() --> class UnrealStringWrapper");
		cl.def("GetEngineVersion", (int (ReplayWrapper::*)()) &ReplayWrapper::GetEngineVersion, "C++: ReplayWrapper::GetEngineVersion() --> int");
		cl.def("SetEngineVersion", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetEngineVersion, "C++: ReplayWrapper::SetEngineVersion(int) --> void", pybind11::arg("newEngineVersion"));
		cl.def("GetLicenseeVersion", (int (ReplayWrapper::*)()) &ReplayWrapper::GetLicenseeVersion, "C++: ReplayWrapper::GetLicenseeVersion() --> int");
		cl.def("SetLicenseeVersion", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetLicenseeVersion, "C++: ReplayWrapper::SetLicenseeVersion(int) --> void", pybind11::arg("newLicenseeVersion"));
		cl.def("GetNetVersion", (int (ReplayWrapper::*)()) &ReplayWrapper::GetNetVersion, "C++: ReplayWrapper::GetNetVersion() --> int");
		cl.def("SetNetVersion", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetNetVersion, "C++: ReplayWrapper::SetNetVersion(int) --> void", pybind11::arg("newNetVersion"));
		cl.def("GetReplayVersion", (int (ReplayWrapper::*)()) &ReplayWrapper::GetReplayVersion, "C++: ReplayWrapper::GetReplayVersion() --> int");
		cl.def("SetReplayVersion", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetReplayVersion, "C++: ReplayWrapper::SetReplayVersion(int) --> void", pybind11::arg("newReplayVersion"));
		cl.def("GetReplayLastSaveVersion", (int (ReplayWrapper::*)()) &ReplayWrapper::GetReplayLastSaveVersion, "C++: ReplayWrapper::GetReplayLastSaveVersion() --> int");
		cl.def("SetReplayLastSaveVersion", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetReplayLastSaveVersion, "C++: ReplayWrapper::SetReplayLastSaveVersion(int) --> void", pybind11::arg("newReplayLastSaveVersion"));
		cl.def("GetGameVersion", (int (ReplayWrapper::*)()) &ReplayWrapper::GetGameVersion, "C++: ReplayWrapper::GetGameVersion() --> int");
		cl.def("SetGameVersion", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetGameVersion, "C++: ReplayWrapper::SetGameVersion(int) --> void", pybind11::arg("newGameVersion"));
		cl.def("GetBuildID", (int (ReplayWrapper::*)()) &ReplayWrapper::GetBuildID, "C++: ReplayWrapper::GetBuildID() --> int");
		cl.def("SetBuildID", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetBuildID, "C++: ReplayWrapper::SetBuildID(int) --> void", pybind11::arg("newBuildID"));
		cl.def("GetChangelist", (int (ReplayWrapper::*)()) &ReplayWrapper::GetChangelist, "C++: ReplayWrapper::GetChangelist() --> int");
		cl.def("SetChangelist", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetChangelist, "C++: ReplayWrapper::SetChangelist(int) --> void", pybind11::arg("newChangelist"));
		cl.def("GetBuildVersion", (class UnrealStringWrapper (ReplayWrapper::*)()) &ReplayWrapper::GetBuildVersion, "C++: ReplayWrapper::GetBuildVersion() --> class UnrealStringWrapper");
		cl.def("GetReserveMegabytes", (int (ReplayWrapper::*)()) &ReplayWrapper::GetReserveMegabytes, "C++: ReplayWrapper::GetReserveMegabytes() --> int");
		cl.def("SetReserveMegabytes", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetReserveMegabytes, "C++: ReplayWrapper::SetReserveMegabytes(int) --> void", pybind11::arg("newReserveMegabytes"));
		cl.def("GetRecordFPS", (float (ReplayWrapper::*)()) &ReplayWrapper::GetRecordFPS, "C++: ReplayWrapper::GetRecordFPS() --> float");
		cl.def("SetRecordFPS", (void (ReplayWrapper::*)(float)) &ReplayWrapper::SetRecordFPS, "C++: ReplayWrapper::SetRecordFPS(float) --> void", pybind11::arg("newRecordFPS"));
		cl.def("GetKeyframeDelay", (float (ReplayWrapper::*)()) &ReplayWrapper::GetKeyframeDelay, "C++: ReplayWrapper::GetKeyframeDelay() --> float");
		cl.def("SetKeyframeDelay", (void (ReplayWrapper::*)(float)) &ReplayWrapper::SetKeyframeDelay, "C++: ReplayWrapper::SetKeyframeDelay(float) --> void", pybind11::arg("newKeyframeDelay"));
		cl.def("GetMaxChannels", (int (ReplayWrapper::*)()) &ReplayWrapper::GetMaxChannels, "C++: ReplayWrapper::GetMaxChannels() --> int");
		cl.def("SetMaxChannels", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetMaxChannels, "C++: ReplayWrapper::SetMaxChannels(int) --> void", pybind11::arg("newMaxChannels"));
		cl.def("GetMaxReplaySizeMB", (int (ReplayWrapper::*)()) &ReplayWrapper::GetMaxReplaySizeMB, "C++: ReplayWrapper::GetMaxReplaySizeMB() --> int");
		cl.def("SetMaxReplaySizeMB", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetMaxReplaySizeMB, "C++: ReplayWrapper::SetMaxReplaySizeMB(int) --> void", pybind11::arg("newMaxReplaySizeMB"));
		cl.def("GetFilename", (class UnrealStringWrapper (ReplayWrapper::*)()) &ReplayWrapper::GetFilename, "C++: ReplayWrapper::GetFilename() --> class UnrealStringWrapper");
		cl.def("GetId", (class UnrealStringWrapper (ReplayWrapper::*)()) &ReplayWrapper::GetId, "C++: ReplayWrapper::GetId() --> class UnrealStringWrapper");
		cl.def("GetDate", (class UnrealStringWrapper (ReplayWrapper::*)()) &ReplayWrapper::GetDate, "C++: ReplayWrapper::GetDate() --> class UnrealStringWrapper");
		cl.def("GetNumFrames", (int (ReplayWrapper::*)()) &ReplayWrapper::GetNumFrames, "C++: ReplayWrapper::GetNumFrames() --> int");
		cl.def("SetNumFrames", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetNumFrames, "C++: ReplayWrapper::SetNumFrames(int) --> void", pybind11::arg("newNumFrames"));
		cl.def("GetPlayerName", (class UnrealStringWrapper (ReplayWrapper::*)()) &ReplayWrapper::GetPlayerName, "C++: ReplayWrapper::GetPlayerName() --> class UnrealStringWrapper");
		cl.def("GetbFileCorrupted", (unsigned long (ReplayWrapper::*)()) &ReplayWrapper::GetbFileCorrupted, "C++: ReplayWrapper::GetbFileCorrupted() --> unsigned long");
		cl.def("SetbFileCorrupted", (void (ReplayWrapper::*)(unsigned long)) &ReplayWrapper::SetbFileCorrupted, "C++: ReplayWrapper::SetbFileCorrupted(unsigned long) --> void", pybind11::arg("newbFileCorrupted"));
		cl.def("GetbForceKeyframe", (unsigned long (ReplayWrapper::*)()) &ReplayWrapper::GetbForceKeyframe, "C++: ReplayWrapper::GetbForceKeyframe() --> unsigned long");
		cl.def("SetbForceKeyframe", (void (ReplayWrapper::*)(unsigned long)) &ReplayWrapper::SetbForceKeyframe, "C++: ReplayWrapper::SetbForceKeyframe(unsigned long) --> void", pybind11::arg("newbForceKeyframe"));
		cl.def("GetbLoadedNetPackages", (unsigned long (ReplayWrapper::*)()) &ReplayWrapper::GetbLoadedNetPackages, "C++: ReplayWrapper::GetbLoadedNetPackages() --> unsigned long");
		cl.def("SetbLoadedNetPackages", (void (ReplayWrapper::*)(unsigned long)) &ReplayWrapper::SetbLoadedNetPackages, "C++: ReplayWrapper::SetbLoadedNetPackages(unsigned long) --> void", pybind11::arg("newbLoadedNetPackages"));
		cl.def("GetbDebug", (unsigned long (ReplayWrapper::*)()) &ReplayWrapper::GetbDebug, "C++: ReplayWrapper::GetbDebug() --> unsigned long");
		cl.def("SetbDebug", (void (ReplayWrapper::*)(unsigned long)) &ReplayWrapper::SetbDebug, "C++: ReplayWrapper::SetbDebug(unsigned long) --> void", pybind11::arg("newbDebug"));
		cl.def("GetReplayState", (unsigned char (ReplayWrapper::*)()) &ReplayWrapper::GetReplayState, "C++: ReplayWrapper::GetReplayState() --> unsigned char");
		cl.def("SetReplayState", (void (ReplayWrapper::*)(unsigned char)) &ReplayWrapper::SetReplayState, "C++: ReplayWrapper::SetReplayState(unsigned char) --> void", pybind11::arg("newReplayState"));
		cl.def("GetCurrentFrame", (int (ReplayWrapper::*)()) &ReplayWrapper::GetCurrentFrame, "C++: ReplayWrapper::GetCurrentFrame() --> int");
		cl.def("SetCurrentFrame", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetCurrentFrame, "C++: ReplayWrapper::SetCurrentFrame(int) --> void", pybind11::arg("newCurrentFrame"));
		cl.def("GetNextKeyframe", (int (ReplayWrapper::*)()) &ReplayWrapper::GetNextKeyframe, "C++: ReplayWrapper::GetNextKeyframe() --> int");
		cl.def("SetNextKeyframe", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetNextKeyframe, "C++: ReplayWrapper::SetNextKeyframe(int) --> void", pybind11::arg("newNextKeyframe"));
		//cl.def("GetCurrentTime", (float (ReplayWrapper::*)()) &ReplayWrapper::GetCurrentTime, "C++: ReplayWrapper::GetCurrentTime() --> float");
		cl.def("SetCurrentTime", (void (ReplayWrapper::*)(float)) &ReplayWrapper::SetCurrentTime, "C++: ReplayWrapper::SetCurrentTime(float) --> void", pybind11::arg("newCurrentTime"));
		cl.def("GetAccumulatedDeltaTime", (float (ReplayWrapper::*)()) &ReplayWrapper::GetAccumulatedDeltaTime, "C++: ReplayWrapper::GetAccumulatedDeltaTime() --> float");
		cl.def("SetAccumulatedDeltaTime", (void (ReplayWrapper::*)(float)) &ReplayWrapper::SetAccumulatedDeltaTime, "C++: ReplayWrapper::SetAccumulatedDeltaTime(float) --> void", pybind11::arg("newAccumulatedDeltaTime"));
		cl.def("GetTimeToSkipTo", (float (ReplayWrapper::*)()) &ReplayWrapper::GetTimeToSkipTo, "C++: ReplayWrapper::GetTimeToSkipTo() --> float");
		cl.def("SetTimeToSkipTo", (void (ReplayWrapper::*)(float)) &ReplayWrapper::SetTimeToSkipTo, "C++: ReplayWrapper::SetTimeToSkipTo(float) --> void", pybind11::arg("newTimeToSkipTo"));
		cl.def("GetFrameToSkipTo", (int (ReplayWrapper::*)()) &ReplayWrapper::GetFrameToSkipTo, "C++: ReplayWrapper::GetFrameToSkipTo() --> int");
		cl.def("SetFrameToSkipTo", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetFrameToSkipTo, "C++: ReplayWrapper::SetFrameToSkipTo(int) --> void", pybind11::arg("newFrameToSkipTo"));
		cl.def("GetPlayersOnlyTicks", (int (ReplayWrapper::*)()) &ReplayWrapper::GetPlayersOnlyTicks, "C++: ReplayWrapper::GetPlayersOnlyTicks() --> int");
		cl.def("SetPlayersOnlyTicks", (void (ReplayWrapper::*)(int)) &ReplayWrapper::SetPlayersOnlyTicks, "C++: ReplayWrapper::SetPlayersOnlyTicks(int) --> void", pybind11::arg("newPlayersOnlyTicks"));
		cl.def("GetPlaybackTime", (float (ReplayWrapper::*)()) &ReplayWrapper::GetPlaybackTime, "C++: ReplayWrapper::GetPlaybackTime() --> float");
		cl.def("IsFromBeforeGameVersion", (bool (ReplayWrapper::*)(unsigned char)) &ReplayWrapper::IsFromBeforeGameVersion, "C++: ReplayWrapper::IsFromBeforeGameVersion(unsigned char) --> bool", pybind11::arg("BeforeGameVersion"));
		cl.def("IsFromBeforeReplayVersion", (bool (ReplayWrapper::*)(unsigned char)) &ReplayWrapper::IsFromBeforeReplayVersion, "C++: ReplayWrapper::IsFromBeforeReplayVersion(unsigned char) --> bool", pybind11::arg("BeforeReplayVersion"));
		cl.def("RemoveTimelineKeyframe", (void (ReplayWrapper::*)(int)) &ReplayWrapper::RemoveTimelineKeyframe, "C++: ReplayWrapper::RemoveTimelineKeyframe(int) --> void", pybind11::arg("KeyframeIndex"));
		cl.def("eventTrimData", (void (ReplayWrapper::*)(int, int)) &ReplayWrapper::eventTrimData, "C++: ReplayWrapper::eventTrimData(int, int) --> void", pybind11::arg("FirstKeyframe"), pybind11::arg("FirstFrame"));
		cl.def("CreateCopy", (class ReplayWrapper (ReplayWrapper::*)(float)) &ReplayWrapper::CreateCopy, "C++: ReplayWrapper::CreateCopy(float) --> class ReplayWrapper", pybind11::arg("StartTime"));
		cl.def("SkipToFrame", (void (ReplayWrapper::*)(int, unsigned long)) &ReplayWrapper::SkipToFrame, "C++: ReplayWrapper::SkipToFrame(int, unsigned long) --> void", pybind11::arg("frame"), pybind11::arg("bFlush"));
		cl.def("SkipToTime", (void (ReplayWrapper::*)(float, unsigned long)) &ReplayWrapper::SkipToTime, "C++: ReplayWrapper::SkipToTime(float, unsigned long) --> void", pybind11::arg("Time"), pybind11::arg("bFlush"));
		cl.def("GetReplayTimeSeconds", (float (ReplayWrapper::*)()) &ReplayWrapper::GetReplayTimeSeconds, "C++: ReplayWrapper::GetReplayTimeSeconds() --> float");
		cl.def("StopPlayback", (void (ReplayWrapper::*)()) &ReplayWrapper::StopPlayback, "C++: ReplayWrapper::StopPlayback() --> void");
		cl.def("StartPlaybackAtFrame", (void (ReplayWrapper::*)(int)) &ReplayWrapper::StartPlaybackAtFrame, "C++: ReplayWrapper::StartPlaybackAtFrame(int) --> void", pybind11::arg("StartFrame"));
		cl.def("StartPlaybackAtTimeSeconds", (void (ReplayWrapper::*)(float)) &ReplayWrapper::StartPlaybackAtTimeSeconds, "C++: ReplayWrapper::StartPlaybackAtTimeSeconds(float) --> void", pybind11::arg("StartTime"));
		cl.def("StopRecord", (void (ReplayWrapper::*)()) &ReplayWrapper::StopRecord, "C++: ReplayWrapper::StopRecord() --> void");
		cl.def("StartRecord", (void (ReplayWrapper::*)()) &ReplayWrapper::StartRecord, "C++: ReplayWrapper::StartRecord() --> void");
		cl.def("Tick2", (void (ReplayWrapper::*)(float)) &ReplayWrapper::Tick2, "C++: ReplayWrapper::Tick2(float) --> void", pybind11::arg("DeltaTime"));
		cl.def("eventPreExport", (void (ReplayWrapper::*)()) &ReplayWrapper::eventPreExport, "C++: ReplayWrapper::eventPreExport() --> void");
		cl.def("EventPlayedFrame", (void (ReplayWrapper::*)(class ReplayWrapper)) &ReplayWrapper::EventPlayedFrame, "C++: ReplayWrapper::EventPlayedFrame(class ReplayWrapper) --> void", pybind11::arg("Replay"));
		cl.def("EventPostTimeSkip", (void (ReplayWrapper::*)(class ReplayWrapper)) &ReplayWrapper::EventPostTimeSkip, "C++: ReplayWrapper::EventPostTimeSkip(class ReplayWrapper) --> void", pybind11::arg("Replay"));
		cl.def("EventPreTimeSkip", (void (ReplayWrapper::*)(class ReplayWrapper)) &ReplayWrapper::EventPreTimeSkip, "C++: ReplayWrapper::EventPreTimeSkip(class ReplayWrapper) --> void", pybind11::arg("Replay"));
		cl.def("EventSpawned", (void (ReplayWrapper::*)(class ReplayWrapper, class ActorWrapper)) &ReplayWrapper::EventSpawned, "C++: ReplayWrapper::EventSpawned(class ReplayWrapper, class ActorWrapper) --> void", pybind11::arg("Replay"), pybind11::arg("A"));
		cl.def("EventPlaybackStopped", (void (ReplayWrapper::*)(class ReplayWrapper)) &ReplayWrapper::EventPlaybackStopped, "C++: ReplayWrapper::EventPlaybackStopped(class ReplayWrapper) --> void", pybind11::arg("Replay"));
	}
	{ // ReplaySoccarWrapper file:bakkesmod/wrappers/GameEvent/ReplaySoccarWrapper.h line:8
		pybind11::class_<ReplaySoccarWrapper, std::shared_ptr<ReplaySoccarWrapper>, ReplayWrapper> cl(M, "ReplaySoccarWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ReplaySoccarWrapper const &o){ return new ReplaySoccarWrapper(o); } ) );
		cl.def("assign", (class ReplaySoccarWrapper & (ReplaySoccarWrapper::*)(class ReplaySoccarWrapper)) &ReplaySoccarWrapper::operator=, "C++: ReplaySoccarWrapper::operator=(class ReplaySoccarWrapper) --> class ReplaySoccarWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetTeamSize", (int (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::GetTeamSize, "C++: ReplaySoccarWrapper::GetTeamSize() --> int");
		cl.def("SetTeamSize", (void (ReplaySoccarWrapper::*)(int)) &ReplaySoccarWrapper::SetTeamSize, "C++: ReplaySoccarWrapper::SetTeamSize(int) --> void", pybind11::arg("newTeamSize"));
		cl.def("GetUnfairTeamSize", (int (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::GetUnfairTeamSize, "C++: ReplaySoccarWrapper::GetUnfairTeamSize() --> int");
		cl.def("SetUnfairTeamSize", (void (ReplaySoccarWrapper::*)(int)) &ReplaySoccarWrapper::SetUnfairTeamSize, "C++: ReplaySoccarWrapper::SetUnfairTeamSize(int) --> void", pybind11::arg("newUnfairTeamSize"));
		cl.def("GetbUnfairBots", (unsigned long (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::GetbUnfairBots, "C++: ReplaySoccarWrapper::GetbUnfairBots() --> unsigned long");
		cl.def("SetbUnfairBots", (void (ReplaySoccarWrapper::*)(unsigned long)) &ReplaySoccarWrapper::SetbUnfairBots, "C++: ReplaySoccarWrapper::SetbUnfairBots(unsigned long) --> void", pybind11::arg("newbUnfairBots"));
		cl.def("GetPrimaryPlayerTeam", (int (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::GetPrimaryPlayerTeam, "C++: ReplaySoccarWrapper::GetPrimaryPlayerTeam() --> int");
		cl.def("SetPrimaryPlayerTeam", (void (ReplaySoccarWrapper::*)(int)) &ReplaySoccarWrapper::SetPrimaryPlayerTeam, "C++: ReplaySoccarWrapper::SetPrimaryPlayerTeam(int) --> void", pybind11::arg("newPrimaryPlayerTeam"));
		cl.def("GetTeam0Score", (int (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::GetTeam0Score, "C++: ReplaySoccarWrapper::GetTeam0Score() --> int");
		cl.def("SetTeam0Score", (void (ReplaySoccarWrapper::*)(int)) &ReplaySoccarWrapper::SetTeam0Score, "C++: ReplaySoccarWrapper::SetTeam0Score(int) --> void", pybind11::arg("newTeam0Score"));
		cl.def("GetTeam1Score", (int (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::GetTeam1Score, "C++: ReplaySoccarWrapper::GetTeam1Score() --> int");
		cl.def("SetTeam1Score", (void (ReplaySoccarWrapper::*)(int)) &ReplaySoccarWrapper::SetTeam1Score, "C++: ReplaySoccarWrapper::SetTeam1Score(int) --> void", pybind11::arg("newTeam1Score"));
		cl.def("eventPreExport", (void (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::eventPreExport, "C++: ReplaySoccarWrapper::eventPreExport() --> void");
		cl.def("RemoveTimelineKeyframe", (void (ReplaySoccarWrapper::*)(int)) &ReplaySoccarWrapper::RemoveTimelineKeyframe, "C++: ReplaySoccarWrapper::RemoveTimelineKeyframe(int) --> void", pybind11::arg("KeyframeIndex"));
		cl.def("RecordUserEvent", (void (ReplaySoccarWrapper::*)()) &ReplaySoccarWrapper::RecordUserEvent, "C++: ReplaySoccarWrapper::RecordUserEvent() --> void");
		cl.def("AddPlayer", (void (ReplaySoccarWrapper::*)(class PriWrapper)) &ReplaySoccarWrapper::AddPlayer, "C++: ReplaySoccarWrapper::AddPlayer(class PriWrapper) --> void", pybind11::arg("PRI"));
	}
}
