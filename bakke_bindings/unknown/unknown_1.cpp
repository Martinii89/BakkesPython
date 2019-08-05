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
		cl.def("assign", (class ActorWrapper & (ActorWrapper::*)(class ActorWrapper)) &ActorWrapper::operator=, "C++: ActorWrapper::operator=(class ActorWrapper) --> class ActorWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetLocation", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetLocation, "C++: ActorWrapper::GetLocation() --> struct Vector");
		cl.def("SetLocation", (void (ActorWrapper::*)(const struct Vector)) &ActorWrapper::SetLocation, "C++: ActorWrapper::SetLocation(const struct Vector) --> void", "location"_a);
		cl.def("GetVelocity", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetVelocity, "C++: ActorWrapper::GetVelocity() --> struct Vector");
		cl.def("SetVelocity", (void (ActorWrapper::*)(const struct Vector)) &ActorWrapper::SetVelocity, "C++: ActorWrapper::SetVelocity(const struct Vector) --> void", "velocity"_a);
		cl.def("AddVelocity", (void (ActorWrapper::*)(const struct Vector)) &ActorWrapper::AddVelocity, "C++: ActorWrapper::AddVelocity(const struct Vector) --> void", "velocity"_a);
		cl.def("GetRotation", (struct Rotator (ActorWrapper::*)()) &ActorWrapper::GetRotation, "C++: ActorWrapper::GetRotation() --> struct Rotator");
		cl.def("SetRotation", (void (ActorWrapper::*)(const struct Rotator)) &ActorWrapper::SetRotation, "C++: ActorWrapper::SetRotation(const struct Rotator) --> void", "rotation"_a);
		cl.def("SetTorque", (void (ActorWrapper::*)(const struct Vector)) &ActorWrapper::SetTorque, "C++: ActorWrapper::SetTorque(const struct Vector) --> void", "torq"_a);
		cl.def("Stop", (void (ActorWrapper::*)()) &ActorWrapper::Stop, "C++: ActorWrapper::Stop() --> void");
		cl.def("GetAngularVelocity", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetAngularVelocity, "C++: ActorWrapper::GetAngularVelocity() --> struct Vector");
		cl.def("SetAngularVelocity", (void (ActorWrapper::*)(const struct Vector, bool)) &ActorWrapper::SetAngularVelocity, "C++: ActorWrapper::SetAngularVelocity(const struct Vector, bool) --> void", "v"_a, "addToCurrent"_a);
		cl.def("IsNull", (bool (ActorWrapper::*)()) &ActorWrapper::IsNull, "C++: ActorWrapper::IsNull() --> bool");
		cl.def("GetDrawScale", (float (ActorWrapper::*)()) &ActorWrapper::GetDrawScale, "C++: ActorWrapper::GetDrawScale() --> float");
		cl.def("SetDrawScale", (void (ActorWrapper::*)(float)) &ActorWrapper::SetDrawScale, "C++: ActorWrapper::SetDrawScale(float) --> void", "newDrawScale"_a);
		cl.def("GetDrawScale3D", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetDrawScale3D, "C++: ActorWrapper::GetDrawScale3D() --> struct Vector");
		cl.def("SetDrawScale3D", (void (ActorWrapper::*)(struct Vector)) &ActorWrapper::SetDrawScale3D, "C++: ActorWrapper::SetDrawScale3D(struct Vector) --> void", "newDrawScale3D"_a);
		cl.def("GetPrePivot", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetPrePivot, "C++: ActorWrapper::GetPrePivot() --> struct Vector");
		cl.def("SetPrePivot", (void (ActorWrapper::*)(struct Vector)) &ActorWrapper::SetPrePivot, "C++: ActorWrapper::SetPrePivot(struct Vector) --> void", "newPrePivot"_a);
		cl.def("GetEditorIconColor", (struct UnrealColor (ActorWrapper::*)()) &ActorWrapper::GetEditorIconColor, "C++: ActorWrapper::GetEditorIconColor() --> struct UnrealColor");
		cl.def("SetEditorIconColor", (void (ActorWrapper::*)(struct UnrealColor)) &ActorWrapper::SetEditorIconColor, "C++: ActorWrapper::SetEditorIconColor(struct UnrealColor) --> void", "newEditorIconColor"_a);
		cl.def("GetCustomTimeDilation", (float (ActorWrapper::*)()) &ActorWrapper::GetCustomTimeDilation, "C++: ActorWrapper::GetCustomTimeDilation() --> float");
		cl.def("SetCustomTimeDilation", (void (ActorWrapper::*)(float)) &ActorWrapper::SetCustomTimeDilation, "C++: ActorWrapper::SetCustomTimeDilation(float) --> void", "newCustomTimeDilation"_a);
		cl.def("GetPhysics", (unsigned char (ActorWrapper::*)()) &ActorWrapper::GetPhysics, "C++: ActorWrapper::GetPhysics() --> unsigned char");
		cl.def("SetPhysics", (void (ActorWrapper::*)(unsigned char)) &ActorWrapper::SetPhysics, "C++: ActorWrapper::SetPhysics(unsigned char) --> void", "newPhysics"_a);
		cl.def("GetRemoteRole", (unsigned char (ActorWrapper::*)()) &ActorWrapper::GetRemoteRole, "C++: ActorWrapper::GetRemoteRole() --> unsigned char");
		cl.def("SetRemoteRole", (void (ActorWrapper::*)(unsigned char)) &ActorWrapper::SetRemoteRole, "C++: ActorWrapper::SetRemoteRole(unsigned char) --> void", "newRemoteRole"_a);
		cl.def("GetRole", (unsigned char (ActorWrapper::*)()) &ActorWrapper::GetRole, "C++: ActorWrapper::GetRole() --> unsigned char");
		cl.def("SetRole", (void (ActorWrapper::*)(unsigned char)) &ActorWrapper::SetRole, "C++: ActorWrapper::SetRole(unsigned char) --> void", "newRole"_a);
		cl.def("GetCollisionType", (unsigned char (ActorWrapper::*)()) &ActorWrapper::GetCollisionType, "C++: ActorWrapper::GetCollisionType() --> unsigned char");
		cl.def("SetCollisionType", (void (ActorWrapper::*)(unsigned char)) &ActorWrapper::SetCollisionType, "C++: ActorWrapper::SetCollisionType(unsigned char) --> void", "newCollisionType"_a);
		cl.def("GetReplicatedCollisionType", (unsigned char (ActorWrapper::*)()) &ActorWrapper::GetReplicatedCollisionType, "C++: ActorWrapper::GetReplicatedCollisionType() --> unsigned char");
		cl.def("SetReplicatedCollisionType", (void (ActorWrapper::*)(unsigned char)) &ActorWrapper::SetReplicatedCollisionType, "C++: ActorWrapper::SetReplicatedCollisionType(unsigned char) --> void", "newReplicatedCollisionType"_a);
		cl.def("GetOwner", (class ActorWrapper (ActorWrapper::*)()) &ActorWrapper::GetOwner, "C++: ActorWrapper::GetOwner() --> class ActorWrapper");
		cl.def("GetBase", (class ActorWrapper (ActorWrapper::*)()) &ActorWrapper::GetBase, "C++: ActorWrapper::GetBase() --> class ActorWrapper");
		cl.def("GetbStatic", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbStatic, "C++: ActorWrapper::GetbStatic() --> unsigned long");
		cl.def("GetbHidden", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbHidden, "C++: ActorWrapper::GetbHidden() --> unsigned long");
		cl.def("GetbHiddenSelf", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbHiddenSelf, "C++: ActorWrapper::GetbHiddenSelf() --> unsigned long");
		cl.def("SetbHiddenSelf", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbHiddenSelf, "C++: ActorWrapper::SetbHiddenSelf(unsigned long) --> void", "newbHiddenSelf"_a);
		cl.def("GetbNoDelete", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbNoDelete, "C++: ActorWrapper::GetbNoDelete() --> unsigned long");
		cl.def("SetbNoDelete", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbNoDelete, "C++: ActorWrapper::SetbNoDelete(unsigned long) --> void", "newbNoDelete"_a);
		cl.def("GetbDeleteMe", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbDeleteMe, "C++: ActorWrapper::GetbDeleteMe() --> unsigned long");
		cl.def("SetbDeleteMe", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbDeleteMe, "C++: ActorWrapper::SetbDeleteMe(unsigned long) --> void", "newbDeleteMe"_a);
		cl.def("GetbTicked", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbTicked, "C++: ActorWrapper::GetbTicked() --> unsigned long");
		cl.def("SetbTicked", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbTicked, "C++: ActorWrapper::SetbTicked(unsigned long) --> void", "newbTicked"_a);
		cl.def("GetbOnlyOwnerSee", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbOnlyOwnerSee, "C++: ActorWrapper::GetbOnlyOwnerSee() --> unsigned long");
		cl.def("SetbOnlyOwnerSee", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbOnlyOwnerSee, "C++: ActorWrapper::SetbOnlyOwnerSee(unsigned long) --> void", "newbOnlyOwnerSee"_a);
		cl.def("GetbTickIsDisabled", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbTickIsDisabled, "C++: ActorWrapper::GetbTickIsDisabled() --> unsigned long");
		cl.def("SetbTickIsDisabled", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbTickIsDisabled, "C++: ActorWrapper::SetbTickIsDisabled(unsigned long) --> void", "newbTickIsDisabled"_a);
		cl.def("GetbWorldGeometry", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbWorldGeometry, "C++: ActorWrapper::GetbWorldGeometry() --> unsigned long");
		cl.def("SetbWorldGeometry", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbWorldGeometry, "C++: ActorWrapper::SetbWorldGeometry(unsigned long) --> void", "newbWorldGeometry"_a);
		cl.def("GetbIgnoreRigidBodyPawns", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbIgnoreRigidBodyPawns, "C++: ActorWrapper::GetbIgnoreRigidBodyPawns() --> unsigned long");
		cl.def("SetbIgnoreRigidBodyPawns", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbIgnoreRigidBodyPawns, "C++: ActorWrapper::SetbIgnoreRigidBodyPawns(unsigned long) --> void", "newbIgnoreRigidBodyPawns"_a);
		cl.def("GetbOrientOnSlope", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbOrientOnSlope, "C++: ActorWrapper::GetbOrientOnSlope() --> unsigned long");
		cl.def("SetbOrientOnSlope", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbOrientOnSlope, "C++: ActorWrapper::SetbOrientOnSlope(unsigned long) --> void", "newbOrientOnSlope"_a);
		cl.def("GetbIsMoving", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbIsMoving, "C++: ActorWrapper::GetbIsMoving() --> unsigned long");
		cl.def("GetbAlwaysEncroachCheck", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbAlwaysEncroachCheck, "C++: ActorWrapper::GetbAlwaysEncroachCheck() --> unsigned long");
		cl.def("SetbAlwaysEncroachCheck", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbAlwaysEncroachCheck, "C++: ActorWrapper::SetbAlwaysEncroachCheck(unsigned long) --> void", "newbAlwaysEncroachCheck"_a);
		cl.def("GetbHasAlternateTargetLocation", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbHasAlternateTargetLocation, "C++: ActorWrapper::GetbHasAlternateTargetLocation() --> unsigned long");
		cl.def("GetbAlwaysRelevant", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbAlwaysRelevant, "C++: ActorWrapper::GetbAlwaysRelevant() --> unsigned long");
		cl.def("GetbReplicateInstigator", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbReplicateInstigator, "C++: ActorWrapper::GetbReplicateInstigator() --> unsigned long");
		cl.def("GetbReplicateMovement", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbReplicateMovement, "C++: ActorWrapper::GetbReplicateMovement() --> unsigned long");
		cl.def("GetbUpdateSimulatedPosition", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbUpdateSimulatedPosition, "C++: ActorWrapper::GetbUpdateSimulatedPosition() --> unsigned long");
		cl.def("SetbUpdateSimulatedPosition", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbUpdateSimulatedPosition, "C++: ActorWrapper::SetbUpdateSimulatedPosition(unsigned long) --> void", "newbUpdateSimulatedPosition"_a);
		cl.def("GetbDemoRecording", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbDemoRecording, "C++: ActorWrapper::GetbDemoRecording() --> unsigned long");
		cl.def("SetbDemoRecording", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbDemoRecording, "C++: ActorWrapper::SetbDemoRecording(unsigned long) --> void", "newbDemoRecording"_a);
		cl.def("GetbDemoOwner", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbDemoOwner, "C++: ActorWrapper::GetbDemoOwner() --> unsigned long");
		cl.def("SetbDemoOwner", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbDemoOwner, "C++: ActorWrapper::SetbDemoOwner(unsigned long) --> void", "newbDemoOwner"_a);
		cl.def("GetbForceDemoRelevant", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbForceDemoRelevant, "C++: ActorWrapper::GetbForceDemoRelevant() --> unsigned long");
		cl.def("SetbForceDemoRelevant", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbForceDemoRelevant, "C++: ActorWrapper::SetbForceDemoRelevant(unsigned long) --> void", "newbForceDemoRelevant"_a);
		cl.def("GetbNetInitialRotation", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbNetInitialRotation, "C++: ActorWrapper::GetbNetInitialRotation() --> unsigned long");
		cl.def("SetbNetInitialRotation", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbNetInitialRotation, "C++: ActorWrapper::SetbNetInitialRotation(unsigned long) --> void", "newbNetInitialRotation"_a);
		cl.def("GetbReplicateRigidBodyLocation", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbReplicateRigidBodyLocation, "C++: ActorWrapper::GetbReplicateRigidBodyLocation() --> unsigned long");
		cl.def("SetbReplicateRigidBodyLocation", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbReplicateRigidBodyLocation, "C++: ActorWrapper::SetbReplicateRigidBodyLocation(unsigned long) --> void", "newbReplicateRigidBodyLocation"_a);
		cl.def("GetbKillDuringLevelTransition", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbKillDuringLevelTransition, "C++: ActorWrapper::GetbKillDuringLevelTransition() --> unsigned long");
		cl.def("SetbKillDuringLevelTransition", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbKillDuringLevelTransition, "C++: ActorWrapper::SetbKillDuringLevelTransition(unsigned long) --> void", "newbKillDuringLevelTransition"_a);
		cl.def("GetbPostRenderIfNotVisible", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbPostRenderIfNotVisible, "C++: ActorWrapper::GetbPostRenderIfNotVisible() --> unsigned long");
		cl.def("SetbPostRenderIfNotVisible", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbPostRenderIfNotVisible, "C++: ActorWrapper::SetbPostRenderIfNotVisible(unsigned long) --> void", "newbPostRenderIfNotVisible"_a);
		cl.def("GetbForceNetUpdate", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbForceNetUpdate, "C++: ActorWrapper::GetbForceNetUpdate() --> unsigned long");
		cl.def("SetbForceNetUpdate", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbForceNetUpdate, "C++: ActorWrapper::SetbForceNetUpdate(unsigned long) --> void", "newbForceNetUpdate"_a);
		cl.def("GetbForcePacketUpdate", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbForcePacketUpdate, "C++: ActorWrapper::GetbForcePacketUpdate() --> unsigned long");
		cl.def("SetbForcePacketUpdate", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbForcePacketUpdate, "C++: ActorWrapper::SetbForcePacketUpdate(unsigned long) --> void", "newbForcePacketUpdate"_a);
		cl.def("GetbPendingNetUpdate", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbPendingNetUpdate, "C++: ActorWrapper::GetbPendingNetUpdate() --> unsigned long");
		cl.def("SetbPendingNetUpdate", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbPendingNetUpdate, "C++: ActorWrapper::SetbPendingNetUpdate(unsigned long) --> void", "newbPendingNetUpdate"_a);
		cl.def("GetbGameRelevant", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbGameRelevant, "C++: ActorWrapper::GetbGameRelevant() --> unsigned long");
		cl.def("SetbGameRelevant", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbGameRelevant, "C++: ActorWrapper::SetbGameRelevant(unsigned long) --> void", "newbGameRelevant"_a);
		cl.def("GetbMovable", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbMovable, "C++: ActorWrapper::GetbMovable() --> unsigned long");
		cl.def("SetbMovable", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbMovable, "C++: ActorWrapper::SetbMovable(unsigned long) --> void", "newbMovable"_a);
		cl.def("GetbCanTeleport", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbCanTeleport, "C++: ActorWrapper::GetbCanTeleport() --> unsigned long");
		cl.def("SetbCanTeleport", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbCanTeleport, "C++: ActorWrapper::SetbCanTeleport(unsigned long) --> void", "newbCanTeleport"_a);
		cl.def("GetbAlwaysTick", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbAlwaysTick, "C++: ActorWrapper::GetbAlwaysTick() --> unsigned long");
		cl.def("SetbAlwaysTick", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbAlwaysTick, "C++: ActorWrapper::SetbAlwaysTick(unsigned long) --> void", "newbAlwaysTick"_a);
		cl.def("GetbBlocksNavigation", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbBlocksNavigation, "C++: ActorWrapper::GetbBlocksNavigation() --> unsigned long");
		cl.def("SetbBlocksNavigation", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbBlocksNavigation, "C++: ActorWrapper::SetbBlocksNavigation(unsigned long) --> void", "newbBlocksNavigation"_a);
		cl.def("GetBlockRigidBody", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetBlockRigidBody, "C++: ActorWrapper::GetBlockRigidBody() --> unsigned long");
		cl.def("SetBlockRigidBody", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetBlockRigidBody, "C++: ActorWrapper::SetBlockRigidBody(unsigned long) --> void", "newBlockRigidBody"_a);
		cl.def("GetbCollideWhenPlacing", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbCollideWhenPlacing, "C++: ActorWrapper::GetbCollideWhenPlacing() --> unsigned long");
		cl.def("SetbCollideWhenPlacing", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbCollideWhenPlacing, "C++: ActorWrapper::SetbCollideWhenPlacing(unsigned long) --> void", "newbCollideWhenPlacing"_a);
		cl.def("GetbCollideActors", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbCollideActors, "C++: ActorWrapper::GetbCollideActors() --> unsigned long");
		cl.def("SetbCollideActors", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbCollideActors, "C++: ActorWrapper::SetbCollideActors(unsigned long) --> void", "newbCollideActors"_a);
		cl.def("GetbCollideWorld", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbCollideWorld, "C++: ActorWrapper::GetbCollideWorld() --> unsigned long");
		cl.def("SetbCollideWorld", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbCollideWorld, "C++: ActorWrapper::SetbCollideWorld(unsigned long) --> void", "newbCollideWorld"_a);
		cl.def("GetbCollideComplex", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbCollideComplex, "C++: ActorWrapper::GetbCollideComplex() --> unsigned long");
		cl.def("SetbCollideComplex", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbCollideComplex, "C++: ActorWrapper::SetbCollideComplex(unsigned long) --> void", "newbCollideComplex"_a);
		cl.def("GetbBlockActors", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbBlockActors, "C++: ActorWrapper::GetbBlockActors() --> unsigned long");
		cl.def("SetbBlockActors", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbBlockActors, "C++: ActorWrapper::SetbBlockActors(unsigned long) --> void", "newbBlockActors"_a);
		cl.def("GetbBlocksTeleport", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbBlocksTeleport, "C++: ActorWrapper::GetbBlocksTeleport() --> unsigned long");
		cl.def("SetbBlocksTeleport", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbBlocksTeleport, "C++: ActorWrapper::SetbBlocksTeleport(unsigned long) --> void", "newbBlocksTeleport"_a);
		cl.def("GetbPhysRigidBodyOutOfWorldCheck", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbPhysRigidBodyOutOfWorldCheck, "C++: ActorWrapper::GetbPhysRigidBodyOutOfWorldCheck() --> unsigned long");
		cl.def("SetbPhysRigidBodyOutOfWorldCheck", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbPhysRigidBodyOutOfWorldCheck, "C++: ActorWrapper::SetbPhysRigidBodyOutOfWorldCheck(unsigned long) --> void", "newbPhysRigidBodyOutOfWorldCheck"_a);
		cl.def("GetbComponentOutsideWorld", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbComponentOutsideWorld, "C++: ActorWrapper::GetbComponentOutsideWorld() --> unsigned long");
		cl.def("GetbRigidBodyWasAwake", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbRigidBodyWasAwake, "C++: ActorWrapper::GetbRigidBodyWasAwake() --> unsigned long");
		cl.def("SetbRigidBodyWasAwake", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbRigidBodyWasAwake, "C++: ActorWrapper::SetbRigidBodyWasAwake(unsigned long) --> void", "newbRigidBodyWasAwake"_a);
		cl.def("GetbCallRigidBodyWakeEvents", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbCallRigidBodyWakeEvents, "C++: ActorWrapper::GetbCallRigidBodyWakeEvents() --> unsigned long");
		cl.def("SetbCallRigidBodyWakeEvents", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbCallRigidBodyWakeEvents, "C++: ActorWrapper::SetbCallRigidBodyWakeEvents(unsigned long) --> void", "newbCallRigidBodyWakeEvents"_a);
		cl.def("GetbBounce", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbBounce, "C++: ActorWrapper::GetbBounce() --> unsigned long");
		cl.def("SetbBounce", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbBounce, "C++: ActorWrapper::SetbBounce(unsigned long) --> void", "newbBounce"_a);
		cl.def("GetbEditable", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbEditable, "C++: ActorWrapper::GetbEditable() --> unsigned long");
		cl.def("SetbEditable", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbEditable, "C++: ActorWrapper::SetbEditable(unsigned long) --> void", "newbEditable"_a);
		cl.def("GetbLockLocation", (unsigned long (ActorWrapper::*)()) &ActorWrapper::GetbLockLocation, "C++: ActorWrapper::GetbLockLocation() --> unsigned long");
		cl.def("SetbLockLocation", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetbLockLocation, "C++: ActorWrapper::SetbLockLocation(unsigned long) --> void", "newbLockLocation"_a);
		cl.def("GetNetUpdateTime", (float (ActorWrapper::*)()) &ActorWrapper::GetNetUpdateTime, "C++: ActorWrapper::GetNetUpdateTime() --> float");
		cl.def("SetNetUpdateTime", (void (ActorWrapper::*)(float)) &ActorWrapper::SetNetUpdateTime, "C++: ActorWrapper::SetNetUpdateTime(float) --> void", "newNetUpdateTime"_a);
		cl.def("GetNetUpdateFrequency", (float (ActorWrapper::*)()) &ActorWrapper::GetNetUpdateFrequency, "C++: ActorWrapper::GetNetUpdateFrequency() --> float");
		cl.def("SetNetUpdateFrequency", (void (ActorWrapper::*)(float)) &ActorWrapper::SetNetUpdateFrequency, "C++: ActorWrapper::SetNetUpdateFrequency(float) --> void", "newNetUpdateFrequency"_a);
		cl.def("GetNetPriority", (float (ActorWrapper::*)()) &ActorWrapper::GetNetPriority, "C++: ActorWrapper::GetNetPriority() --> float");
		cl.def("SetNetPriority", (void (ActorWrapper::*)(float)) &ActorWrapper::SetNetPriority, "C++: ActorWrapper::SetNetPriority(float) --> void", "newNetPriority"_a);
		cl.def("GetLastNetUpdateTime", (float (ActorWrapper::*)()) &ActorWrapper::GetLastNetUpdateTime, "C++: ActorWrapper::GetLastNetUpdateTime() --> float");
		cl.def("GetLastForcePacketUpdateTime", (float (ActorWrapper::*)()) &ActorWrapper::GetLastForcePacketUpdateTime, "C++: ActorWrapper::GetLastForcePacketUpdateTime() --> float");
		cl.def("SetLastForcePacketUpdateTime", (void (ActorWrapper::*)(float)) &ActorWrapper::SetLastForcePacketUpdateTime, "C++: ActorWrapper::SetLastForcePacketUpdateTime(float) --> void", "newLastForcePacketUpdateTime"_a);
		cl.def("GetTimeSinceLastTick", (float (ActorWrapper::*)()) &ActorWrapper::GetTimeSinceLastTick, "C++: ActorWrapper::GetTimeSinceLastTick() --> float");
		cl.def("GetLifeSpan", (float (ActorWrapper::*)()) &ActorWrapper::GetLifeSpan, "C++: ActorWrapper::GetLifeSpan() --> float");
		cl.def("GetCreationTime", (float (ActorWrapper::*)()) &ActorWrapper::GetCreationTime, "C++: ActorWrapper::GetCreationTime() --> float");
		cl.def("GetLastRenderTime", (float (ActorWrapper::*)()) &ActorWrapper::GetLastRenderTime, "C++: ActorWrapper::GetLastRenderTime() --> float");
		cl.def("GetHiddenEditorViews", (unsigned long long (ActorWrapper::*)()) &ActorWrapper::GetHiddenEditorViews, "C++: ActorWrapper::GetHiddenEditorViews() --> unsigned long long");
		cl.def("SetHiddenEditorViews", (void (ActorWrapper::*)(unsigned long long)) &ActorWrapper::SetHiddenEditorViews, "C++: ActorWrapper::SetHiddenEditorViews(unsigned long long) --> void", "newHiddenEditorViews"_a);
		cl.def("GetAttached", (class ArrayWrapper<class ActorWrapper> (ActorWrapper::*)()) &ActorWrapper::GetAttached, "C++: ActorWrapper::GetAttached() --> class ArrayWrapper<class ActorWrapper>");
		cl.def("GetRelativeLocation", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetRelativeLocation, "C++: ActorWrapper::GetRelativeLocation() --> struct Vector");
		cl.def("SetRelativeLocation", (void (ActorWrapper::*)(struct Vector)) &ActorWrapper::SetRelativeLocation, "C++: ActorWrapper::SetRelativeLocation(struct Vector) --> void", "newRelativeLocation"_a);
		cl.def("GetRelativeRotation", (struct Rotator (ActorWrapper::*)()) &ActorWrapper::GetRelativeRotation, "C++: ActorWrapper::GetRelativeRotation() --> struct Rotator");
		cl.def("SetRelativeRotation", (void (ActorWrapper::*)(struct Rotator)) &ActorWrapper::SetRelativeRotation, "C++: ActorWrapper::SetRelativeRotation(struct Rotator) --> void", "newRelativeRotation"_a);
		cl.def("GetCollisionComponent", (class PrimitiveComponentWrapper (ActorWrapper::*)()) &ActorWrapper::GetCollisionComponent, "C++: ActorWrapper::GetCollisionComponent() --> class PrimitiveComponentWrapper");
		cl.def("ForceNetUpdatePacket", (void (ActorWrapper::*)()) &ActorWrapper::ForceNetUpdatePacket, "C++: ActorWrapper::ForceNetUpdatePacket() --> void");
		cl.def("ForceNetUpdate2", (void (ActorWrapper::*)()) &ActorWrapper::ForceNetUpdate2, "C++: ActorWrapper::ForceNetUpdate2() --> void");
		cl.def("WillOverlap", (bool (ActorWrapper::*)(struct Vector &, struct Vector &, struct Vector &, struct Vector &, float, float, float *)) &ActorWrapper::WillOverlap, "C++: ActorWrapper::WillOverlap(struct Vector &, struct Vector &, struct Vector &, struct Vector &, float, float, float *) --> bool", "PosA"_a, "VelA"_a, "PosB"_a, "VelB"_a, "StepSize"_a, "Radius"_a, "Time"_a);
		cl.def("eventReplicationEnded", (void (ActorWrapper::*)()) &ActorWrapper::eventReplicationEnded, "C++: ActorWrapper::eventReplicationEnded() --> void");
		cl.def("eventPostDemoRewind", (void (ActorWrapper::*)()) &ActorWrapper::eventPostDemoRewind, "C++: ActorWrapper::eventPostDemoRewind() --> void");
		cl.def("IsInPersistentLevel", (bool (ActorWrapper::*)(unsigned long)) &ActorWrapper::IsInPersistentLevel, "C++: ActorWrapper::IsInPersistentLevel(unsigned long) --> bool", "bIncludeLevelStreamingPersistent"_a);
		cl.def("SetHUDLocation", (void (ActorWrapper::*)(struct Vector &)) &ActorWrapper::SetHUDLocation, "C++: ActorWrapper::SetHUDLocation(struct Vector &) --> void", "NewHUDLocation"_a);
		cl.def("eventSpawnedByKismet", (void (ActorWrapper::*)()) &ActorWrapper::eventSpawnedByKismet, "C++: ActorWrapper::eventSpawnedByKismet() --> void");
		cl.def("GetTargetLocation", (struct Vector (ActorWrapper::*)(class ActorWrapper, unsigned long)) &ActorWrapper::GetTargetLocation, "C++: ActorWrapper::GetTargetLocation(class ActorWrapper, unsigned long) --> struct Vector", "RequestedBy"_a, "bRequestAlternateLoc"_a);
		cl.def("eventScriptGetTeamNum", (unsigned char (ActorWrapper::*)()) &ActorWrapper::eventScriptGetTeamNum, "C++: ActorWrapper::eventScriptGetTeamNum() --> unsigned char");
		cl.def("GetTeamNum2", (unsigned char (ActorWrapper::*)()) &ActorWrapper::GetTeamNum2, "C++: ActorWrapper::GetTeamNum2() --> unsigned char");
		cl.def("IsPlayerOwned", (bool (ActorWrapper::*)()) &ActorWrapper::IsPlayerOwned, "C++: ActorWrapper::IsPlayerOwned() --> bool");
		cl.def("IsStationary", (bool (ActorWrapper::*)()) &ActorWrapper::IsStationary, "C++: ActorWrapper::IsStationary() --> bool");
		cl.def("eventDebugMessagePlayer", (void (ActorWrapper::*)(std::string)) &ActorWrapper::eventDebugMessagePlayer, "C++: ActorWrapper::eventDebugMessagePlayer(std::string) --> void", "msg"_a);
		cl.def("GetGravityAcceleration", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetGravityAcceleration, "C++: ActorWrapper::GetGravityAcceleration() --> struct Vector");
		cl.def("GetGravityDirection", (struct Vector (ActorWrapper::*)()) &ActorWrapper::GetGravityDirection, "C++: ActorWrapper::GetGravityDirection() --> struct Vector");
		cl.def("GetGravityZ", (float (ActorWrapper::*)()) &ActorWrapper::GetGravityZ, "C++: ActorWrapper::GetGravityZ() --> float");
		cl.def("IsOverlapping", (bool (ActorWrapper::*)(class ActorWrapper)) &ActorWrapper::IsOverlapping, "C++: ActorWrapper::IsOverlapping(class ActorWrapper) --> bool", "A"_a);
		cl.def("ContainsPoint", (bool (ActorWrapper::*)(struct Vector &)) &ActorWrapper::ContainsPoint, "C++: ActorWrapper::ContainsPoint(struct Vector &) --> bool", "Spot"_a);
		cl.def("eventFellOutOfWorld", (void (ActorWrapper::*)()) &ActorWrapper::eventFellOutOfWorld, "C++: ActorWrapper::eventFellOutOfWorld() --> void");
		cl.def("SetTickIsDisabled", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetTickIsDisabled, "C++: ActorWrapper::SetTickIsDisabled(unsigned long) --> void", "bInDisabled"_a);
		cl.def("SetPhysics2", (void (ActorWrapper::*)(unsigned char)) &ActorWrapper::SetPhysics2, "C++: ActorWrapper::SetPhysics2(unsigned char) --> void", "newPhysics"_a);
		cl.def("SetHidden2", (void (ActorWrapper::*)(unsigned long)) &ActorWrapper::SetHidden2, "C++: ActorWrapper::SetHidden2(unsigned long) --> void", "bNewHidden"_a);
		cl.def("ChartData", (void (ActorWrapper::*)(std::string, float)) &ActorWrapper::ChartData, "C++: ActorWrapper::ChartData(std::string, float) --> void", "DataName"_a, "DataValue"_a);
		cl.def("DrawDebugString", (void (ActorWrapper::*)(struct Vector &, std::string, class ActorWrapper, struct UnrealColor &, float)) &ActorWrapper::DrawDebugString, "C++: ActorWrapper::DrawDebugString(struct Vector &, std::string, class ActorWrapper, struct UnrealColor &, float) --> void", "TextLocation"_a, "Text"_a, "TestBaseActor"_a, "TextColor"_a, "Duration"_a);
		cl.def("DrawDebugCone", (void (ActorWrapper::*)(struct Vector &, struct Vector &, float, float, float, int, struct UnrealColor &, unsigned long)) &ActorWrapper::DrawDebugCone, "C++: ActorWrapper::DrawDebugCone(struct Vector &, struct Vector &, float, float, float, int, struct UnrealColor &, unsigned long) --> void", "Origin"_a, "Direction"_a, "Length"_a, "AngleWidth"_a, "AngleHeight"_a, "NumSides"_a, "DrawColor"_a, "bPersistentLines"_a);
		cl.def("GetAggregateBaseVelocity", (struct Vector (ActorWrapper::*)(class ActorWrapper)) &ActorWrapper::GetAggregateBaseVelocity, "C++: ActorWrapper::GetAggregateBaseVelocity(class ActorWrapper) --> struct Vector", "TestBase"_a);
		cl.def("IsOwnedBy", (bool (ActorWrapper::*)(class ActorWrapper)) &ActorWrapper::IsOwnedBy, "C++: ActorWrapper::IsOwnedBy(class ActorWrapper) --> bool", "TestActor"_a);
		cl.def("IsBasedOn", (bool (ActorWrapper::*)(class ActorWrapper)) &ActorWrapper::IsBasedOn, "C++: ActorWrapper::IsBasedOn(class ActorWrapper) --> bool", "TestActor"_a);
		cl.def("GetTerminalVelocity", (float (ActorWrapper::*)()) &ActorWrapper::GetTerminalVelocity, "C++: ActorWrapper::GetTerminalVelocity() --> float");
	}
}
