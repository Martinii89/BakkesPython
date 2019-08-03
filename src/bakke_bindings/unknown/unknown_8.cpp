#include "pch.h"
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/AirControlComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/VehicleSimWrapper.h>
#include <bakkesmod/wrappers/StructArrayWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_unknown_unknown_8(py::module &M)
{
	{ // VehiclePickupWrapper file: line:10
		pybind11::class_<VehiclePickupWrapper, std::shared_ptr<VehiclePickupWrapper>, ActorWrapper> cl(M, "VehiclePickupWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](VehiclePickupWrapper const &o){ return new VehiclePickupWrapper(o); } ) );
		cl.def("assign", (class VehiclePickupWrapper & (VehiclePickupWrapper::*)(class VehiclePickupWrapper)) &VehiclePickupWrapper::operator=, "C++: VehiclePickupWrapper::operator=(class VehiclePickupWrapper) --> class VehiclePickupWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetRespawnDelay", (float (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::GetRespawnDelay, "C++: VehiclePickupWrapper::GetRespawnDelay() --> float");
		cl.def("SetRespawnDelay", (void (VehiclePickupWrapper::*)(float)) &VehiclePickupWrapper::SetRespawnDelay, "C++: VehiclePickupWrapper::SetRespawnDelay(float) --> void", pybind11::arg("newRespawnDelay"));
		cl.def("GetFXActorArchetype", (class FXActorWrapper (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::GetFXActorArchetype, "C++: VehiclePickupWrapper::GetFXActorArchetype() --> class FXActorWrapper");
		cl.def("SetFXActorArchetype", (void (VehiclePickupWrapper::*)(class FXActorWrapper)) &VehiclePickupWrapper::SetFXActorArchetype, "C++: VehiclePickupWrapper::SetFXActorArchetype(class FXActorWrapper) --> void", pybind11::arg("newFXActorArchetype"));
		cl.def("GetFXActor", (class FXActorWrapper (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::GetFXActor, "C++: VehiclePickupWrapper::GetFXActor() --> class FXActorWrapper");
		cl.def("SetFXActor", (void (VehiclePickupWrapper::*)(class FXActorWrapper)) &VehiclePickupWrapper::SetFXActor, "C++: VehiclePickupWrapper::SetFXActor(class FXActorWrapper) --> void", pybind11::arg("newFXActor"));
		cl.def("GetbPickedUp", (unsigned long (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::GetbPickedUp, "C++: VehiclePickupWrapper::GetbPickedUp() --> unsigned long");
		cl.def("SetbPickedUp", (void (VehiclePickupWrapper::*)(unsigned long)) &VehiclePickupWrapper::SetbPickedUp, "C++: VehiclePickupWrapper::SetbPickedUp(unsigned long) --> void", pybind11::arg("newbPickedUp"));
		cl.def("GetbNetRelevant", (unsigned long (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::GetbNetRelevant, "C++: VehiclePickupWrapper::GetbNetRelevant() --> unsigned long");
		cl.def("SetbNetRelevant", (void (VehiclePickupWrapper::*)(unsigned long)) &VehiclePickupWrapper::SetbNetRelevant, "C++: VehiclePickupWrapper::SetbNetRelevant(unsigned long) --> void", pybind11::arg("newbNetRelevant"));
		cl.def("GetbNoPickup", (unsigned long (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::GetbNoPickup, "C++: VehiclePickupWrapper::GetbNoPickup() --> unsigned long");
		cl.def("SetbNoPickup", (void (VehiclePickupWrapper::*)(unsigned long)) &VehiclePickupWrapper::SetbNoPickup, "C++: VehiclePickupWrapper::SetbNoPickup(unsigned long) --> void", pybind11::arg("newbNoPickup"));
		cl.def("PlayPickedUpFX", (void (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::PlayPickedUpFX, "C++: VehiclePickupWrapper::PlayPickedUpFX() --> void");
		cl.def("IsTouchingAVehicle", (bool (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::IsTouchingAVehicle, "C++: VehiclePickupWrapper::IsTouchingAVehicle() --> bool");
		cl.def("UpdateTickDisabled", (void (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::UpdateTickDisabled, "C++: VehiclePickupWrapper::UpdateTickDisabled() --> void");
		cl.def("SetNetRelevant", (void (VehiclePickupWrapper::*)(unsigned long)) &VehiclePickupWrapper::SetNetRelevant, "C++: VehiclePickupWrapper::SetNetRelevant(unsigned long) --> void", pybind11::arg("bRelevant"));
		cl.def("Respawn2", (void (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::Respawn2, "C++: VehiclePickupWrapper::Respawn2() --> void");
		cl.def("SetPickedUp", (void (VehiclePickupWrapper::*)(unsigned long, class CarWrapper)) &VehiclePickupWrapper::SetPickedUp, "C++: VehiclePickupWrapper::SetPickedUp(unsigned long, class CarWrapper) --> void", pybind11::arg("bNewPickedUp"), pybind11::arg("InInstigator"));
		cl.def("Pickup2", (void (VehiclePickupWrapper::*)(class CarWrapper)) &VehiclePickupWrapper::Pickup2, "C++: VehiclePickupWrapper::Pickup2(class CarWrapper) --> void", pybind11::arg("Car"));
		cl.def("CanPickup", (bool (VehiclePickupWrapper::*)(class CarWrapper)) &VehiclePickupWrapper::CanPickup, "C++: VehiclePickupWrapper::CanPickup(class CarWrapper) --> bool", pybind11::arg("Car"));
		cl.def("OnTouch", (void (VehiclePickupWrapper::*)(class CarWrapper)) &VehiclePickupWrapper::OnTouch, "C++: VehiclePickupWrapper::OnTouch(class CarWrapper) --> void", pybind11::arg("Car"));
		cl.def("eventTouch", (void (VehiclePickupWrapper::*)(class ActorWrapper, class PrimitiveComponentWrapper, struct Vector &, struct Vector &)) &VehiclePickupWrapper::eventTouch, "C++: VehiclePickupWrapper::eventTouch(class ActorWrapper, class PrimitiveComponentWrapper, struct Vector &, struct Vector &) --> void", pybind11::arg("Other"), pybind11::arg("OtherComp"), pybind11::arg("HitLocation"), pybind11::arg("HitNormal"));
		cl.def("OnPickUp", (void (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::OnPickUp, "C++: VehiclePickupWrapper::OnPickUp() --> void");
		cl.def("OnSpawn", (void (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::OnSpawn, "C++: VehiclePickupWrapper::OnSpawn() --> void");
		cl.def("SetNoPickup", (void (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::SetNoPickup, "C++: VehiclePickupWrapper::SetNoPickup() --> void");
		cl.def("SetupReplicateNoPickup", (void (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::SetupReplicateNoPickup, "C++: VehiclePickupWrapper::SetupReplicateNoPickup() --> void");
		cl.def("InitFX", (void (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::InitFX, "C++: VehiclePickupWrapper::InitFX() --> void");
		cl.def("eventPostBeginPlay", (void (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::eventPostBeginPlay, "C++: VehiclePickupWrapper::eventPostBeginPlay() --> void");
		cl.def("eventPreBeginPlay", (void (VehiclePickupWrapper::*)()) &VehiclePickupWrapper::eventPreBeginPlay, "C++: VehiclePickupWrapper::eventPreBeginPlay() --> void");
		cl.def("EventPickedUp", (void (VehiclePickupWrapper::*)(class VehiclePickupWrapper)) &VehiclePickupWrapper::EventPickedUp, "C++: VehiclePickupWrapper::EventPickedUp(class VehiclePickupWrapper) --> void", pybind11::arg("Pickup"));
		cl.def("EventSpawned", (void (VehiclePickupWrapper::*)(class VehiclePickupWrapper)) &VehiclePickupWrapper::EventSpawned, "C++: VehiclePickupWrapper::EventSpawned(class VehiclePickupWrapper) --> void", pybind11::arg("Pickup"));
	}
	{ // BoostPickupWrapper file: line:8
		pybind11::class_<BoostPickupWrapper, std::shared_ptr<BoostPickupWrapper>, VehiclePickupWrapper> cl(M, "BoostPickupWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](BoostPickupWrapper const &o){ return new BoostPickupWrapper(o); } ) );
		cl.def("assign", (class BoostPickupWrapper & (BoostPickupWrapper::*)(class BoostPickupWrapper)) &BoostPickupWrapper::operator=, "C++: BoostPickupWrapper::operator=(class BoostPickupWrapper) --> class BoostPickupWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetBoostAmount", (float (BoostPickupWrapper::*)()) &BoostPickupWrapper::GetBoostAmount, "C++: BoostPickupWrapper::GetBoostAmount() --> float");
		cl.def("SetBoostAmount", (void (BoostPickupWrapper::*)(float)) &BoostPickupWrapper::SetBoostAmount, "C++: BoostPickupWrapper::SetBoostAmount(float) --> void", pybind11::arg("newBoostAmount"));
		cl.def("GetBoostType", (unsigned char (BoostPickupWrapper::*)()) &BoostPickupWrapper::GetBoostType, "C++: BoostPickupWrapper::GetBoostType() --> unsigned char");
		cl.def("SetBoostType", (void (BoostPickupWrapper::*)(unsigned char)) &BoostPickupWrapper::SetBoostType, "C++: BoostPickupWrapper::SetBoostType(unsigned char) --> void", pybind11::arg("newBoostType"));
		cl.def("PlayPickedUpFX", (void (BoostPickupWrapper::*)()) &BoostPickupWrapper::PlayPickedUpFX, "C++: BoostPickupWrapper::PlayPickedUpFX() --> void");
		cl.def("Pickup2", (void (BoostPickupWrapper::*)(class CarWrapper)) &BoostPickupWrapper::Pickup2, "C++: BoostPickupWrapper::Pickup2(class CarWrapper) --> void", pybind11::arg("Car"));
		cl.def("CanPickup", (bool (BoostPickupWrapper::*)(class CarWrapper)) &BoostPickupWrapper::CanPickup, "C++: BoostPickupWrapper::CanPickup(class CarWrapper) --> bool", pybind11::arg("Car"));
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:45
		pybind11::class_<ArrayWrapper<ActorWrapper>, std::shared_ptr<ArrayWrapper<ActorWrapper>>> cl(M, "ArrayWrapper_ActorWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ArrayWrapper<ActorWrapper> const &o){ return new ArrayWrapper<ActorWrapper>(o); } ) );
		cl.def("assign", (class ArrayWrapper<class ActorWrapper> & (ArrayWrapper<ActorWrapper>::*)(class ArrayWrapper<class ActorWrapper>)) &ArrayWrapper<ActorWrapper>::operator=, "C++: ArrayWrapper<ActorWrapper>::operator=(class ArrayWrapper<class ActorWrapper>) --> class ArrayWrapper<class ActorWrapper> &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("Count", (int (ArrayWrapper<ActorWrapper>::*)()) &ArrayWrapper<ActorWrapper>::Count, "C++: ArrayWrapper<ActorWrapper>::Count() --> int");
		cl.def("Get", (class ActorWrapper (ArrayWrapper<ActorWrapper>::*)(int)) &ArrayWrapper<ActorWrapper>::Get, "C++: ArrayWrapper<ActorWrapper>::Get(int) --> class ActorWrapper", pybind11::arg("index"));
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:46
		pybind11::class_<ArrayWrapper<TeamWrapper>, std::shared_ptr<ArrayWrapper<TeamWrapper>>> cl(M, "ArrayWrapper_TeamWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ArrayWrapper<TeamWrapper> const &o){ return new ArrayWrapper<TeamWrapper>(o); } ) );
		cl.def("assign", (class ArrayWrapper<class TeamWrapper> & (ArrayWrapper<TeamWrapper>::*)(class ArrayWrapper<class TeamWrapper>)) &ArrayWrapper<TeamWrapper>::operator=, "C++: ArrayWrapper<TeamWrapper>::operator=(class ArrayWrapper<class TeamWrapper>) --> class ArrayWrapper<class TeamWrapper> &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("Count", (int (ArrayWrapper<TeamWrapper>::*)()) &ArrayWrapper<TeamWrapper>::Count, "C++: ArrayWrapper<TeamWrapper>::Count() --> int");
		cl.def("Get", (class TeamWrapper (ArrayWrapper<TeamWrapper>::*)(int)) &ArrayWrapper<TeamWrapper>::Get, "C++: ArrayWrapper<TeamWrapper>::Get(int) --> class TeamWrapper", pybind11::arg("index"));
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:47
		pybind11::class_<ArrayWrapper<CarWrapper>, std::shared_ptr<ArrayWrapper<CarWrapper>>> cl(M, "ArrayWrapper_CarWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ArrayWrapper<CarWrapper> const &o){ return new ArrayWrapper<CarWrapper>(o); } ) );
		cl.def("assign", (class ArrayWrapper<class CarWrapper> & (ArrayWrapper<CarWrapper>::*)(class ArrayWrapper<class CarWrapper>)) &ArrayWrapper<CarWrapper>::operator=, "C++: ArrayWrapper<CarWrapper>::operator=(class ArrayWrapper<class CarWrapper>) --> class ArrayWrapper<class CarWrapper> &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("Count", (int (ArrayWrapper<CarWrapper>::*)()) &ArrayWrapper<CarWrapper>::Count, "C++: ArrayWrapper<CarWrapper>::Count() --> int");
		cl.def("Get", (class CarWrapper (ArrayWrapper<CarWrapper>::*)(int)) &ArrayWrapper<CarWrapper>::Get, "C++: ArrayWrapper<CarWrapper>::Get(int) --> class CarWrapper", pybind11::arg("index"));
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:48
		pybind11::class_<ArrayWrapper<BallWrapper>, std::shared_ptr<ArrayWrapper<BallWrapper>>> cl(M, "ArrayWrapper_BallWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ArrayWrapper<BallWrapper> const &o){ return new ArrayWrapper<BallWrapper>(o); } ) );
		cl.def("assign", (class ArrayWrapper<class BallWrapper> & (ArrayWrapper<BallWrapper>::*)(class ArrayWrapper<class BallWrapper>)) &ArrayWrapper<BallWrapper>::operator=, "C++: ArrayWrapper<BallWrapper>::operator=(class ArrayWrapper<class BallWrapper>) --> class ArrayWrapper<class BallWrapper> &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("Count", (int (ArrayWrapper<BallWrapper>::*)()) &ArrayWrapper<BallWrapper>::Count, "C++: ArrayWrapper<BallWrapper>::Count() --> int");
		cl.def("Get", (class BallWrapper (ArrayWrapper<BallWrapper>::*)(int)) &ArrayWrapper<BallWrapper>::Get, "C++: ArrayWrapper<BallWrapper>::Get(int) --> class BallWrapper", pybind11::arg("index"));
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:49
		pybind11::class_<ArrayWrapper<PriWrapper>, std::shared_ptr<ArrayWrapper<PriWrapper>>> cl(M, "ArrayWrapper_PriWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ArrayWrapper<PriWrapper> const &o){ return new ArrayWrapper<PriWrapper>(o); } ) );
		cl.def("assign", (class ArrayWrapper<class PriWrapper> & (ArrayWrapper<PriWrapper>::*)(class ArrayWrapper<class PriWrapper>)) &ArrayWrapper<PriWrapper>::operator=, "C++: ArrayWrapper<PriWrapper>::operator=(class ArrayWrapper<class PriWrapper>) --> class ArrayWrapper<class PriWrapper> &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("Count", (int (ArrayWrapper<PriWrapper>::*)()) &ArrayWrapper<PriWrapper>::Count, "C++: ArrayWrapper<PriWrapper>::Count() --> int");
		cl.def("Get", (class PriWrapper (ArrayWrapper<PriWrapper>::*)(int)) &ArrayWrapper<PriWrapper>::Get, "C++: ArrayWrapper<PriWrapper>::Get(int) --> class PriWrapper", pybind11::arg("index"));
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:50
		pybind11::class_<ArrayWrapper<WheelWrapper>, std::shared_ptr<ArrayWrapper<WheelWrapper>>> cl(M, "ArrayWrapper_WheelWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ArrayWrapper<WheelWrapper> const &o){ return new ArrayWrapper<WheelWrapper>(o); } ) );
		cl.def("assign", (class ArrayWrapper<class WheelWrapper> & (ArrayWrapper<WheelWrapper>::*)(class ArrayWrapper<class WheelWrapper>)) &ArrayWrapper<WheelWrapper>::operator=, "C++: ArrayWrapper<WheelWrapper>::operator=(class ArrayWrapper<class WheelWrapper>) --> class ArrayWrapper<class WheelWrapper> &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("Count", (int (ArrayWrapper<WheelWrapper>::*)()) &ArrayWrapper<WheelWrapper>::Count, "C++: ArrayWrapper<WheelWrapper>::Count() --> int");
		cl.def("Get", (class WheelWrapper (ArrayWrapper<WheelWrapper>::*)(int)) &ArrayWrapper<WheelWrapper>::Get, "C++: ArrayWrapper<WheelWrapper>::Get(int) --> class WheelWrapper", pybind11::arg("index"));
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:51
		pybind11::class_<ArrayWrapper<RBActorWrapper>, std::shared_ptr<ArrayWrapper<RBActorWrapper>>> cl(M, "ArrayWrapper_RBActorWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ArrayWrapper<RBActorWrapper> const &o){ return new ArrayWrapper<RBActorWrapper>(o); } ) );
		cl.def("assign", (class ArrayWrapper<class RBActorWrapper> & (ArrayWrapper<RBActorWrapper>::*)(class ArrayWrapper<class RBActorWrapper>)) &ArrayWrapper<RBActorWrapper>::operator=, "C++: ArrayWrapper<RBActorWrapper>::operator=(class ArrayWrapper<class RBActorWrapper>) --> class ArrayWrapper<class RBActorWrapper> &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("Count", (int (ArrayWrapper<RBActorWrapper>::*)()) &ArrayWrapper<RBActorWrapper>::Count, "C++: ArrayWrapper<RBActorWrapper>::Count() --> int");
		cl.def("Get", (class RBActorWrapper (ArrayWrapper<RBActorWrapper>::*)(int)) &ArrayWrapper<RBActorWrapper>::Get, "C++: ArrayWrapper<RBActorWrapper>::Get(int) --> class RBActorWrapper", pybind11::arg("index"));
	}
}
