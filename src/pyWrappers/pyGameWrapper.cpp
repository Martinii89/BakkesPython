#include "pch.h"
#include "bakkesmod/wrappers/GameWrapper.h"

void init_gamewrapper(py::module& m)
{
	py::class_<GameWrapper, std::shared_ptr<GameWrapper>>(m, "GameWrapper")
		.def("HookEvent", &GameWrapper::HookEvent)
		.def("HookEventPost", &GameWrapper::HookEventPost)
		.def("UnhookEvent", &GameWrapper::UnhookEvent)
		.def("IsInGame", &GameWrapper::IsInGame)
		.def("IsInOnlineGame", &GameWrapper::IsInOnlineGame)
		.def("IsInFreeplay", &GameWrapper::IsInFreeplay)
		.def("IsInReplay", &GameWrapper::IsInReplay)
		.def("IsInCustomTraining", &GameWrapper::IsInCustomTraining)
		.def("IsSpectatingInOnlineGame", &GameWrapper::IsSpectatingInOnlineGame)
		.def("GetGameEventAsServer", &GameWrapper::GetGameEventAsServer);
}