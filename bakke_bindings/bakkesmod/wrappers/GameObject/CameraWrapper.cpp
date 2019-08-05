#include "pch.h"
#include <bakkesmod/wrappers/GameObject/CameraWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/AirControlComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/BoostWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/StructArrayWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_bakkesmod_wrappers_GameObject_CameraWrapper(py::module &M)
{
	{ // CameraWrapper file:bakkesmod/wrappers/GameObject/CameraWrapper.h line:10
		pybind11::class_<CameraWrapper, std::shared_ptr<CameraWrapper>, CameraXWrapper> cl(M, "CameraWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](CameraWrapper const &o){ return new CameraWrapper(o); } ) );
		cl.def("assign", (class CameraWrapper & (CameraWrapper::*)(class CameraWrapper)) &CameraWrapper::operator=, "C++: CameraWrapper::operator=(class CameraWrapper) --> class CameraWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetLocation", (struct Vector (CameraWrapper::*)()) &CameraWrapper::GetLocation, "C++: CameraWrapper::GetLocation() --> struct Vector");
		cl.def("SetLocation", (void (CameraWrapper::*)(struct Vector)) &CameraWrapper::SetLocation, "C++: CameraWrapper::SetLocation(struct Vector) --> void", "location"_a);
		cl.def("GetRotation", (struct Rotator (CameraWrapper::*)()) &CameraWrapper::GetRotation, "C++: CameraWrapper::GetRotation() --> struct Rotator");
		cl.def("SetRotation", (void (CameraWrapper::*)(struct Rotator)) &CameraWrapper::SetRotation, "C++: CameraWrapper::SetRotation(struct Rotator) --> void", "rotation"_a);
		cl.def("GetCameraSettings", (struct ProfileCameraSettings (CameraWrapper::*)()) &CameraWrapper::GetCameraSettings, "C++: CameraWrapper::GetCameraSettings() --> struct ProfileCameraSettings");
		cl.def("SetCameraSettings", (void (CameraWrapper::*)(struct ProfileCameraSettings)) &CameraWrapper::SetCameraSettings, "C++: CameraWrapper::SetCameraSettings(struct ProfileCameraSettings) --> void", "settings"_a);
		cl.def("IsCameraShakeOn", (bool (CameraWrapper::*)()) &CameraWrapper::IsCameraShakeOn, "C++: CameraWrapper::IsCameraShakeOn() --> bool");
		cl.def("GetPOV", (struct POV (CameraWrapper::*)()) &CameraWrapper::GetPOV, "C++: CameraWrapper::GetPOV() --> struct POV");
		cl.def("SetPOV", (void (CameraWrapper::*)(struct POV)) &CameraWrapper::SetPOV, "C++: CameraWrapper::SetPOV(struct POV) --> void", "pov"_a);
		cl.def("SetFOV", (void (CameraWrapper::*)(float)) &CameraWrapper::SetFOV, "C++: CameraWrapper::SetFOV(float) --> void", "fov"_a);
		cl.def("GetFOV", (float (CameraWrapper::*)()) &CameraWrapper::GetFOV, "C++: CameraWrapper::GetFOV() --> float");
		cl.def("SetLockedFOV", (void (CameraWrapper::*)(bool)) &CameraWrapper::SetLockedFOV, "C++: CameraWrapper::SetLockedFOV(bool) --> void", "lock"_a);
		cl.def("GetCameraAsActor", (class ActorWrapper (CameraWrapper::*)()) &CameraWrapper::GetCameraAsActor, "C++: CameraWrapper::GetCameraAsActor() --> class ActorWrapper");
		cl.def("GetCameraState", (std::string (CameraWrapper::*)()) &CameraWrapper::GetCameraState, "C++: CameraWrapper::GetCameraState() --> std::string");
		cl.def("linterp", (struct Vector (CameraWrapper::*)(struct Vector, struct Vector, float, float)) &CameraWrapper::linterp, "C++: CameraWrapper::linterp(struct Vector, struct Vector, float, float) --> struct Vector", "start"_a, "end"_a, "elapsed"_a, "speed"_a);
		cl.def("GetSwivelFastSpeed", (float (CameraWrapper::*)()) &CameraWrapper::GetSwivelFastSpeed, "C++: CameraWrapper::GetSwivelFastSpeed() --> float");
		cl.def("SetSwivelFastSpeed", (void (CameraWrapper::*)(float)) &CameraWrapper::SetSwivelFastSpeed, "C++: CameraWrapper::SetSwivelFastSpeed(float) --> void", "newSwivelFastSpeed"_a);
		cl.def("GetSwivelDieRate", (float (CameraWrapper::*)()) &CameraWrapper::GetSwivelDieRate, "C++: CameraWrapper::GetSwivelDieRate() --> float");
		cl.def("SetSwivelDieRate", (void (CameraWrapper::*)(float)) &CameraWrapper::SetSwivelDieRate, "C++: CameraWrapper::SetSwivelDieRate(float) --> void", "newSwivelDieRate"_a);
		cl.def("GetCameraPresetSettings", (class StructArrayWrapper<struct ProfileCameraSettings> (CameraWrapper::*)()) &CameraWrapper::GetCameraPresetSettings, "C++: CameraWrapper::GetCameraPresetSettings() --> class StructArrayWrapper<struct ProfileCameraSettings>");
		cl.def("GetHorizontalSplitscreenHeightOffset", (float (CameraWrapper::*)()) &CameraWrapper::GetHorizontalSplitscreenHeightOffset, "C++: CameraWrapper::GetHorizontalSplitscreenHeightOffset() --> float");
		cl.def("SetHorizontalSplitscreenHeightOffset", (void (CameraWrapper::*)(float)) &CameraWrapper::SetHorizontalSplitscreenHeightOffset, "C++: CameraWrapper::SetHorizontalSplitscreenHeightOffset(float) --> void", "newHorizontalSplitscreenHeightOffset"_a);
		cl.def("GetHorizontalSplitscreenFOVOffset", (float (CameraWrapper::*)()) &CameraWrapper::GetHorizontalSplitscreenFOVOffset, "C++: CameraWrapper::GetHorizontalSplitscreenFOVOffset() --> float");
		cl.def("SetHorizontalSplitscreenFOVOffset", (void (CameraWrapper::*)(float)) &CameraWrapper::SetHorizontalSplitscreenFOVOffset, "C++: CameraWrapper::SetHorizontalSplitscreenFOVOffset(float) --> void", "newHorizontalSplitscreenFOVOffset"_a);
		cl.def("GetVerticalSplitscreenFOVOffset", (float (CameraWrapper::*)()) &CameraWrapper::GetVerticalSplitscreenFOVOffset, "C++: CameraWrapper::GetVerticalSplitscreenFOVOffset() --> float");
		cl.def("SetVerticalSplitscreenFOVOffset", (void (CameraWrapper::*)(float)) &CameraWrapper::SetVerticalSplitscreenFOVOffset, "C++: CameraWrapper::SetVerticalSplitscreenFOVOffset(float) --> void", "newVerticalSplitscreenFOVOffset"_a);
		cl.def("GetClipRate", (float (CameraWrapper::*)()) &CameraWrapper::GetClipRate, "C++: CameraWrapper::GetClipRate() --> float");
		cl.def("SetClipRate", (void (CameraWrapper::*)(float)) &CameraWrapper::SetClipRate, "C++: CameraWrapper::SetClipRate(float) --> void", "newClipRate"_a);
		cl.def("GetCurrentSwivel", (struct Rotator (CameraWrapper::*)()) &CameraWrapper::GetCurrentSwivel, "C++: CameraWrapper::GetCurrentSwivel() --> struct Rotator");
		cl.def("SetCurrentSwivel", (void (CameraWrapper::*)(struct Rotator)) &CameraWrapper::SetCurrentSwivel, "C++: CameraWrapper::SetCurrentSwivel(struct Rotator) --> void", "newCurrentSwivel"_a);
		cl.def("GetDemolisher", (class RBActorWrapper (CameraWrapper::*)()) &CameraWrapper::GetDemolisher, "C++: CameraWrapper::GetDemolisher() --> class RBActorWrapper");
		cl.def("SetDemolisher", (void (CameraWrapper::*)(class RBActorWrapper)) &CameraWrapper::SetDemolisher, "C++: CameraWrapper::SetDemolisher(class RBActorWrapper) --> void", "newDemolisher"_a);
		cl.def("GetbDemolished", (unsigned long (CameraWrapper::*)()) &CameraWrapper::GetbDemolished, "C++: CameraWrapper::GetbDemolished() --> unsigned long");
		cl.def("SetbDemolished", (void (CameraWrapper::*)(unsigned long)) &CameraWrapper::SetbDemolished, "C++: CameraWrapper::SetbDemolished(unsigned long) --> void", "newbDemolished"_a);
		cl.def("ClipToField", (float (CameraWrapper::*)(float)) &CameraWrapper::ClipToField, "C++: CameraWrapper::ClipToField(float) --> float", "CameraLocationZ"_a);
		cl.def("Demolished2", (void (CameraWrapper::*)(class RBActorWrapper)) &CameraWrapper::Demolished2, "C++: CameraWrapper::Demolished2(class RBActorWrapper) --> void", "InDemolisher"_a);
		cl.def("GetDesiredSwivel", (struct Rotator (CameraWrapper::*)(float, float)) &CameraWrapper::GetDesiredSwivel, "C++: CameraWrapper::GetDesiredSwivel(float, float) --> struct Rotator", "LookUp"_a, "LookRight"_a);
		cl.def("UpdateSwivel", (void (CameraWrapper::*)(float)) &CameraWrapper::UpdateSwivel, "C++: CameraWrapper::UpdateSwivel(float) --> void", "DeltaTime"_a);
		cl.def("GetDefaultFOVOffset", (float (CameraWrapper::*)()) &CameraWrapper::GetDefaultFOVOffset, "C++: CameraWrapper::GetDefaultFOVOffset() --> float");
		cl.def("GetDefaultViewHeightOffset", (float (CameraWrapper::*)()) &CameraWrapper::GetDefaultViewHeightOffset, "C++: CameraWrapper::GetDefaultViewHeightOffset() --> float");
		cl.def("UpdateFOV", (void (CameraWrapper::*)()) &CameraWrapper::UpdateFOV, "C++: CameraWrapper::UpdateFOV() --> void");
		cl.def("EventCameraTargetChanged", (void (CameraWrapper::*)(class CameraWrapper, class ActorWrapper)) &CameraWrapper::EventCameraTargetChanged, "C++: CameraWrapper::EventCameraTargetChanged(class CameraWrapper, class ActorWrapper) --> void", "Camera"_a, "Target"_a);
	}
	{ // AirControlComponentWrapper file:bakkesmod/wrappers/GameObject/CarComponent/AirControlComponentWrapper.h line:7
		pybind11::class_<AirControlComponentWrapper, std::shared_ptr<AirControlComponentWrapper>, CarComponentWrapper> cl(M, "AirControlComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](AirControlComponentWrapper const &o){ return new AirControlComponentWrapper(o); } ) );
		cl.def("assign", (class AirControlComponentWrapper & (AirControlComponentWrapper::*)(class AirControlComponentWrapper)) &AirControlComponentWrapper::operator=, "C++: AirControlComponentWrapper::operator=(class AirControlComponentWrapper) --> class AirControlComponentWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetAirTorque", (struct Rotator (AirControlComponentWrapper::*)()) &AirControlComponentWrapper::GetAirTorque, "C++: AirControlComponentWrapper::GetAirTorque() --> struct Rotator");
		cl.def("SetAirTorque", (void (AirControlComponentWrapper::*)(struct Rotator)) &AirControlComponentWrapper::SetAirTorque, "C++: AirControlComponentWrapper::SetAirTorque(struct Rotator) --> void", "newAirTorque"_a);
		cl.def("GetAirDamping", (struct Rotator (AirControlComponentWrapper::*)()) &AirControlComponentWrapper::GetAirDamping, "C++: AirControlComponentWrapper::GetAirDamping() --> struct Rotator");
		cl.def("SetAirDamping", (void (AirControlComponentWrapper::*)(struct Rotator)) &AirControlComponentWrapper::SetAirDamping, "C++: AirControlComponentWrapper::SetAirDamping(struct Rotator) --> void", "newAirDamping"_a);
		cl.def("GetThrottleForce", (float (AirControlComponentWrapper::*)()) &AirControlComponentWrapper::GetThrottleForce, "C++: AirControlComponentWrapper::GetThrottleForce() --> float");
		cl.def("SetThrottleForce", (void (AirControlComponentWrapper::*)(float)) &AirControlComponentWrapper::SetThrottleForce, "C++: AirControlComponentWrapper::SetThrottleForce(float) --> void", "newThrottleForce"_a);
		cl.def("GetDodgeDisableTimeRemaining", (float (AirControlComponentWrapper::*)()) &AirControlComponentWrapper::GetDodgeDisableTimeRemaining, "C++: AirControlComponentWrapper::GetDodgeDisableTimeRemaining() --> float");
		cl.def("SetDodgeDisableTimeRemaining", (void (AirControlComponentWrapper::*)(float)) &AirControlComponentWrapper::SetDodgeDisableTimeRemaining, "C++: AirControlComponentWrapper::SetDodgeDisableTimeRemaining(float) --> void", "newDodgeDisableTimeRemaining"_a);
		cl.def("GetControlScale", (float (AirControlComponentWrapper::*)()) &AirControlComponentWrapper::GetControlScale, "C++: AirControlComponentWrapper::GetControlScale() --> float");
		cl.def("SetControlScale", (void (AirControlComponentWrapper::*)(float)) &AirControlComponentWrapper::SetControlScale, "C++: AirControlComponentWrapper::SetControlScale(float) --> void", "newControlScale"_a);
		cl.def("GetAirControlSensitivity", (float (AirControlComponentWrapper::*)()) &AirControlComponentWrapper::GetAirControlSensitivity, "C++: AirControlComponentWrapper::GetAirControlSensitivity() --> float");
		cl.def("SetAirControlSensitivity", (void (AirControlComponentWrapper::*)(float)) &AirControlComponentWrapper::SetAirControlSensitivity, "C++: AirControlComponentWrapper::SetAirControlSensitivity(float) --> void", "newAirControlSensitivity"_a);
		cl.def("ApplyForces", (void (AirControlComponentWrapper::*)(float)) &AirControlComponentWrapper::ApplyForces, "C++: AirControlComponentWrapper::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("OnCreated", (void (AirControlComponentWrapper::*)()) &AirControlComponentWrapper::OnCreated, "C++: AirControlComponentWrapper::OnCreated() --> void");
	}
	{ // BoostWrapper file:bakkesmod/wrappers/GameObject/CarComponent/BoostWrapper.h line:7
		pybind11::class_<BoostWrapper, std::shared_ptr<BoostWrapper>, CarComponentWrapper> cl(M, "BoostWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BoostWrapper const &o){ return new BoostWrapper(o); } ) );
		cl.def("assign", (class BoostWrapper & (BoostWrapper::*)(class BoostWrapper)) &BoostWrapper::operator=, "C++: BoostWrapper::operator=(class BoostWrapper) --> class BoostWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetBoostConsumptionRate", (float (BoostWrapper::*)()) &BoostWrapper::GetBoostConsumptionRate, "C++: BoostWrapper::GetBoostConsumptionRate() --> float");
		cl.def("SetBoostConsumptionRate", (void (BoostWrapper::*)(float)) &BoostWrapper::SetBoostConsumptionRate, "C++: BoostWrapper::SetBoostConsumptionRate(float) --> void", "newBoostConsumptionRate"_a);
		cl.def("GetMaxBoostAmount", (float (BoostWrapper::*)()) &BoostWrapper::GetMaxBoostAmount, "C++: BoostWrapper::GetMaxBoostAmount() --> float");
		cl.def("SetMaxBoostAmount", (void (BoostWrapper::*)(float)) &BoostWrapper::SetMaxBoostAmount, "C++: BoostWrapper::SetMaxBoostAmount(float) --> void", "newMaxBoostAmount"_a);
		cl.def("GetStartBoostAmount", (float (BoostWrapper::*)()) &BoostWrapper::GetStartBoostAmount, "C++: BoostWrapper::GetStartBoostAmount() --> float");
		cl.def("SetStartBoostAmount", (void (BoostWrapper::*)(float)) &BoostWrapper::SetStartBoostAmount, "C++: BoostWrapper::SetStartBoostAmount(float) --> void", "newStartBoostAmount"_a);
		cl.def("GetCurrentBoostAmount", (float (BoostWrapper::*)()) &BoostWrapper::GetCurrentBoostAmount, "C++: BoostWrapper::GetCurrentBoostAmount() --> float");
		cl.def("SetCurrentBoostAmount", (void (BoostWrapper::*)(float)) &BoostWrapper::SetCurrentBoostAmount, "C++: BoostWrapper::SetCurrentBoostAmount(float) --> void", "newCurrentBoostAmount"_a);
		cl.def("GetBoostModifier", (float (BoostWrapper::*)()) &BoostWrapper::GetBoostModifier, "C++: BoostWrapper::GetBoostModifier() --> float");
		cl.def("SetBoostModifier", (void (BoostWrapper::*)(float)) &BoostWrapper::SetBoostModifier, "C++: BoostWrapper::SetBoostModifier(float) --> void", "newBoostModifier"_a);
		cl.def("GetLastBoostAmountRequestTime", (float (BoostWrapper::*)()) &BoostWrapper::GetLastBoostAmountRequestTime, "C++: BoostWrapper::GetLastBoostAmountRequestTime() --> float");
		cl.def("SetLastBoostAmountRequestTime", (void (BoostWrapper::*)(float)) &BoostWrapper::SetLastBoostAmountRequestTime, "C++: BoostWrapper::SetLastBoostAmountRequestTime(float) --> void", "newLastBoostAmountRequestTime"_a);
		cl.def("GetLastBoostAmount", (float (BoostWrapper::*)()) &BoostWrapper::GetLastBoostAmount, "C++: BoostWrapper::GetLastBoostAmount() --> float");
		cl.def("SetLastBoostAmount", (void (BoostWrapper::*)(float)) &BoostWrapper::SetLastBoostAmount, "C++: BoostWrapper::SetLastBoostAmount(float) --> void", "newLastBoostAmount"_a);
		cl.def("GetbPendingConfirmBoostAmount", (unsigned long (BoostWrapper::*)()) &BoostWrapper::GetbPendingConfirmBoostAmount, "C++: BoostWrapper::GetbPendingConfirmBoostAmount() --> unsigned long");
		cl.def("SetbPendingConfirmBoostAmount", (void (BoostWrapper::*)(unsigned long)) &BoostWrapper::SetbPendingConfirmBoostAmount, "C++: BoostWrapper::SetbPendingConfirmBoostAmount(unsigned long) --> void", "newbPendingConfirmBoostAmount"_a);
		cl.def("GetbNoBoost", (unsigned long (BoostWrapper::*)()) &BoostWrapper::GetbNoBoost, "C++: BoostWrapper::GetbNoBoost() --> unsigned long");
		cl.def("SetbNoBoost", (void (BoostWrapper::*)(unsigned long)) &BoostWrapper::SetbNoBoost, "C++: BoostWrapper::SetbNoBoost(unsigned long) --> void", "newbNoBoost"_a);
		cl.def("GetBoostForce", (float (BoostWrapper::*)()) &BoostWrapper::GetBoostForce, "C++: BoostWrapper::GetBoostForce() --> float");
		cl.def("SetBoostForce", (void (BoostWrapper::*)(float)) &BoostWrapper::SetBoostForce, "C++: BoostWrapper::SetBoostForce(float) --> void", "newBoostForce"_a);
		cl.def("GetMinBoostTime", (float (BoostWrapper::*)()) &BoostWrapper::GetMinBoostTime, "C++: BoostWrapper::GetMinBoostTime() --> float");
		cl.def("SetMinBoostTime", (void (BoostWrapper::*)(float)) &BoostWrapper::SetMinBoostTime, "C++: BoostWrapper::SetMinBoostTime(float) --> void", "newMinBoostTime"_a);
		cl.def("GetRechargeRate", (float (BoostWrapper::*)()) &BoostWrapper::GetRechargeRate, "C++: BoostWrapper::GetRechargeRate() --> float");
		cl.def("SetRechargeRate", (void (BoostWrapper::*)(float)) &BoostWrapper::SetRechargeRate, "C++: BoostWrapper::SetRechargeRate(float) --> void", "newRechargeRate"_a);
		cl.def("GetRechargeDelay", (float (BoostWrapper::*)()) &BoostWrapper::GetRechargeDelay, "C++: BoostWrapper::GetRechargeDelay() --> float");
		cl.def("SetRechargeDelay", (void (BoostWrapper::*)(float)) &BoostWrapper::SetRechargeDelay, "C++: BoostWrapper::SetRechargeDelay(float) --> void", "newRechargeDelay"_a);
		cl.def("GetUnlimitedBoostRefCount", (int (BoostWrapper::*)()) &BoostWrapper::GetUnlimitedBoostRefCount, "C++: BoostWrapper::GetUnlimitedBoostRefCount() --> int");
		cl.def("SetUnlimitedBoostRefCount", (void (BoostWrapper::*)(int)) &BoostWrapper::SetUnlimitedBoostRefCount, "C++: BoostWrapper::SetUnlimitedBoostRefCount(int) --> void", "newUnlimitedBoostRefCount"_a);
		cl.def("GetReplicatedBoostAmount", (unsigned char (BoostWrapper::*)()) &BoostWrapper::GetReplicatedBoostAmount, "C++: BoostWrapper::GetReplicatedBoostAmount() --> unsigned char");
		cl.def("SetReplicatedBoostAmount", (void (BoostWrapper::*)(unsigned char)) &BoostWrapper::SetReplicatedBoostAmount, "C++: BoostWrapper::SetReplicatedBoostAmount(unsigned char) --> void", "newReplicatedBoostAmount"_a);
		cl.def("ShouldPredictBoostConsumption", (bool (BoostWrapper::*)()) &BoostWrapper::ShouldPredictBoostConsumption, "C++: BoostWrapper::ShouldPredictBoostConsumption() --> bool");
		cl.def("ReadReplicatedBoostAmount", (void (BoostWrapper::*)()) &BoostWrapper::ReadReplicatedBoostAmount, "C++: BoostWrapper::ReadReplicatedBoostAmount() --> void");
		cl.def("eventSetReplicatedBoostAmount", (void (BoostWrapper::*)()) &BoostWrapper::eventSetReplicatedBoostAmount, "C++: BoostWrapper::eventSetReplicatedBoostAmount() --> void");
		cl.def("ApplyForces", (void (BoostWrapper::*)(float)) &BoostWrapper::ApplyForces, "C++: BoostWrapper::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("ClientGiveBoost", (void (BoostWrapper::*)(float)) &BoostWrapper::ClientGiveBoost, "C++: BoostWrapper::ClientGiveBoost(float) --> void", "Amount"_a);
		cl.def("ConfirmBoostAmount2", (void (BoostWrapper::*)()) &BoostWrapper::ConfirmBoostAmount2, "C++: BoostWrapper::ConfirmBoostAmount2() --> void");
		cl.def("SendConfirmBoostAmount", (void (BoostWrapper::*)()) &BoostWrapper::SendConfirmBoostAmount, "C++: BoostWrapper::SendConfirmBoostAmount() --> void");
		cl.def("ClientFixBoostAmount", (void (BoostWrapper::*)(float, float)) &BoostWrapper::ClientFixBoostAmount, "C++: BoostWrapper::ClientFixBoostAmount(float, float) --> void", "TimeStamp"_a, "Amount"_a);
		cl.def("ServerConfirmBoostAmount", (void (BoostWrapper::*)(float, float)) &BoostWrapper::ServerConfirmBoostAmount, "C++: BoostWrapper::ServerConfirmBoostAmount(float, float) --> void", "TimeStamp"_a, "Amount"_a);
		cl.def("SetRechargeDelay2", (void (BoostWrapper::*)(float)) &BoostWrapper::SetRechargeDelay2, "C++: BoostWrapper::SetRechargeDelay2(float) --> void", "InRechargeDelay"_a);
		cl.def("SetRechargeRate2", (void (BoostWrapper::*)(float)) &BoostWrapper::SetRechargeRate2, "C++: BoostWrapper::SetRechargeRate2(float) --> void", "InRechargeRate"_a);
		cl.def("SetNoBoost", (void (BoostWrapper::*)(unsigned long)) &BoostWrapper::SetNoBoost, "C++: BoostWrapper::SetNoBoost(unsigned long) --> void", "Enabled"_a);
		cl.def("SetUnlimitedBoost2", (void (BoostWrapper::*)(unsigned long)) &BoostWrapper::SetUnlimitedBoost2, "C++: BoostWrapper::SetUnlimitedBoost2(unsigned long) --> void", "Enabled"_a);
		cl.def("SetUnlimitedBoostDelayed", (void (BoostWrapper::*)(unsigned long)) &BoostWrapper::SetUnlimitedBoostDelayed, "C++: BoostWrapper::SetUnlimitedBoostDelayed(unsigned long) --> void", "Enabled"_a);
		cl.def("SetBoostModifier2", (void (BoostWrapper::*)(float)) &BoostWrapper::SetBoostModifier2, "C++: BoostWrapper::SetBoostModifier2(float) --> void", "Modifier"_a);
		cl.def("SetBoostAmount", (void (BoostWrapper::*)(float)) &BoostWrapper::SetBoostAmount, "C++: BoostWrapper::SetBoostAmount(float) --> void", "Amount"_a);
		cl.def("GiveBoost2", (void (BoostWrapper::*)(float)) &BoostWrapper::GiveBoost2, "C++: BoostWrapper::GiveBoost2(float) --> void", "Amount"_a);
		cl.def("GiveStartingBoost", (void (BoostWrapper::*)()) &BoostWrapper::GiveStartingBoost, "C++: BoostWrapper::GiveStartingBoost() --> void");
		cl.def("GiveFullBoost", (void (BoostWrapper::*)()) &BoostWrapper::GiveFullBoost, "C++: BoostWrapper::GiveFullBoost() --> void");
		cl.def("GetPercentBoostFull", (float (BoostWrapper::*)()) &BoostWrapper::GetPercentBoostFull, "C++: BoostWrapper::GetPercentBoostFull() --> float");
		cl.def("IsFull", (bool (BoostWrapper::*)()) &BoostWrapper::IsFull, "C++: BoostWrapper::IsFull() --> bool");
		cl.def("RemoveFromCar", (void (BoostWrapper::*)()) &BoostWrapper::RemoveFromCar, "C++: BoostWrapper::RemoveFromCar() --> void");
		cl.def("CanDeactivate", (bool (BoostWrapper::*)()) &BoostWrapper::CanDeactivate, "C++: BoostWrapper::CanDeactivate() --> bool");
		cl.def("CanActivate", (bool (BoostWrapper::*)()) &BoostWrapper::CanActivate, "C++: BoostWrapper::CanActivate() --> bool");
	}
}
