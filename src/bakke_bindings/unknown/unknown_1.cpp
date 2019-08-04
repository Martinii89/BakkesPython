#include "pch.h"
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_unknown_unknown_1(py::module &M)
{
	{ // ObjectWrapper file: line:9
		pybind11::class_<ObjectWrapper, std::shared_ptr<ObjectWrapper>> cl(M, "ObjectWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def_readwrite("memory_address", &ObjectWrapper::memory_address);
	}
	{ // ActorWrapper file: line:8
		pybind11::class_<ActorWrapper, std::shared_ptr<ActorWrapper>, ObjectWrapper> cl(M, "ActorWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](ActorWrapper const &o){ return new ActorWrapper(o); } ) );
		cl.def("assign", (class ActorWrapper & (ActorWrapper::*)(class ActorWrapper)) &ActorWrapper::operator=, "C++: ActorWrapper::operator=(class ActorWrapper) --> class ActorWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetLocation", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetLocation, "C++: ActorWrapper::GetLocation() --> struct Vector");
		cl.def("SetLocation", (void (ActorWrapper::*)(const struct Vector)) &ActorWrapper::SetLocation, "C++: ActorWrapper::SetLocation(const struct Vector) --> void", pybind11::arg("location"));
		cl.def("GetVelocity", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetVelocity, "C++: ActorWrapper::GetVelocity() --> struct Vector");
		cl.def("SetVelocity", (void (ActorWrapper::*)(const struct Vector)) &ActorWrapper::SetVelocity, "C++: ActorWrapper::SetVelocity(const struct Vector) --> void", pybind11::arg("velocity"));
		cl.def("AddVelocity", (void (ActorWrapper::*)(const struct Vector)) &ActorWrapper::AddVelocity, "C++: ActorWrapper::AddVelocity(const struct Vector) --> void", pybind11::arg("velocity"));
		cl.def("GetRotation", (struct Rotator (ActorWrapper::*)()) &ActorWrapper::GetRotation, "C++: ActorWrapper::GetRotation() --> struct Rotator");
		cl.def("SetRotation", (void (ActorWrapper::*)(const struct Rotator)) &ActorWrapper::SetRotation, "C++: ActorWrapper::SetRotation(const struct Rotator) --> void", pybind11::arg("rotation"));
		cl.def("SetTorque", (void (ActorWrapper::*)(const struct Vector)) &ActorWrapper::SetTorque, "C++: ActorWrapper::SetTorque(const struct Vector) --> void", pybind11::arg("torq"));
		cl.def("Stop", (void (ActorWrapper::*)()) &ActorWrapper::Stop, "C++: ActorWrapper::Stop() --> void");
		cl.def("GetAngularVelocity", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetAngularVelocity, "C++: ActorWrapper::GetAngularVelocity() --> struct Vector");
		cl.def("SetAngularVelocity", (void (ActorWrapper::*)(const struct Vector, bool)) &ActorWrapper::SetAngularVelocity, "C++: ActorWrapper::SetAngularVelocity(const struct Vector, bool) --> void", pybind11::arg("v"), pybind11::arg("addToCurrent"));
		cl.def("IsNull", (bool (ActorWrapper::*)()) &ActorWrapper::IsNull, "C++: ActorWrapper::IsNull() --> bool");
		cl.def("GetDrawScale", (float (ActorWrapper::*)()) &ActorWrapper::GetDrawScale, "C++: ActorWrapper::GetDrawScale() --> float");
		cl.def("SetDrawScale", (void (ActorWrapper::*)(float)) &ActorWrapper::SetDrawScale, "C++: ActorWrapper::SetDrawScale(float) --> void", pybind11::arg("newDrawScale"));
		cl.def("GetDrawScale3D", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetDrawScale3D, "C++: ActorWrapper::GetDrawScale3D() --> struct Vector");
		cl.def("SetDrawScale3D", (void (ActorWrapper::*)(struct Vector)) &ActorWrapper::SetDrawScale3D, "C++: ActorWrapper::SetDrawScale3D(struct Vector) --> void", pybind11::arg("newDrawScale3D"));
		cl.def("GetPrePivot", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetPrePivot, "C++: ActorWrapper::GetPrePivot() --> struct Vector");
		cl.def("SetPrePivot", (void (ActorWrapper::*)(struct Vector)) &ActorWrapper::SetPrePivot, "C++: ActorWrapper::SetPrePivot(struct Vector) --> void", pybind11::arg("newPrePivot"));
		cl.def("GetEditorIconColor", (struct UnrealColor (ActorWrapper::*)()) &ActorWrapper::GetEditorIconColor, "C++: ActorWrapper::GetEditorIconColor() --> struct UnrealColor");
		cl.def("SetEditorIconColor", (void (ActorWrapper::*)(struct UnrealColor)) &ActorWrapper::SetEditorIconColor, "C++: ActorWrapper::SetEditorIconColor(struct UnrealColor) --> void", pybind11::arg("newEditorIconColor"));
		cl.def("GetCustomTimeDilation", (float (ActorWrapper::*)()) &ActorWrapper::GetCustomTimeDilation, "C++: ActorWrapper::GetCustomTimeDilation() --> float");
		cl.def("SetCustomTimeDilation", (void (ActorWrapper::*)(float)) &ActorWrapper::SetCustomTimeDilation, "C++: ActorWrapper::SetCustomTimeDilation(float) --> void", pybind11::arg("newCustomTimeDilation"));
		cl.def("GetPhysics", (unsigned char (ActorWrapper::*)()) &ActorWrapper::GetPhysics, "C++: ActorWrapper::GetPhysics() --> unsigned char");
		cl.def("SetPhysics", (void (ActorWrapper::*)(unsigned char)) &ActorWrapper::SetPhysics, "C++: ActorWrapper::SetPhysics(unsigned char) --> void", pybind11::arg("newPhysics"));
		cl.def("GetRemoteRole", (unsigned char (ActorWrapper::*)()) &ActorWrapper::GetRemoteRole, "C++: ActorWrapper::GetRemoteRole() --> unsigned char");
		cl.def("SetRemoteRole", (void (ActorWrapper::*)(unsigned char)) &ActorWrapper::SetRemoteRole, "C++: ActorWrapper::SetRemoteRole(unsigned char) --> void", pybind11::arg("newRemoteRole"));
		cl.def("GetRole", (unsigned char (ActorWrapper::*)()) &ActorWrapper::GetRole, "C++: ActorWrapper::GetRole() --> unsigned char");
		cl.def("SetRole", (void (ActorWrapper::*)(unsigned char)) &ActorWrapper::SetRole, "C++: ActorWrapper::SetRole(unsigned char) --> void", pybind11::arg("newRole"));
		cl.def("GetCollisionType", (unsigned char (ActorWrapper::*)()) &ActorWrapper::GetCollisionType, "C++: ActorWrapper::GetCollisionType() --> unsigned char");
		cl.def("SetCollisionType", (void (ActorWrapper::*)(unsigned char)) &ActorWrapper::SetCollisionType, "C++: ActorWrapper::SetCollisionType(unsigned char) --> void", pybind11::arg("newCollisionType"));
		cl.def("GetReplicatedCollisionType", (unsigned char (ActorWrapper::*)()) &ActorWrapper::GetReplicatedCollisionType, "C++: ActorWrapper::GetReplicatedCollisionType() --> unsigned char");
		cl.def("SetReplicatedCollisionType", (void (ActorWrapper::*)(unsigned char)) &ActorWrapper::SetReplicatedCollisionType, "C++: ActorWrapper::SetReplicatedCollisionType(unsigned char) --> void", pybind11::arg("newReplicatedCollisionType"));
		cl.def("GetOwner", (class ActorWrapper (ActorWrapper::*)()) &ActorWrapper::GetOwner, "C++: ActorWrapper::GetOwner() --> class ActorWrapper");
		cl.def("GetBase", (class ActorWrapper (ActorWrapper::*)()) &ActorWrapper::GetBase, "C++: ActorWrapper::GetBase() --> class ActorWrapper");
		cl.def("GetbStatic", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbStatic, "C++: ActorWrapper::GetbStatic() --> unsigned long");
		cl.def("GetbHidden", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbHidden, "C++: ActorWrapper::GetbHidden() --> unsigned long");
		cl.def("GetbHiddenSelf", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbHiddenSelf, "C++: ActorWrapper::GetbHiddenSelf() --> unsigned long");
		cl.def("SetbHiddenSelf", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbHiddenSelf, "C++: ActorWrapper::SetbHiddenSelf(unsigned long) --> void", pybind11::arg("newbHiddenSelf"));
		cl.def("GetbNoDelete", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbNoDelete, "C++: ActorWrapper::GetbNoDelete() --> unsigned long");
		cl.def("SetbNoDelete", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbNoDelete, "C++: ActorWrapper::SetbNoDelete(unsigned long) --> void", pybind11::arg("newbNoDelete"));
		cl.def("GetbDeleteMe", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbDeleteMe, "C++: ActorWrapper::GetbDeleteMe() --> unsigned long");
		cl.def("SetbDeleteMe", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbDeleteMe, "C++: ActorWrapper::SetbDeleteMe(unsigned long) --> void", pybind11::arg("newbDeleteMe"));
		cl.def("GetbTicked", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbTicked, "C++: ActorWrapper::GetbTicked() --> unsigned long");
		cl.def("SetbTicked", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbTicked, "C++: ActorWrapper::SetbTicked(unsigned long) --> void", pybind11::arg("newbTicked"));
		cl.def("GetbOnlyOwnerSee", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbOnlyOwnerSee, "C++: ActorWrapper::GetbOnlyOwnerSee() --> unsigned long");
		cl.def("SetbOnlyOwnerSee", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbOnlyOwnerSee, "C++: ActorWrapper::SetbOnlyOwnerSee(unsigned long) --> void", pybind11::arg("newbOnlyOwnerSee"));
		cl.def("GetbTickIsDisabled", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbTickIsDisabled, "C++: ActorWrapper::GetbTickIsDisabled() --> unsigned long");
		cl.def("SetbTickIsDisabled", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbTickIsDisabled, "C++: ActorWrapper::SetbTickIsDisabled(unsigned long) --> void", pybind11::arg("newbTickIsDisabled"));
		cl.def("GetbWorldGeometry", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbWorldGeometry, "C++: ActorWrapper::GetbWorldGeometry() --> unsigned long");
		cl.def("SetbWorldGeometry", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbWorldGeometry, "C++: ActorWrapper::SetbWorldGeometry(unsigned long) --> void", pybind11::arg("newbWorldGeometry"));
		cl.def("GetbIgnoreRigidBodyPawns", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbIgnoreRigidBodyPawns, "C++: ActorWrapper::GetbIgnoreRigidBodyPawns() --> unsigned long");
		cl.def("SetbIgnoreRigidBodyPawns", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbIgnoreRigidBodyPawns, "C++: ActorWrapper::SetbIgnoreRigidBodyPawns(unsigned long) --> void", pybind11::arg("newbIgnoreRigidBodyPawns"));
		cl.def("GetbOrientOnSlope", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbOrientOnSlope, "C++: ActorWrapper::GetbOrientOnSlope() --> unsigned long");
		cl.def("SetbOrientOnSlope", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbOrientOnSlope, "C++: ActorWrapper::SetbOrientOnSlope(unsigned long) --> void", pybind11::arg("newbOrientOnSlope"));
		cl.def("GetbIsMoving", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbIsMoving, "C++: ActorWrapper::GetbIsMoving() --> unsigned long");
		cl.def("GetbAlwaysEncroachCheck", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbAlwaysEncroachCheck, "C++: ActorWrapper::GetbAlwaysEncroachCheck() --> unsigned long");
		cl.def("SetbAlwaysEncroachCheck", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbAlwaysEncroachCheck, "C++: ActorWrapper::SetbAlwaysEncroachCheck(unsigned long) --> void", pybind11::arg("newbAlwaysEncroachCheck"));
		cl.def("GetbHasAlternateTargetLocation", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbHasAlternateTargetLocation, "C++: ActorWrapper::GetbHasAlternateTargetLocation() --> unsigned long");
		cl.def("GetbAlwaysRelevant", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbAlwaysRelevant, "C++: ActorWrapper::GetbAlwaysRelevant() --> unsigned long");
		cl.def("GetbReplicateInstigator", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbReplicateInstigator, "C++: ActorWrapper::GetbReplicateInstigator() --> unsigned long");
		cl.def("GetbReplicateMovement", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbReplicateMovement, "C++: ActorWrapper::GetbReplicateMovement() --> unsigned long");
		cl.def("GetbUpdateSimulatedPosition", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbUpdateSimulatedPosition, "C++: ActorWrapper::GetbUpdateSimulatedPosition() --> unsigned long");
		cl.def("SetbUpdateSimulatedPosition", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbUpdateSimulatedPosition, "C++: ActorWrapper::SetbUpdateSimulatedPosition(unsigned long) --> void", pybind11::arg("newbUpdateSimulatedPosition"));
		cl.def("GetbDemoRecording", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbDemoRecording, "C++: ActorWrapper::GetbDemoRecording() --> unsigned long");
		cl.def("SetbDemoRecording", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbDemoRecording, "C++: ActorWrapper::SetbDemoRecording(unsigned long) --> void", pybind11::arg("newbDemoRecording"));
		cl.def("GetbDemoOwner", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbDemoOwner, "C++: ActorWrapper::GetbDemoOwner() --> unsigned long");
		cl.def("SetbDemoOwner", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbDemoOwner, "C++: ActorWrapper::SetbDemoOwner(unsigned long) --> void", pybind11::arg("newbDemoOwner"));
		cl.def("GetbForceDemoRelevant", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbForceDemoRelevant, "C++: ActorWrapper::GetbForceDemoRelevant() --> unsigned long");
		cl.def("SetbForceDemoRelevant", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbForceDemoRelevant, "C++: ActorWrapper::SetbForceDemoRelevant(unsigned long) --> void", pybind11::arg("newbForceDemoRelevant"));
		cl.def("GetbNetInitialRotation", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbNetInitialRotation, "C++: ActorWrapper::GetbNetInitialRotation() --> unsigned long");
		cl.def("SetbNetInitialRotation", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbNetInitialRotation, "C++: ActorWrapper::SetbNetInitialRotation(unsigned long) --> void", pybind11::arg("newbNetInitialRotation"));
		cl.def("GetbReplicateRigidBodyLocation", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbReplicateRigidBodyLocation, "C++: ActorWrapper::GetbReplicateRigidBodyLocation() --> unsigned long");
		cl.def("SetbReplicateRigidBodyLocation", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbReplicateRigidBodyLocation, "C++: ActorWrapper::SetbReplicateRigidBodyLocation(unsigned long) --> void", pybind11::arg("newbReplicateRigidBodyLocation"));
		cl.def("GetbKillDuringLevelTransition", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbKillDuringLevelTransition, "C++: ActorWrapper::GetbKillDuringLevelTransition() --> unsigned long");
		cl.def("SetbKillDuringLevelTransition", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbKillDuringLevelTransition, "C++: ActorWrapper::SetbKillDuringLevelTransition(unsigned long) --> void", pybind11::arg("newbKillDuringLevelTransition"));
		cl.def("GetbPostRenderIfNotVisible", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbPostRenderIfNotVisible, "C++: ActorWrapper::GetbPostRenderIfNotVisible() --> unsigned long");
		cl.def("SetbPostRenderIfNotVisible", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbPostRenderIfNotVisible, "C++: ActorWrapper::SetbPostRenderIfNotVisible(unsigned long) --> void", pybind11::arg("newbPostRenderIfNotVisible"));
		cl.def("GetbForceNetUpdate", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbForceNetUpdate, "C++: ActorWrapper::GetbForceNetUpdate() --> unsigned long");
		cl.def("SetbForceNetUpdate", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbForceNetUpdate, "C++: ActorWrapper::SetbForceNetUpdate(unsigned long) --> void", pybind11::arg("newbForceNetUpdate"));
		cl.def("GetbForcePacketUpdate", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbForcePacketUpdate, "C++: ActorWrapper::GetbForcePacketUpdate() --> unsigned long");
		cl.def("SetbForcePacketUpdate", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbForcePacketUpdate, "C++: ActorWrapper::SetbForcePacketUpdate(unsigned long) --> void", pybind11::arg("newbForcePacketUpdate"));
		cl.def("GetbPendingNetUpdate", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbPendingNetUpdate, "C++: ActorWrapper::GetbPendingNetUpdate() --> unsigned long");
		cl.def("SetbPendingNetUpdate", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbPendingNetUpdate, "C++: ActorWrapper::SetbPendingNetUpdate(unsigned long) --> void", pybind11::arg("newbPendingNetUpdate"));
		cl.def("GetbGameRelevant", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbGameRelevant, "C++: ActorWrapper::GetbGameRelevant() --> unsigned long");
		cl.def("SetbGameRelevant", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbGameRelevant, "C++: ActorWrapper::SetbGameRelevant(unsigned long) --> void", pybind11::arg("newbGameRelevant"));
		cl.def("GetbMovable", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbMovable, "C++: ActorWrapper::GetbMovable() --> unsigned long");
		cl.def("SetbMovable", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbMovable, "C++: ActorWrapper::SetbMovable(unsigned long) --> void", pybind11::arg("newbMovable"));
		cl.def("GetbCanTeleport", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbCanTeleport, "C++: ActorWrapper::GetbCanTeleport() --> unsigned long");
		cl.def("SetbCanTeleport", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbCanTeleport, "C++: ActorWrapper::SetbCanTeleport(unsigned long) --> void", pybind11::arg("newbCanTeleport"));
		cl.def("GetbAlwaysTick", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbAlwaysTick, "C++: ActorWrapper::GetbAlwaysTick() --> unsigned long");
		cl.def("SetbAlwaysTick", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbAlwaysTick, "C++: ActorWrapper::SetbAlwaysTick(unsigned long) --> void", pybind11::arg("newbAlwaysTick"));
		cl.def("GetbBlocksNavigation", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbBlocksNavigation, "C++: ActorWrapper::GetbBlocksNavigation() --> unsigned long");
		cl.def("SetbBlocksNavigation", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbBlocksNavigation, "C++: ActorWrapper::SetbBlocksNavigation(unsigned long) --> void", pybind11::arg("newbBlocksNavigation"));
		cl.def("GetBlockRigidBody", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetBlockRigidBody, "C++: ActorWrapper::GetBlockRigidBody() --> unsigned long");
		cl.def("SetBlockRigidBody", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetBlockRigidBody, "C++: ActorWrapper::SetBlockRigidBody(unsigned long) --> void", pybind11::arg("newBlockRigidBody"));
		cl.def("GetbCollideWhenPlacing", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbCollideWhenPlacing, "C++: ActorWrapper::GetbCollideWhenPlacing() --> unsigned long");
		cl.def("SetbCollideWhenPlacing", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbCollideWhenPlacing, "C++: ActorWrapper::SetbCollideWhenPlacing(unsigned long) --> void", pybind11::arg("newbCollideWhenPlacing"));
		cl.def("GetbCollideActors", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbCollideActors, "C++: ActorWrapper::GetbCollideActors() --> unsigned long");
		cl.def("SetbCollideActors", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbCollideActors, "C++: ActorWrapper::SetbCollideActors(unsigned long) --> void", pybind11::arg("newbCollideActors"));
		cl.def("GetbCollideWorld", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbCollideWorld, "C++: ActorWrapper::GetbCollideWorld() --> unsigned long");
		cl.def("SetbCollideWorld", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbCollideWorld, "C++: ActorWrapper::SetbCollideWorld(unsigned long) --> void", pybind11::arg("newbCollideWorld"));
		cl.def("GetbCollideComplex", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbCollideComplex, "C++: ActorWrapper::GetbCollideComplex() --> unsigned long");
		cl.def("SetbCollideComplex", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbCollideComplex, "C++: ActorWrapper::SetbCollideComplex(unsigned long) --> void", pybind11::arg("newbCollideComplex"));
		cl.def("GetbBlockActors", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbBlockActors, "C++: ActorWrapper::GetbBlockActors() --> unsigned long");
		cl.def("SetbBlockActors", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbBlockActors, "C++: ActorWrapper::SetbBlockActors(unsigned long) --> void", pybind11::arg("newbBlockActors"));
		cl.def("GetbBlocksTeleport", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbBlocksTeleport, "C++: ActorWrapper::GetbBlocksTeleport() --> unsigned long");
		cl.def("SetbBlocksTeleport", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbBlocksTeleport, "C++: ActorWrapper::SetbBlocksTeleport(unsigned long) --> void", pybind11::arg("newbBlocksTeleport"));
		cl.def("GetbPhysRigidBodyOutOfWorldCheck", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbPhysRigidBodyOutOfWorldCheck, "C++: ActorWrapper::GetbPhysRigidBodyOutOfWorldCheck() --> unsigned long");
		cl.def("SetbPhysRigidBodyOutOfWorldCheck", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbPhysRigidBodyOutOfWorldCheck, "C++: ActorWrapper::SetbPhysRigidBodyOutOfWorldCheck(unsigned long) --> void", pybind11::arg("newbPhysRigidBodyOutOfWorldCheck"));
		cl.def("GetbComponentOutsideWorld", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbComponentOutsideWorld, "C++: ActorWrapper::GetbComponentOutsideWorld() --> unsigned long");
		cl.def("GetbRigidBodyWasAwake", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbRigidBodyWasAwake, "C++: ActorWrapper::GetbRigidBodyWasAwake() --> unsigned long");
		cl.def("SetbRigidBodyWasAwake", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbRigidBodyWasAwake, "C++: ActorWrapper::SetbRigidBodyWasAwake(unsigned long) --> void", pybind11::arg("newbRigidBodyWasAwake"));
		cl.def("GetbCallRigidBodyWakeEvents", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbCallRigidBodyWakeEvents, "C++: ActorWrapper::GetbCallRigidBodyWakeEvents() --> unsigned long");
		cl.def("SetbCallRigidBodyWakeEvents", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbCallRigidBodyWakeEvents, "C++: ActorWrapper::SetbCallRigidBodyWakeEvents(unsigned long) --> void", pybind11::arg("newbCallRigidBodyWakeEvents"));
		cl.def("GetbBounce", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbBounce, "C++: ActorWrapper::GetbBounce() --> unsigned long");
		cl.def("SetbBounce", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbBounce, "C++: ActorWrapper::SetbBounce(unsigned long) --> void", pybind11::arg("newbBounce"));
		cl.def("GetbEditable", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbEditable, "C++: ActorWrapper::GetbEditable() --> unsigned long");
		cl.def("SetbEditable", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbEditable, "C++: ActorWrapper::SetbEditable(unsigned long) --> void", pybind11::arg("newbEditable"));
		cl.def("GetbLockLocation", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbLockLocation, "C++: ActorWrapper::GetbLockLocation() --> unsigned long");
		cl.def("SetbLockLocation", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbLockLocation, "C++: ActorWrapper::SetbLockLocation(unsigned long) --> void", pybind11::arg("newbLockLocation"));
		cl.def("GetNetUpdateTime", (float (ActorWrapper::*)()) &ActorWrapper::GetNetUpdateTime, "C++: ActorWrapper::GetNetUpdateTime() --> float");
		cl.def("SetNetUpdateTime", (void (ActorWrapper::*)(float)) &ActorWrapper::SetNetUpdateTime, "C++: ActorWrapper::SetNetUpdateTime(float) --> void", pybind11::arg("newNetUpdateTime"));
		cl.def("GetNetUpdateFrequency", (float (ActorWrapper::*)()) &ActorWrapper::GetNetUpdateFrequency, "C++: ActorWrapper::GetNetUpdateFrequency() --> float");
		cl.def("SetNetUpdateFrequency", (void (ActorWrapper::*)(float)) &ActorWrapper::SetNetUpdateFrequency, "C++: ActorWrapper::SetNetUpdateFrequency(float) --> void", pybind11::arg("newNetUpdateFrequency"));
		cl.def("GetNetPriority", (float (ActorWrapper::*)()) &ActorWrapper::GetNetPriority, "C++: ActorWrapper::GetNetPriority() --> float");
		cl.def("SetNetPriority", (void (ActorWrapper::*)(float)) &ActorWrapper::SetNetPriority, "C++: ActorWrapper::SetNetPriority(float) --> void", pybind11::arg("newNetPriority"));
		cl.def("GetLastNetUpdateTime", (float (ActorWrapper::*)()) &ActorWrapper::GetLastNetUpdateTime, "C++: ActorWrapper::GetLastNetUpdateTime() --> float");
		cl.def("GetLastForcePacketUpdateTime", (float (ActorWrapper::*)()) &ActorWrapper::GetLastForcePacketUpdateTime, "C++: ActorWrapper::GetLastForcePacketUpdateTime() --> float");
		cl.def("SetLastForcePacketUpdateTime", (void (ActorWrapper::*)(float)) &ActorWrapper::SetLastForcePacketUpdateTime, "C++: ActorWrapper::SetLastForcePacketUpdateTime(float) --> void", pybind11::arg("newLastForcePacketUpdateTime"));
		cl.def("GetTimeSinceLastTick", (float (ActorWrapper::*)()) &ActorWrapper::GetTimeSinceLastTick, "C++: ActorWrapper::GetTimeSinceLastTick() --> float");
		cl.def("GetLifeSpan", (float (ActorWrapper::*)()) &ActorWrapper::GetLifeSpan, "C++: ActorWrapper::GetLifeSpan() --> float");
		cl.def("GetCreationTime", (float (ActorWrapper::*)()) &ActorWrapper::GetCreationTime, "C++: ActorWrapper::GetCreationTime() --> float");
		cl.def("GetLastRenderTime", (float (ActorWrapper::*)()) &ActorWrapper::GetLastRenderTime, "C++: ActorWrapper::GetLastRenderTime() --> float");
		cl.def("GetHiddenEditorViews", (unsigned long long (ActorWrapper::*)()) &ActorWrapper::GetHiddenEditorViews, "C++: ActorWrapper::GetHiddenEditorViews() --> unsigned long long");
		cl.def("SetHiddenEditorViews", (void (ActorWrapper::*)(unsigned long long)) &ActorWrapper::SetHiddenEditorViews, "C++: ActorWrapper::SetHiddenEditorViews(unsigned long long) --> void", pybind11::arg("newHiddenEditorViews"));
		cl.def("GetAttached", (class ArrayWrapper<class ActorWrapper> (ActorWrapper::*)()) &ActorWrapper::GetAttached, "C++: ActorWrapper::GetAttached() --> class ArrayWrapper<class ActorWrapper>");
		cl.def("GetRelativeLocation", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetRelativeLocation, "C++: ActorWrapper::GetRelativeLocation() --> struct Vector");
		cl.def("SetRelativeLocation", (void (ActorWrapper::*)(struct Vector)) &ActorWrapper::SetRelativeLocation, "C++: ActorWrapper::SetRelativeLocation(struct Vector) --> void", pybind11::arg("newRelativeLocation"));
		cl.def("GetRelativeRotation", (struct Rotator (ActorWrapper::*)()) &ActorWrapper::GetRelativeRotation, "C++: ActorWrapper::GetRelativeRotation() --> struct Rotator");
		cl.def("SetRelativeRotation", (void (ActorWrapper::*)(struct Rotator)) &ActorWrapper::SetRelativeRotation, "C++: ActorWrapper::SetRelativeRotation(struct Rotator) --> void", pybind11::arg("newRelativeRotation"));
		cl.def("GetCollisionComponent", (class PrimitiveComponentWrapper (ActorWrapper::*)()) &ActorWrapper::GetCollisionComponent, "C++: ActorWrapper::GetCollisionComponent() --> class PrimitiveComponentWrapper");
		cl.def("ForceNetUpdatePacket", (void (ActorWrapper::*)()) &ActorWrapper::ForceNetUpdatePacket, "C++: ActorWrapper::ForceNetUpdatePacket() --> void");
		cl.def("ForceNetUpdate2", (void (ActorWrapper::*)()) &ActorWrapper::ForceNetUpdate2, "C++: ActorWrapper::ForceNetUpdate2() --> void");
		cl.def("WillOverlap", (bool (ActorWrapper::*)(struct Vector &, struct Vector &, struct Vector &, struct Vector &, float, float, float *)) &ActorWrapper::WillOverlap, "C++: ActorWrapper::WillOverlap(struct Vector &, struct Vector &, struct Vector &, struct Vector &, float, float, float *) --> bool", pybind11::arg("PosA"), pybind11::arg("VelA"), pybind11::arg("PosB"), pybind11::arg("VelB"), pybind11::arg("StepSize"), pybind11::arg("Radius"), pybind11::arg("Time"));
		cl.def("eventReplicationEnded", (void (ActorWrapper::*)()) &ActorWrapper::eventReplicationEnded, "C++: ActorWrapper::eventReplicationEnded() --> void");
		cl.def("eventPostDemoRewind", (void (ActorWrapper::*)()) &ActorWrapper::eventPostDemoRewind, "C++: ActorWrapper::eventPostDemoRewind() --> void");
		cl.def("IsInPersistentLevel", (bool (ActorWrapper::*)(unsigned long)) &ActorWrapper::IsInPersistentLevel, "C++: ActorWrapper::IsInPersistentLevel(unsigned long) --> bool", pybind11::arg("bIncludeLevelStreamingPersistent"));
		cl.def("SetHUDLocation", (void (ActorWrapper::*)(struct Vector &)) &ActorWrapper::SetHUDLocation, "C++: ActorWrapper::SetHUDLocation(struct Vector &) --> void", pybind11::arg("NewHUDLocation"));
		cl.def("eventSpawnedByKismet", (void (ActorWrapper::*)()) &ActorWrapper::eventSpawnedByKismet, "C++: ActorWrapper::eventSpawnedByKismet() --> void");
		cl.def("GetTargetLocation", (struct Vector (ActorWrapper::*)(class ActorWrapper, unsigned long)) &ActorWrapper::GetTargetLocation, "C++: ActorWrapper::GetTargetLocation(class ActorWrapper, unsigned long) --> struct Vector", pybind11::arg("RequestedBy"), pybind11::arg("bRequestAlternateLoc"));
		cl.def("eventScriptGetTeamNum", (unsigned char (ActorWrapper::*)()) &ActorWrapper::eventScriptGetTeamNum, "C++: ActorWrapper::eventScriptGetTeamNum() --> unsigned char");
		cl.def("GetTeamNum2", (unsigned char (ActorWrapper::*)()) &ActorWrapper::GetTeamNum2, "C++: ActorWrapper::GetTeamNum2() --> unsigned char");
		cl.def("IsPlayerOwned", (bool (ActorWrapper::*)()) &ActorWrapper::IsPlayerOwned, "C++: ActorWrapper::IsPlayerOwned() --> bool");
		cl.def("IsStationary", (bool (ActorWrapper::*)()) &ActorWrapper::IsStationary, "C++: ActorWrapper::IsStationary() --> bool");
		cl.def("eventDebugMessagePlayer", (void (ActorWrapper::*)(std::string)) &ActorWrapper::eventDebugMessagePlayer, "C++: ActorWrapper::eventDebugMessagePlayer(std::string) --> void", pybind11::arg("msg"));
		cl.def("GetGravityAcceleration", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetGravityAcceleration, "C++: ActorWrapper::GetGravityAcceleration() --> struct Vector");
		cl.def("GetGravityDirection", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetGravityDirection, "C++: ActorWrapper::GetGravityDirection() --> struct Vector");
		cl.def("GetGravityZ", (float (ActorWrapper::*)()) &ActorWrapper::GetGravityZ, "C++: ActorWrapper::GetGravityZ() --> float");
		cl.def("IsOverlapping", (bool (ActorWrapper::*)(class ActorWrapper)) &ActorWrapper::IsOverlapping, "C++: ActorWrapper::IsOverlapping(class ActorWrapper) --> bool", pybind11::arg("A"));
		cl.def("ContainsPoint", (bool (ActorWrapper::*)(struct Vector &)) &ActorWrapper::ContainsPoint, "C++: ActorWrapper::ContainsPoint(struct Vector &) --> bool", pybind11::arg("Spot"));
		cl.def("eventFellOutOfWorld", (void (ActorWrapper::*)()) &ActorWrapper::eventFellOutOfWorld, "C++: ActorWrapper::eventFellOutOfWorld() --> void");
		cl.def("SetTickIsDisabled", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetTickIsDisabled, "C++: ActorWrapper::SetTickIsDisabled(unsigned long) --> void", pybind11::arg("bInDisabled"));
		cl.def("SetPhysics2", (void (ActorWrapper::*)(unsigned char)) &ActorWrapper::SetPhysics2, "C++: ActorWrapper::SetPhysics2(unsigned char) --> void", pybind11::arg("newPhysics"));
		cl.def("SetHidden2", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetHidden2, "C++: ActorWrapper::SetHidden2(unsigned long) --> void", pybind11::arg("bNewHidden"));
		cl.def("ChartData", (void (ActorWrapper::*)(std::string, float)) &ActorWrapper::ChartData, "C++: ActorWrapper::ChartData(std::string, float) --> void", pybind11::arg("DataName"), pybind11::arg("DataValue"));
		cl.def("DrawDebugString", (void (ActorWrapper::*)(struct Vector &, std::string, class ActorWrapper, struct UnrealColor &, float)) &ActorWrapper::DrawDebugString, "C++: ActorWrapper::DrawDebugString(struct Vector &, std::string, class ActorWrapper, struct UnrealColor &, float) --> void", pybind11::arg("TextLocation"), pybind11::arg("Text"), pybind11::arg("TestBaseActor"), pybind11::arg("TextColor"), pybind11::arg("Duration"));
		cl.def("DrawDebugCone", (void (ActorWrapper::*)(struct Vector &, struct Vector &, float, float, float, int, struct UnrealColor &, unsigned long)) &ActorWrapper::DrawDebugCone, "C++: ActorWrapper::DrawDebugCone(struct Vector &, struct Vector &, float, float, float, int, struct UnrealColor &, unsigned long) --> void", pybind11::arg("Origin"), pybind11::arg("Direction"), pybind11::arg("Length"), pybind11::arg("AngleWidth"), pybind11::arg("AngleHeight"), pybind11::arg("NumSides"), pybind11::arg("DrawColor"), pybind11::arg("bPersistentLines"));
		cl.def("GetAggregateBaseVelocity", (struct Vector (ActorWrapper::*)(class ActorWrapper)) &ActorWrapper::GetAggregateBaseVelocity, "C++: ActorWrapper::GetAggregateBaseVelocity(class ActorWrapper) --> struct Vector", pybind11::arg("TestBase"));
		cl.def("IsOwnedBy", (bool (ActorWrapper::*)(class ActorWrapper)) &ActorWrapper::IsOwnedBy, "C++: ActorWrapper::IsOwnedBy(class ActorWrapper) --> bool", pybind11::arg("TestActor"));
		cl.def("IsBasedOn", (bool (ActorWrapper::*)(class ActorWrapper)) &ActorWrapper::IsBasedOn, "C++: ActorWrapper::IsBasedOn(class ActorWrapper) --> bool", pybind11::arg("TestActor"));
		cl.def("GetTerminalVelocity", (float (ActorWrapper::*)()) &ActorWrapper::GetTerminalVelocity, "C++: ActorWrapper::GetTerminalVelocity() --> float");
	}
}
