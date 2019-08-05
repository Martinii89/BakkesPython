#include "pch.h"
#include <sstream> // __str__


void bind_unknown_unknown(py::module &M)
{
	// ToastType file: line:15
	pybind11::enum_<ToastType>(M, "ToastType", pybind11::arithmetic(), "")
		.value("ToastType_Info", ToastType::ToastType_Info)
		.value("ToastType_OK", ToastType::ToastType_OK)
		.value("ToastType_Warning", ToastType::ToastType_Warning)
		.value("ToastType_Error", ToastType::ToastType_Error)
		.export_values();

;

	{ // Vector file: line:27
		pybind11::class_<Vector, std::shared_ptr<Vector>> cl(M, "Vector");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<float, float, float>(), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z") );

		cl.def( pybind11::init<float>(), pybind11::arg("def") );

		cl.def( pybind11::init( [](){ return new Vector(); } ) );
		cl.def( pybind11::init( [](Vector const &o){ return new Vector(o); } ) );
		cl.def_readwrite("X", &Vector::X);
		cl.def_readwrite("Y", &Vector::Y);
		cl.def_readwrite("Z", &Vector::Z);
		cl.def("__add__", (struct Vector (Vector::*)(struct Vector)) &Vector::operator+, "C++: Vector::operator+(struct Vector) --> struct Vector", "v2"_a);
		cl.def("__mul__", (struct Vector (Vector::*)(struct Vector)) &Vector::operator*, "C++: Vector::operator*(struct Vector) --> struct Vector", "v2"_a);
		cl.def("__sub__", (struct Vector (Vector::*)(struct Vector)) &Vector::operator-, "C++: Vector::operator-(struct Vector) --> struct Vector", "v2"_a);
		cl.def("__div__", (struct Vector (Vector::*)(struct Vector)) &Vector::operator/, "C++: Vector::operator/(struct Vector) --> struct Vector", "v2"_a);
		cl.def("magnitude", (float (Vector::*)()) &Vector::magnitude, "C++: Vector::magnitude() --> float");
		cl.def("normalize", (void (Vector::*)()) &Vector::normalize, "C++: Vector::normalize() --> void");
		cl.def("clone", (struct Vector (Vector::*)()) &Vector::clone, "C++: Vector::clone() --> struct Vector");
		cl.def_static("dot", (float (*)(struct Vector, struct Vector)) &Vector::dot, "C++: Vector::dot(struct Vector, struct Vector) --> float", "v1"_a, "v2"_a);
		cl.def_static("cross", (struct Vector (*)(struct Vector, struct Vector)) &Vector::cross, "C++: Vector::cross(struct Vector, struct Vector) --> struct Vector", "v1"_a, "v2"_a);
		cl.def_static("lerp", (struct Vector (*)(struct Vector, struct Vector, float)) &Vector::lerp, "C++: Vector::lerp(struct Vector, struct Vector, float) --> struct Vector", "v1"_a, "v2"_a, "t"_a);
		cl.def_static("slerp", (struct Vector (*)(struct Vector, struct Vector, float)) &Vector::slerp, "C++: Vector::slerp(struct Vector, struct Vector, float) --> struct Vector", "v1"_a, "v2"_a, "t"_a);
	}
	{ // PredictionInfo file: line:124
		pybind11::class_<PredictionInfo, std::shared_ptr<PredictionInfo>> cl(M, "PredictionInfo");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new PredictionInfo(); } ) );
		cl.def_readwrite("Time", &PredictionInfo::Time);
		cl.def_readwrite("ArchTopTime", &PredictionInfo::ArchTopTime);
		cl.def_readwrite("Location", &PredictionInfo::Location);
		cl.def_readwrite("Velocity", &PredictionInfo::Velocity);
		cl.def_readwrite("ArchTop", &PredictionInfo::ArchTop);
		cl.def_readwrite("ArchTopVelocity", &PredictionInfo::ArchTopVelocity);
		cl.def_property_readonly("bHitWall", [](const PredictionInfo& c){return c.bHitWall;});
		cl.def_property_readonly("bHitGround", [](const PredictionInfo& c){return c.bHitGround;});
	}
	// fixRotator(float) file: line:137
	M.def("fixRotator", (float (*)(float)) &fixRotator, "C++: fixRotator(float) --> float", "newRotation"_a);

	{ // SteamID file: line:152
		pybind11::class_<SteamID, std::shared_ptr<SteamID>> cl(M, "SteamID");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new SteamID(); } ) );
		cl.def_readwrite("ID", &SteamID::ID);
	}
	{ // SkillRating file: line:157
		pybind11::class_<SkillRating, std::shared_ptr<SkillRating>> cl(M, "SkillRating");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new SkillRating(); } ) );
		cl.def_readwrite("Mu", &SkillRating::Mu);
		cl.def_readwrite("Sigma", &SkillRating::Sigma);
	}
	{ // LinearColor file: line:162
		pybind11::class_<LinearColor, std::shared_ptr<LinearColor>> cl(M, "LinearColor");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new LinearColor(); } ) );
		cl.def_readwrite("R", &LinearColor::R);
		cl.def_readwrite("G", &LinearColor::G);
		cl.def_readwrite("B", &LinearColor::B);
		cl.def_readwrite("A", &LinearColor::A);
	}
	// fixPitch(float) file: line:170
	M.def("fixPitch", (float (*)(float)) &fixPitch, "C++: fixPitch(float) --> float", "newRotation"_a);

	{ // ControllerInput file: line:186
		pybind11::class_<ControllerInput, std::shared_ptr<ControllerInput>> cl(M, "ControllerInput");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new ControllerInput(); } ) );
		cl.def_readwrite("Throttle", &ControllerInput::Throttle);
		cl.def_readwrite("Steer", &ControllerInput::Steer);
		cl.def_readwrite("Pitch", &ControllerInput::Pitch);
		cl.def_readwrite("Yaw", &ControllerInput::Yaw);
		cl.def_readwrite("Roll", &ControllerInput::Roll);
		cl.def_readwrite("DodgeForward", &ControllerInput::DodgeForward);
		cl.def_readwrite("DodgeStrafe", &ControllerInput::DodgeStrafe);
		cl.def_property_readonly("Jump", [](const ControllerInput& c){return c.Jump;});
		cl.def_property_readonly("ActivateBoost", [](const ControllerInput& c){return c.ActivateBoost;});
		cl.def_property_readonly("HoldingBoost", [](const ControllerInput& c){return c.HoldingBoost;});
		cl.def_property_readonly("Handbrake", [](const ControllerInput& c){return c.Handbrake;});
		cl.def_property_readonly("Jumped", [](const ControllerInput& c){return c.Jumped;});
	}
	{ // RecordedSample file: line:201
		pybind11::class_<RecordedSample, std::shared_ptr<RecordedSample>> cl(M, "RecordedSample");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new RecordedSample(); } ) );
		cl.def_readwrite("Low", &RecordedSample::Low);
		cl.def_readwrite("High", &RecordedSample::High);
	}
	{ // Rotator file: line:209
		pybind11::class_<Rotator, std::shared_ptr<Rotator>> cl(M, "Rotator");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<int, int, int>(), pybind11::arg("pitch"), pybind11::arg("yaw"), pybind11::arg("roll") );

		cl.def( pybind11::init<int>(), pybind11::arg("def") );

		cl.def( pybind11::init( [](){ return new Rotator(); } ) );
		cl.def( pybind11::init( [](Rotator const &o){ return new Rotator(o); } ) );
		cl.def_readwrite("Pitch", &Rotator::Pitch);
		cl.def_readwrite("Yaw", &Rotator::Yaw);
		cl.def_readwrite("Roll", &Rotator::Roll);
		cl.def("__add__", (struct Rotator (Rotator::*)(struct Rotator)) &Rotator::operator+, "C++: Rotator::operator+(struct Rotator) --> struct Rotator", "v2"_a);
		cl.def("__mul__", (struct Rotator (Rotator::*)(struct Rotator)) &Rotator::operator*, "C++: Rotator::operator*(struct Rotator) --> struct Rotator", "v2"_a);
		cl.def("__sub__", (struct Rotator (Rotator::*)(struct Rotator)) &Rotator::operator-, "C++: Rotator::operator-(struct Rotator) --> struct Rotator", "v2"_a);
		cl.def("__div__", (struct Rotator (Rotator::*)(struct Rotator)) &Rotator::operator/, "C++: Rotator::operator/(struct Rotator) --> struct Rotator", "v2"_a);
	}
	{ // POV file: line:237
		pybind11::class_<POV, std::shared_ptr<POV>> cl(M, "POV");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new POV(); } ) );
		cl.def_readwrite("location", &POV::location);
		cl.def_readwrite("rotation", &POV::rotation);
		cl.def_readwrite("FOV", &POV::FOV);
	}
	{ // UnrealColor file: line:244
		pybind11::class_<UnrealColor, std::shared_ptr<UnrealColor>> cl(M, "UnrealColor");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new UnrealColor(); } ) );
		cl.def_readwrite("B", &UnrealColor::B);
		cl.def_readwrite("G", &UnrealColor::G);
		cl.def_readwrite("R", &UnrealColor::R);
		cl.def_readwrite("A", &UnrealColor::A);
	}
	{ // ViewTarget file: line:253
		pybind11::class_<ViewTarget, std::shared_ptr<ViewTarget>> cl(M, "ViewTarget");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new ViewTarget(); } ) );
		cl.def_readwrite("POV", &ViewTarget::POV);
		cl.def_readwrite("AspectRatio", &ViewTarget::AspectRatio);
	}
	{ // Vector2 file: line:261
		pybind11::class_<Vector2, std::shared_ptr<Vector2>> cl(M, "Vector2");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Vector2(); } ) );
		cl.def_readwrite("X", &Vector2::X);
		cl.def_readwrite("Y", &Vector2::Y);
		cl.def("minus", (struct Vector2 (Vector2::*)(struct Vector2)) &Vector2::minus, "C++: Vector2::minus(struct Vector2) --> struct Vector2", "other"_a);
	}
	{ // Vector2F file: line:270
		pybind11::class_<Vector2F, std::shared_ptr<Vector2F>> cl(M, "Vector2F");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new Vector2F(); } ) );
		cl.def_readwrite("X", &Vector2F::X);
		cl.def_readwrite("Y", &Vector2F::Y);
		cl.def("minus", (struct Vector2F (Vector2F::*)(struct Vector2)) &Vector2F::minus, "C++: Vector2F::minus(struct Vector2) --> struct Vector2F", "other"_a);
	}
	{ // ProfileCameraSettings file: line:279
		pybind11::class_<ProfileCameraSettings, std::shared_ptr<ProfileCameraSettings>> cl(M, "ProfileCameraSettings");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new ProfileCameraSettings(); } ) );
		cl.def_readwrite("FOV", &ProfileCameraSettings::FOV);
		cl.def_readwrite("Height", &ProfileCameraSettings::Height);
		cl.def_readwrite("Pitch", &ProfileCameraSettings::Pitch);
		cl.def_readwrite("Distance", &ProfileCameraSettings::Distance);
		cl.def_readwrite("Stiffness", &ProfileCameraSettings::Stiffness);
		cl.def_readwrite("SwivelSpeed", &ProfileCameraSettings::SwivelSpeed);
		cl.def_readwrite("TransitionSpeed", &ProfileCameraSettings::TransitionSpeed);
	}
	// VectorToRotator(struct Vector) file: line:292
	M.def("VectorToRotator", (struct Rotator (*)(struct Vector)) &VectorToRotator, "C++: VectorToRotator(struct Vector) --> struct Rotator", "vVector"_a);

	// RotatorToVector(struct Rotator) file: line:303
	M.def("RotatorToVector", (struct Vector (*)(struct Rotator)) &RotatorToVector, "C++: RotatorToVector(struct Rotator) --> struct Vector", "R"_a);

	// CARBODY file: line:315
	pybind11::enum_<CARBODY>(M, "CARBODY", pybind11::arithmetic(), "")
		.value("CAR_BACKFIRE", CARBODY::CAR_BACKFIRE)
		.value("CAR_BREAKOUT", CARBODY::CAR_BREAKOUT)
		.value("CAR_BREAKOUTTYPES", CARBODY::CAR_BREAKOUTTYPES)
		.value("CAR_OCTANE", CARBODY::CAR_OCTANE)
		.value("CAR_OCTANEZSR", CARBODY::CAR_OCTANEZSR)
		.value("CAR_PALADIN", CARBODY::CAR_PALADIN)
		.value("CAR_ROADHOG", CARBODY::CAR_ROADHOG)
		.value("CAR_ROADHOGXL", CARBODY::CAR_ROADHOGXL)
		.value("CAR_GIZMO", CARBODY::CAR_GIZMO)
		.value("CAR_SWEETTOOTH", CARBODY::CAR_SWEETTOOTH)
		.value("CAR_XDEVIL", CARBODY::CAR_XDEVIL)
		.value("CAR_XDEVILMK2", CARBODY::CAR_XDEVILMK2)
		.value("CAR_HOTSHOT", CARBODY::CAR_HOTSHOT)
		.value("CAR_MERC", CARBODY::CAR_MERC)
		.value("CAR_VENOM", CARBODY::CAR_VENOM)
		.value("CAR_TAKUMI", CARBODY::CAR_TAKUMI)
		.value("CAR_TAKUMIRXT", CARBODY::CAR_TAKUMIRXT)
		.value("CAR_DOMINUS", CARBODY::CAR_DOMINUS)
		.value("CAR_DOMINUSGT", CARBODY::CAR_DOMINUSGT)
		.value("CAR_SCARAB", CARBODY::CAR_SCARAB)
		.value("CAR_ZIPPY", CARBODY::CAR_ZIPPY)
		.value("CAR_DELOREAN", CARBODY::CAR_DELOREAN)
		.value("CAR_RIPPER", CARBODY::CAR_RIPPER)
		.value("CAR_GROG", CARBODY::CAR_GROG)
		.value("CAR_ARMADILLO", CARBODY::CAR_ARMADILLO)
		.value("CAR_WARTHOG", CARBODY::CAR_WARTHOG)
		.value("CAR_BATMOBILE", CARBODY::CAR_BATMOBILE)
		.value("CAR_MASAMUNE", CARBODY::CAR_MASAMUNE)
		.value("CAR_MARAUDER", CARBODY::CAR_MARAUDER)
		.value("CAR_AFTERSHOCK", CARBODY::CAR_AFTERSHOCK)
		.value("CAR_ESPER", CARBODY::CAR_ESPER)
		.value("CAR_PROTEUS", CARBODY::CAR_PROTEUS)
		.value("CAR_TRITON", CARBODY::CAR_TRITON)
		.value("CAR_VULCAN", CARBODY::CAR_VULCAN)
		.value("CAR_TWINMILL", CARBODY::CAR_TWINMILL)
		.value("CAR_BONESHAKER", CARBODY::CAR_BONESHAKER)
		.value("CAR_ENDO", CARBODY::CAR_ENDO)
		.value("CAR_ICECHARGER", CARBODY::CAR_ICECHARGER)
		.value("CAR_MANTIS", CARBODY::CAR_MANTIS)
		.value("CAR_JOGER619RS", CARBODY::CAR_JOGER619RS)
		.value("CAR_CENTIO", CARBODY::CAR_CENTIO)
		.value("CAR_ANIMUSGP", CARBODY::CAR_ANIMUSGP)
		.export_values();

