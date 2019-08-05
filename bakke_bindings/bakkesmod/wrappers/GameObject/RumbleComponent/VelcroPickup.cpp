#include "pch.h"
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/RumbleComponent/VelcroPickup.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_bakkesmod_wrappers_GameObject_RumbleComponent_VelcroPickup(py::module &M)
{
	{ // VelcroPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/VelcroPickup.h line:10
		pybind11::class_<VelcroPickup, std::shared_ptr<VelcroPickup>, RumblePickupComponentWrapper> cl(M, "VelcroPickup");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](VelcroPickup const &o){ return new VelcroPickup(o); } ) );
		cl.def("assign", (class VelcroPickup & (VelcroPickup::*)(class VelcroPickup)) &VelcroPickup::operator=, "C++: VelcroPickup::operator=(class VelcroPickup) --> class VelcroPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetBallOffset", (struct Vector (VelcroPickup::*)()) &VelcroPickup::GetBallOffset, "C++: VelcroPickup::GetBallOffset() --> struct Vector");
		cl.def("SetBallOffset", (void (VelcroPickup::*)(struct Vector)) &VelcroPickup::SetBallOffset, "C++: VelcroPickup::SetBallOffset(struct Vector) --> void", "newBallOffset"_a);
		cl.def("GetbUseRealOffset", (unsigned long (VelcroPickup::*)()) &VelcroPickup::GetbUseRealOffset, "C++: VelcroPickup::GetbUseRealOffset() --> unsigned long");
		cl.def("SetbUseRealOffset", (void (VelcroPickup::*)(unsigned long)) &VelcroPickup::SetbUseRealOffset, "C++: VelcroPickup::SetbUseRealOffset(unsigned long) --> void", "newbUseRealOffset"_a);
		cl.def("GetbHit", (unsigned long (VelcroPickup::*)()) &VelcroPickup::GetbHit, "C++: VelcroPickup::GetbHit() --> unsigned long");
		cl.def("SetbHit", (void (VelcroPickup::*)(unsigned long)) &VelcroPickup::SetbHit, "C++: VelcroPickup::SetbHit(unsigned long) --> void", "newbHit"_a);
		cl.def("GetbBroken", (unsigned long (VelcroPickup::*)()) &VelcroPickup::GetbBroken, "C++: VelcroPickup::GetbBroken() --> unsigned long");
		cl.def("SetbBroken", (void (VelcroPickup::*)(unsigned long)) &VelcroPickup::SetbBroken, "C++: VelcroPickup::SetbBroken(unsigned long) --> void", "newbBroken"_a);
		cl.def("GetAfterHitDuration", (float (VelcroPickup::*)()) &VelcroPickup::GetAfterHitDuration, "C++: VelcroPickup::GetAfterHitDuration() --> float");
		cl.def("SetAfterHitDuration", (void (VelcroPickup::*)(float)) &VelcroPickup::SetAfterHitDuration, "C++: VelcroPickup::SetAfterHitDuration(float) --> void", "newAfterHitDuration"_a);
		cl.def("GetPostBreakDuration", (float (VelcroPickup::*)()) &VelcroPickup::GetPostBreakDuration, "C++: VelcroPickup::GetPostBreakDuration() --> float");
		cl.def("SetPostBreakDuration", (void (VelcroPickup::*)(float)) &VelcroPickup::SetPostBreakDuration, "C++: VelcroPickup::SetPostBreakDuration(float) --> void", "newPostBreakDuration"_a);
		cl.def("GetMinBreakForce", (float (VelcroPickup::*)()) &VelcroPickup::GetMinBreakForce, "C++: VelcroPickup::GetMinBreakForce() --> float");
		cl.def("SetMinBreakForce", (void (VelcroPickup::*)(float)) &VelcroPickup::SetMinBreakForce, "C++: VelcroPickup::SetMinBreakForce(float) --> void", "newMinBreakForce"_a);
		cl.def("GetMinBreakTime", (float (VelcroPickup::*)()) &VelcroPickup::GetMinBreakTime, "C++: VelcroPickup::GetMinBreakTime() --> float");
		cl.def("SetMinBreakTime", (void (VelcroPickup::*)(float)) &VelcroPickup::SetMinBreakTime, "C++: VelcroPickup::SetMinBreakTime(float) --> void", "newMinBreakTime"_a);
		cl.def("GetCheckLastTouchRate", (float (VelcroPickup::*)()) &VelcroPickup::GetCheckLastTouchRate, "C++: VelcroPickup::GetCheckLastTouchRate() --> float");
		cl.def("SetCheckLastTouchRate", (void (VelcroPickup::*)(float)) &VelcroPickup::SetCheckLastTouchRate, "C++: VelcroPickup::SetCheckLastTouchRate(float) --> void", "newCheckLastTouchRate"_a);
		cl.def("GetWeldedBall", (class BallWrapper (VelcroPickup::*)()) &VelcroPickup::GetWeldedBall, "C++: VelcroPickup::GetWeldedBall() --> class BallWrapper");
		cl.def("SetWeldedBall", (void (VelcroPickup::*)(class BallWrapper)) &VelcroPickup::SetWeldedBall, "C++: VelcroPickup::SetWeldedBall(class BallWrapper) --> void", "newWeldedBall"_a);
		cl.def("GetOldBallMass", (float (VelcroPickup::*)()) &VelcroPickup::GetOldBallMass, "C++: VelcroPickup::GetOldBallMass() --> float");
		cl.def("SetOldBallMass", (void (VelcroPickup::*)(float)) &VelcroPickup::SetOldBallMass, "C++: VelcroPickup::SetOldBallMass(float) --> void", "newOldBallMass"_a);
		cl.def("GetAttachTime", (float (VelcroPickup::*)()) &VelcroPickup::GetAttachTime, "C++: VelcroPickup::GetAttachTime() --> float");
		cl.def("SetAttachTime", (void (VelcroPickup::*)(float)) &VelcroPickup::SetAttachTime, "C++: VelcroPickup::SetAttachTime(float) --> void", "newAttachTime"_a);
		cl.def("GetLastTouchCheckTime", (float (VelcroPickup::*)()) &VelcroPickup::GetLastTouchCheckTime, "C++: VelcroPickup::GetLastTouchCheckTime() --> float");
		cl.def("SetLastTouchCheckTime", (void (VelcroPickup::*)(float)) &VelcroPickup::SetLastTouchCheckTime, "C++: VelcroPickup::SetLastTouchCheckTime(float) --> void", "newLastTouchCheckTime"_a);
		cl.def("GetBreakTime", (float (VelcroPickup::*)()) &VelcroPickup::GetBreakTime, "C++: VelcroPickup::GetBreakTime() --> float");
		cl.def("SetBreakTime", (void (VelcroPickup::*)(float)) &VelcroPickup::SetBreakTime, "C++: VelcroPickup::SetBreakTime(float) --> void", "newBreakTime"_a);
		cl.def("DoBreak", (void (VelcroPickup::*)()) &VelcroPickup::DoBreak, "C++: VelcroPickup::DoBreak() --> void");
		cl.def("HandleCarTouch", (void (VelcroPickup::*)(class BallWrapper, class CarWrapper, unsigned char)) &VelcroPickup::HandleCarTouch, "C++: VelcroPickup::HandleCarTouch(class BallWrapper, class CarWrapper, unsigned char) --> void", "InBall"_a, "InCar"_a, "HitType"_a);
		cl.def("PickupEnd", (void (VelcroPickup::*)()) &VelcroPickup::PickupEnd, "C++: VelcroPickup::PickupEnd() --> void");
		cl.def("OnBallHit", (void (VelcroPickup::*)()) &VelcroPickup::OnBallHit, "C++: VelcroPickup::OnBallHit() --> void");
		cl.def("PickupStart", (void (VelcroPickup::*)()) &VelcroPickup::PickupStart, "C++: VelcroPickup::PickupStart() --> void");
	}
}
