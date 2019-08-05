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
#include <bakkesmod/wrappers/arraywrapper.h>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_unknown_unknown_6(py::module &M)
{
	{ // WheelWrapper file: line:8
		pybind11::class_<WheelWrapper, std::shared_ptr<WheelWrapper>, ObjectWrapper> cl(M, "WheelWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](WheelWrapper const &o){ return new WheelWrapper(o); } ) );
		cl.def("assign", (class WheelWrapper & (WheelWrapper::*)(class WheelWrapper)) &WheelWrapper::operator=, "C++: WheelWrapper::operator=(class WheelWrapper) --> class WheelWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetSteerFactor", (float (WheelWrapper::*)()) &WheelWrapper::GetSteerFactor, "C++: WheelWrapper::GetSteerFactor() --> float");
		cl.def("SetSteerFactor", (void (WheelWrapper::*)(float)) &WheelWrapper::SetSteerFactor, "C++: WheelWrapper::SetSteerFactor(float) --> void", "newSteerFactor"_a);
		cl.def("GetWheelRadius", (float (WheelWrapper::*)()) &WheelWrapper::GetWheelRadius, "C++: WheelWrapper::GetWheelRadius() --> float");
		cl.def("SetWheelRadius", (void (WheelWrapper::*)(float)) &WheelWrapper::SetWheelRadius, "C++: WheelWrapper::SetWheelRadius(float) --> void", "newWheelRadius"_a);
		cl.def("GetSuspensionStiffness", (float (WheelWrapper::*)()) &WheelWrapper::GetSuspensionStiffness, "C++: WheelWrapper::GetSuspensionStiffness() --> float");
		cl.def("SetSuspensionStiffness", (void (WheelWrapper::*)(float)) &WheelWrapper::SetSuspensionStiffness, "C++: WheelWrapper::SetSuspensionStiffness(float) --> void", "newSuspensionStiffness"_a);
		cl.def("GetSuspensionDampingCompression", (float (WheelWrapper::*)()) &WheelWrapper::GetSuspensionDampingCompression, "C++: WheelWrapper::GetSuspensionDampingCompression() --> float");
		cl.def("SetSuspensionDampingCompression", (void (WheelWrapper::*)(float)) &WheelWrapper::SetSuspensionDampingCompression, "C++: WheelWrapper::SetSuspensionDampingCompression(float) --> void", "newSuspensionDampingCompression"_a);
		cl.def("GetSuspensionDampingRelaxation", (float (WheelWrapper::*)()) &WheelWrapper::GetSuspensionDampingRelaxation, "C++: WheelWrapper::GetSuspensionDampingRelaxation() --> float");
		cl.def("SetSuspensionDampingRelaxation", (void (WheelWrapper::*)(float)) &WheelWrapper::SetSuspensionDampingRelaxation, "C++: WheelWrapper::SetSuspensionDampingRelaxation(float) --> void", "newSuspensionDampingRelaxation"_a);
		cl.def("GetSuspensionTravel", (float (WheelWrapper::*)()) &WheelWrapper::GetSuspensionTravel, "C++: WheelWrapper::GetSuspensionTravel() --> float");
		cl.def("SetSuspensionTravel", (void (WheelWrapper::*)(float)) &WheelWrapper::SetSuspensionTravel, "C++: WheelWrapper::SetSuspensionTravel(float) --> void", "newSuspensionTravel"_a);
		cl.def("GetSuspensionMaxRaise", (float (WheelWrapper::*)()) &WheelWrapper::GetSuspensionMaxRaise, "C++: WheelWrapper::GetSuspensionMaxRaise() --> float");
		cl.def("SetSuspensionMaxRaise", (void (WheelWrapper::*)(float)) &WheelWrapper::SetSuspensionMaxRaise, "C++: WheelWrapper::SetSuspensionMaxRaise(float) --> void", "newSuspensionMaxRaise"_a);
		cl.def("GetContactForceDistance", (float (WheelWrapper::*)()) &WheelWrapper::GetContactForceDistance, "C++: WheelWrapper::GetContactForceDistance() --> float");
		cl.def("SetContactForceDistance", (void (WheelWrapper::*)(float)) &WheelWrapper::SetContactForceDistance, "C++: WheelWrapper::SetContactForceDistance(float) --> void", "newContactForceDistance"_a);
		cl.def("GetSpinSpeedDecayRate", (float (WheelWrapper::*)()) &WheelWrapper::GetSpinSpeedDecayRate, "C++: WheelWrapper::GetSpinSpeedDecayRate() --> float");
		cl.def("SetSpinSpeedDecayRate", (void (WheelWrapper::*)(float)) &WheelWrapper::SetSpinSpeedDecayRate, "C++: WheelWrapper::SetSpinSpeedDecayRate(float) --> void", "newSpinSpeedDecayRate"_a);
		cl.def("GetBoneOffset", (struct Vector (WheelWrapper::*)()) &WheelWrapper::GetBoneOffset, "C++: WheelWrapper::GetBoneOffset() --> struct Vector");
		cl.def("SetBoneOffset", (void (WheelWrapper::*)(struct Vector)) &WheelWrapper::SetBoneOffset, "C++: WheelWrapper::SetBoneOffset(struct Vector) --> void", "newBoneOffset"_a);
		cl.def("GetPresetRestPosition", (struct Vector (WheelWrapper::*)()) &WheelWrapper::GetPresetRestPosition, "C++: WheelWrapper::GetPresetRestPosition() --> struct Vector");
		cl.def("SetPresetRestPosition", (void (WheelWrapper::*)(struct Vector)) &WheelWrapper::SetPresetRestPosition, "C++: WheelWrapper::SetPresetRestPosition(struct Vector) --> void", "newPresetRestPosition"_a);
		cl.def("GetLocalSuspensionRayStart", (struct Vector (WheelWrapper::*)()) &WheelWrapper::GetLocalSuspensionRayStart, "C++: WheelWrapper::GetLocalSuspensionRayStart() --> struct Vector");
		cl.def("SetLocalSuspensionRayStart", (void (WheelWrapper::*)(struct Vector)) &WheelWrapper::SetLocalSuspensionRayStart, "C++: WheelWrapper::SetLocalSuspensionRayStart(struct Vector) --> void", "newLocalSuspensionRayStart"_a);
		cl.def("GetLocalRestPosition", (struct Vector (WheelWrapper::*)()) &WheelWrapper::GetLocalRestPosition, "C++: WheelWrapper::GetLocalRestPosition() --> struct Vector");
		cl.def("SetLocalRestPosition", (void (WheelWrapper::*)(struct Vector)) &WheelWrapper::SetLocalRestPosition, "C++: WheelWrapper::SetLocalRestPosition(struct Vector) --> void", "newLocalRestPosition"_a);
		cl.def("GetVehicleSim", (class VehicleSimWrapper (WheelWrapper::*)()) &WheelWrapper::GetVehicleSim, "C++: WheelWrapper::GetVehicleSim() --> class VehicleSimWrapper");
		cl.def("SetVehicleSim", (void (WheelWrapper::*)(class VehicleSimWrapper)) &WheelWrapper::SetVehicleSim, "C++: WheelWrapper::SetVehicleSim(class VehicleSimWrapper) --> void", "newVehicleSim"_a);
		cl.def("GetWheelIndex", (int (WheelWrapper::*)()) &WheelWrapper::GetWheelIndex, "C++: WheelWrapper::GetWheelIndex() --> int");
		cl.def("SetWheelIndex", (void (WheelWrapper::*)(int)) &WheelWrapper::SetWheelIndex, "C++: WheelWrapper::SetWheelIndex(int) --> void", "newWheelIndex"_a);
		cl.def("GetContact", (struct WheelContactData (WheelWrapper::*)()) &WheelWrapper::GetContact, "C++: WheelWrapper::GetContact() --> struct WheelContactData");
		cl.def("SetContact", (void (WheelWrapper::*)(struct WheelContactData)) &WheelWrapper::SetContact, "C++: WheelWrapper::SetContact(struct WheelContactData) --> void", "newContact"_a);
		cl.def("GetbDrawDebug", (unsigned long (WheelWrapper::*)()) &WheelWrapper::GetbDrawDebug, "C++: WheelWrapper::GetbDrawDebug() --> unsigned long");
		cl.def("SetbDrawDebug", (void (WheelWrapper::*)(unsigned long)) &WheelWrapper::SetbDrawDebug, "C++: WheelWrapper::SetbDrawDebug(unsigned long) --> void", "newbDrawDebug"_a);
		cl.def("GetbHadContact", (unsigned long (WheelWrapper::*)()) &WheelWrapper::GetbHadContact, "C++: WheelWrapper::GetbHadContact() --> unsigned long");
		cl.def("SetbHadContact", (void (WheelWrapper::*)(unsigned long)) &WheelWrapper::SetbHadContact, "C++: WheelWrapper::SetbHadContact(unsigned long) --> void", "newbHadContact"_a);
		cl.def("GetFrictionCurveInput", (float (WheelWrapper::*)()) &WheelWrapper::GetFrictionCurveInput, "C++: WheelWrapper::GetFrictionCurveInput() --> float");
		cl.def("SetFrictionCurveInput", (void (WheelWrapper::*)(float)) &WheelWrapper::SetFrictionCurveInput, "C++: WheelWrapper::SetFrictionCurveInput(float) --> void", "newFrictionCurveInput"_a);
		cl.def("GetAerialThrottleToVelocityFactor", (float (WheelWrapper::*)()) &WheelWrapper::GetAerialThrottleToVelocityFactor, "C++: WheelWrapper::GetAerialThrottleToVelocityFactor() --> float");
		cl.def("SetAerialThrottleToVelocityFactor", (void (WheelWrapper::*)(float)) &WheelWrapper::SetAerialThrottleToVelocityFactor, "C++: WheelWrapper::SetAerialThrottleToVelocityFactor(float) --> void", "newAerialThrottleToVelocityFactor"_a);
		cl.def("GetAerialAccelerationFactor", (float (WheelWrapper::*)()) &WheelWrapper::GetAerialAccelerationFactor, "C++: WheelWrapper::GetAerialAccelerationFactor() --> float");
		cl.def("SetAerialAccelerationFactor", (void (WheelWrapper::*)(float)) &WheelWrapper::SetAerialAccelerationFactor, "C++: WheelWrapper::SetAerialAccelerationFactor(float) --> void", "newAerialAccelerationFactor"_a);
		cl.def("GetSpinSpeed", (float (WheelWrapper::*)()) &WheelWrapper::GetSpinSpeed, "C++: WheelWrapper::GetSpinSpeed() --> float");
		cl.def("SetSpinSpeed", (void (WheelWrapper::*)(float)) &WheelWrapper::SetSpinSpeed, "C++: WheelWrapper::SetSpinSpeed(float) --> void", "newSpinSpeed"_a);
		cl.def("GetRefWheelLocation", (struct Vector (WheelWrapper::*)()) &WheelWrapper::GetRefWheelLocation, "C++: WheelWrapper::GetRefWheelLocation() --> struct Vector");
		cl.def("GetSuspensionDistance", (float (WheelWrapper::*)()) &WheelWrapper::GetSuspensionDistance, "C++: WheelWrapper::GetSuspensionDistance() --> float");
		cl.def("GetSteer2", (float (WheelWrapper::*)()) &WheelWrapper::GetSteer2, "C++: WheelWrapper::GetSteer2() --> float");
		cl.def("GetLinearVelocity", (struct Vector (WheelWrapper::*)()) &WheelWrapper::GetLinearVelocity, "C++: WheelWrapper::GetLinearVelocity() --> struct Vector");
		cl.def("EventContactChanged", (void (WheelWrapper::*)(class WheelWrapper)) &WheelWrapper::EventContactChanged, "C++: WheelWrapper::EventContactChanged(class WheelWrapper) --> void", "Wheel"_a);
	}
	{ // CarComponentWrapper file: line:11
		pybind11::class_<CarComponentWrapper, std::shared_ptr<CarComponentWrapper>, ActorWrapper> cl(M, "CarComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](CarComponentWrapper const &o){ return new CarComponentWrapper(o); } ) );
		cl.def("assign", (class CarComponentWrapper & (CarComponentWrapper::*)(class CarComponentWrapper)) &CarComponentWrapper::operator=, "C++: CarComponentWrapper::operator=(class CarComponentWrapper) --> class CarComponentWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetFXActorArchetype", (class FXActorWrapper (CarComponentWrapper::*)()) &CarComponentWrapper::GetFXActorArchetype, "C++: CarComponentWrapper::GetFXActorArchetype() --> class FXActorWrapper");
		cl.def("SetFXActorArchetype", (void (CarComponentWrapper::*)(class FXActorWrapper)) &CarComponentWrapper::SetFXActorArchetype, "C++: CarComponentWrapper::SetFXActorArchetype(class FXActorWrapper) --> void", "newFXActorArchetype"_a);
		cl.def("GetbDisabled", (unsigned long (CarComponentWrapper::*)()) &CarComponentWrapper::GetbDisabled, "C++: CarComponentWrapper::GetbDisabled() --> unsigned long");
		cl.def("SetbDisabled", (void (CarComponentWrapper::*)(unsigned long)) &CarComponentWrapper::SetbDisabled, "C++: CarComponentWrapper::SetbDisabled(unsigned long) --> void", "newbDisabled"_a);
		cl.def("GetbAutoActivate", (unsigned long (CarComponentWrapper::*)()) &CarComponentWrapper::GetbAutoActivate, "C++: CarComponentWrapper::GetbAutoActivate() --> unsigned long");
		cl.def("SetbAutoActivate", (void (CarComponentWrapper::*)(unsigned long)) &CarComponentWrapper::SetbAutoActivate, "C++: CarComponentWrapper::SetbAutoActivate(unsigned long) --> void", "newbAutoActivate"_a);
		cl.def("GetbSimulateComponent", (unsigned long (CarComponentWrapper::*)()) &CarComponentWrapper::GetbSimulateComponent, "C++: CarComponentWrapper::GetbSimulateComponent() --> unsigned long");
		cl.def("SetbSimulateComponent", (void (CarComponentWrapper::*)(unsigned long)) &CarComponentWrapper::SetbSimulateComponent, "C++: CarComponentWrapper::SetbSimulateComponent(unsigned long) --> void", "newbSimulateComponent"_a);
		cl.def("GetbCreated", (unsigned long (CarComponentWrapper::*)()) &CarComponentWrapper::GetbCreated, "C++: CarComponentWrapper::GetbCreated() --> unsigned long");
		cl.def("SetbCreated", (void (CarComponentWrapper::*)(unsigned long)) &CarComponentWrapper::SetbCreated, "C++: CarComponentWrapper::SetbCreated(unsigned long) --> void", "newbCreated"_a);
		cl.def("GetbActive", (unsigned long (CarComponentWrapper::*)()) &CarComponentWrapper::GetbActive, "C++: CarComponentWrapper::GetbActive() --> unsigned long");
		cl.def("SetbActive", (void (CarComponentWrapper::*)(unsigned long)) &CarComponentWrapper::SetbActive, "C++: CarComponentWrapper::SetbActive(unsigned long) --> void", "newbActive"_a);
		cl.def("GetbRemovedFromCar", (unsigned long (CarComponentWrapper::*)()) &CarComponentWrapper::GetbRemovedFromCar, "C++: CarComponentWrapper::GetbRemovedFromCar() --> unsigned long");
		cl.def("SetbRemovedFromCar", (void (CarComponentWrapper::*)(unsigned long)) &CarComponentWrapper::SetbRemovedFromCar, "C++: CarComponentWrapper::SetbRemovedFromCar(unsigned long) --> void", "newbRemovedFromCar"_a);
		cl.def("GetComponentData", (unsigned char (CarComponentWrapper::*)()) &CarComponentWrapper::GetComponentData, "C++: CarComponentWrapper::GetComponentData() --> unsigned char");
		cl.def("SetComponentData", (void (CarComponentWrapper::*)(unsigned char)) &CarComponentWrapper::SetComponentData, "C++: CarComponentWrapper::SetComponentData(unsigned char) --> void", "newComponentData"_a);
		cl.def("GetReplicatedActive", (unsigned char (CarComponentWrapper::*)()) &CarComponentWrapper::GetReplicatedActive, "C++: CarComponentWrapper::GetReplicatedActive() --> unsigned char");
		cl.def("SetReplicatedActive", (void (CarComponentWrapper::*)(unsigned char)) &CarComponentWrapper::SetReplicatedActive, "C++: CarComponentWrapper::SetReplicatedActive(unsigned char) --> void", "newReplicatedActive"_a);
		cl.def("GetActivator", (class PriWrapper (CarComponentWrapper::*)()) &CarComponentWrapper::GetActivator, "C++: CarComponentWrapper::GetActivator() --> class PriWrapper");
		cl.def("SetActivator", (void (CarComponentWrapper::*)(class PriWrapper)) &CarComponentWrapper::SetActivator, "C++: CarComponentWrapper::SetActivator(class PriWrapper) --> void", "newActivator"_a);
		cl.def("GetVehicle", (class VehicleWrapper (CarComponentWrapper::*)()) &CarComponentWrapper::GetVehicle, "C++: CarComponentWrapper::GetVehicle() --> class VehicleWrapper");
		cl.def("SetVehicle", (void (CarComponentWrapper::*)(class VehicleWrapper)) &CarComponentWrapper::SetVehicle, "C++: CarComponentWrapper::SetVehicle(class VehicleWrapper) --> void", "newVehicle"_a);
		cl.def("GetCar", (class CarWrapper (CarComponentWrapper::*)()) &CarComponentWrapper::GetCar, "C++: CarComponentWrapper::GetCar() --> class CarWrapper");
		cl.def("SetCar", (void (CarComponentWrapper::*)(class CarWrapper)) &CarComponentWrapper::SetCar, "C++: CarComponentWrapper::SetCar(class CarWrapper) --> void", "newCar"_a);
		cl.def("GetActivityTime", (float (CarComponentWrapper::*)()) &CarComponentWrapper::GetActivityTime, "C++: CarComponentWrapper::GetActivityTime() --> float");
		cl.def("SetActivityTime", (void (CarComponentWrapper::*)(float)) &CarComponentWrapper::SetActivityTime, "C++: CarComponentWrapper::SetActivityTime(float) --> void", "newActivityTime"_a);
		cl.def("GetReplicatedActivityTime", (float (CarComponentWrapper::*)()) &CarComponentWrapper::GetReplicatedActivityTime, "C++: CarComponentWrapper::GetReplicatedActivityTime() --> float");
		cl.def("SetReplicatedActivityTime", (void (CarComponentWrapper::*)(float)) &CarComponentWrapper::SetReplicatedActivityTime, "C++: CarComponentWrapper::SetReplicatedActivityTime(float) --> void", "newReplicatedActivityTime"_a);
		cl.def("GetFXActor", (class FXActorWrapper (CarComponentWrapper::*)()) &CarComponentWrapper::GetFXActor, "C++: CarComponentWrapper::GetFXActor() --> class FXActorWrapper");
		cl.def("SetFXActor", (void (CarComponentWrapper::*)(class FXActorWrapper)) &CarComponentWrapper::SetFXActor, "C++: CarComponentWrapper::SetFXActor(class FXActorWrapper) --> void", "newFXActor"_a);
		cl.def("eventFellOutOfWorld", (void (CarComponentWrapper::*)()) &CarComponentWrapper::eventFellOutOfWorld, "C++: CarComponentWrapper::eventFellOutOfWorld() --> void");
		cl.def("GetInactiveTime", (float (CarComponentWrapper::*)()) &CarComponentWrapper::GetInactiveTime, "C++: CarComponentWrapper::GetInactiveTime() --> float");
		cl.def("GetActiveTime", (float (CarComponentWrapper::*)()) &CarComponentWrapper::GetActiveTime, "C++: CarComponentWrapper::GetActiveTime() --> float");
		cl.def("ApplyForces", (void (CarComponentWrapper::*)(float)) &CarComponentWrapper::ApplyForces, "C++: CarComponentWrapper::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("PrePhysicsStep", (void (CarComponentWrapper::*)(float)) &CarComponentWrapper::PrePhysicsStep, "C++: CarComponentWrapper::PrePhysicsStep(float) --> void", "DeltaTime"_a);
		cl.def("RemoveFromCar", (void (CarComponentWrapper::*)()) &CarComponentWrapper::RemoveFromCar, "C++: CarComponentWrapper::RemoveFromCar() --> void");
		cl.def("CanDeactivate", (bool (CarComponentWrapper::*)()) &CarComponentWrapper::CanDeactivate, "C++: CarComponentWrapper::CanDeactivate() --> bool");
		cl.def("ConditionalDeactivate", (bool (CarComponentWrapper::*)()) &CarComponentWrapper::ConditionalDeactivate, "C++: CarComponentWrapper::ConditionalDeactivate() --> bool");
		cl.def("CanActivate", (bool (CarComponentWrapper::*)()) &CarComponentWrapper::CanActivate, "C++: CarComponentWrapper::CanActivate() --> bool");
		cl.def("ConditionalActivate", (bool (CarComponentWrapper::*)()) &CarComponentWrapper::ConditionalActivate, "C++: CarComponentWrapper::ConditionalActivate() --> bool");
		cl.def("SetActive", (void (CarComponentWrapper::*)(unsigned long)) &CarComponentWrapper::SetActive, "C++: CarComponentWrapper::SetActive(unsigned long) --> void", "bNewActive"_a);
		cl.def("Deactivate2", (void (CarComponentWrapper::*)()) &CarComponentWrapper::Deactivate2, "C++: CarComponentWrapper::Deactivate2() --> void");
		cl.def("Activate2", (void (CarComponentWrapper::*)()) &CarComponentWrapper::Activate2, "C++: CarComponentWrapper::Activate2() --> void");
		cl.def("UnregisterCarEvents", (void (CarComponentWrapper::*)()) &CarComponentWrapper::UnregisterCarEvents, "C++: CarComponentWrapper::UnregisterCarEvents() --> void");
		cl.def("RegisterCarEvents", (void (CarComponentWrapper::*)()) &CarComponentWrapper::RegisterCarEvents, "C++: CarComponentWrapper::RegisterCarEvents() --> void");
		cl.def("HandleVehicleSetup", (void (CarComponentWrapper::*)(class CarWrapper)) &CarComponentWrapper::HandleVehicleSetup, "C++: CarComponentWrapper::HandleVehicleSetup(class CarWrapper) --> void", "InCar"_a);
		cl.def("OnVehicleSetupComplete", (void (CarComponentWrapper::*)()) &CarComponentWrapper::OnVehicleSetupComplete, "C++: CarComponentWrapper::OnVehicleSetupComplete() --> void");
		cl.def("Create2", (void (CarComponentWrapper::*)(class CarWrapper, class PriWrapper)) &CarComponentWrapper::Create2, "C++: CarComponentWrapper::Create2(class CarWrapper, class PriWrapper) --> void", "OwnerCar"_a, "InActivator"_a);
		cl.def("ClientUpdateActive", (void (CarComponentWrapper::*)()) &CarComponentWrapper::ClientUpdateActive, "C++: CarComponentWrapper::ClientUpdateActive() --> void");
		cl.def("EventActivationChanged", (void (CarComponentWrapper::*)(class CarComponentWrapper)) &CarComponentWrapper::EventActivationChanged, "C++: CarComponentWrapper::EventActivationChanged(class CarComponentWrapper) --> void", "CarComponent"_a);
	}
}
