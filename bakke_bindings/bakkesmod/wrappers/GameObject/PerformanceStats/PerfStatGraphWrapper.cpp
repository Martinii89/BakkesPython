#include "pch.h"
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/InputBufferGraphWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/NetStatGraphWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/PerfStatGraphWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/SampleHistoryWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/SampleRecordSettingsWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/StatGraphSystemWrapper.h>
#include <bakkesmod/wrappers/StructArrayWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_bakkesmod_wrappers_GameObject_PerformanceStats_PerfStatGraphWrapper(py::module &M)
{
	{ // PerfStatGraphWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/PerfStatGraphWrapper.h line:8
		pybind11::class_<PerfStatGraphWrapper, std::shared_ptr<PerfStatGraphWrapper>, StatGraphWrapper> cl(M, "PerfStatGraphWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](PerfStatGraphWrapper const &o){ return new PerfStatGraphWrapper(o); } ) );
		cl.def("assign", (class PerfStatGraphWrapper & (PerfStatGraphWrapper::*)(class PerfStatGraphWrapper)) &PerfStatGraphWrapper::operator=, "C++: PerfStatGraphWrapper::operator=(class PerfStatGraphWrapper) --> class PerfStatGraphWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetFPS", (class SampleHistoryWrapper (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetFPS, "C++: PerfStatGraphWrapper::GetFPS() --> class SampleHistoryWrapper");
		cl.def("SetFPS", (void (PerfStatGraphWrapper::*)(class SampleHistoryWrapper)) &PerfStatGraphWrapper::SetFPS, "C++: PerfStatGraphWrapper::SetFPS(class SampleHistoryWrapper) --> void", "newFPS"_a);
		cl.def("GetFrameTime", (class SampleHistoryWrapper (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetFrameTime, "C++: PerfStatGraphWrapper::GetFrameTime() --> class SampleHistoryWrapper");
		cl.def("SetFrameTime", (void (PerfStatGraphWrapper::*)(class SampleHistoryWrapper)) &PerfStatGraphWrapper::SetFrameTime, "C++: PerfStatGraphWrapper::SetFrameTime(class SampleHistoryWrapper) --> void", "newFrameTime"_a);
		cl.def("GetGameThreadTime", (class SampleHistoryWrapper (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetGameThreadTime, "C++: PerfStatGraphWrapper::GetGameThreadTime() --> class SampleHistoryWrapper");
		cl.def("SetGameThreadTime", (void (PerfStatGraphWrapper::*)(class SampleHistoryWrapper)) &PerfStatGraphWrapper::SetGameThreadTime, "C++: PerfStatGraphWrapper::SetGameThreadTime(class SampleHistoryWrapper) --> void", "newGameThreadTime"_a);
		cl.def("GetRenderThreadTime", (class SampleHistoryWrapper (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetRenderThreadTime, "C++: PerfStatGraphWrapper::GetRenderThreadTime() --> class SampleHistoryWrapper");
		cl.def("SetRenderThreadTime", (void (PerfStatGraphWrapper::*)(class SampleHistoryWrapper)) &PerfStatGraphWrapper::SetRenderThreadTime, "C++: PerfStatGraphWrapper::SetRenderThreadTime(class SampleHistoryWrapper) --> void", "newRenderThreadTime"_a);
		cl.def("GetGPUFrameTime", (class SampleHistoryWrapper (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetGPUFrameTime, "C++: PerfStatGraphWrapper::GetGPUFrameTime() --> class SampleHistoryWrapper");
		cl.def("SetGPUFrameTime", (void (PerfStatGraphWrapper::*)(class SampleHistoryWrapper)) &PerfStatGraphWrapper::SetGPUFrameTime, "C++: PerfStatGraphWrapper::SetGPUFrameTime(class SampleHistoryWrapper) --> void", "newGPUFrameTime"_a);
		cl.def("GetFrameTimeHistories", (class ArrayWrapper<class SampleHistoryWrapper> (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetFrameTimeHistories, "C++: PerfStatGraphWrapper::GetFrameTimeHistories() --> class ArrayWrapper<class SampleHistoryWrapper>");
		cl.def("GetMaxFPS", (float (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetMaxFPS, "C++: PerfStatGraphWrapper::GetMaxFPS() --> float");
		cl.def("SetMaxFPS", (void (PerfStatGraphWrapper::*)(float)) &PerfStatGraphWrapper::SetMaxFPS, "C++: PerfStatGraphWrapper::SetMaxFPS(float) --> void", "newMaxFPS"_a);
		cl.def("GetTargetFPS", (float (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetTargetFPS, "C++: PerfStatGraphWrapper::GetTargetFPS() --> float");
		cl.def("SetTargetFPS", (void (PerfStatGraphWrapper::*)(float)) &PerfStatGraphWrapper::SetTargetFPS, "C++: PerfStatGraphWrapper::SetTargetFPS(float) --> void", "newTargetFPS"_a);
		cl.def("eventUpdateGraphRanges", (void (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::eventUpdateGraphRanges, "C++: PerfStatGraphWrapper::eventUpdateGraphRanges() --> void");
		cl.def("CreateFrameTimeHistory", (class SampleHistoryWrapper (PerfStatGraphWrapper::*)(std::string)) &PerfStatGraphWrapper::CreateFrameTimeHistory, "C++: PerfStatGraphWrapper::CreateFrameTimeHistory(std::string) --> class SampleHistoryWrapper", "Title"_a);
		cl.def("CreateFpsHistory", (class SampleHistoryWrapper (PerfStatGraphWrapper::*)(std::string)) &PerfStatGraphWrapper::CreateFpsHistory, "C++: PerfStatGraphWrapper::CreateFpsHistory(std::string) --> class SampleHistoryWrapper", "Title"_a);
		cl.def("eventConstruct", (void (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::eventConstruct, "C++: PerfStatGraphWrapper::eventConstruct() --> void");
	}
	{ // SampleHistoryWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/SampleHistoryWrapper.h line:10
		pybind11::class_<SampleHistoryWrapper, std::shared_ptr<SampleHistoryWrapper>, ObjectWrapper> cl(M, "SampleHistoryWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](SampleHistoryWrapper const &o){ return new SampleHistoryWrapper(o); } ) );
		cl.def("assign", (class SampleHistoryWrapper & (SampleHistoryWrapper::*)(class SampleHistoryWrapper)) &SampleHistoryWrapper::operator=, "C++: SampleHistoryWrapper::operator=(class SampleHistoryWrapper) --> class SampleHistoryWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetRecordSettings", (class SampleRecordSettingsWrapper (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetRecordSettings, "C++: SampleHistoryWrapper::GetRecordSettings() --> class SampleRecordSettingsWrapper");
		cl.def("SetRecordSettings", (void (SampleHistoryWrapper::*)(class SampleRecordSettingsWrapper)) &SampleHistoryWrapper::SetRecordSettings, "C++: SampleHistoryWrapper::SetRecordSettings(class SampleRecordSettingsWrapper) --> void", "newRecordSettings"_a);
		cl.def("GetTitle", (class UnrealStringWrapper (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetTitle, "C++: SampleHistoryWrapper::GetTitle() --> class UnrealStringWrapper");
		cl.def("GetYMin", (float (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetYMin, "C++: SampleHistoryWrapper::GetYMin() --> float");
		cl.def("SetYMin", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::SetYMin, "C++: SampleHistoryWrapper::SetYMin(float) --> void", "newYMin"_a);
		cl.def("GetYMax", (float (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetYMax, "C++: SampleHistoryWrapper::GetYMax() --> float");
		cl.def("SetYMax", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::SetYMax, "C++: SampleHistoryWrapper::SetYMax(float) --> void", "newYMax"_a);
		cl.def("GetGoodValue", (float (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetGoodValue, "C++: SampleHistoryWrapper::GetGoodValue() --> float");
		cl.def("SetGoodValue", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::SetGoodValue, "C++: SampleHistoryWrapper::SetGoodValue(float) --> void", "newGoodValue"_a);
		cl.def("GetBadValue", (float (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetBadValue, "C++: SampleHistoryWrapper::GetBadValue() --> float");
		cl.def("SetBadValue", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::SetBadValue, "C++: SampleHistoryWrapper::SetBadValue(float) --> void", "newBadValue"_a);
		cl.def("GetBaseValue", (float (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetBaseValue, "C++: SampleHistoryWrapper::GetBaseValue() --> float");
		cl.def("SetBaseValue", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::SetBaseValue, "C++: SampleHistoryWrapper::SetBaseValue(float) --> void", "newBaseValue"_a);
		cl.def("GetSamples", (class StructArrayWrapper<struct RecordedSample> (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetSamples, "C++: SampleHistoryWrapper::GetSamples() --> class StructArrayWrapper<struct RecordedSample>");
		cl.def("GetSampleIndex", (int (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetSampleIndex, "C++: SampleHistoryWrapper::GetSampleIndex() --> int");
		cl.def("SetSampleIndex", (void (SampleHistoryWrapper::*)(int)) &SampleHistoryWrapper::SetSampleIndex, "C++: SampleHistoryWrapper::SetSampleIndex(int) --> void", "newSampleIndex"_a);
		cl.def("GetAccumTime", (float (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetAccumTime, "C++: SampleHistoryWrapper::GetAccumTime() --> float");
		cl.def("SetAccumTime", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::SetAccumTime, "C++: SampleHistoryWrapper::SetAccumTime(float) --> void", "newAccumTime"_a);
		cl.def("GetPendingSample", (struct RecordedSample (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetPendingSample, "C++: SampleHistoryWrapper::GetPendingSample() --> struct RecordedSample");
		cl.def("SetPendingSample", (void (SampleHistoryWrapper::*)(struct RecordedSample)) &SampleHistoryWrapper::SetPendingSample, "C++: SampleHistoryWrapper::SetPendingSample(struct RecordedSample) --> void", "newPendingSample"_a);
		cl.def("GetbHasPendingSample", (unsigned long (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetbHasPendingSample, "C++: SampleHistoryWrapper::GetbHasPendingSample() --> unsigned long");
		cl.def("SetbHasPendingSample", (void (SampleHistoryWrapper::*)(unsigned long)) &SampleHistoryWrapper::SetbHasPendingSample, "C++: SampleHistoryWrapper::SetbHasPendingSample(unsigned long) --> void", "newbHasPendingSample"_a);
		cl.def("Tick", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::Tick, "C++: SampleHistoryWrapper::Tick(float) --> void", "DeltaTime"_a);
		cl.def("AddSample", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::AddSample, "C++: SampleHistoryWrapper::AddSample(float) --> void", "NewValue"_a);
		cl.def("GetSummaryValue", (float (SampleHistoryWrapper::*)(unsigned char, float, unsigned long)) &SampleHistoryWrapper::GetSummaryValue, "C++: SampleHistoryWrapper::GetSummaryValue(unsigned char, float, unsigned long) --> float", "Type"_a, "MaxSampleAge"_a, "bAbsoluteValue"_a);
		cl.def("SetBaseValue2", (class SampleHistoryWrapper (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::SetBaseValue2, "C++: SampleHistoryWrapper::SetBaseValue2(float) --> class SampleHistoryWrapper", "InBaseValue"_a);
		cl.def("SetGoodBadValues", (class SampleHistoryWrapper (SampleHistoryWrapper::*)(float, float)) &SampleHistoryWrapper::SetGoodBadValues, "C++: SampleHistoryWrapper::SetGoodBadValues(float, float) --> class SampleHistoryWrapper", "InGoodValue"_a, "InBadValue"_a);
		cl.def("SetGraphMaxMin", (class SampleHistoryWrapper (SampleHistoryWrapper::*)(float, float)) &SampleHistoryWrapper::SetGraphMaxMin, "C++: SampleHistoryWrapper::SetGraphMaxMin(float, float) --> class SampleHistoryWrapper", "MaxValue"_a, "MinValue"_a);
		cl.def("SetTitle", (class SampleHistoryWrapper (SampleHistoryWrapper::*)(std::string)) &SampleHistoryWrapper::SetTitle, "C++: SampleHistoryWrapper::SetTitle(std::string) --> class SampleHistoryWrapper", "InTitle"_a);
	}
	{ // SampleRecordSettingsWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/SampleRecordSettingsWrapper.h line:7
		pybind11::class_<SampleRecordSettingsWrapper, std::shared_ptr<SampleRecordSettingsWrapper>, ObjectWrapper> cl(M, "SampleRecordSettingsWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](SampleRecordSettingsWrapper const &o){ return new SampleRecordSettingsWrapper(o); } ) );
		cl.def("assign", (class SampleRecordSettingsWrapper & (SampleRecordSettingsWrapper::*)(class SampleRecordSettingsWrapper)) &SampleRecordSettingsWrapper::operator=, "C++: SampleRecordSettingsWrapper::operator=(class SampleRecordSettingsWrapper) --> class SampleRecordSettingsWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetMaxSampleAge", (float (SampleRecordSettingsWrapper::*)()) &SampleRecordSettingsWrapper::GetMaxSampleAge, "C++: SampleRecordSettingsWrapper::GetMaxSampleAge() --> float");
		cl.def("SetMaxSampleAge", (void (SampleRecordSettingsWrapper::*)(float)) &SampleRecordSettingsWrapper::SetMaxSampleAge, "C++: SampleRecordSettingsWrapper::SetMaxSampleAge(float) --> void", "newMaxSampleAge"_a);
		cl.def("GetRecordRate", (float (SampleRecordSettingsWrapper::*)()) &SampleRecordSettingsWrapper::GetRecordRate, "C++: SampleRecordSettingsWrapper::GetRecordRate() --> float");
		cl.def("SetRecordRate", (void (SampleRecordSettingsWrapper::*)(float)) &SampleRecordSettingsWrapper::SetRecordRate, "C++: SampleRecordSettingsWrapper::SetRecordRate(float) --> void", "newRecordRate"_a);
	}
	{ // StatGraphSystemWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/StatGraphSystemWrapper.h line:11
		pybind11::class_<StatGraphSystemWrapper, std::shared_ptr<StatGraphSystemWrapper>, ObjectWrapper> cl(M, "StatGraphSystemWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](StatGraphSystemWrapper const &o){ return new StatGraphSystemWrapper(o); } ) );
		cl.def("assign", (class StatGraphSystemWrapper & (StatGraphSystemWrapper::*)(class StatGraphSystemWrapper)) &StatGraphSystemWrapper::operator=, "C++: StatGraphSystemWrapper::operator=(class StatGraphSystemWrapper) --> class StatGraphSystemWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetGraphSampleTime", (float (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetGraphSampleTime, "C++: StatGraphSystemWrapper::GetGraphSampleTime() --> float");
		cl.def("SetGraphSampleTime", (void (StatGraphSystemWrapper::*)(float)) &StatGraphSystemWrapper::SetGraphSampleTime, "C++: StatGraphSystemWrapper::SetGraphSampleTime(float) --> void", "newGraphSampleTime"_a);
		cl.def("GetGraphLevel", (unsigned char (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetGraphLevel, "C++: StatGraphSystemWrapper::GetGraphLevel() --> unsigned char");
		cl.def("SetGraphLevel", (void (StatGraphSystemWrapper::*)(unsigned char)) &StatGraphSystemWrapper::SetGraphLevel, "C++: StatGraphSystemWrapper::SetGraphLevel(unsigned char) --> void", "newGraphLevel"_a);
		cl.def("GetPerfStatGraph", (class PerfStatGraphWrapper (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetPerfStatGraph, "C++: StatGraphSystemWrapper::GetPerfStatGraph() --> class PerfStatGraphWrapper");
		cl.def("SetPerfStatGraph", (void (StatGraphSystemWrapper::*)(class PerfStatGraphWrapper)) &StatGraphSystemWrapper::SetPerfStatGraph, "C++: StatGraphSystemWrapper::SetPerfStatGraph(class PerfStatGraphWrapper) --> void", "newPerfStatGraph"_a);
		cl.def("GetNetStatGraph", (class NetStatGraphWrapper (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetNetStatGraph, "C++: StatGraphSystemWrapper::GetNetStatGraph() --> class NetStatGraphWrapper");
		cl.def("SetNetStatGraph", (void (StatGraphSystemWrapper::*)(class NetStatGraphWrapper)) &StatGraphSystemWrapper::SetNetStatGraph, "C++: StatGraphSystemWrapper::SetNetStatGraph(class NetStatGraphWrapper) --> void", "newNetStatGraph"_a);
		cl.def("GetInputBufferGraph", (class InputBufferGraphWrapper (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetInputBufferGraph, "C++: StatGraphSystemWrapper::GetInputBufferGraph() --> class InputBufferGraphWrapper");
		cl.def("SetInputBufferGraph", (void (StatGraphSystemWrapper::*)(class InputBufferGraphWrapper)) &StatGraphSystemWrapper::SetInputBufferGraph, "C++: StatGraphSystemWrapper::SetInputBufferGraph(class InputBufferGraphWrapper) --> void", "newInputBufferGraph"_a);
		cl.def("GetStatGraphs", (class ArrayWrapper<class StatGraphWrapper> (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetStatGraphs, "C++: StatGraphSystemWrapper::GetStatGraphs() --> class ArrayWrapper<class StatGraphWrapper>");
		cl.def("GetVisibleStatGraphs", (class ArrayWrapper<class StatGraphWrapper> (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetVisibleStatGraphs, "C++: StatGraphSystemWrapper::GetVisibleStatGraphs() --> class ArrayWrapper<class StatGraphWrapper>");
		cl.def("GetPreallocGraphLines", (int (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetPreallocGraphLines, "C++: StatGraphSystemWrapper::GetPreallocGraphLines() --> int");
		cl.def("SetPreallocGraphLines", (void (StatGraphSystemWrapper::*)(int)) &StatGraphSystemWrapper::SetPreallocGraphLines, "C++: StatGraphSystemWrapper::SetPreallocGraphLines(int) --> void", "newPreallocGraphLines"_a);
		cl.def("__StatGraphSystem_TA__SetGraphLevel", (void (StatGraphSystemWrapper::*)(class StatGraphWrapper)) &StatGraphSystemWrapper::__StatGraphSystem_TA__SetGraphLevel, "C++: StatGraphSystemWrapper::__StatGraphSystem_TA__SetGraphLevel(class StatGraphWrapper) --> void", "G"_a);
		cl.def("PacketReceived", (void (StatGraphSystemWrapper::*)(float)) &StatGraphSystemWrapper::PacketReceived, "C++: StatGraphSystemWrapper::PacketReceived(float) --> void", "Latency"_a);
		cl.def("Graphtime", (void (StatGraphSystemWrapper::*)(float)) &StatGraphSystemWrapper::Graphtime, "C++: StatGraphSystemWrapper::Graphtime(float) --> void", "Seconds"_a);
		cl.def("StatGraphNext", (void (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::StatGraphNext, "C++: StatGraphSystemWrapper::StatGraphNext() --> void");
		cl.def("GetGraphSampleTime2", (float (StatGraphSystemWrapper::*)(unsigned char)) &StatGraphSystemWrapper::GetGraphSampleTime2, "C++: StatGraphSystemWrapper::GetGraphSampleTime2(unsigned char) --> float", "Level"_a);
		cl.def("SetGraphLevel2", (void (StatGraphSystemWrapper::*)(unsigned char)) &StatGraphSystemWrapper::SetGraphLevel2, "C++: StatGraphSystemWrapper::SetGraphLevel2(unsigned char) --> void", "Level"_a);
	}
}
