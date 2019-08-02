#include "pch.h"
#include "bakkesmod/wrappers/wrapperstructs.h"


void init_vector(py::module& m) {
	py::class_<Vector, std::shared_ptr<Vector>>(m, "Vector")
		.def(py::init<>())
		.def(py::init<float>())
		.def(py::init<float, float, float>())
		//.def(py::self + py::self)
		//.def(py::self - py::self)
		//.def(py::self * py::self)
		//.def(py::self / py::self)
		.def_readwrite("x", &Vector::X)
		.def_readwrite("y", &Vector::Y)
		.def_readwrite("z", &Vector::Z)
		.def("magnitude", &Vector::magnitude)
		.def("normalize", &Vector::normalize);
}