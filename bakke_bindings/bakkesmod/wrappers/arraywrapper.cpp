#include "pch.h"
#include <bakkesmod/wrappers/Engine/EngineTAWrapper.h>
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameObject/BaseCameraWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/BoostWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/SampleHistoryWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/SampleRecordSettingsWrapper.h>
#include <bakkesmod/wrappers/StructArrayWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <bakkesmod/wrappers/canvaswrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_bakkesmod_wrappers_arraywrapper(py::module &M)
{
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:53
		pybind11::class_<ArrayWrapper<GoalWrapper>, std::shared_ptr<ArrayWrapper<GoalWrapper>>> cl(M, "ArrayWrapper_GoalWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ArrayWrapper<GoalWrapper> const &o){ return new ArrayWrapper<GoalWrapper>(o); } ) );
		cl.def("assign", (class ArrayWrapper<class GoalWrapper> & (ArrayWrapper<GoalWrapper>::*)(class ArrayWrapper<class GoalWrapper>)) &ArrayWrapper<GoalWrapper>::operator=, "C++: ArrayWrapper<GoalWrapper>::operator=(class ArrayWrapper<class GoalWrapper>) --> class ArrayWrapper<class GoalWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<GoalWrapper>::*)()) &ArrayWrapper<GoalWrapper>::Count, "C++: ArrayWrapper<GoalWrapper>::Count() --> int");
		cl.def("Get", (class GoalWrapper (ArrayWrapper<GoalWrapper>::*)(int)) &ArrayWrapper<GoalWrapper>::Get, "C++: ArrayWrapper<GoalWrapper>::Get(int) --> class GoalWrapper", "index"_a);
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:55
		pybind11::class_<ArrayWrapper<SampleHistoryWrapper>, std::shared_ptr<ArrayWrapper<SampleHistoryWrapper>>> cl(M, "ArrayWrapper_SampleHistoryWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ArrayWrapper<SampleHistoryWrapper> const &o){ return new ArrayWrapper<SampleHistoryWrapper>(o); } ) );
		cl.def("assign", (class ArrayWrapper<class SampleHistoryWrapper> & (ArrayWrapper<SampleHistoryWrapper>::*)(class ArrayWrapper<class SampleHistoryWrapper>)) &ArrayWrapper<SampleHistoryWrapper>::operator=, "C++: ArrayWrapper<SampleHistoryWrapper>::operator=(class ArrayWrapper<class SampleHistoryWrapper>) --> class ArrayWrapper<class SampleHistoryWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<SampleHistoryWrapper>::*)()) &ArrayWrapper<SampleHistoryWrapper>::Count, "C++: ArrayWrapper<SampleHistoryWrapper>::Count() --> int");
		cl.def("Get", (class SampleHistoryWrapper (ArrayWrapper<SampleHistoryWrapper>::*)(int)) &ArrayWrapper<SampleHistoryWrapper>::Get, "C++: ArrayWrapper<SampleHistoryWrapper>::Get(int) --> class SampleHistoryWrapper", "index"_a);
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:56
		pybind11::class_<ArrayWrapper<StatGraphWrapper>, std::shared_ptr<ArrayWrapper<StatGraphWrapper>>> cl(M, "ArrayWrapper_StatGraphWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ArrayWrapper<StatGraphWrapper> const &o){ return new ArrayWrapper<StatGraphWrapper>(o); } ) );
		cl.def("assign", (class ArrayWrapper<class StatGraphWrapper> & (ArrayWrapper<StatGraphWrapper>::*)(class ArrayWrapper<class StatGraphWrapper>)) &ArrayWrapper<StatGraphWrapper>::operator=, "C++: ArrayWrapper<StatGraphWrapper>::operator=(class ArrayWrapper<class StatGraphWrapper>) --> class ArrayWrapper<class StatGraphWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<StatGraphWrapper>::*)()) &ArrayWrapper<StatGraphWrapper>::Count, "C++: ArrayWrapper<StatGraphWrapper>::Count() --> int");
		cl.def("Get", (class StatGraphWrapper (ArrayWrapper<StatGraphWrapper>::*)(int)) &ArrayWrapper<StatGraphWrapper>::Get, "C++: ArrayWrapper<StatGraphWrapper>::Get(int) --> class StatGraphWrapper", "index"_a);
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:57
		pybind11::class_<ArrayWrapper<PlayerControllerWrapper>, std::shared_ptr<ArrayWrapper<PlayerControllerWrapper>>> cl(M, "ArrayWrapper_PlayerControllerWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ArrayWrapper<PlayerControllerWrapper> const &o){ return new ArrayWrapper<PlayerControllerWrapper>(o); } ) );
		cl.def("assign", (class ArrayWrapper<class PlayerControllerWrapper> & (ArrayWrapper<PlayerControllerWrapper>::*)(class ArrayWrapper<class PlayerControllerWrapper>)) &ArrayWrapper<PlayerControllerWrapper>::operator=, "C++: ArrayWrapper<PlayerControllerWrapper>::operator=(class ArrayWrapper<class PlayerControllerWrapper>) --> class ArrayWrapper<class PlayerControllerWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<PlayerControllerWrapper>::*)()) &ArrayWrapper<PlayerControllerWrapper>::Count, "C++: ArrayWrapper<PlayerControllerWrapper>::Count() --> int");
		cl.def("Get", (class PlayerControllerWrapper (ArrayWrapper<PlayerControllerWrapper>::*)(int)) &ArrayWrapper<PlayerControllerWrapper>::Get, "C++: ArrayWrapper<PlayerControllerWrapper>::Get(int) --> class PlayerControllerWrapper", "index"_a);
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:58
		pybind11::class_<ArrayWrapper<wchar_t>, std::shared_ptr<ArrayWrapper<wchar_t>>> cl(M, "ArrayWrapper_wchar_t_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ArrayWrapper<wchar_t> const &o){ return new ArrayWrapper<wchar_t>(o); } ) );
		cl.def("assign", (class ArrayWrapper<wchar_t> & (ArrayWrapper<wchar_t>::*)(class ArrayWrapper<wchar_t>)) &ArrayWrapper<wchar_t>::operator=, "C++: ArrayWrapper<wchar_t>::operator=(class ArrayWrapper<wchar_t>) --> class ArrayWrapper<wchar_t> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<wchar_t>::*)()) &ArrayWrapper<wchar_t>::Count, "C++: ArrayWrapper<wchar_t>::Count() --> int");
		cl.def("Get", (wchar_t (ArrayWrapper<wchar_t>::*)(int)) &ArrayWrapper<wchar_t>::Get, "C++: ArrayWrapper<wchar_t>::Get(int) --> wchar_t", "index"_a);
	}
	{ // CanvasWrapper file:bakkesmod/wrappers/canvaswrapper.h line:6
		pybind11::class_<CanvasWrapper, std::shared_ptr<CanvasWrapper>> cl(M, "CanvasWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](CanvasWrapper const &o){ return new CanvasWrapper(o); } ) );
		cl.def("assign", (class CanvasWrapper & (CanvasWrapper::*)(class CanvasWrapper)) &CanvasWrapper::operator=, "C++: CanvasWrapper::operator=(class CanvasWrapper) --> class CanvasWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("SetPosition", (void (CanvasWrapper::*)(struct Vector2F)) &CanvasWrapper::SetPosition, "C++: CanvasWrapper::SetPosition(struct Vector2F) --> void", "pos"_a);
		cl.def("GetPositionFloat", (struct Vector2F (CanvasWrapper::*)()) &CanvasWrapper::GetPositionFloat, "C++: CanvasWrapper::GetPositionFloat() --> struct Vector2F");
		cl.def("SetColor", (void (CanvasWrapper::*)(char, char, char, char)) &CanvasWrapper::SetColor, "C++: CanvasWrapper::SetColor(char, char, char, char) --> void", "Red"_a, "Green"_a, "Blue"_a, "Alpha"_a);
		cl.def("DrawBox", (void (CanvasWrapper::*)(struct Vector2F)) &CanvasWrapper::DrawBox, "C++: CanvasWrapper::DrawBox(struct Vector2F) --> void", "size"_a);
		cl.def("FillBox", (void (CanvasWrapper::*)(struct Vector2F)) &CanvasWrapper::FillBox, "C++: CanvasWrapper::FillBox(struct Vector2F) --> void", "size"_a);
		cl.def("FillTriangle", (void (CanvasWrapper::*)(struct Vector2F, struct Vector2F, struct Vector2F, struct LinearColor)) &CanvasWrapper::FillTriangle, "C++: CanvasWrapper::FillTriangle(struct Vector2F, struct Vector2F, struct Vector2F, struct LinearColor) --> void", "p1"_a, "p2"_a, "p3"_a, "color"_a);
		cl.def("DrawString", (void (CanvasWrapper::*)(std::string)) &CanvasWrapper::DrawString, "C++: CanvasWrapper::DrawString(std::string) --> void", "text"_a);
		cl.def("DrawString", (void (CanvasWrapper::*)(std::string, float, float)) &CanvasWrapper::DrawString, "C++: CanvasWrapper::DrawString(std::string, float, float) --> void", "text"_a, "xScale"_a, "yScale"_a);
		cl.def("DrawLine", (void (CanvasWrapper::*)(struct Vector2F, struct Vector2F)) &CanvasWrapper::DrawLine, "C++: CanvasWrapper::DrawLine(struct Vector2F, struct Vector2F) --> void", "start"_a, "end"_a);
		cl.def("DrawLine", (void (CanvasWrapper::*)(struct Vector2F, struct Vector2F, float)) &CanvasWrapper::DrawLine, "C++: CanvasWrapper::DrawLine(struct Vector2F, struct Vector2F, float) --> void", "start"_a, "end"_a, "width"_a);
		cl.def("DrawRect", (void (CanvasWrapper::*)(struct Vector2F, struct Vector2F)) &CanvasWrapper::DrawRect, "C++: CanvasWrapper::DrawRect(struct Vector2F, struct Vector2F) --> void", "start"_a, "end"_a);
		cl.def("SetPosition", (void (CanvasWrapper::*)(struct Vector2)) &CanvasWrapper::SetPosition, "C++: CanvasWrapper::SetPosition(struct Vector2) --> void", "pos"_a);
		cl.def("GetPosition", (struct Vector2 (CanvasWrapper::*)()) &CanvasWrapper::GetPosition, "C++: CanvasWrapper::GetPosition() --> struct Vector2");
		cl.def("DrawBox", (void (CanvasWrapper::*)(struct Vector2)) &CanvasWrapper::DrawBox, "C++: CanvasWrapper::DrawBox(struct Vector2) --> void", "size"_a);
		cl.def("FillBox", (void (CanvasWrapper::*)(struct Vector2)) &CanvasWrapper::FillBox, "C++: CanvasWrapper::FillBox(struct Vector2) --> void", "size"_a);
		cl.def("FillTriangle", (void (CanvasWrapper::*)(struct Vector2, struct Vector2, struct Vector2, struct LinearColor)) &CanvasWrapper::FillTriangle, "C++: CanvasWrapper::FillTriangle(struct Vector2, struct Vector2, struct Vector2, struct LinearColor) --> void", "p1"_a, "p2"_a, "p3"_a, "color"_a);
		cl.def("DrawLine", (void (CanvasWrapper::*)(struct Vector2, struct Vector2)) &CanvasWrapper::DrawLine, "C++: CanvasWrapper::DrawLine(struct Vector2, struct Vector2) --> void", "start"_a, "end"_a);
		cl.def("DrawLine", (void (CanvasWrapper::*)(struct Vector2, struct Vector2, float)) &CanvasWrapper::DrawLine, "C++: CanvasWrapper::DrawLine(struct Vector2, struct Vector2, float) --> void", "start"_a, "end"_a, "width"_a);
		cl.def("DrawRect", (void (CanvasWrapper::*)(struct Vector2, struct Vector2)) &CanvasWrapper::DrawRect, "C++: CanvasWrapper::DrawRect(struct Vector2, struct Vector2) --> void", "start"_a, "end"_a);
		cl.def("Project", (struct Vector2 (CanvasWrapper::*)(struct Vector)) &CanvasWrapper::Project, "C++: CanvasWrapper::Project(struct Vector) --> struct Vector2", "location"_a);
		cl.def("GetSize", (struct Vector2 (CanvasWrapper::*)()) &CanvasWrapper::GetSize, "C++: CanvasWrapper::GetSize() --> struct Vector2");
	}
}
