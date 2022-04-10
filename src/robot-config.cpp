#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
triport Expander = triport(PORT12);
controller Controller1 = controller(primary);
motor LeftDriveMotorA = motor(PORT3, ratio18_1, true);
motor LeftDriveMotorB = motor(PORT2, ratio18_1, true);
motor_group LeftDrive = motor_group(LeftDriveMotorA, LeftDriveMotorB);
motor RightDriveMotorA = motor(PORT7, ratio18_1, false);
motor RightDriveMotorB = motor(PORT8, ratio18_1, false);
motor_group RightDrive = motor_group(RightDriveMotorA, RightDriveMotorB);
motor LeftDriveUp = motor(PORT1, ratio18_1, false);
motor RightDriveUp = motor(PORT6, ratio18_1, true);
encoder TWLeft = encoder(Expander.C);
encoder TWRight = encoder(Expander.E);
encoder TWHorizontal = encoder(Expander.G);
motor FBLift = motor(PORT11, ratio36_1, true);
digital_out BackClamp = digital_out(Brain.ThreeWirePort.E);
digital_out BackTilter1 = digital_out(Brain.ThreeWirePort.F);
digital_out BackTilter2 = digital_out(Brain.ThreeWirePort.G);
rotation FBLiftRotation = rotation(PORT10, false);
inertial InertialSensor = inertial(PORT9);
distance FrontDistance = distance(PORT14);
digital_out FrontClamp = digital_out(Brain.ThreeWirePort.A);
motor Intake = motor(PORT17, ratio6_1, false);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}