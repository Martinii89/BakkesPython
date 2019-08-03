#include "pch.h"
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/BoostWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/InputBufferGraphWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/NetStatGraphWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/PerfStatGraphWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/SampleHistoryWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/SampleRecordSettingsWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/StatGraphSystemWrapper.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/AttachmentPickup.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_bakkesmod_wrappers_GameObject_PerformanceStats_StatGraphSystemWrapper(py::module &M)
{
	{ // StatGraphSystemWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/StatGraphSystemWrapper.h line:11
		pybind11::class_<StatGraphSystemWrapper, std::shared_ptr<StatGraphSystemWrapper>, ObjectWrapper> cl(M, "StatGraphSystemWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](StatGraphSystemWrapper const &o){ return new StatGraphSystemWrapper(o); } ) );
		cl.def("assign", (class StatGraphSystemWrapper & (StatGraphSystemWrapper::*)(class StatGraphSystemWrapper)) &StatGraphSystemWrapper::operator=, "C++: StatGraphSystemWrapper::operator=(class StatGraphSystemWrapper) --> class StatGraphSystemWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetGraphSampleTime", (float (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetGraphSampleTime, "C++: StatGraphSystemWrapper::GetGraphSampleTime() --> float");
		cl.def("SetGraphSampleTime", (void (StatGraphSystemWrapper::*)(float)) &StatGraphSystemWrapper::SetGraphSampleTime, "C++: StatGraphSystemWrapper::SetGraphSampleTime(float) --> void", pybind11::arg("newGraphSampleTime"));
		cl.def("GetGraphLevel", (unsigned char (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetGraphLevel, "C++: StatGraphSystemWrapper::GetGraphLevel() --> unsigned char");
		cl.def("SetGraphLevel", (void (StatGraphSystemWrapper::*)(unsigned char)) &StatGraphSystemWrapper::SetGraphLevel, "C++: StatGraphSystemWrapper::SetGraphLevel(unsigned char) --> void", pybind11::arg("newGraphLevel"));
		cl.def("GetPerfStatGraph", (class PerfStatGraphWrapper (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetPerfStatGraph, "C++: StatGraphSystemWrapper::GetPerfStatGraph() --> class PerfStatGraphWrapper");
		cl.def("SetPerfStatGraph", (void (StatGraphSystemWrapper::*)(class PerfStatGraphWrapper)) &StatGraphSystemWrapper::SetPerfStatGraph, "C++: StatGraphSystemWrapper::SetPerfStatGraph(class PerfStatGraphWrapper) --> void", pybind11::arg("newPerfStatGraph"));
		cl.def("GetNetStatGraph", (class NetStatGraphWrapper (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetNetStatGraph, "C++: StatGraphSystemWrapper::GetNetStatGraph() --> class NetStatGraphWrapper");
		cl.def("SetNetStatGraph", (void (StatGraphSystemWrapper::*)(class NetStatGraphWrapper)) &StatGraphSystemWrapper::SetNetStatGraph, "C++: StatGraphSystemWrapper::SetNetStatGraph(class NetStatGraphWrapper) --> void", pybind11::arg("newNetStatGraph"));
		cl.def("GetInputBufferGraph", (class InputBufferGraphWrapper (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetInputBufferGraph, "C++: StatGraphSystemWrapper::GetInputBufferGraph() --> class InputBufferGraphWrapper");
		cl.def("SetInputBufferGraph", (void (StatGraphSystemWrapper::*)(class InputBufferGraphWrapper)) &StatGraphSystemWrapper::SetInputBufferGraph, "C++: StatGraphSystemWrapper::SetInputBufferGraph(class InputBufferGraphWrapper) --> void", pybind11::arg("newInputBufferGraph"));
		cl.def("GetStatGraphs", (class ArrayWrapper<class StatGraphWrapper> (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetStatGraphs, "C++: StatGraphSystemWrapper::GetStatGraphs() --> class ArrayWrapper<class StatGraphWrapper>");
		cl.def("GetVisibleStatGraphs", (class ArrayWrapper<class StatGraphWrapper> (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetVisibleStatGraphs, "C++: StatGraphSystemWrapper::GetVisibleStatGraphs() --> class ArrayWrapper<class StatGraphWrapper>");
		cl.def("GetPreallocGraphLines", (int (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetPreallocGraphLines, "C++: StatGraphSystemWrapper::GetPreallocGraphLines() --> int");
		cl.def("SetPreallocGraphLines", (void (StatGraphSystemWrapper::*)(int)) &StatGraphSystemWrapper::SetPreallocGraphLines, "C++: StatGraphSystemWrapper::SetPreallocGraphLines(int) --> void", pybind11::arg("newPreallocGraphLines"));
		cl.def("__StatGraphSystem_TA__SetGraphLevel", (void (StatGraphSystemWrapper::*)(class StatGraphWrapper)) &StatGraphSystemWrapper::__StatGraphSystem_TA__SetGraphLevel, "C++: StatGraphSystemWrapper::__StatGraphSystem_TA__SetGraphLevel(class StatGraphWrapper) --> void", pybind11::arg("G"));
		cl.def("PacketReceived", (void (StatGraphSystemWrapper::*)(float)) &StatGraphSystemWrapper::PacketReceived, "C++: StatGraphSystemWrapper::PacketReceived(float) --> void", pybind11::arg("Latency"));
		cl.def("Graphtime", (void (StatGraphSystemWrapper::*)(float)) &StatGraphSystemWrapper::Graphtime, "C++: StatGraphSystemWrapper::Graphtime(float) --> void", pybind11::arg("Seconds"));
		cl.def("StatGraphNext", (void (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::StatGraphNext, "C++: StatGraphSystemWrapper::StatGraphNext() --> void");
		cl.def("GetGraphSampleTime2", (float (StatGraphSystemWrapper::*)(unsigned char)) &StatGraphSystemWrapper::GetGraphSampleTime2, "C++: StatGraphSystemWrapper::GetGraphSampleTime2(unsigned char) --> float", pybind11::arg("Level"));
		cl.def("SetGraphLevel2", (void (StatGraphSystemWrapper::*)(unsigned char)) &StatGraphSystemWrapper::SetGraphLevel2, "C++: StatGraphSystemWrapper::SetGraphLevel2(unsigned char) --> void", pybind11::arg("Level"));
	}
	{ // RumblePickupComponentWrapper file: line:12
		pybind11::class_<RumblePickupComponentWrapper, std::shared_ptr<RumblePickupComponentWrapper>, CarComponentWrapper> cl(M, "RumblePickupComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](RumblePickupComponentWrapper const &o){ return new RumblePickupComponentWrapper(o); } ) );
		cl.def("assign", (class RumblePickupComponentWrapper & (RumblePickupComponentWrapper::*)(class RumblePickupComponentWrapper)) &RumblePickupComponentWrapper::operator=, "C++: RumblePickupComponentWrapper::operator=(class RumblePickupComponentWrapper) --> class RumblePickupComponentWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetPickupName", (class UnrealStringWrapper (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetPickupName, "C++: RumblePickupComponentWrapper::GetPickupName() --> class UnrealStringWrapper");
		cl.def("GetbHudIgnoreUseTime", (unsigned long (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetbHudIgnoreUseTime, "C++: RumblePickupComponentWrapper::GetbHudIgnoreUseTime() --> unsigned long");
		cl.def("SetbHudIgnoreUseTime", (void (RumblePickupComponentWrapper::*)(unsigned long)) &RumblePickupComponentWrapper::SetbHudIgnoreUseTime, "C++: RumblePickupComponentWrapper::SetbHudIgnoreUseTime(unsigned long) --> void", pybind11::arg("newbHudIgnoreUseTime"));
		cl.def("GetbHasActivated", (unsigned long (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetbHasActivated, "C++: RumblePickupComponentWrapper::GetbHasActivated() --> unsigned long");
		cl.def("SetbHasActivated", (void (RumblePickupComponentWrapper::*)(unsigned long)) &RumblePickupComponentWrapper::SetbHasActivated, "C++: RumblePickupComponentWrapper::SetbHasActivated(unsigned long) --> void", pybind11::arg("newbHasActivated"));
		cl.def("GetbIsActive", (unsigned long (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetbIsActive, "C++: RumblePickupComponentWrapper::GetbIsActive() --> unsigned long");
		cl.def("SetbIsActive", (void (RumblePickupComponentWrapper::*)(unsigned long)) &RumblePickupComponentWrapper::SetbIsActive, "C++: RumblePickupComponentWrapper::SetbIsActive(unsigned long) --> void", pybind11::arg("newbIsActive"));
		cl.def("GetActivationDuration", (float (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetActivationDuration, "C++: RumblePickupComponentWrapper::GetActivationDuration() --> float");
		cl.def("SetActivationDuration", (void (RumblePickupComponentWrapper::*)(float)) &RumblePickupComponentWrapper::SetActivationDuration, "C++: RumblePickupComponentWrapper::SetActivationDuration(float) --> void", pybind11::arg("newActivationDuration"));
		cl.def("HasActivated2", (bool (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::HasActivated2, "C++: RumblePickupComponentWrapper::HasActivated2() --> bool");
		cl.def("GetClientTarget", (class RBActorWrapper (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetClientTarget, "C++: RumblePickupComponentWrapper::GetClientTarget() --> class RBActorWrapper");
		cl.def("OnVehicleSetupComplete", (void (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::OnVehicleSetupComplete, "C++: RumblePickupComponentWrapper::OnVehicleSetupComplete() --> void");
		cl.def("GetActiveTimePercent", (float (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetActiveTimePercent, "C++: RumblePickupComponentWrapper::GetActiveTimePercent() --> float");
		cl.def("PickupEnd", (void (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::PickupEnd, "C++: RumblePickupComponentWrapper::PickupEnd() --> void");
		cl.def("PickupStart", (void (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::PickupStart, "C++: RumblePickupComponentWrapper::PickupStart() --> void");
		cl.def("GetBoostComponent", (class BoostWrapper (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::GetBoostComponent, "C++: RumblePickupComponentWrapper::GetBoostComponent() --> class BoostWrapper");
		cl.def("DeactivatePickup", (void (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::DeactivatePickup, "C++: RumblePickupComponentWrapper::DeactivatePickup() --> void");
		cl.def("TryActivate", (bool (RumblePickupComponentWrapper::*)(class RBActorWrapper)) &RumblePickupComponentWrapper::TryActivate, "C++: RumblePickupComponentWrapper::TryActivate(class RBActorWrapper) --> bool", pybind11::arg("TargetOverride"));
		cl.def("OnCreated", (void (RumblePickupComponentWrapper::*)()) &RumblePickupComponentWrapper::OnCreated, "C++: RumblePickupComponentWrapper::OnCreated() --> void");
		cl.def("CanPickup", (bool (RumblePickupComponentWrapper::*)(class CarWrapper)) &RumblePickupComponentWrapper::CanPickup, "C++: RumblePickupComponentWrapper::CanPickup(class CarWrapper) --> bool", pybind11::arg("InCar"));
		cl.def("ApplyPickup", (void (RumblePickupComponentWrapper::*)(class CarWrapper)) &RumblePickupComponentWrapper::ApplyPickup, "C++: RumblePickupComponentWrapper::ApplyPickup(class CarWrapper) --> void", pybind11::arg("InCar"));
	}
	{ // AttachmentPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/AttachmentPickup.h line:7
		pybind11::class_<AttachmentPickup, std::shared_ptr<AttachmentPickup>, RumblePickupComponentWrapper> cl(M, "AttachmentPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](AttachmentPickup const &o){ return new AttachmentPickup(o); } ) );
		cl.def("assign", (class AttachmentPickup & (AttachmentPickup::*)(class AttachmentPickup)) &AttachmentPickup::operator=, "C++: AttachmentPickup::operator=(class AttachmentPickup) --> class AttachmentPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("PickupEnd", (void (AttachmentPickup::*)()) &AttachmentPickup::PickupEnd, "C++: AttachmentPickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (AttachmentPickup::*)()) &AttachmentPickup::PickupStart, "C++: AttachmentPickup::PickupStart() --> void");
	}
	{ // TargetedPickup file: line:9
		pybind11::class_<TargetedPickup, std::shared_ptr<TargetedPickup>, RumblePickupComponentWrapper> cl(M, "TargetedPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](TargetedPickup const &o){ return new TargetedPickup(o); } ) );
		cl.def("assign", (class TargetedPickup & (TargetedPickup::*)(class TargetedPickup)) &TargetedPickup::operator=, "C++: TargetedPickup::operator=(class TargetedPickup) --> class TargetedPickup &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetbCanTargetBall", (unsigned long (TargetedPickup::*)()) &TargetedPickup::GetbCanTargetBall, "C++: TargetedPickup::GetbCanTargetBall() --> unsigned long");
		cl.def("SetbCanTargetBall", (void (TargetedPickup::*)(unsigned long)) &TargetedPickup::SetbCanTargetBall, "C++: TargetedPickup::SetbCanTargetBall(unsigned long) --> void", pybind11::arg("newbCanTargetBall"));
		cl.def("GetbCanTargetCars", (unsigned long (TargetedPickup::*)()) &TargetedPickup::GetbCanTargetCars, "C++: TargetedPickup::GetbCanTargetCars() --> unsigned long");
		cl.def("SetbCanTargetCars", (void (TargetedPickup::*)(unsigned long)) &TargetedPickup::SetbCanTargetCars, "C++: TargetedPickup::SetbCanTargetCars(unsigned long) --> void", pybind11::arg("newbCanTargetCars"));
		cl.def("GetbCanTargetEnemyCars", (unsigned long (TargetedPickup::*)()) &TargetedPickup::GetbCanTargetEnemyCars, "C++: TargetedPickup::GetbCanTargetEnemyCars() --> unsigned long");
		cl.def("SetbCanTargetEnemyCars", (void (TargetedPickup::*)(unsigned long)) &TargetedPickup::SetbCanTargetEnemyCars, "C++: TargetedPickup::SetbCanTargetEnemyCars(unsigned long) --> void", pybind11::arg("newbCanTargetEnemyCars"));
		cl.def("GetbCanTargetTeamCars", (unsigned long (TargetedPickup::*)()) &TargetedPickup::GetbCanTargetTeamCars, "C++: TargetedPickup::GetbCanTargetTeamCars() --> unsigned long");
		cl.def("SetbCanTargetTeamCars", (void (TargetedPickup::*)(unsigned long)) &TargetedPickup::SetbCanTargetTeamCars, "C++: TargetedPickup::SetbCanTargetTeamCars(unsigned long) --> void", pybind11::arg("newbCanTargetTeamCars"));
		cl.def("GetbUseDirectionalTargeting", (unsigned long (TargetedPickup::*)()) &TargetedPickup::GetbUseDirectionalTargeting, "C++: TargetedPickup::GetbUseDirectionalTargeting() --> unsigned long");
		cl.def("SetbUseDirectionalTargeting", (void (TargetedPickup::*)(unsigned long)) &TargetedPickup::SetbUseDirectionalTargeting, "C++: TargetedPickup::SetbUseDirectionalTargeting(unsigned long) --> void", pybind11::arg("newbUseDirectionalTargeting"));
		cl.def("GetbRequireTrace", (unsigned long (TargetedPickup::*)()) &TargetedPickup::GetbRequireTrace, "C++: TargetedPickup::GetbRequireTrace() --> unsigned long");
		cl.def("SetbRequireTrace", (void (TargetedPickup::*)(unsigned long)) &TargetedPickup::SetbRequireTrace, "C++: TargetedPickup::SetbRequireTrace(unsigned long) --> void", pybind11::arg("newbRequireTrace"));
		cl.def("GetRange", (float (TargetedPickup::*)()) &TargetedPickup::GetRange, "C++: TargetedPickup::GetRange() --> float");
		cl.def("SetRange", (void (TargetedPickup::*)(float)) &TargetedPickup::SetRange, "C++: TargetedPickup::SetRange(float) --> void", pybind11::arg("newRange"));
		cl.def("GetDirectionalTargetingAccuracy", (float (TargetedPickup::*)()) &TargetedPickup::GetDirectionalTargetingAccuracy, "C++: TargetedPickup::GetDirectionalTargetingAccuracy() --> float");
		cl.def("SetDirectionalTargetingAccuracy", (void (TargetedPickup::*)(float)) &TargetedPickup::SetDirectionalTargetingAccuracy, "C++: TargetedPickup::SetDirectionalTargetingAccuracy(float) --> void", pybind11::arg("newDirectionalTargetingAccuracy"));
		cl.def("GetClientTarget", (class RBActorWrapper (TargetedPickup::*)()) &TargetedPickup::GetClientTarget, "C++: TargetedPickup::GetClientTarget() --> class RBActorWrapper");
		cl.def("SetClientTarget", (void (TargetedPickup::*)(class RBActorWrapper)) &TargetedPickup::SetClientTarget, "C++: TargetedPickup::SetClientTarget(class RBActorWrapper) --> void", pybind11::arg("newClientTarget"));
		cl.def("GetTargeted", (class RBActorWrapper (TargetedPickup::*)()) &TargetedPickup::GetTargeted, "C++: TargetedPickup::GetTargeted() --> class RBActorWrapper");
		cl.def("SetTargeted", (void (TargetedPickup::*)(class RBActorWrapper)) &TargetedPickup::SetTargeted, "C++: TargetedPickup::SetTargeted(class RBActorWrapper) --> void", pybind11::arg("newTargeted"));
		cl.def("GetClientTarget2", (class RBActorWrapper (TargetedPickup::*)()) &TargetedPickup::GetClientTarget2, "C++: TargetedPickup::GetClientTarget2() --> class RBActorWrapper");
		cl.def("TargetChanged", (void (TargetedPickup::*)()) &TargetedPickup::TargetChanged, "C++: TargetedPickup::TargetChanged() --> void");
		cl.def("OnTargetChanged", (void (TargetedPickup::*)()) &TargetedPickup::OnTargetChanged, "C++: TargetedPickup::OnTargetChanged() --> void");
		cl.def("TryActivate", (bool (TargetedPickup::*)(class RBActorWrapper)) &TargetedPickup::TryActivate, "C++: TargetedPickup::TryActivate(class RBActorWrapper) --> bool", pybind11::arg("TargetOverride"));
		cl.def("ValidateTargetTrace", (bool (TargetedPickup::*)(class RBActorWrapper)) &TargetedPickup::ValidateTargetTrace, "C++: TargetedPickup::ValidateTargetTrace(class RBActorWrapper) --> bool", pybind11::arg("InTarget"));
		cl.def("ValidateTarget2", (bool (TargetedPickup::*)(class RBActorWrapper)) &TargetedPickup::ValidateTarget2, "C++: TargetedPickup::ValidateTarget2(class RBActorWrapper) --> bool", pybind11::arg("InTarget"));
		cl.def("GetTarget2", (class RBActorWrapper (TargetedPickup::*)()) &TargetedPickup::GetTarget2, "C++: TargetedPickup::GetTarget2() --> class RBActorWrapper");
	}
}
