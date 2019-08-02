#include "pch.h"
#include "bakkesmod/wrappers/GameObject/RBActorWrapper.h"

void init_rbactorwrapper(py::module& m) {
	py::class_<RBActorWrapper, std::shared_ptr<RBActorWrapper>, ActorWrapper>(m, "RBActorWrapper")

		;
}