;

	{ // Quat file: line:360
		pybind11::class_<Quat, std::shared_ptr<Quat>> cl(M, "Quat");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<float, float, float, float>(), pybind11::arg("w"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z") );

		cl.def( pybind11::init( [](){ return new Quat(); } ) );
		cl.def( pybind11::init( [](Quat const &o){ return new Quat(o); } ) );
		cl.def_readwrite("X", &Quat::X);
		cl.def_readwrite("Y", &Quat::Y);
		cl.def_readwrite("Z", &Quat::Z);
		cl.def_readwrite("W", &Quat::W);
		cl.def("conjugate", (struct Quat (Quat::*)()) &Quat::conjugate, "C++: Quat::conjugate() --> struct Quat");
		cl.def("__mul__", (struct Quat (Quat::*)(struct Quat)) &Quat::operator*, "C++: Quat::operator*(struct Quat) --> struct Quat", "q2"_a);
	}
	{ // RBState file: line:396
		pybind11::class_<RBState, std::shared_ptr<RBState>> cl(M, "RBState");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new RBState(); } ) );
		cl.def_readwrite("Quaternion", &RBState::Quaternion);
		cl.def_readwrite("Location", &RBState::Location);
		cl.def_readwrite("LinearVelocity", &RBState::LinearVelocity);
		cl.def_readwrite("AngularVelocity", &RBState::AngularVelocity);
		cl.def_readwrite("Time", &RBState::Time);
		cl.def_property_readonly("bSleeping", [](const RBState& c){return c.bSleeping;});
		cl.def_property_readonly("bNewData", [](const RBState& c){return c.bNewData;});
	}
	{ // WorldContactData file: line:407
		pybind11::class_<WorldContactData, std::shared_ptr<WorldContactData>> cl(M, "WorldContactData");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new WorldContactData(); } ) );
		cl.def_property_readonly("bHasContact", [](const WorldContactData& c){return c.bHasContact;});
		cl.def_readwrite("Location", &WorldContactData::Location);
		cl.def_readwrite("Velocity", &WorldContactData::Velocity);
		cl.def_readwrite("Normal", &WorldContactData::Normal);
	}
	{ // StickyForceData file: line:417
		pybind11::class_<StickyForceData, std::shared_ptr<StickyForceData>> cl(M, "StickyForceData");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new StickyForceData(); } ) );
		cl.def_readwrite("Ground", &StickyForceData::Ground);
		cl.def_readwrite("Wall", &StickyForceData::Wall);
	}
	{ // WheelContactData file: line:422
		pybind11::class_<WheelContactData, std::shared_ptr<WheelContactData>> cl(M, "WheelContactData");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new WheelContactData(); } ) );
		cl.def_property_readonly("bHasContact", [](const WheelContactData& c){return c.bHasContact;});
		cl.def_property_readonly("bHasContactWithWorldGeometry", [](const WheelContactData& c){return c.bHasContactWithWorldGeometry;});
		cl.def_readwrite("HasContactChangeTime", &WheelContactData::HasContactChangeTime);
		cl.def_readwrite("Location", &WheelContactData::Location);
		cl.def_readwrite("Normal", &WheelContactData::Normal);
		cl.def_readwrite("LatDirection", &WheelContactData::LatDirection);
		cl.def_readwrite("LongDirection", &WheelContactData::LongDirection);
	}
}
