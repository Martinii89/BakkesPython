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

		cl.def( pybind11::init<unsigned long, struct std::type_index>(), pybind11::arg("mem"), pybind11::arg("pluginIdx") );

		cl.def( pybind11::init( [](CVarWrapper const &o){ return new CVarWrapper(o); } ) );
		cl.def("assign", (class CVarWrapper & (CVarWrapper::*)(class CVarWrapper)) &CVarWrapper::operator=, "C++: CVarWrapper::operator=(class CVarWrapper) --> class CVarWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("getCVarName", (std::string (CVarWrapper::*)()) &CVarWrapper::getCVarName, "C++: CVarWrapper::getCVarName() --> std::string");
		cl.def("getIntValue", (int (CVarWrapper::*)()) &CVarWrapper::getIntValue, "C++: CVarWrapper::getIntValue() --> int");
		cl.def("getFloatValue", (float (CVarWrapper::*)()) &CVarWrapper::getFloatValue, "C++: CVarWrapper::getFloatValue() --> float");
		cl.def("getBoolValue", (bool (CVarWrapper::*)()) &CVarWrapper::getBoolValue, "C++: CVarWrapper::getBoolValue() --> bool");
		cl.def("getStringValue", (std::string (CVarWrapper::*)()) &CVarWrapper::getStringValue, "C++: CVarWrapper::getStringValue() --> std::string");
		cl.def("getDescription", (std::string (CVarWrapper::*)()) &CVarWrapper::getDescription, "C++: CVarWrapper::getDescription() --> std::string");
		cl.def("notify", (void (CVarWrapper::*)()) &CVarWrapper::notify, "C++: CVarWrapper::notify() --> void");
		cl.def("setValue", (void (CVarWrapper::*)(std::string)) &CVarWrapper::setValue, "C++: CVarWrapper::setValue(std::string) --> void", "value"_a);
		cl.def("setValue", (void (CVarWrapper::*)(int)) &CVarWrapper::setValue, "C++: CVarWrapper::setValue(int) --> void", "value"_a);
		cl.def("setValue", (void (CVarWrapper::*)(float)) &CVarWrapper::setValue, "C++: CVarWrapper::setValue(float) --> void", "value"_a);
		cl.def("addOnValueChanged", (void (CVarWrapper::*)(class std::function<void (std::string, class CVarWrapper)>)) &CVarWrapper::addOnValueChanged, "C++: CVarWrapper::addOnValueChanged(class std::function<void (std::string, class CVarWrapper)>) --> void", "changeFunc"_a);
		/*cl.def("bindTo", (void (CVarWrapper::*)(class std::shared_ptr<int>)) &CVarWrapper::bindTo, "C++: CVarWrapper::bindTo(class std::shared_ptr<int>) --> void", "var"_a);
		cl.def("bindTo", (void (CVarWrapper::*)(class std::shared_ptr<float>)) &CVarWrapper::bindTo, "C++: CVarWrapper::bindTo(class std::shared_ptr<float>) --> void", "var"_a);
		cl.def("bindTo", (void (CVarWrapper::*)(class std::shared_ptr<std::string >)) &CVarWrapper::bindTo, "C++: CVarWrapper::bindTo(class std::shared_ptr<std::string >) --> void", "var"_a);
		cl.def("bindTo", (void (CVarWrapper::*)(class std::shared_ptr<bool>)) &CVarWrapper::bindTo, "C++: CVarWrapper::bindTo(class std::shared_ptr<bool>) --> void", "var"_a);*/
	}
	{ // CVarManagerWrapper file:bakkesmod/wrappers/cvarmanagerwrapper.h line:10
		pybind11::class_<CVarManagerWrapper, std::shared_ptr<CVarManagerWrapper>> cl(M, "CVarManagerWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long, struct std::type_index>(), pybind11::arg("mem"), pybind11::arg("pluginIdx") );

		cl.def( pybind11::init( [](CVarManagerWrapper const &o){ return new CVarManagerWrapper(o); } ) );
		cl.def("assign", (class CVarManagerWrapper & (CVarManagerWrapper::*)(class CVarManagerWrapper)) &CVarManagerWrapper::operator=, "C++: CVarManagerWrapper::operator=(class CVarManagerWrapper) --> class CVarManagerWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("executeCommand", (void (CVarManagerWrapper::*)(std::string, bool)) &CVarManagerWrapper::executeCommand, "C++: CVarManagerWrapper::executeCommand(std::string, bool) --> void", "command"_a, "log"_a = true);
		cl.def("registerNotifier", (void (CVarManagerWrapper::*)(std::string, class std::function<void (class std::vector<std::string, class std::allocator<std::string > >)>, std::string, unsigned char)) &CVarManagerWrapper::registerNotifier, "C++: CVarManagerWrapper::registerNotifier(std::string, class std::function<void (class std::vector<std::string, class std::allocator<std::string > >)>, std::string, unsigned char) --> void", "cvar"_a, "notifier"_a, "description"_a, "permissions"_a);
		cl.def("registerCvar", (class CVarWrapper (CVarManagerWrapper::*)(std::string, std::string, std::string, bool, bool, float, bool, float, bool)) &CVarManagerWrapper::registerCvar, "C++: CVarManagerWrapper::registerCvar(std::string, std::string, std::string, bool, bool, float, bool, float, bool) --> class CVarWrapper", "cvar"_a, "defaultValue"_a, "desc"_a = "", "searchAble"_a = true, "hasMin"_a = false, "min"_a = 0, "hasMax"_a = false, "max"_a = 0, "saveToCfg"_a = true);
		cl.def("log", (void (CVarManagerWrapper::*)(std::string)) &CVarManagerWrapper::log, "C++: CVarManagerWrapper::log(std::string) --> void", "text"_a);
		cl.def("getCvar", (class CVarWrapper (CVarManagerWrapper::*)(std::string)) &CVarManagerWrapper::getCvar, "C++: CVarManagerWrapper::getCvar(std::string) --> class CVarWrapper", "cvar"_a);
		cl.def("backupCfg", (void (CVarManagerWrapper::*)(std::string)) &CVarManagerWrapper::backupCfg, "C++: CVarManagerWrapper::backupCfg(std::string) --> void", "path"_a);
		cl.def("backupBinds", (void (CVarManagerWrapper::*)(std::string)) &CVarManagerWrapper::backupBinds, "C++: CVarManagerWrapper::backupBinds(std::string) --> void", "path"_a);
		cl.def("loadCfg", (void (CVarManagerWrapper::*)(std::string)) &CVarManagerWrapper::loadCfg, "C++: CVarManagerWrapper::loadCfg(std::string) --> void", "path"_a);
	}
	{ // EngineTAWrapper file:bakkesmod/wrappers/Engine/EngineTAWrapper.h line:9
		pybind11::class_<EngineTAWrapper, std::shared_ptr<EngineTAWrapper>, ObjectWrapper> cl(M, "EngineTAWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](EngineTAWrapper const &o){ return new EngineTAWrapper(o); } ) );
		cl.def("assign", (class EngineTAWrapper & (EngineTAWrapper::*)(class EngineTAWrapper)) &EngineTAWrapper::operator=, "C++: EngineTAWrapper::operator=(class EngineTAWrapper) --> class EngineTAWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetbEnableClientPrediction", (unsigned long (EngineTAWrapper::*)()) &EngineTAWrapper::GetbEnableClientPrediction, "C++: EngineTAWrapper::GetbEnableClientPrediction() --> unsigned long");
		cl.def("SetbEnableClientPrediction", (void (EngineTAWrapper::*)(unsigned long)) &EngineTAWrapper::SetbEnableClientPrediction, "C++: EngineTAWrapper::SetbEnableClientPrediction(unsigned long) --> void", "newbEnableClientPrediction"_a);
		cl.def("GetbClientPhysicsUpdate", (unsigned long (EngineTAWrapper::*)()) &EngineTAWrapper::GetbClientPhysicsUpdate, "C++: EngineTAWrapper::GetbClientPhysicsUpdate() --> unsigned long");
		cl.def("SetbClientPhysicsUpdate", (void (EngineTAWrapper::*)(unsigned long)) &EngineTAWrapper::SetbClientPhysicsUpdate, "C++: EngineTAWrapper::SetbClientPhysicsUpdate(unsigned long) --> void", "newbClientPhysicsUpdate"_a);
		cl.def("GetbDisableClientCorrections", (unsigned long (EngineTAWrapper::*)()) &EngineTAWrapper::GetbDisableClientCorrections, "C++: EngineTAWrapper::GetbDisableClientCorrections() --> unsigned long");
		cl.def("SetbDisableClientCorrections", (void (EngineTAWrapper::*)(unsigned long)) &EngineTAWrapper::SetbDisableClientCorrections, "C++: EngineTAWrapper::SetbDisableClientCorrections(unsigned long) --> void", "newbDisableClientCorrections"_a);
		cl.def("GetbDebugClientCorrections", (unsigned long (EngineTAWrapper::*)()) &EngineTAWrapper::GetbDebugClientCorrections, "C++: EngineTAWrapper::GetbDebugClientCorrections() --> unsigned long");
		cl.def("SetbDebugClientCorrections", (void (EngineTAWrapper::*)(unsigned long)) &EngineTAWrapper::SetbDebugClientCorrections, "C++: EngineTAWrapper::SetbDebugClientCorrections(unsigned long) --> void", "newbDebugClientCorrections"_a);
		cl.def("GetbForceClientCorrection", (unsigned long (EngineTAWrapper::*)()) &EngineTAWrapper::GetbForceClientCorrection, "C++: EngineTAWrapper::GetbForceClientCorrection() --> unsigned long");
		cl.def("SetbForceClientCorrection", (void (EngineTAWrapper::*)(unsigned long)) &EngineTAWrapper::SetbForceClientCorrection, "C++: EngineTAWrapper::SetbForceClientCorrection(unsigned long) --> void", "newbForceClientCorrection"_a);
		cl.def("GetPhysicsFramerate", (float (EngineTAWrapper::*)()) &EngineTAWrapper::GetPhysicsFramerate, "C++: EngineTAWrapper::GetPhysicsFramerate() --> float");
		cl.def("SetPhysicsFramerate", (void (EngineTAWrapper::*)(float)) &EngineTAWrapper::SetPhysicsFramerate, "C++: EngineTAWrapper::SetPhysicsFramerate(float) --> void", "newPhysicsFramerate"_a);
		cl.def("GetMaxPhysicsSubsteps", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetMaxPhysicsSubsteps, "C++: EngineTAWrapper::GetMaxPhysicsSubsteps() --> int");
		cl.def("SetMaxPhysicsSubsteps", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetMaxPhysicsSubsteps, "C++: EngineTAWrapper::SetMaxPhysicsSubsteps(int) --> void", "newMaxPhysicsSubsteps"_a);
		cl.def("GetMaxUploadedClientFrames", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetMaxUploadedClientFrames, "C++: EngineTAWrapper::GetMaxUploadedClientFrames() --> int");
		cl.def("SetMaxUploadedClientFrames", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetMaxUploadedClientFrames, "C++: EngineTAWrapper::SetMaxUploadedClientFrames(int) --> void", "newMaxUploadedClientFrames"_a);
		cl.def("GetMaxClientReplayFrames", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetMaxClientReplayFrames, "C++: EngineTAWrapper::GetMaxClientReplayFrames() --> int");
		cl.def("SetMaxClientReplayFrames", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetMaxClientReplayFrames, "C++: EngineTAWrapper::SetMaxClientReplayFrames(int) --> void", "newMaxClientReplayFrames"_a);
		cl.def("GetPhysicsFrame", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetPhysicsFrame, "C++: EngineTAWrapper::GetPhysicsFrame() --> int");
		cl.def("SetPhysicsFrame", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetPhysicsFrame, "C++: EngineTAWrapper::SetPhysicsFrame(int) --> void", "newPhysicsFrame"_a);
		cl.def("GetRenderAlpha", (float (EngineTAWrapper::*)()) &EngineTAWrapper::GetRenderAlpha, "C++: EngineTAWrapper::GetRenderAlpha() --> float");
		cl.def("SetRenderAlpha", (void (EngineTAWrapper::*)(float)) &EngineTAWrapper::SetRenderAlpha, "C++: EngineTAWrapper::SetRenderAlpha(float) --> void", "newRenderAlpha"_a);
		cl.def("GetReplicatedPhysicsFrame", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetReplicatedPhysicsFrame, "C++: EngineTAWrapper::GetReplicatedPhysicsFrame() --> int");
		cl.def("SetReplicatedPhysicsFrame", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetReplicatedPhysicsFrame, "C++: EngineTAWrapper::SetReplicatedPhysicsFrame(int) --> void", "newReplicatedPhysicsFrame"_a);
		cl.def("GetDirtyPhysicsFrame", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetDirtyPhysicsFrame, "C++: EngineTAWrapper::GetDirtyPhysicsFrame() --> int");
		cl.def("SetDirtyPhysicsFrame", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetDirtyPhysicsFrame, "C++: EngineTAWrapper::SetDirtyPhysicsFrame(int) --> void", "newDirtyPhysicsFrame"_a);
		cl.def("GetForceCorrectionFrames", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetForceCorrectionFrames, "C++: EngineTAWrapper::GetForceCorrectionFrames() --> int");
		cl.def("SetForceCorrectionFrames", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetForceCorrectionFrames, "C++: EngineTAWrapper::SetForceCorrectionFrames(int) --> void", "newForceCorrectionFrames"_a);
		cl.def("GetTickNotifyIndex", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetTickNotifyIndex, "C++: EngineTAWrapper::GetTickNotifyIndex() --> int");
		cl.def("SetTickNotifyIndex", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetTickNotifyIndex, "C++: EngineTAWrapper::SetTickNotifyIndex(int) --> void", "newTickNotifyIndex"_a);
		cl.def("GetShellArchetypePath", (class UnrealStringWrapper (EngineTAWrapper::*)()) &EngineTAWrapper::GetShellArchetypePath, "C++: EngineTAWrapper::GetShellArchetypePath() --> class UnrealStringWrapper");
		cl.def("GetLastBugReportTime", (float (EngineTAWrapper::*)()) &EngineTAWrapper::GetLastBugReportTime, "C++: EngineTAWrapper::GetLastBugReportTime() --> float");
		cl.def("SetLastBugReportTime", (void (EngineTAWrapper::*)(float)) &EngineTAWrapper::SetLastBugReportTime, "C++: EngineTAWrapper::SetLastBugReportTime(float) --> void", "newLastBugReportTime"_a);
		cl.def("GetDebugClientCorrectionStartTime", (float (EngineTAWrapper::*)()) &EngineTAWrapper::GetDebugClientCorrectionStartTime, "C++: EngineTAWrapper::GetDebugClientCorrectionStartTime() --> float");
		cl.def("SetDebugClientCorrectionStartTime", (void (EngineTAWrapper::*)(float)) &EngineTAWrapper::SetDebugClientCorrectionStartTime, "C++: EngineTAWrapper::SetDebugClientCorrectionStartTime(float) --> void", "newDebugClientCorrectionStartTime"_a);
		cl.def("GetDebugClientCorrectionCount", (int (EngineTAWrapper::*)()) &EngineTAWrapper::GetDebugClientCorrectionCount, "C++: EngineTAWrapper::GetDebugClientCorrectionCount() --> int");
		cl.def("SetDebugClientCorrectionCount", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::SetDebugClientCorrectionCount, "C++: EngineTAWrapper::SetDebugClientCorrectionCount(int) --> void", "newDebugClientCorrectionCount"_a);
		cl.def("GetStatGraphs", (class StatGraphSystemWrapper (EngineTAWrapper::*)()) &EngineTAWrapper::GetStatGraphs, "C++: EngineTAWrapper::GetStatGraphs() --> class StatGraphSystemWrapper");
		cl.def("SetStatGraphs", (void (EngineTAWrapper::*)(class StatGraphSystemWrapper)) &EngineTAWrapper::SetStatGraphs, "C++: EngineTAWrapper::SetStatGraphs(class StatGraphSystemWrapper) --> void", "newStatGraphs"_a);
		cl.def("GetLastPhysicsDeltaTimeScale", (float (EngineTAWrapper::*)()) &EngineTAWrapper::GetLastPhysicsDeltaTimeScale, "C++: EngineTAWrapper::GetLastPhysicsDeltaTimeScale() --> float");
		cl.def("SetLastPhysicsDeltaTimeScale", (void (EngineTAWrapper::*)(float)) &EngineTAWrapper::SetLastPhysicsDeltaTimeScale, "C++: EngineTAWrapper::SetLastPhysicsDeltaTimeScale(float) --> void", "newLastPhysicsDeltaTimeScale"_a);
		cl.def("DebugClientCorrections2", (void (EngineTAWrapper::*)()) &EngineTAWrapper::DebugClientCorrections2, "C++: EngineTAWrapper::DebugClientCorrections2() --> void");
		cl.def("GetBulletFixedDeltaTime", (float (EngineTAWrapper::*)()) &EngineTAWrapper::GetBulletFixedDeltaTime, "C++: EngineTAWrapper::GetBulletFixedDeltaTime() --> float");
		cl.def("RunPhysicsStep", (void (EngineTAWrapper::*)(int, float)) &EngineTAWrapper::RunPhysicsStep, "C++: EngineTAWrapper::RunPhysicsStep(int, float) --> void", "BulletSceneIndex"_a, "DeltaTime"_a);
		cl.def("UpdateReplicatedPhysicsFrame", (void (EngineTAWrapper::*)(int)) &EngineTAWrapper::UpdateReplicatedPhysicsFrame, "C++: EngineTAWrapper::UpdateReplicatedPhysicsFrame(int) --> void", "ServerFrame"_a);
		cl.def("DebugDedicatedServer", (void (EngineTAWrapper::*)(float)) &EngineTAWrapper::DebugDedicatedServer, "C++: EngineTAWrapper::DebugDedicatedServer(float) --> void", "ForHowLong"_a);
		cl.def("GetPhysicsTime", (float (EngineTAWrapper::*)()) &EngineTAWrapper::GetPhysicsTime, "C++: EngineTAWrapper::GetPhysicsTime() --> float");
		cl.def("eventRecordAppStart", (void (EngineTAWrapper::*)()) &EngineTAWrapper::eventRecordAppStart, "C++: EngineTAWrapper::eventRecordAppStart() --> void");
		cl.def("eventInit", (void (EngineTAWrapper::*)()) &EngineTAWrapper::eventInit, "C++: EngineTAWrapper::eventInit() --> void");
		cl.def("EventPreAsyncTick", (void (EngineTAWrapper::*)(float)) &EngineTAWrapper::EventPreAsyncTick, "C++: EngineTAWrapper::EventPreAsyncTick(float) --> void", "DeltaTime"_a);
	}
}
