#include "pch.h"
#include <bakkesmod/wrappers/GameObject/BaseCameraWrapper.h>
#include <sstream> // __str__


void bind_bakkesmod_wrappers_GameObject_BaseCameraWrapper(py::module &M)
{
	{ // BaseCameraWrapper file:bakkesmod/wrappers/GameObject/BaseCameraWrapper.h line:7
		pybind11::class_<BaseCameraWrapper, std::shared_ptr<BaseCameraWrapper>, ActorWrapper> cl(M, "BaseCameraWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BaseCameraWrapper const &o){ return new BaseCameraWrapper(o); } ) );
		cl.def("assign", (class BaseCameraWrapper & (BaseCameraWrapper::*)(class BaseCameraWrapper)) &BaseCameraWrapper::operator=, "C++: BaseCameraWrapper::operator=(class BaseCameraWrapper) --> class BaseCameraWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetDefaultFOV", (float (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetDefaultFOV, "C++: BaseCameraWrapper::GetDefaultFOV() --> float");
		cl.def("SetDefaultFOV", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::SetDefaultFOV, "C++: BaseCameraWrapper::SetDefaultFOV(float) --> void", "newDefaultFOV"_a);
		cl.def("GetbLockedFOV", (unsigned long (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetbLockedFOV, "C++: BaseCameraWrapper::GetbLockedFOV() --> unsigned long");
		cl.def("SetbLockedFOV", (void (BaseCameraWrapper::*)(unsigned long)) &BaseCameraWrapper::SetbLockedFOV, "C++: BaseCameraWrapper::SetbLockedFOV(unsigned long) --> void", "newbLockedFOV"_a);
		cl.def("GetbConstrainAspectRatio", (unsigned long (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetbConstrainAspectRatio, "C++: BaseCameraWrapper::GetbConstrainAspectRatio() --> unsigned long");
		cl.def("SetbConstrainAspectRatio", (void (BaseCameraWrapper::*)(unsigned long)) &BaseCameraWrapper::SetbConstrainAspectRatio, "C++: BaseCameraWrapper::SetbConstrainAspectRatio(unsigned long) --> void", "newbConstrainAspectRatio"_a);
		cl.def("GetbEnableFading", (unsigned long (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetbEnableFading, "C++: BaseCameraWrapper::GetbEnableFading() --> unsigned long");
		cl.def("SetbEnableFading", (void (BaseCameraWrapper::*)(unsigned long)) &BaseCameraWrapper::SetbEnableFading, "C++: BaseCameraWrapper::SetbEnableFading(unsigned long) --> void", "newbEnableFading"_a);
		cl.def("GetbFadeAudio", (unsigned long (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetbFadeAudio, "C++: BaseCameraWrapper::GetbFadeAudio() --> unsigned long");
		cl.def("SetbFadeAudio", (void (BaseCameraWrapper::*)(unsigned long)) &BaseCameraWrapper::SetbFadeAudio, "C++: BaseCameraWrapper::SetbFadeAudio(unsigned long) --> void", "newbFadeAudio"_a);
		cl.def("GetbForceDisableTemporalAA", (unsigned long (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetbForceDisableTemporalAA, "C++: BaseCameraWrapper::GetbForceDisableTemporalAA() --> unsigned long");
		cl.def("SetbForceDisableTemporalAA", (void (BaseCameraWrapper::*)(unsigned long)) &BaseCameraWrapper::SetbForceDisableTemporalAA, "C++: BaseCameraWrapper::SetbForceDisableTemporalAA(unsigned long) --> void", "newbForceDisableTemporalAA"_a);
		cl.def("GetbEnableColorScaling", (unsigned long (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetbEnableColorScaling, "C++: BaseCameraWrapper::GetbEnableColorScaling() --> unsigned long");
		cl.def("SetbEnableColorScaling", (void (BaseCameraWrapper::*)(unsigned long)) &BaseCameraWrapper::SetbEnableColorScaling, "C++: BaseCameraWrapper::SetbEnableColorScaling(unsigned long) --> void", "newbEnableColorScaling"_a);
		cl.def("GetbEnableColorScaleInterp", (unsigned long (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetbEnableColorScaleInterp, "C++: BaseCameraWrapper::GetbEnableColorScaleInterp() --> unsigned long");
		cl.def("SetbEnableColorScaleInterp", (void (BaseCameraWrapper::*)(unsigned long)) &BaseCameraWrapper::SetbEnableColorScaleInterp, "C++: BaseCameraWrapper::SetbEnableColorScaleInterp(unsigned long) --> void", "newbEnableColorScaleInterp"_a);
		cl.def("GetbUseClientSideCameraUpdates", (unsigned long (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetbUseClientSideCameraUpdates, "C++: BaseCameraWrapper::GetbUseClientSideCameraUpdates() --> unsigned long");
		cl.def("SetbUseClientSideCameraUpdates", (void (BaseCameraWrapper::*)(unsigned long)) &BaseCameraWrapper::SetbUseClientSideCameraUpdates, "C++: BaseCameraWrapper::SetbUseClientSideCameraUpdates(unsigned long) --> void", "newbUseClientSideCameraUpdates"_a);
		cl.def("GetbDebugClientSideCamera", (unsigned long (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetbDebugClientSideCamera, "C++: BaseCameraWrapper::GetbDebugClientSideCamera() --> unsigned long");
		cl.def("SetbDebugClientSideCamera", (void (BaseCameraWrapper::*)(unsigned long)) &BaseCameraWrapper::SetbDebugClientSideCamera, "C++: BaseCameraWrapper::SetbDebugClientSideCamera(unsigned long) --> void", "newbDebugClientSideCamera"_a);
		cl.def("GetbShouldSendClientSideCameraUpdate", (unsigned long (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetbShouldSendClientSideCameraUpdate, "C++: BaseCameraWrapper::GetbShouldSendClientSideCameraUpdate() --> unsigned long");
		cl.def("SetbShouldSendClientSideCameraUpdate", (void (BaseCameraWrapper::*)(unsigned long)) &BaseCameraWrapper::SetbShouldSendClientSideCameraUpdate, "C++: BaseCameraWrapper::SetbShouldSendClientSideCameraUpdate(unsigned long) --> void", "newbShouldSendClientSideCameraUpdate"_a);
		cl.def("GetLockedFOV", (float (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetLockedFOV, "C++: BaseCameraWrapper::GetLockedFOV() --> float");
		cl.def("SetLockedFOV", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::SetLockedFOV, "C++: BaseCameraWrapper::SetLockedFOV(float) --> void", "newLockedFOV"_a);
		cl.def("GetConstrainedAspectRatio", (float (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetConstrainedAspectRatio, "C++: BaseCameraWrapper::GetConstrainedAspectRatio() --> float");
		cl.def("SetConstrainedAspectRatio", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::SetConstrainedAspectRatio, "C++: BaseCameraWrapper::SetConstrainedAspectRatio(float) --> void", "newConstrainedAspectRatio"_a);
		cl.def("GetDefaultAspectRatio", (float (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetDefaultAspectRatio, "C++: BaseCameraWrapper::GetDefaultAspectRatio() --> float");
		cl.def("SetDefaultAspectRatio", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::SetDefaultAspectRatio, "C++: BaseCameraWrapper::SetDefaultAspectRatio(float) --> void", "newDefaultAspectRatio"_a);
		cl.def("GetOffAxisYawAngle", (float (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetOffAxisYawAngle, "C++: BaseCameraWrapper::GetOffAxisYawAngle() --> float");
		cl.def("SetOffAxisYawAngle", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::SetOffAxisYawAngle, "C++: BaseCameraWrapper::SetOffAxisYawAngle(float) --> void", "newOffAxisYawAngle"_a);
		cl.def("GetOffAxisPitchAngle", (float (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetOffAxisPitchAngle, "C++: BaseCameraWrapper::GetOffAxisPitchAngle() --> float");
		cl.def("SetOffAxisPitchAngle", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::SetOffAxisPitchAngle, "C++: BaseCameraWrapper::SetOffAxisPitchAngle(float) --> void", "newOffAxisPitchAngle"_a);
		cl.def("GetFadeColor", (struct UnrealColor (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetFadeColor, "C++: BaseCameraWrapper::GetFadeColor() --> struct UnrealColor");
		cl.def("SetFadeColor", (void (BaseCameraWrapper::*)(struct UnrealColor)) &BaseCameraWrapper::SetFadeColor, "C++: BaseCameraWrapper::SetFadeColor(struct UnrealColor) --> void", "newFadeColor"_a);
		cl.def("GetFadeAmount", (float (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetFadeAmount, "C++: BaseCameraWrapper::GetFadeAmount() --> float");
		cl.def("SetFadeAmount", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::SetFadeAmount, "C++: BaseCameraWrapper::SetFadeAmount(float) --> void", "newFadeAmount"_a);
		cl.def("GetCamOverridePostProcessAlpha", (float (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetCamOverridePostProcessAlpha, "C++: BaseCameraWrapper::GetCamOverridePostProcessAlpha() --> float");
		cl.def("SetCamOverridePostProcessAlpha", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::SetCamOverridePostProcessAlpha, "C++: BaseCameraWrapper::SetCamOverridePostProcessAlpha(float) --> void", "newCamOverridePostProcessAlpha"_a);
		cl.def("GetColorScale", (struct Vector (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetColorScale, "C++: BaseCameraWrapper::GetColorScale() --> struct Vector");
		cl.def("SetColorScale", (void (BaseCameraWrapper::*)(struct Vector)) &BaseCameraWrapper::SetColorScale, "C++: BaseCameraWrapper::SetColorScale(struct Vector) --> void", "newColorScale"_a);
		cl.def("GetDesiredColorScale", (struct Vector (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetDesiredColorScale, "C++: BaseCameraWrapper::GetDesiredColorScale() --> struct Vector");
		cl.def("SetDesiredColorScale", (void (BaseCameraWrapper::*)(struct Vector)) &BaseCameraWrapper::SetDesiredColorScale, "C++: BaseCameraWrapper::SetDesiredColorScale(struct Vector) --> void", "newDesiredColorScale"_a);
		cl.def("GetOriginalColorScale", (struct Vector (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetOriginalColorScale, "C++: BaseCameraWrapper::GetOriginalColorScale() --> struct Vector");
		cl.def("SetOriginalColorScale", (void (BaseCameraWrapper::*)(struct Vector)) &BaseCameraWrapper::SetOriginalColorScale, "C++: BaseCameraWrapper::SetOriginalColorScale(struct Vector) --> void", "newOriginalColorScale"_a);
		cl.def("GetColorScaleInterpDuration", (float (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetColorScaleInterpDuration, "C++: BaseCameraWrapper::GetColorScaleInterpDuration() --> float");
		cl.def("SetColorScaleInterpDuration", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::SetColorScaleInterpDuration, "C++: BaseCameraWrapper::SetColorScaleInterpDuration(float) --> void", "newColorScaleInterpDuration"_a);
		cl.def("GetColorScaleInterpStartTime", (float (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetColorScaleInterpStartTime, "C++: BaseCameraWrapper::GetColorScaleInterpStartTime() --> float");
		cl.def("SetColorScaleInterpStartTime", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::SetColorScaleInterpStartTime, "C++: BaseCameraWrapper::SetColorScaleInterpStartTime(float) --> void", "newColorScaleInterpStartTime"_a);
		cl.def("GetViewTarget", (struct ViewTarget (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetViewTarget, "C++: BaseCameraWrapper::GetViewTarget() --> struct ViewTarget");
		cl.def("SetViewTarget", (void (BaseCameraWrapper::*)(struct ViewTarget)) &BaseCameraWrapper::SetViewTarget, "C++: BaseCameraWrapper::SetViewTarget(struct ViewTarget) --> void", "newViewTarget"_a);
		cl.def("GetPendingViewTarget", (struct ViewTarget (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetPendingViewTarget, "C++: BaseCameraWrapper::GetPendingViewTarget() --> struct ViewTarget");
		cl.def("SetPendingViewTarget", (void (BaseCameraWrapper::*)(struct ViewTarget)) &BaseCameraWrapper::SetPendingViewTarget, "C++: BaseCameraWrapper::SetPendingViewTarget(struct ViewTarget) --> void", "newPendingViewTarget"_a);
		cl.def("GetBlendTimeToGo", (float (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetBlendTimeToGo, "C++: BaseCameraWrapper::GetBlendTimeToGo() --> float");
		cl.def("SetBlendTimeToGo", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::SetBlendTimeToGo, "C++: BaseCameraWrapper::SetBlendTimeToGo(float) --> void", "newBlendTimeToGo"_a);
		cl.def("GetFreeCamDistance", (float (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetFreeCamDistance, "C++: BaseCameraWrapper::GetFreeCamDistance() --> float");
		cl.def("SetFreeCamDistance", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::SetFreeCamDistance, "C++: BaseCameraWrapper::SetFreeCamDistance(float) --> void", "newFreeCamDistance"_a);
		cl.def("GetFreeCamOffset", (struct Vector (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetFreeCamOffset, "C++: BaseCameraWrapper::GetFreeCamOffset() --> struct Vector");
		cl.def("SetFreeCamOffset", (void (BaseCameraWrapper::*)(struct Vector)) &BaseCameraWrapper::SetFreeCamOffset, "C++: BaseCameraWrapper::SetFreeCamOffset(struct Vector) --> void", "newFreeCamOffset"_a);
		cl.def("GetFadeTime", (float (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetFadeTime, "C++: BaseCameraWrapper::GetFadeTime() --> float");
		cl.def("SetFadeTime", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::SetFadeTime, "C++: BaseCameraWrapper::SetFadeTime(float) --> void", "newFadeTime"_a);
		cl.def("GetFadeTimeRemaining", (float (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetFadeTimeRemaining, "C++: BaseCameraWrapper::GetFadeTimeRemaining() --> float");
		cl.def("SetFadeTimeRemaining", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::SetFadeTimeRemaining, "C++: BaseCameraWrapper::SetFadeTimeRemaining(float) --> void", "newFadeTimeRemaining"_a);
		cl.def("StopAllCameraAnims", (void (BaseCameraWrapper::*)(unsigned long)) &BaseCameraWrapper::StopAllCameraAnims, "C++: BaseCameraWrapper::StopAllCameraAnims(unsigned long) --> void", "bImmediate"_a);
		cl.def("ClearAllCameraShakes", (void (BaseCameraWrapper::*)()) &BaseCameraWrapper::ClearAllCameraShakes, "C++: BaseCameraWrapper::ClearAllCameraShakes() --> void");
		cl.def("CalcRadialShakeScale", (float (BaseCameraWrapper::*)(class BaseCameraWrapper, struct Vector &, float, float, float)) &BaseCameraWrapper::CalcRadialShakeScale, "C++: BaseCameraWrapper::CalcRadialShakeScale(class BaseCameraWrapper, struct Vector &, float, float, float) --> float", "Cam"_a, "Epicenter"_a, "InnerRadius"_a, "OuterRadius"_a, "Falloff"_a);
		cl.def("ClearCameraLensEffects", (void (BaseCameraWrapper::*)()) &BaseCameraWrapper::ClearCameraLensEffects, "C++: BaseCameraWrapper::ClearCameraLensEffects() --> void");
		cl.def("ApplyAudioFade", (void (BaseCameraWrapper::*)()) &BaseCameraWrapper::ApplyAudioFade, "C++: BaseCameraWrapper::ApplyAudioFade() --> void");
		cl.def("UpdateFade", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::UpdateFade, "C++: BaseCameraWrapper::UpdateFade(float) --> void", "DeltaTime"_a);
		cl.def("DoUpdateCamera", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::DoUpdateCamera, "C++: BaseCameraWrapper::DoUpdateCamera(float) --> void", "DeltaTime"_a);
		cl.def("eventUpdateCamera", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::eventUpdateCamera, "C++: BaseCameraWrapper::eventUpdateCamera(float) --> void", "DeltaTime"_a);
		cl.def("SetDesiredColorScale2", (void (BaseCameraWrapper::*)(struct Vector &, float)) &BaseCameraWrapper::SetDesiredColorScale2, "C++: BaseCameraWrapper::SetDesiredColorScale2(struct Vector &, float) --> void", "NewColorScale"_a, "InterpTime"_a);
		cl.def("GetCameraRotation", (struct Rotator (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetCameraRotation, "C++: BaseCameraWrapper::GetCameraRotation() --> struct Rotator");
		cl.def("SetFOV", (void (BaseCameraWrapper::*)(float)) &BaseCameraWrapper::SetFOV, "C++: BaseCameraWrapper::SetFOV(float) --> void", "NewFOV"_a);
		cl.def("GetFOVAngle", (float (BaseCameraWrapper::*)()) &BaseCameraWrapper::GetFOVAngle, "C++: BaseCameraWrapper::GetFOVAngle() --> float");
		cl.def("eventDestroyed", (void (BaseCameraWrapper::*)()) &BaseCameraWrapper::eventDestroyed, "C++: BaseCameraWrapper::eventDestroyed() --> void");
		cl.def("PostBeginPlay", (void (BaseCameraWrapper::*)()) &BaseCameraWrapper::PostBeginPlay, "C++: BaseCameraWrapper::PostBeginPlay() --> void");
	}
	{ // CameraXWrapper file: line:8
		pybind11::class_<CameraXWrapper, std::shared_ptr<CameraXWrapper>, BaseCameraWrapper> cl(M, "CameraXWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](CameraXWrapper const &o){ return new CameraXWrapper(o); } ) );
		cl.def("assign", (class CameraXWrapper & (CameraXWrapper::*)(class CameraXWrapper)) &CameraXWrapper::operator=, "C++: CameraXWrapper::operator=(class CameraXWrapper) --> class CameraXWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetPCDeltaRotation", (struct Rotator (CameraXWrapper::*)()) &CameraXWrapper::GetPCDeltaRotation, "C++: CameraXWrapper::GetPCDeltaRotation() --> struct Rotator");
		cl.def("SetPCDeltaRotation", (void (CameraXWrapper::*)(struct Rotator)) &CameraXWrapper::SetPCDeltaRotation, "C++: CameraXWrapper::SetPCDeltaRotation(struct Rotator) --> void", "newPCDeltaRotation"_a);
		cl.def("GetOldControllerRotation", (struct Rotator (CameraXWrapper::*)()) &CameraXWrapper::GetOldControllerRotation, "C++: CameraXWrapper::GetOldControllerRotation() --> struct Rotator");
		cl.def("SetOldControllerRotation", (void (CameraXWrapper::*)(struct Rotator)) &CameraXWrapper::SetOldControllerRotation, "C++: CameraXWrapper::SetOldControllerRotation(struct Rotator) --> void", "newOldControllerRotation"_a);
		cl.def("GetPCDeltaLocation", (struct Vector (CameraXWrapper::*)()) &CameraXWrapper::GetPCDeltaLocation, "C++: CameraXWrapper::GetPCDeltaLocation() --> struct Vector");
		cl.def("SetPCDeltaLocation", (void (CameraXWrapper::*)(struct Vector)) &CameraXWrapper::SetPCDeltaLocation, "C++: CameraXWrapper::SetPCDeltaLocation(struct Vector) --> void", "newPCDeltaLocation"_a);
		cl.def("GetOldControllerLocation", (struct Vector (CameraXWrapper::*)()) &CameraXWrapper::GetOldControllerLocation, "C++: CameraXWrapper::GetOldControllerLocation() --> struct Vector");
		cl.def("SetOldControllerLocation", (void (CameraXWrapper::*)(struct Vector)) &CameraXWrapper::SetOldControllerLocation, "C++: CameraXWrapper::SetOldControllerLocation(struct Vector) --> void", "newOldControllerLocation"_a);
		cl.def("GetShakeLocationOffset", (struct Vector (CameraXWrapper::*)()) &CameraXWrapper::GetShakeLocationOffset, "C++: CameraXWrapper::GetShakeLocationOffset() --> struct Vector");
		cl.def("SetShakeLocationOffset", (void (CameraXWrapper::*)(struct Vector)) &CameraXWrapper::SetShakeLocationOffset, "C++: CameraXWrapper::SetShakeLocationOffset(struct Vector) --> void", "newShakeLocationOffset"_a);
		cl.def("GetShakeRotationOffset", (struct Rotator (CameraXWrapper::*)()) &CameraXWrapper::GetShakeRotationOffset, "C++: CameraXWrapper::GetShakeRotationOffset() --> struct Rotator");
		cl.def("SetShakeRotationOffset", (void (CameraXWrapper::*)(struct Rotator)) &CameraXWrapper::SetShakeRotationOffset, "C++: CameraXWrapper::SetShakeRotationOffset(struct Rotator) --> void", "newShakeRotationOffset"_a);
		cl.def("GetShakeFOVOffset", (float (CameraXWrapper::*)()) &CameraXWrapper::GetShakeFOVOffset, "C++: CameraXWrapper::GetShakeFOVOffset() --> float");
		cl.def("SetShakeFOVOffset", (void (CameraXWrapper::*)(float)) &CameraXWrapper::SetShakeFOVOffset, "C++: CameraXWrapper::SetShakeFOVOffset(float) --> void", "newShakeFOVOffset"_a);
		cl.def("GetStartFadeColor", (struct UnrealColor (CameraXWrapper::*)()) &CameraXWrapper::GetStartFadeColor, "C++: CameraXWrapper::GetStartFadeColor() --> struct UnrealColor");
		cl.def("SetStartFadeColor", (void (CameraXWrapper::*)(struct UnrealColor)) &CameraXWrapper::SetStartFadeColor, "C++: CameraXWrapper::SetStartFadeColor(struct UnrealColor) --> void", "newStartFadeColor"_a);
		cl.def("GetEndFadeColor", (struct UnrealColor (CameraXWrapper::*)()) &CameraXWrapper::GetEndFadeColor, "C++: CameraXWrapper::GetEndFadeColor() --> struct UnrealColor");
		cl.def("SetEndFadeColor", (void (CameraXWrapper::*)(struct UnrealColor)) &CameraXWrapper::SetEndFadeColor, "C++: CameraXWrapper::SetEndFadeColor(struct UnrealColor) --> void", "newEndFadeColor"_a);
		cl.def("GetClipOffset", (struct Vector (CameraXWrapper::*)()) &CameraXWrapper::GetClipOffset, "C++: CameraXWrapper::GetClipOffset() --> struct Vector");
		cl.def("SetClipOffset", (void (CameraXWrapper::*)(struct Vector)) &CameraXWrapper::SetClipOffset, "C++: CameraXWrapper::SetClipOffset(struct Vector) --> void", "newClipOffset"_a);
		cl.def("GetbDisableCameraShake", (unsigned long (CameraXWrapper::*)()) &CameraXWrapper::GetbDisableCameraShake, "C++: CameraXWrapper::GetbDisableCameraShake() --> unsigned long");
		cl.def("SetbDisableCameraShake", (void (CameraXWrapper::*)(unsigned long)) &CameraXWrapper::SetbDisableCameraShake, "C++: CameraXWrapper::SetbDisableCameraShake(unsigned long) --> void", "newbDisableCameraShake"_a);
		cl.def("GetbSnapNextTransition", (unsigned long (CameraXWrapper::*)()) &CameraXWrapper::GetbSnapNextTransition, "C++: CameraXWrapper::GetbSnapNextTransition() --> unsigned long");
		cl.def("SetbSnapNextTransition", (void (CameraXWrapper::*)(unsigned long)) &CameraXWrapper::SetbSnapNextTransition, "C++: CameraXWrapper::SetbSnapNextTransition(unsigned long) --> void", "newbSnapNextTransition"_a);
		cl.def("eventOnViewTargetChanged", (void (CameraXWrapper::*)()) &CameraXWrapper::eventOnViewTargetChanged, "C++: CameraXWrapper::eventOnViewTargetChanged() --> void");
		cl.def("IsTransitioning", (bool (CameraXWrapper::*)()) &CameraXWrapper::IsTransitioning, "C++: CameraXWrapper::IsTransitioning() --> bool");
		cl.def("SnapTransition", (void (CameraXWrapper::*)()) &CameraXWrapper::SnapTransition, "C++: CameraXWrapper::SnapTransition() --> void");
		cl.def("CopyFade", (void (CameraXWrapper::*)(class CameraXWrapper)) &CameraXWrapper::CopyFade, "C++: CameraXWrapper::CopyFade(class CameraXWrapper) --> void", "Other"_a);
		cl.def("UpdateFade", (void (CameraXWrapper::*)(float)) &CameraXWrapper::UpdateFade, "C++: CameraXWrapper::UpdateFade(float) --> void", "DeltaTime"_a);
		cl.def("eventUpdateCamera", (void (CameraXWrapper::*)(float)) &CameraXWrapper::eventUpdateCamera, "C++: CameraXWrapper::eventUpdateCamera(float) --> void", "DeltaTime"_a);
		cl.def("RemoveRoll", (struct Rotator (CameraXWrapper::*)(struct Rotator &)) &CameraXWrapper::RemoveRoll, "C++: CameraXWrapper::RemoveRoll(struct Rotator &) --> struct Rotator", "InRot"_a);
		cl.def("UpdateCameraState", (void (CameraXWrapper::*)()) &CameraXWrapper::UpdateCameraState, "C++: CameraXWrapper::UpdateCameraState() --> void");
		cl.def("InstanceCameraStates", (void (CameraXWrapper::*)()) &CameraXWrapper::InstanceCameraStates, "C++: CameraXWrapper::InstanceCameraStates() --> void");
		cl.def("OnLoadingMovieClosesd", (void (CameraXWrapper::*)()) &CameraXWrapper::OnLoadingMovieClosesd, "C++: CameraXWrapper::OnLoadingMovieClosesd() --> void");
		cl.def("eventPostBeginPlay", (void (CameraXWrapper::*)()) &CameraXWrapper::eventPostBeginPlay, "C++: CameraXWrapper::eventPostBeginPlay() --> void");
	}
}
