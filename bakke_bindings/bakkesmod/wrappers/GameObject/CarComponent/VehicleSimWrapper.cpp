#include "pch.h"
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/AirControlComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/BoostWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/DodgeComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/DoubleJumpComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/JumpComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/VehicleSimWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/InputBufferGraphWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/NetStatGraphWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/SampleHistoryWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/SampleRecordSettingsWrapper.h>
#include <bakkesmod/wrappers/StructArrayWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_bakkesmod_wrappers_GameObject_CarComponent_VehicleSimWrapper(py::module &M)
{
	{ // VehicleSimWrapper file:bakkesmod/wrappers/GameObject/CarComponent/VehicleSimWrapper.h line:10
		pybind11::class_<VehicleSimWrapper, std::shared_ptr<VehicleSimWrapper>, ObjectWrapper> cl(M, "VehicleSimWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](VehicleSimWrapper const &o){ return new VehicleSimWrapper(o); } ) );
		cl.def("assign", (class VehicleSimWrapper & (VehicleSimWrapper::*)(class VehicleSimWrapper)) &VehicleSimWrapper::operator=, "C++: VehicleSimWrapper::operator=(class VehicleSimWrapper) --> class VehicleSimWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetWheels", (class ArrayWrapper<class WheelWrapper> (VehicleSimWrapper::*)()) &VehicleSimWrapper::GetWheels, "C++: VehicleSimWrapper::GetWheels() --> class ArrayWrapper<class WheelWrapper>");
		cl.def("GetDriveTorque", (float (VehicleSimWrapper::*)()) &VehicleSimWrapper::GetDriveTorque, "C++: VehicleSimWrapper::GetDriveTorque() --> float");
		cl.def("SetDriveTorque", (void (VehicleSimWrapper::*)(float)) &VehicleSimWrapper::SetDriveTorque, "C++: VehicleSimWrapper::SetDriveTorque(float) --> void", "newDriveTorque"_a);
		cl.def("GetBrakeTorque", (float (VehicleSimWrapper::*)()) &VehicleSimWrapper::GetBrakeTorque, "C++: VehicleSimWrapper::GetBrakeTorque() --> float");
		cl.def("SetBrakeTorque", (void (VehicleSimWrapper::*)(float)) &VehicleSimWrapper::SetBrakeTorque, "C++: VehicleSimWrapper::SetBrakeTorque(float) --> void", "newBrakeTorque"_a);
		cl.def("GetStopThreshold", (float (VehicleSimWrapper::*)()) &VehicleSimWrapper::GetStopThreshold, "C++: VehicleSimWrapper::GetStopThreshold() --> float");
		cl.def("SetStopThreshold", (void (VehicleSimWrapper::*)(float)) &VehicleSimWrapper::SetStopThreshold, "C++: VehicleSimWrapper::SetStopThreshold(float) --> void", "newStopThreshold"_a);
		cl.def("GetIdleBrakeFactor", (float (VehicleSimWrapper::*)()) &VehicleSimWrapper::GetIdleBrakeFactor, "C++: VehicleSimWrapper::GetIdleBrakeFactor() --> float");
		cl.def("SetIdleBrakeFactor", (void (VehicleSimWrapper::*)(float)) &VehicleSimWrapper::SetIdleBrakeFactor, "C++: VehicleSimWrapper::SetIdleBrakeFactor(float) --> void", "newIdleBrakeFactor"_a);
		cl.def("GetOppositeBrakeFactor", (float (VehicleSimWrapper::*)()) &VehicleSimWrapper::GetOppositeBrakeFactor, "C++: VehicleSimWrapper::GetOppositeBrakeFactor() --> float");
		cl.def("SetOppositeBrakeFactor", (void (VehicleSimWrapper::*)(float)) &VehicleSimWrapper::SetOppositeBrakeFactor, "C++: VehicleSimWrapper::SetOppositeBrakeFactor(float) --> void", "newOppositeBrakeFactor"_a);
		cl.def("GetbUseAckermannSteering", (unsigned long (VehicleSimWrapper::*)()) &VehicleSimWrapper::GetbUseAckermannSteering, "C++: VehicleSimWrapper::GetbUseAckermannSteering() --> unsigned long");
		cl.def("SetbUseAckermannSteering", (void (VehicleSimWrapper::*)(unsigned long)) &VehicleSimWrapper::SetbUseAckermannSteering, "C++: VehicleSimWrapper::SetbUseAckermannSteering(unsigned long) --> void", "newbUseAckermannSteering"_a);
		cl.def("GetbWasAttached", (unsigned long (VehicleSimWrapper::*)()) &VehicleSimWrapper::GetbWasAttached, "C++: VehicleSimWrapper::GetbWasAttached() --> unsigned long");
		cl.def("SetbWasAttached", (void (VehicleSimWrapper::*)(unsigned long)) &VehicleSimWrapper::SetbWasAttached, "C++: VehicleSimWrapper::SetbWasAttached(unsigned long) --> void", "newbWasAttached"_a);
		cl.def("GetOutputThrottle", (float (VehicleSimWrapper::*)()) &VehicleSimWrapper::GetOutputThrottle, "C++: VehicleSimWrapper::GetOutputThrottle() --> float");
		cl.def("SetOutputThrottle", (void (VehicleSimWrapper::*)(float)) &VehicleSimWrapper::SetOutputThrottle, "C++: VehicleSimWrapper::SetOutputThrottle(float) --> void", "newOutputThrottle"_a);
		cl.def("GetOutputSteer", (float (VehicleSimWrapper::*)()) &VehicleSimWrapper::GetOutputSteer, "C++: VehicleSimWrapper::GetOutputSteer() --> float");
		cl.def("SetOutputSteer", (void (VehicleSimWrapper::*)(float)) &VehicleSimWrapper::SetOutputSteer, "C++: VehicleSimWrapper::SetOutputSteer(float) --> void", "newOutputSteer"_a);
		cl.def("GetOutputBrake", (float (VehicleSimWrapper::*)()) &VehicleSimWrapper::GetOutputBrake, "C++: VehicleSimWrapper::GetOutputBrake() --> float");
		cl.def("SetOutputBrake", (void (VehicleSimWrapper::*)(float)) &VehicleSimWrapper::SetOutputBrake, "C++: VehicleSimWrapper::SetOutputBrake(float) --> void", "newOutputBrake"_a);
		cl.def("GetOutputHandbrake", (float (VehicleSimWrapper::*)()) &VehicleSimWrapper::GetOutputHandbrake, "C++: VehicleSimWrapper::GetOutputHandbrake() --> float");
		cl.def("SetOutputHandbrake", (void (VehicleSimWrapper::*)(float)) &VehicleSimWrapper::SetOutputHandbrake, "C++: VehicleSimWrapper::SetOutputHandbrake(float) --> void", "newOutputHandbrake"_a);
		cl.def("GetVehicle", (class VehicleWrapper (VehicleSimWrapper::*)()) &VehicleSimWrapper::GetVehicle, "C++: VehicleSimWrapper::GetVehicle() --> class VehicleWrapper");
		cl.def("SetVehicle", (void (VehicleSimWrapper::*)(class VehicleWrapper)) &VehicleSimWrapper::SetVehicle, "C++: VehicleSimWrapper::SetVehicle(class VehicleWrapper) --> void", "newVehicle"_a);
		cl.def("GetCar", (class CarWrapper (VehicleSimWrapper::*)()) &VehicleSimWrapper::GetCar, "C++: VehicleSimWrapper::GetCar() --> class CarWrapper");
		cl.def("SetCar", (void (VehicleSimWrapper::*)(class CarWrapper)) &VehicleSimWrapper::SetCar, "C++: VehicleSimWrapper::SetCar(class CarWrapper) --> void", "newCar"_a);
		cl.def("GetSteeringSensitivity", (float (VehicleSimWrapper::*)()) &VehicleSimWrapper::GetSteeringSensitivity, "C++: VehicleSimWrapper::GetSteeringSensitivity() --> float");
		cl.def("SetSteeringSensitivity", (void (VehicleSimWrapper::*)(float)) &VehicleSimWrapper::SetSteeringSensitivity, "C++: VehicleSimWrapper::SetSteeringSensitivity(float) --> void", "newSteeringSensitivity"_a);
	}
	{ // StatGraphWrapper file: line:9
		pybind11::class_<StatGraphWrapper, std::shared_ptr<StatGraphWrapper>, ObjectWrapper> cl(M, "StatGraphWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](StatGraphWrapper const &o){ return new StatGraphWrapper(o); } ) );
		cl.def("assign", (class StatGraphWrapper & (StatGraphWrapper::*)(class StatGraphWrapper)) &StatGraphWrapper::operator=, "C++: StatGraphWrapper::operator=(class StatGraphWrapper) --> class StatGraphWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetRecordSettings", (class SampleRecordSettingsWrapper (StatGraphWrapper::*)()) &StatGraphWrapper::GetRecordSettings, "C++: StatGraphWrapper::GetRecordSettings() --> class SampleRecordSettingsWrapper");
		cl.def("SetRecordSettings", (void (StatGraphWrapper::*)(class SampleRecordSettingsWrapper)) &StatGraphWrapper::SetRecordSettings, "C++: StatGraphWrapper::SetRecordSettings(class SampleRecordSettingsWrapper) --> void", "newRecordSettings"_a);
		cl.def("GetLastTickTime", (double (StatGraphWrapper::*)()) &StatGraphWrapper::GetLastTickTime, "C++: StatGraphWrapper::GetLastTickTime() --> double");
		cl.def("SetLastTickTime", (void (StatGraphWrapper::*)(double)) &StatGraphWrapper::SetLastTickTime, "C++: StatGraphWrapper::SetLastTickTime(double) --> void", "newLastTickTime"_a);
		cl.def("GetSampleHistories", (class ArrayWrapper<class SampleHistoryWrapper> (StatGraphWrapper::*)()) &StatGraphWrapper::GetSampleHistories, "C++: StatGraphWrapper::GetSampleHistories() --> class ArrayWrapper<class SampleHistoryWrapper>");
		cl.def("StopDrawing", (void (StatGraphWrapper::*)()) &StatGraphWrapper::StopDrawing, "C++: StatGraphWrapper::StopDrawing() --> void");
		cl.def("CreateSampleHistory", (class SampleHistoryWrapper (StatGraphWrapper::*)(std::string)) &StatGraphWrapper::CreateSampleHistory, "C++: StatGraphWrapper::CreateSampleHistory(std::string) --> class SampleHistoryWrapper", "Title"_a);
		cl.def("AddSampleHistory", (class SampleHistoryWrapper (StatGraphWrapper::*)(class SampleHistoryWrapper)) &StatGraphWrapper::AddSampleHistory, "C++: StatGraphWrapper::AddSampleHistory(class SampleHistoryWrapper) --> class SampleHistoryWrapper", "History"_a);
		cl.def("eventConstruct", (void (StatGraphWrapper::*)()) &StatGraphWrapper::eventConstruct, "C++: StatGraphWrapper::eventConstruct() --> void");
	}
	{ // InputBufferGraphWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/InputBufferGraphWrapper.h line:8
		pybind11::class_<InputBufferGraphWrapper, std::shared_ptr<InputBufferGraphWrapper>, StatGraphWrapper> cl(M, "InputBufferGraphWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](InputBufferGraphWrapper const &o){ return new InputBufferGraphWrapper(o); } ) );
		cl.def("assign", (class InputBufferGraphWrapper & (InputBufferGraphWrapper::*)(class InputBufferGraphWrapper)) &InputBufferGraphWrapper::operator=, "C++: InputBufferGraphWrapper::operator=(class InputBufferGraphWrapper) --> class InputBufferGraphWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetBuffer", (class SampleHistoryWrapper (InputBufferGraphWrapper::*)()) &InputBufferGraphWrapper::GetBuffer, "C++: InputBufferGraphWrapper::GetBuffer() --> class SampleHistoryWrapper");
		cl.def("SetBuffer", (void (InputBufferGraphWrapper::*)(class SampleHistoryWrapper)) &InputBufferGraphWrapper::SetBuffer, "C++: InputBufferGraphWrapper::SetBuffer(class SampleHistoryWrapper) --> void", "newBuffer"_a);
		cl.def("GetBufferTarget", (class SampleHistoryWrapper (InputBufferGraphWrapper::*)()) &InputBufferGraphWrapper::GetBufferTarget, "C++: InputBufferGraphWrapper::GetBufferTarget() --> class SampleHistoryWrapper");
		cl.def("SetBufferTarget", (void (InputBufferGraphWrapper::*)(class SampleHistoryWrapper)) &InputBufferGraphWrapper::SetBufferTarget, "C++: InputBufferGraphWrapper::SetBufferTarget(class SampleHistoryWrapper) --> void", "newBufferTarget"_a);
		cl.def("GetOverUnderFrames", (class SampleHistoryWrapper (InputBufferGraphWrapper::*)()) &InputBufferGraphWrapper::GetOverUnderFrames, "C++: InputBufferGraphWrapper::GetOverUnderFrames() --> class SampleHistoryWrapper");
		cl.def("SetOverUnderFrames", (void (InputBufferGraphWrapper::*)(class SampleHistoryWrapper)) &InputBufferGraphWrapper::SetOverUnderFrames, "C++: InputBufferGraphWrapper::SetOverUnderFrames(class SampleHistoryWrapper) --> void", "newOverUnderFrames"_a);
		cl.def("GetPhysicsRate", (class SampleHistoryWrapper (InputBufferGraphWrapper::*)()) &InputBufferGraphWrapper::GetPhysicsRate, "C++: InputBufferGraphWrapper::GetPhysicsRate() --> class SampleHistoryWrapper");
		cl.def("SetPhysicsRate", (void (InputBufferGraphWrapper::*)(class SampleHistoryWrapper)) &InputBufferGraphWrapper::SetPhysicsRate, "C++: InputBufferGraphWrapper::SetPhysicsRate(class SampleHistoryWrapper) --> void", "newPhysicsRate"_a);
		cl.def("GetMaxPhysicsRate", (float (InputBufferGraphWrapper::*)()) &InputBufferGraphWrapper::GetMaxPhysicsRate, "C++: InputBufferGraphWrapper::GetMaxPhysicsRate() --> float");
		cl.def("SetMaxPhysicsRate", (void (InputBufferGraphWrapper::*)(float)) &InputBufferGraphWrapper::SetMaxPhysicsRate, "C++: InputBufferGraphWrapper::SetMaxPhysicsRate(float) --> void", "newMaxPhysicsRate"_a);
		cl.def("GetMinPhysicsRate", (float (InputBufferGraphWrapper::*)()) &InputBufferGraphWrapper::GetMinPhysicsRate, "C++: InputBufferGraphWrapper::GetMinPhysicsRate() --> float");
		cl.def("SetMinPhysicsRate", (void (InputBufferGraphWrapper::*)(float)) &InputBufferGraphWrapper::SetMinPhysicsRate, "C++: InputBufferGraphWrapper::SetMinPhysicsRate(float) --> void", "newMinPhysicsRate"_a);
		cl.def("CreateBufferHistory", (class SampleHistoryWrapper (InputBufferGraphWrapper::*)(std::string)) &InputBufferGraphWrapper::CreateBufferHistory, "C++: InputBufferGraphWrapper::CreateBufferHistory(std::string) --> class SampleHistoryWrapper", "Title"_a);
		cl.def("eventConstruct", (void (InputBufferGraphWrapper::*)()) &InputBufferGraphWrapper::eventConstruct, "C++: InputBufferGraphWrapper::eventConstruct() --> void");
	}
	{ // NetStatGraphWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/NetStatGraphWrapper.h line:8
		pybind11::class_<NetStatGraphWrapper, std::shared_ptr<NetStatGraphWrapper>, StatGraphWrapper> cl(M, "NetStatGraphWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](NetStatGraphWrapper const &o){ return new NetStatGraphWrapper(o); } ) );
		cl.def("assign", (class NetStatGraphWrapper & (NetStatGraphWrapper::*)(class NetStatGraphWrapper)) &NetStatGraphWrapper::operator=, "C++: NetStatGraphWrapper::operator=(class NetStatGraphWrapper) --> class NetStatGraphWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetPacketsOut", (class SampleHistoryWrapper (NetStatGraphWrapper::*)()) &NetStatGraphWrapper::GetPacketsOut, "C++: NetStatGraphWrapper::GetPacketsOut() --> class SampleHistoryWrapper");
		cl.def("SetPacketsOut", (void (NetStatGraphWrapper::*)(class SampleHistoryWrapper)) &NetStatGraphWrapper::SetPacketsOut, "C++: NetStatGraphWrapper::SetPacketsOut(class SampleHistoryWrapper) --> void", "newPacketsOut"_a);
		cl.def("GetPacketsIn", (class SampleHistoryWrapper (NetStatGraphWrapper::*)()) &NetStatGraphWrapper::GetPacketsIn, "C++: NetStatGraphWrapper::GetPacketsIn() --> class SampleHistoryWrapper");
		cl.def("SetPacketsIn", (void (NetStatGraphWrapper::*)(class SampleHistoryWrapper)) &NetStatGraphWrapper::SetPacketsIn, "C++: NetStatGraphWrapper::SetPacketsIn(class SampleHistoryWrapper) --> void", "newPacketsIn"_a);
		cl.def("GetLostPacketsOut", (class SampleHistoryWrapper (NetStatGraphWrapper::*)()) &NetStatGraphWrapper::GetLostPacketsOut, "C++: NetStatGraphWrapper::GetLostPacketsOut() --> class SampleHistoryWrapper");
		cl.def("SetLostPacketsOut", (void (NetStatGraphWrapper::*)(class SampleHistoryWrapper)) &NetStatGraphWrapper::SetLostPacketsOut, "C++: NetStatGraphWrapper::SetLostPacketsOut(class SampleHistoryWrapper) --> void", "newLostPacketsOut"_a);
		cl.def("GetLostPacketsIn", (class SampleHistoryWrapper (NetStatGraphWrapper::*)()) &NetStatGraphWrapper::GetLostPacketsIn, "C++: NetStatGraphWrapper::GetLostPacketsIn() --> class SampleHistoryWrapper");
		cl.def("SetLostPacketsIn", (void (NetStatGraphWrapper::*)(class SampleHistoryWrapper)) &NetStatGraphWrapper::SetLostPacketsIn, "C++: NetStatGraphWrapper::SetLostPacketsIn(class SampleHistoryWrapper) --> void", "newLostPacketsIn"_a);
		cl.def("GetBytesOut", (class SampleHistoryWrapper (NetStatGraphWrapper::*)()) &NetStatGraphWrapper::GetBytesOut, "C++: NetStatGraphWrapper::GetBytesOut() --> class SampleHistoryWrapper");
		cl.def("SetBytesOut", (void (NetStatGraphWrapper::*)(class SampleHistoryWrapper)) &NetStatGraphWrapper::SetBytesOut, "C++: NetStatGraphWrapper::SetBytesOut(class SampleHistoryWrapper) --> void", "newBytesOut"_a);
		cl.def("GetBytesIn", (class SampleHistoryWrapper (NetStatGraphWrapper::*)()) &NetStatGraphWrapper::GetBytesIn, "C++: NetStatGraphWrapper::GetBytesIn() --> class SampleHistoryWrapper");
		cl.def("SetBytesIn", (void (NetStatGraphWrapper::*)(class SampleHistoryWrapper)) &NetStatGraphWrapper::SetBytesIn, "C++: NetStatGraphWrapper::SetBytesIn(class SampleHistoryWrapper) --> void", "newBytesIn"_a);
		cl.def("GetLatency", (class SampleHistoryWrapper (NetStatGraphWrapper::*)()) &NetStatGraphWrapper::GetLatency, "C++: NetStatGraphWrapper::GetLatency() --> class SampleHistoryWrapper");
		cl.def("SetLatency", (void (NetStatGraphWrapper::*)(class SampleHistoryWrapper)) &NetStatGraphWrapper::SetLatency, "C++: NetStatGraphWrapper::SetLatency(class SampleHistoryWrapper) --> void", "newLatency"_a);
		cl.def("GetExpectedOutPacketRate", (float (NetStatGraphWrapper::*)()) &NetStatGraphWrapper::GetExpectedOutPacketRate, "C++: NetStatGraphWrapper::GetExpectedOutPacketRate() --> float");
		cl.def("SetExpectedOutPacketRate", (void (NetStatGraphWrapper::*)(float)) &NetStatGraphWrapper::SetExpectedOutPacketRate, "C++: NetStatGraphWrapper::SetExpectedOutPacketRate(float) --> void", "newExpectedOutPacketRate"_a);
		cl.def("GetExpectedInPacketRate", (float (NetStatGraphWrapper::*)()) &NetStatGraphWrapper::GetExpectedInPacketRate, "C++: NetStatGraphWrapper::GetExpectedInPacketRate() --> float");
		cl.def("SetExpectedInPacketRate", (void (NetStatGraphWrapper::*)(float)) &NetStatGraphWrapper::SetExpectedInPacketRate, "C++: NetStatGraphWrapper::SetExpectedInPacketRate(float) --> void", "newExpectedInPacketRate"_a);
		cl.def("GetMaxBytesRate", (float (NetStatGraphWrapper::*)()) &NetStatGraphWrapper::GetMaxBytesRate, "C++: NetStatGraphWrapper::GetMaxBytesRate() --> float");
		cl.def("SetMaxBytesRate", (void (NetStatGraphWrapper::*)(float)) &NetStatGraphWrapper::SetMaxBytesRate, "C++: NetStatGraphWrapper::SetMaxBytesRate(float) --> void", "newMaxBytesRate"_a);
		cl.def("eventUpdateGraphRanges", (void (NetStatGraphWrapper::*)()) &NetStatGraphWrapper::eventUpdateGraphRanges, "C++: NetStatGraphWrapper::eventUpdateGraphRanges() --> void");
		cl.def("CreateBytesSummary", (class SampleHistoryWrapper (NetStatGraphWrapper::*)(std::string)) &NetStatGraphWrapper::CreateBytesSummary, "C++: NetStatGraphWrapper::CreateBytesSummary(std::string) --> class SampleHistoryWrapper", "Title"_a);
		cl.def("CreateLossSummary", (class SampleHistoryWrapper (NetStatGraphWrapper::*)(std::string)) &NetStatGraphWrapper::CreateLossSummary, "C++: NetStatGraphWrapper::CreateLossSummary(std::string) --> class SampleHistoryWrapper", "Title"_a);
		cl.def("CreatePktSummary", (class SampleHistoryWrapper (NetStatGraphWrapper::*)(std::string)) &NetStatGraphWrapper::CreatePktSummary, "C++: NetStatGraphWrapper::CreatePktSummary(std::string) --> class SampleHistoryWrapper", "Title"_a);
		cl.def("eventConstruct", (void (NetStatGraphWrapper::*)()) &NetStatGraphWrapper::eventConstruct, "C++: NetStatGraphWrapper::eventConstruct() --> void");
	}
}
