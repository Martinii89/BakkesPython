#pragma once
#include <pybind11\embed.h>
namespace py = pybind11;

void bind_unknown_unknown(py::module &M);
void bind_unknown_unknown_1(py::module &M);
void bind_unknown_unknown_2(py::module &M);
void bind_unknown_unknown_3(py::module &M);
void bind_unknown_unknown_4(py::module &M);
void bind_unknown_unknown_5(py::module &M);
void bind_unknown_unknown_6(py::module &M);
void bind_unknown_unknown_7(py::module &M);
void bind_unknown_unknown_8(py::module &M);
void bind_bakkesmod_wrappers_arraywrapper(py::module &M);
void bind_unknown_unknown_9(py::module &M);
void bind_bakkesmod_wrappers_Engine_UnrealStringWrapper(py::module &M);
void bind_unknown_unknown_10(py::module &M);
void bind_bakkesmod_wrappers_GameEvent_GameEditorWrapper(py::module &M);
void bind_bakkesmod_wrappers_GameEvent_ReplayDirectorWrapper(py::module &M);
void bind_unknown_unknown_11(py::module &M);
void bind_unknown_unknown_12(py::module &M);
void bind_bakkesmod_wrappers_GameEvent_TutorialWrapper(py::module &M);
void bind_bakkesmod_wrappers_GameObject_BaseCameraWrapper(py::module &M);
void bind_bakkesmod_wrappers_GameObject_CameraWrapper(py::module &M);
void bind_bakkesmod_wrappers_GameObject_CarComponent_DodgeComponentWrapper(py::module &M);
void bind_bakkesmod_wrappers_GameObject_CarComponent_PrimitiveComponentWrapper(py::module &M);
void bind_bakkesmod_wrappers_GameObject_CarComponent_VehicleSimWrapper(py::module &M);
void bind_bakkesmod_wrappers_GameObject_PerformanceStats_PerfStatGraphWrapper(py::module &M);
void bind_unknown_unknown_13(py::module &M);
void bind_bakkesmod_wrappers_GameObject_RumbleComponent_BallCarSpringPickup(py::module &M);
void bind_bakkesmod_wrappers_GameObject_RumbleComponent_GrapplingHookPickup(py::module &M);
void bind_bakkesmod_wrappers_GameObject_RumbleComponent_HitForcePickup(py::module &M);
void bind_unknown_unknown_14(py::module &M);
void bind_unknown_unknown_15(py::module &M);
void bind_unknown_unknown_16(py::module &M);


PYBIND11_EMBEDDED_MODULE(pybakke, M) {
	M.doc() = "pybakke module";

	

	bind_unknown_unknown(M);
	bind_unknown_unknown_1(M);
	bind_unknown_unknown_2(M);
	bind_unknown_unknown_3(M);
	bind_unknown_unknown_4(M);
	bind_unknown_unknown_5(M);
	bind_unknown_unknown_6(M);
	bind_unknown_unknown_7(M);
	bind_unknown_unknown_8(M);
	bind_bakkesmod_wrappers_arraywrapper(M);
	bind_unknown_unknown_9(M);
	bind_bakkesmod_wrappers_Engine_UnrealStringWrapper(M);
	bind_unknown_unknown_10(M);
	bind_bakkesmod_wrappers_GameEvent_GameEditorWrapper(M);
	bind_bakkesmod_wrappers_GameEvent_ReplayDirectorWrapper(M);
	bind_unknown_unknown_11(M);
	bind_unknown_unknown_12(M);
	bind_bakkesmod_wrappers_GameEvent_TutorialWrapper(M);
	bind_bakkesmod_wrappers_GameObject_BaseCameraWrapper(M);
	bind_bakkesmod_wrappers_GameObject_CameraWrapper(M);
	bind_bakkesmod_wrappers_GameObject_CarComponent_DodgeComponentWrapper(M);
	bind_bakkesmod_wrappers_GameObject_CarComponent_PrimitiveComponentWrapper(M);
	bind_bakkesmod_wrappers_GameObject_CarComponent_VehicleSimWrapper(M);
	bind_bakkesmod_wrappers_GameObject_PerformanceStats_PerfStatGraphWrapper(M);
	bind_unknown_unknown_13(M);
	bind_bakkesmod_wrappers_GameObject_RumbleComponent_BallCarSpringPickup(M);
	bind_bakkesmod_wrappers_GameObject_RumbleComponent_GrapplingHookPickup(M);
	bind_bakkesmod_wrappers_GameObject_RumbleComponent_HitForcePickup(M);
	bind_unknown_unknown_14(M);
	bind_unknown_unknown_15(M);
	bind_unknown_unknown_16(M);

}
