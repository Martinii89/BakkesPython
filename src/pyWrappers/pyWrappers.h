#pragma once
#include <pybind11/embed.h>
namespace py = pybind11;

void init_vector(py::module&);

void init_actorwrapper(py::module&);
void init_rbactorwrapper(py::module&);
void init_vehiclewrapper(py::module& m);

void init_carwrapper(py::module&);
void init_ballwrapper(py::module&);

void init_serverwrapper(py::module&);
void init_gamewrapper(py::module&);

void init_cvarmanager(py::module&);

PYBIND11_EMBEDDED_MODULE(pybakkes, m) {
	init_vector(m);

	init_actorwrapper(m);
	init_rbactorwrapper(m);
	init_vehiclewrapper(m);

	init_carwrapper(m);
	init_ballwrapper(m);

	init_serverwrapper(m);
	init_gamewrapper(m);
	init_cvarmanager(m);
};