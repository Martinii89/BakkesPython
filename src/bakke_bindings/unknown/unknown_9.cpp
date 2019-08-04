#include "pch.h"
#include <bakkesmod/wrappers/Engine/EngineTAWrapper.h>
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/InputBufferGraphWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/NetStatGraphWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/PerfStatGraphWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/StatGraphSystemWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <bakkesmod/wrappers/cvarmanagerwrapper.h>
//#include <bits/std_function.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>
#include <typeindex>
#include <typeinfo>


void bind_unknown_unknown_9(py::module &M)
{
	{ // CVarWrapper file: line:10
		pybind11::class_<CVarWrapper, std::shared_ptr<CVarWrapper>> cl(M, "CVarWrapper");
		pybind11::handle cl_type = cl;

		//cl.def( pybind11::init<unsigned long, struct std::type_index>(), pybind11::arg("mem"), pybind11::arg("pluginIdx") );

		cl.def( pybind11::init( [](CVarWrapper const &o){ return new CVarWrapper(o); } ) );
		cl.def("assign", (class CVarWrapper & (CVarWrapper::*)(class CVarWrapper)) &CVarWrapper::operator=, "C++: CVarWrapper::operator=(class CVarWrapper) --> class CVarWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("getCVarName", (std::string (CVarWrapper::*)()) &CVarWrapper::getCVarName, "C++: CVarWrapper::getCVarName() --> std::string");
		cl.def("getIntValue", (int (CVarWrapper::*)()) &CVarWrapper::getIntValue, "C++: CVarWrapper::getIntValue() --> int");
		cl.def("getFloatValue", (float (CVarWrapper::*)()) &CVarWrapper::getFloatValue, "C++: CVarWrapper::getFloatValue() --> float");
		cl.def("getBoolValue", (bool (CVarWrapper::*)()) &CVarWrapper::getBoolValue, "C++: CVarWrapper::getBoolValue() --> bool");
		cl.def("getStringValue", (std::string (CVarWrapper::*)()) &CVarWrapper::getStringValue, "C++: CVarWrapper::getStringValue() --> std::string");
		cl.def("getDescription", (std::string (CVarWrapper::*)()) &CVarWrapper::getDescription, "C++: CVarWrapper::getDescription() --> std::string");
		cl.def("notify", (void (CVarWrapper::*)()) &CVarWrapper::notify, "C++: CVarWrapper::notify() --> void");
		cl.def("setValue", (void (CVarWrapper::*)(std::string)) &CVarWrapper::setValue, "C++: CVarWrapper::setValue(std::string) --> void", pybind11::arg("value"));
		cl.def("setValue", (void (CVarWrapper::*)(int)) &CVarWrapper::setValue, "C++: CVarWrapper::setValue(int) --> void", pybind11::arg("value"));
		cl.def("setValue", (void (CVarWrapper::*)(float)) &CVarWrapper::setValue, "C++: CVarWrapper::setValue(float) --> void", pybind11::arg("value"));
		cl.def("addOnValueChanged", (void (CVarWrapper::*)(class std::function<void (std::string, class CVarWrapper)>)) &CVarWrapper::addOnValueChanged, "C++: CVarWrapper::addOnValueChanged(class std::function<void (std::string, class CVarWrapper)>) --> void", pybind11::arg("changeFunc"));
		//cl.def("bindTo", (void (CVarWrapper::*)(class std::shared_ptr<int>)) &CVarWrapper::bindTo, "C++: CVarWrapper::bindTo(class std::shared_ptr<int>) --> void", pybind11::arg("var"));
		//cl.def("bindTo", (void (CVarWrapper::*)(class std::shared_ptr<float>)) &CVarWrapper::bindTo, "C++: CVarWrapper::bindTo(class std::shared_ptr<float>) --> void", pybind11::arg("var"));
		//cl.def("bindTo", (void (CVarWrapper::*)(class std::shared_ptr<std::string >)) &CVarWrapper::bindTo, "C++: CVarWrapper::bindTo(class std::shared_ptr<std::string >) --> void", pybind11::arg("var"));
		//cl.def("bindTo", (void (CVarWrapper::*)(class std::shared_ptr<bool>)) &CVarWrapper::bindTo, "C++: CVarWrapper::bindTo(class std::shared_ptr<bool>) --> void", pybind11::arg("var"));
	}
	{ // CVarManagerWrapper file:bakkesmod/wrappers/cvarmanagerwrapper.h line:10
		pybind11::class_<CVarManagerWrapper, std::shared_ptr<CVarManagerWrapper>> cl(M, "CVarManagerWrapper");
		pybind11::handle cl_type = cl;

		//cl.def( pybind11::init<unsigned long, struct std::type_index>(), pybind11::arg("mem"), pybind11::arg("pluginIdx") );

		cl.def( pybind11::init( [](CVarManagerWrapper const &o){ return new CVarManagerWrapper(o); } ) );
		cl.def("assign", (class CVarManagerWrapper & (CVarManagerWrapper::*)(class CVarManagerWrapper)) &CVarManagerWrapper::operator=, "C++: CVarManagerWrapper::operator=(class CVarManagerWrapper) --> class CVarManagerWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("executeCommand", (void (CVarManagerWrapper::*)(std::string, bool)) &CVarManagerWrapper::executeCommand, "C++: CVarManagerWrapper::executeCommand(std::string, bool) --> void", pybind11::arg("command"), pybind11::arg("log"));
		cl.def("registerNotifier", (void (CVarManagerWrapper::*)(std::string, class std::function<void (class std::vector<std::string, class std::allocator<std::string > >)>, std::string, unsigned char)) &CVarManagerWrapper::registerNotifier, "C++: CVarManagerWrapper::registerNotifier(std::string, class std::function<void (class std::vector<std::string, class std::allocator<std::string > >)>, std::string, unsigned char) --> void", pybind11::arg("cvar"), pybind11::arg("notifier"), pybind11::arg("description"), pybind11::arg("permissions"));
		cl.def("registerCvar", (class CVarWrapper (CVarManagerWrapper::*)(std::string, std::string, std::string, bool, bool, float, bool, float, bool)) &CVarManagerWrapper::registerCvar, "C++: CVarManagerWrapper::registerCvar(std::string, std::string, std::string, bool, bool, float, bool, float, bool) --> class CVarWrapper", pybind11::arg("cvar"), pybind11::arg("defaultValue"), pybind11::arg("desc"), pybind11::arg("searchAble"), pybind11::arg("hasMin"), pybind11::arg("min"), pybind11::arg("hasMax"), pybind11::arg("max"), pybind11::arg("saveToCfg"));
		cl.def("log", (void (CVarManagerWrapper::*)(std::string)) &CVarManagerWrapper::log, "C++: CVarManagerWrapper::log(std::string) --> void", pybind11::arg("text"));
		cl.def("getCvar", (class CVarWrapper (CVarManagerWrapper::*)(std::string)) &CVarManagerWrapper::getCvar, "C++: CVarManagerWrapper::getCvar(std::string) --> class CVarWrapper", pybind11::arg("cvar"));
		cl.def("backupCfg", (void (CVarManagerWrapper::*)(std::string)) &CVarManagerWrapper::backupCfg, "C++: CVarManagerWrapper::backupCfg(std::string) --> void", pybind11::arg("path"));
		cl.def("backupBinds", (void (CVarManagerWrapper::*)(std::string)) &CVarManagerWrapper::backupBinds, "C++: CVarManagerWrapper::backupBinds(std::string) --> void", pybind11::arg("path"));
		cl.def("loadCfg", (void (CVarManagerWrapper::*)(std::string)) &CVarManagerWrapper::loadCfg, "C++: CVarManagerWrapper::loadCfg(std::string) --> void", pybind11::arg("path"));
	}
	{ // EngineTAWrapper file:bakkesmod/wrappers/Engine/EngineTAWrapper.h line:9
		pybind11::class_<EngineTAWrapper, std::shared_ptr<EngineTAWrapper>, ObjectWrapper> cl(M, "EngineTAWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](EngineTAWrapper const &o){ return new EngineTAWrapper(o); } ) );
		cl.def("assign", (class EngineTAWrapper & (EngineTAWrapper::*)(class EngineTAWrapper)) &EngineTAWrapper::operator=, "C++: EngineTAWrapper::operator=(class EngineTAWrapper) --> class EngineTAWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetbEnableClientPrediction", (unsigned long (EngineTAWrapper::*)()) &EngineTAWrapper::GetbEnableClientPrediction, "C++: EngineTAWrapper::GetbEnableClientPrediction() --> unsigned long");
		cl.def("SetbEnableClientPrediction", (void (EngineTAWrapper::*)(unsigned long)) &EngineTAWrapper::SetbEnableClientPrediction, "C++: EngineTAWrapper::SetbEnableClientPrediction(unsigned long) --> void", pybind11::arg("newbEnableClientPrediction"));
		cl.def("GetbClientPhysicsUpdate", (unsigned long (EngineTAWrapper::*)()) &EngineTAWrapper::GetbClientPhysicsUpdate, "C++: EngineTAWrapper::GetbClientPhysicsUpdate() --> unsigned long");
		cl.def("SetbClientPhysicsUpdate", (void (EngineTAWrapper::*)(unsigned long)) &EngineTAWrapper::SetbClientPhysicsUpdate, "C++: EngineTAWrapper::SetbClientPhysicsUpdate(unsigned long) --> void", pybind11::arg("newbClientPhysicsUpdate"));
		cl.def("GetbDisableClientCorrections", (unsigned long (EngineTAWrapper::*)()) &EngineTAWrapper::GetbDisableClientCorrections, "C++: EngineTAWrapper::GetbDisableClientCorrections() --> unsigned long");
		cl.def("SetbDisableClientCorrections", (void (EngineTAWrapper::*)(unsigned long)) &EngineTAWrapper::SetbDisableClientCorrections, "C++: EngineTAWrapper::SetbDisableClientCorrections(unsigned long) --> void", pybind11::arg("newbDisableClientCorrections"));
		cl.def("GetbDebugClientCorrections", (unsigned long (EngineTAWrapper::*)()) &EngineTAWrapper::GetbDebugClientCorrections, "C++: EngineTAWrapper::GetbDebugClientCorrections() --> unsigned long");
		cl.def("SetbDebugClientCorrections", (void (EngineTAWrapper::*)(unsigned long)) &EngineTAWrapper::SetbDebugClientCorrections, "C++: EngineTAWrapper::SetbDebugClientCorrections(unsigned long) --> void", pybind11::arg("newbDebugClientCorrections"));
		cl.def("GetbForceClientCorrection", (unsigned long (EngineTAWrapper::*)()) &EngineTAWrapper::GetbForceClientCorrection, "C++: EngineTAWrapper::GetbForceClientCorrection() --> unsigned long");
		cl.def("SetbForceClientCorrection", (void (EngineTAWrapper::*)(unsigned long)) &EngineTAWrapper::SetbForceClientCorrection, "C++: EngineTAWrapper::SetbForceClientCorrection(unsigned long) --> void", pybind11::arg("newbForceClientCorrection"));
		cl.def("GetPhysicsFramerate", (float (EngineTAWrapper::*)()) &EngineTAWrapper::GetPhysicsFramerate, "C++: EngineTAWrapper::GetPhysicsFramerate() --> float");
		cl.def("SetPhysicsFramerate", (void (EngineTAWrapper::*)(float)) &EngineTAWrapper::SetPhysicsFramerate, "C++: EngineTAWrapper::SetPhysicsFramerate(float) --> void", pybind11::arg("newPhysicsFramerate"));
		cl.def("GetMaxPhysicsSubsteps", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetMaxPhysicsSubsteps, "C++: EngineTAWrapper::GetMaxPhysicsSubsteps() --> int");
		cl.def("SetMaxPhysicsSubsteps", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetMaxPhysicsSubsteps, "C++: EngineTAWrapper::SetMaxPhysicsSubsteps(int) --> void", pybind11::arg("newMaxPhysicsSubsteps"));
		cl.def("GetMaxUploadedClientFrames", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetMaxUploadedClientFrames, "C++: EngineTAWrapper::GetMaxUploadedClientFrames() --> int");
		cl.def("SetMaxUploadedClientFrames", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetMaxUploadedClientFrames, "C++: EngineTAWrapper::SetMaxUploadedClientFrames(int) --> void", pybind11::arg("newMaxUploadedClientFrames"));
		cl.def("GetMaxClientReplayFrames", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetMaxClientReplayFrames, "C++: EngineTAWrapper::GetMaxClientReplayFrames() --> int");
		cl.def("SetMaxClientReplayFrames", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetMaxClientReplayFrames, "C++: EngineTAWrapper::SetMaxClientReplayFrames(int) --> void", pybind11::arg("newMaxClientReplayFrames"));
		cl.def("GetPhysicsFrame", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetPhysicsFrame, "C++: EngineTAWrapper::GetPhysicsFrame() --> int");
		cl.def("SetPhysicsFrame", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetPhysicsFrame, "C++: EngineTAWrapper::SetPhysicsFrame(int) --> void", pybind11::arg("newPhysicsFrame"));
		cl.def("GetRenderAlpha", (float (EngineTAWrapper::*)()) &EngineTAWrapper::GetRenderAlpha, "C++: EngineTAWrapper::GetRenderAlpha() --> float");
		cl.def("SetRenderAlpha", (void (EngineTAWrapper::*)(float)) &EngineTAWrapper::SetRenderAlpha, "C++: EngineTAWrapper::SetRenderAlpha(float) --> void", pybind11::arg("newRenderAlpha"));
		cl.def("GetReplicatedPhysicsFrame", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetReplicatedPhysicsFrame, "C++: EngineTAWrapper::GetReplicatedPhysicsFrame() --> int");
		cl.def("SetReplicatedPhysicsFrame", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetReplicatedPhysicsFrame, "C++: EngineTAWrapper::SetReplicatedPhysicsFrame(int) --> void", pybind11::arg("newReplicatedPhysicsFrame"));
		cl.def("GetDirtyPhysicsFrame", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetDirtyPhysicsFrame, "C++: EngineTAWrapper::GetDirtyPhysicsFrame() --> int");
		cl.def("SetDirtyPhysicsFrame", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetDirtyPhysicsFrame, "C++: EngineTAWrapper::SetDirtyPhysicsFrame(int) --> void", pybind11::arg("newDirtyPhysicsFrame"));
		cl.def("GetForceCorrectionFrames", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetForceCorrectionFrames, "C++: EngineTAWrapper::GetForceCorrectionFrames() --> int");
		cl.def("SetForceCorrectionFrames", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetForceCorrectionFrames, "C++: EngineTAWrapper::SetForceCorrectionFrames(int) --> void", pybind11::arg("newForceCorrectionFrames"));
		cl.def("GetTickNotifyIndex", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetTickNotifyIndex, "C++: EngineTAWrapper::GetTickNotifyIndex() --> int");
		cl.def("SetTickNotifyIndex", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetTickNotifyIndex, "C++: EngineTAWrapper::SetTickNotifyIndex(int) --> void", pybind11::arg("newTickNotifyIndex"));
		cl.def("GetShellArchetypePath", (class UnrealStringWrapper (EngineTAWrapper::*)()) &EngineTAWrapper::GetShellArchetypePath, "C++: EngineTAWrapper::GetShellArchetypePath() --> class UnrealStringWrapper");
		cl.def("GetLastBugReportTime", (float (EngineTAWrapper::*)()) &EngineTAWrapper::GetLastBugReportTime, "C++: EngineTAWrapper::GetLastBugReportTime() --> float");
		cl.def("SetLastBugReportTime", (void (EngineTAWrapper::*)(float)) &EngineTAWrapper::SetLastBugReportTime, "C++: EngineTAWrapper::SetLastBugReportTime(float) --> void", pybind11::arg("newLastBugReportTime"));
		cl.def("GetDebugClientCorrectionStartTime", (float (EngineTAWrapper::*)()) &EngineTAWrapper::GetDebugClientCorrectionStartTime, "C++: EngineTAWrapper::GetDebugClientCorrectionStartTime() --> float");
		cl.def("SetDebugClientCorrectionStartTime", (void (EngineTAWrapper::*)(float)) &EngineTAWrapper::SetDebugClientCorrectionStartTime, "C++: EngineTAWrapper::SetDebugClientCorrectionStartTime(float) --> void", pybind11::arg("newDebugClientCorrectionStartTime"));
		cl.def("GetDebugClientCorrectionCount", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetDebugClientCorrectionCount, "C++: EngineTAWrapper::GetDebugClientCorrectionCount() --> int");
		cl.def("SetDebugClientCorrectionCount", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetDebugClientCorrectionCount, "C++: EngineTAWrapper::SetDebugClientCorrectionCount(int) --> void", pybind11::arg("newDebugClientCorrectionCount"));
		cl.def("GetStatGraphs", (class StatGraphSystemWrapper (EngineTAWrapper::*)()) &EngineTAWrapper::GetStatGraphs, "C++: EngineTAWrapper::GetStatGraphs() --> class StatGraphSystemWrapper");
		cl.def("SetStatGraphs", (void (EngineTAWrapper::*)(class StatGraphSystemWrapper)) &EngineTAWrapper::SetStatGraphs, "C++: EngineTAWrapper::SetStatGraphs(class StatGraphSystemWrapper) --> void", pybind11::arg("newStatGraphs"));
		cl.def("GetLastPhysicsDeltaTimeScale", (float (EngineTAWrapper::*)()) &EngineTAWrapper::GetLastPhysicsDeltaTimeScale, "C++: EngineTAWrapper::GetLastPhysicsDeltaTimeScale() --> float");
		cl.def("SetLastPhysicsDeltaTimeScale", (void (EngineTAWrapper::*)(float)) &EngineTAWrapper::SetLastPhysicsDeltaTimeScale, "C++: EngineTAWrapper::SetLastPhysicsDeltaTimeScale(float) --> void", pybind11::arg("newLastPhysicsDeltaTimeScale"));
		cl.def("DebugClientCorrections2", (void (EngineTAWrapper::*)()) &EngineTAWrapper::DebugClientCorrections2, "C++: EngineTAWrapper::DebugClientCorrections2() --> void");
		cl.def("GetBulletFixedDeltaTime", (float (EngineTAWrapper::*)()) &EngineTAWrapper::GetBulletFixedDeltaTime, "C++: EngineTAWrapper::GetBulletFixedDeltaTime() --> float");
		cl.def("RunPhysicsStep", (void (EngineTAWrapper::*)(int, float)) &EngineTAWrapper::RunPhysicsStep, "C++: EngineTAWrapper::RunPhysicsStep(int, float) --> void", pybind11::arg("BulletSceneIndex"), pybind11::arg("DeltaTime"));
		cl.def("UpdateReplicatedPhysicsFrame", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::UpdateReplicatedPhysicsFrame, "C++: EngineTAWrapper::UpdateReplicatedPhysicsFrame(int) --> void", pybind11::arg("ServerFrame"));
		cl.def("DebugDedicatedServer", (void (EngineTAWrapper::*)(float)) &EngineTAWrapper::DebugDedicatedServer, "C++: EngineTAWrapper::DebugDedicatedServer(float) --> void", pybind11::arg("ForHowLong"));
		cl.def("GetPhysicsTime", (float (EngineTAWrapper::*)()) &EngineTAWrapper::GetPhysicsTime, "C++: EngineTAWrapper::GetPhysicsTime() --> float");
		cl.def("eventRecordAppStart", (void (EngineTAWrapper::*)()) &EngineTAWrapper::eventRecordAppStart, "C++: EngineTAWrapper::eventRecordAppStart() --> void");
		cl.def("eventInit", (void (EngineTAWrapper::*)()) &EngineTAWrapper::eventInit, "C++: EngineTAWrapper::eventInit() --> void");
		cl.def("EventPreAsyncTick", (void (EngineTAWrapper::*)(float)) &EngineTAWrapper::EventPreAsyncTick, "C++: EngineTAWrapper::EventPreAsyncTick(float) --> void", pybind11::arg("DeltaTime"));
	}
}
