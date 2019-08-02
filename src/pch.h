#pragma once

// add headers that you want to pre-compile here
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

// Pybind stuff
#include "pybind11/pybind11.h"
#include "pybind11/functional.h"
#include "pybind11/operators.h"
#include "pybind11/stl.h"
#include "pybind11/embed.h"

// Just get everything..
#include "bakkesmod/wrappers/includes.h"


namespace py = pybind11;
