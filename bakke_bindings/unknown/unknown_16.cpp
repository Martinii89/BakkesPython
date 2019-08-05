#include "pch.h"
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/StructArrayWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>
#include <utils/customrotator.h>


void bind_unknown_unknown_16(py::module &M)
{
	{ // ReplayServerWrapper file: line:4
		pybind11::class_<ReplayServerWrapper, std::shared_ptr<ReplayServerWrapper>, ServerWrapper> cl(M, "ReplayServerWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long, unsigned long, unsigned long>(), pybind11::arg("server"), pybind11::arg("gameinfo"), pybind11::arg("replaydirector") );

		cl.def( pybind11::init( [](ReplayServerWrapper const &o){ return new ReplayServerWrapper(o); } ) );
		cl.def("assign", (class ReplayServerWrapper & (ReplayServerWrapper::*)(class ReplayServerWrapper)) &ReplayServerWrapper::operator=, "C++: ReplayServerWrapper::operator=(class ReplayServerWrapper) --> class ReplayServerWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetViewTarget", (class ActorWrapper (ReplayServerWrapper::*)()) &ReplayServerWrapper::GetViewTarget, "C++: ReplayServerWrapper::GetViewTarget() --> class ActorWrapper");
		cl.def("GetReplay", (class ReplayWrapper (ReplayServerWrapper::*)()) &ReplayServerWrapper::GetReplay, "C++: ReplayServerWrapper::GetReplay() --> class ReplayWrapper");
		cl.def("GetReplayTimeElapsed", (float (ReplayServerWrapper::*)()) &ReplayServerWrapper::GetReplayTimeElapsed, "C++: ReplayServerWrapper::GetReplayTimeElapsed() --> float");
		cl.def("GetReplayFPS", (int (ReplayServerWrapper::*)()) &ReplayServerWrapper::GetReplayFPS, "C++: ReplayServerWrapper::GetReplayFPS() --> int");
		cl.def("GetCurrentReplayFrame", (int (ReplayServerWrapper::*)()) &ReplayServerWrapper::GetCurrentReplayFrame, "C++: ReplayServerWrapper::GetCurrentReplayFrame() --> int");
		cl.def("AddKeyFrame", (void (ReplayServerWrapper::*)(int, std::string)) &ReplayServerWrapper::AddKeyFrame, "C++: ReplayServerWrapper::AddKeyFrame(int, std::string) --> void", "frame"_a, "name"_a);
		cl.def("RemoveKeyFrame", (void (ReplayServerWrapper::*)(int)) &ReplayServerWrapper::RemoveKeyFrame, "C++: ReplayServerWrapper::RemoveKeyFrame(int) --> void", "frame"_a);
		cl.def("SkipToFrame", (void (ReplayServerWrapper::*)(int)) &ReplayServerWrapper::SkipToFrame, "C++: ReplayServerWrapper::SkipToFrame(int) --> void", "frame"_a);
		cl.def("SkipToTime", (void (ReplayServerWrapper::*)(float)) &ReplayServerWrapper::SkipToTime, "C++: ReplayServerWrapper::SkipToTime(float) --> void", "time"_a);
		cl.def("StartPlaybackAtFrame", (void (ReplayServerWrapper::*)(int)) &ReplayServerWrapper::StartPlaybackAtFrame, "C++: ReplayServerWrapper::StartPlaybackAtFrame(int) --> void", "frame"_a);
		cl.def("StartPlaybackAtTime", (void (ReplayServerWrapper::*)(float)) &ReplayServerWrapper::StartPlaybackAtTime, "C++: ReplayServerWrapper::StartPlaybackAtTime(float) --> void", "time"_a);
	}
	{ // StructArrayWrapper file:bakkesmod/wrappers/StructArrayWrapper.h line:27
		pybind11::class_<StructArrayWrapper<RecordedSample>, std::shared_ptr<StructArrayWrapper<RecordedSample>>> cl(M, "StructArrayWrapper_RecordedSample_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](StructArrayWrapper<RecordedSample> const &o){ return new StructArrayWrapper<RecordedSample>(o); } ) );
		cl.def("assign", (class StructArrayWrapper<struct RecordedSample> & (StructArrayWrapper<RecordedSample>::*)(class StructArrayWrapper<struct RecordedSample>)) &StructArrayWrapper<RecordedSample>::operator=, "C++: StructArrayWrapper<RecordedSample>::operator=(class StructArrayWrapper<struct RecordedSample>) --> class StructArrayWrapper<struct RecordedSample> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (StructArrayWrapper<RecordedSample>::*)()) &StructArrayWrapper<RecordedSample>::Count, "C++: StructArrayWrapper<RecordedSample>::Count() --> int");
		cl.def("Get", (struct RecordedSample (StructArrayWrapper<RecordedSample>::*)(int)) &StructArrayWrapper<RecordedSample>::Get, "C++: StructArrayWrapper<RecordedSample>::Get(int) --> struct RecordedSample", "index"_a);
	}
	{ // StructArrayWrapper file:bakkesmod/wrappers/StructArrayWrapper.h line:28
		pybind11::class_<StructArrayWrapper<ProfileCameraSettings>, std::shared_ptr<StructArrayWrapper<ProfileCameraSettings>>> cl(M, "StructArrayWrapper_ProfileCameraSettings_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](StructArrayWrapper<ProfileCameraSettings> const &o){ return new StructArrayWrapper<ProfileCameraSettings>(o); } ) );
		cl.def("assign", (class StructArrayWrapper<struct ProfileCameraSettings> & (StructArrayWrapper<ProfileCameraSettings>::*)(class StructArrayWrapper<struct ProfileCameraSettings>)) &StructArrayWrapper<ProfileCameraSettings>::operator=, "C++: StructArrayWrapper<ProfileCameraSettings>::operator=(class StructArrayWrapper<struct ProfileCameraSettings>) --> class StructArrayWrapper<struct ProfileCameraSettings> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (StructArrayWrapper<ProfileCameraSettings>::*)()) &StructArrayWrapper<ProfileCameraSettings>::Count, "C++: StructArrayWrapper<ProfileCameraSettings>::Count() --> int");
		cl.def("Get", (struct ProfileCameraSettings (StructArrayWrapper<ProfileCameraSettings>::*)(int)) &StructArrayWrapper<ProfileCameraSettings>::Get, "C++: StructArrayWrapper<ProfileCameraSettings>::Get(int) --> struct ProfileCameraSettings", "index"_a);
	}
	{ // StructArrayWrapper file:bakkesmod/wrappers/StructArrayWrapper.h line:29
		pybind11::class_<StructArrayWrapper<SteamID>, std::shared_ptr<StructArrayWrapper<SteamID>>> cl(M, "StructArrayWrapper_SteamID_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](StructArrayWrapper<SteamID> const &o){ return new StructArrayWrapper<SteamID>(o); } ) );
		cl.def("assign", (class StructArrayWrapper<struct SteamID> & (StructArrayWrapper<SteamID>::*)(class StructArrayWrapper<struct SteamID>)) &StructArrayWrapper<SteamID>::operator=, "C++: StructArrayWrapper<SteamID>::operator=(class StructArrayWrapper<struct SteamID>) --> class StructArrayWrapper<struct SteamID> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (StructArrayWrapper<SteamID>::*)()) &StructArrayWrapper<SteamID>::Count, "C++: StructArrayWrapper<SteamID>::Count() --> int");
		cl.def("Get", (struct SteamID (StructArrayWrapper<SteamID>::*)(int)) &StructArrayWrapper<SteamID>::Get, "C++: StructArrayWrapper<SteamID>::Get(int) --> struct SteamID", "index"_a);
	}
	{ // StructArrayWrapper file:bakkesmod/wrappers/StructArrayWrapper.h line:30
		pybind11::class_<StructArrayWrapper<LinearColor>, std::shared_ptr<StructArrayWrapper<LinearColor>>> cl(M, "StructArrayWrapper_LinearColor_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](StructArrayWrapper<LinearColor> const &o){ return new StructArrayWrapper<LinearColor>(o); } ) );
		cl.def("assign", (class StructArrayWrapper<struct LinearColor> & (StructArrayWrapper<LinearColor>::*)(class StructArrayWrapper<struct LinearColor>)) &StructArrayWrapper<LinearColor>::operator=, "C++: StructArrayWrapper<LinearColor>::operator=(class StructArrayWrapper<struct LinearColor>) --> class StructArrayWrapper<struct LinearColor> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (StructArrayWrapper<LinearColor>::*)()) &StructArrayWrapper<LinearColor>::Count, "C++: StructArrayWrapper<LinearColor>::Count() --> int");
		cl.def("Get", (struct LinearColor (StructArrayWrapper<LinearColor>::*)(int)) &StructArrayWrapper<LinearColor>::Get, "C++: StructArrayWrapper<LinearColor>::Get(int) --> struct LinearColor", "index"_a);
	}
	{ // FiniteElement file: line:3
		pybind11::class_<FiniteElement<float>, std::shared_ptr<FiniteElement<float>>> cl(M, "FiniteElement_float_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<float, float, float>(), pybind11::arg("value"), pybind11::arg("min"), pybind11::arg("max") );

		cl.def( pybind11::init( [](FiniteElement<float> const &o){ return new FiniteElement<float>(o); } ) );
		cl.def_readwrite("_value", &FiniteElement<float>::_value);
		cl.def_readwrite("_min", &FiniteElement<float>::_min);
		cl.def_readwrite("_max", &FiniteElement<float>::_max);
		cl.def("_sizeOfField", (float (FiniteElement<float>::*)()) &FiniteElement<float>::_sizeOfField, "C++: FiniteElement<float>::_sizeOfField() --> float");
		cl.def("diffTo", (float (FiniteElement<float>::*)(class FiniteElement<float>)) &FiniteElement<float>::diffTo, "C++: FiniteElement<float>::diffTo(class FiniteElement<float>) --> float", "end"_a);
		cl.def("diffTo", (float (FiniteElement<float>::*)(float)) &FiniteElement<float>::diffTo, "C++: FiniteElement<float>::diffTo(float) --> float", "end"_a);
		cl.def("_setValue", (void (FiniteElement<float>::*)(float)) &FiniteElement<float>::_setValue, "C++: FiniteElement<float>::_setValue(float) --> void", "value"_a);
		cl.def("assign", (class FiniteElement<float> & (FiniteElement<float>::*)(float &)) &FiniteElement<float>::operator=, "C++: FiniteElement<float>::operator=(float &) --> class FiniteElement<float> &", pybind11::return_value_policy::automatic, "other"_a);
		cl.def("assign", (class FiniteElement<float> & (FiniteElement<float>::*)(class FiniteElement<float> &)) &FiniteElement<float>::operator=, "C++: FiniteElement<float>::operator=(class FiniteElement<float> &) --> class FiniteElement<float> &", pybind11::return_value_policy::automatic, "other"_a);
		cl.def("assign", (class FiniteElement<float> & (FiniteElement<float>::*)(const class FiniteElement<float> &)) &FiniteElement<float>::operator=, "C++: FiniteElement<float>::operator=(const class FiniteElement<float> &) --> class FiniteElement<float> &", pybind11::return_value_policy::automatic, "other"_a);
	}
	{ // CustomRotator file:utils/customrotator.h line:8
		pybind11::class_<CustomRotator, std::shared_ptr<CustomRotator>> cl(M, "CustomRotator");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new CustomRotator(); } ) );
		cl.def( pybind11::init<float>(), pybind11::arg("defaultValue") );

		cl.def( pybind11::init<float, float, float>(), pybind11::arg("pitch"), pybind11::arg("yaw"), pybind11::arg("roll") );

		cl.def( pybind11::init<class FiniteElement<float>, class FiniteElement<float>, class FiniteElement<float>>(), pybind11::arg("pitch"), pybind11::arg("yaw"), pybind11::arg("roll") );

		cl.def( pybind11::init<struct Rotator &>(), pybind11::arg("rot") );

		cl.def( pybind11::init( [](CustomRotator const &o){ return new CustomRotator(o); } ) );
		cl.def_readwrite("Pitch", &CustomRotator::Pitch);
		cl.def_readwrite("Yaw", &CustomRotator::Yaw);
		cl.def_readwrite("Roll", &CustomRotator::Roll);
		cl.def("assign", (class CustomRotator & (CustomRotator::*)(class CustomRotator &)) &CustomRotator::operator=, "C++: CustomRotator::operator=(class CustomRotator &) --> class CustomRotator &", pybind11::return_value_policy::automatic, "other"_a);
		cl.def("assign", (class CustomRotator & (CustomRotator::*)(struct Rotator &)) &CustomRotator::operator=, "C++: CustomRotator::operator=(struct Rotator &) --> class CustomRotator &", pybind11::return_value_policy::automatic, "other"_a);
		cl.def("diffTo", (class CustomRotator (CustomRotator::*)(class CustomRotator &)) &CustomRotator::diffTo, "C++: CustomRotator::diffTo(class CustomRotator &) --> class CustomRotator", "other"_a);
		cl.def("ToRotator", (struct Rotator (CustomRotator::*)()) &CustomRotator::ToRotator, "C++: CustomRotator::ToRotator() --> struct Rotator");
		cl.def("__imul__", (class CustomRotator & (CustomRotator::*)(const class CustomRotator &)) &CustomRotator::operator*=, "C++: CustomRotator::operator*=(const class CustomRotator &) --> class CustomRotator &", pybind11::return_value_policy::automatic, "other"_a);
		cl.def("__iadd__", (class CustomRotator & (CustomRotator::*)(const class CustomRotator &)) &CustomRotator::operator+=, "C++: CustomRotator::operator+=(const class CustomRotator &) --> class CustomRotator &", pybind11::return_value_policy::automatic, "other"_a);
		cl.def("__isub__", (class CustomRotator & (CustomRotator::*)(const class CustomRotator &)) &CustomRotator::operator-=, "C++: CustomRotator::operator-=(const class CustomRotator &) --> class CustomRotator &", pybind11::return_value_policy::automatic, "other"_a);
		cl.def("__idiv__", (class CustomRotator & (CustomRotator::*)(const class CustomRotator &)) &CustomRotator::operator/=, "C++: CustomRotator::operator/=(const class CustomRotator &) --> class CustomRotator &", pybind11::return_value_policy::automatic, "other"_a);
		cl.def("__mul__", (class CustomRotator & (CustomRotator::*)(const class CustomRotator &)) &CustomRotator::operator*, "C++: CustomRotator::operator*(const class CustomRotator &) --> class CustomRotator &", pybind11::return_value_policy::automatic, "other"_a);
		cl.def("__add__", (class CustomRotator & (CustomRotator::*)(const class CustomRotator &)) &CustomRotator::operator+, "C++: CustomRotator::operator+(const class CustomRotator &) --> class CustomRotator &", pybind11::return_value_policy::automatic, "other"_a);
		cl.def("__sub__", (class CustomRotator & (CustomRotator::*)(const class CustomRotator &)) &CustomRotator::operator-, "C++: CustomRotator::operator-(const class CustomRotator &) --> class CustomRotator &", pybind11::return_value_policy::automatic, "other"_a);
		cl.def("__div__", (class CustomRotator & (CustomRotator::*)(const class CustomRotator &)) &CustomRotator::operator/, "C++: CustomRotator::operator/(const class CustomRotator &) --> class CustomRotator &", pybind11::return_value_policy::automatic, "other"_a);
	}
}
