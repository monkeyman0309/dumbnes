/*
 * UserInterface.cpp
 *
 *  Created on: Jan 20, 2016
 *      Author: James
 */

#include <UserInterface.h>
#include "RobotMap.h"
//The Robot's name is "Wedgemore"

UserInterface::UserInterface() :
		m_controller(0)
{
}

UserInterface::~UserInterface()
{

}
void UserInterface::Init(WedgemoreUserInput *wui) {
	wui->DropFR = false, wui->DropFL = false, wui->DropBR = false, wui->DropBL = false;
	wui->LeftSpeed = 0.0, wui->RightSpeed = 0.0;
	wui->RightTrigger = 0;
	wui->LeftTrigger = 0;
	wui->LiftSpeed = 0;
	wui->SliderValue = 0;
	wui->Shoot = false, wui->Pickup = false;
	wui->SpinUp = false, wui->SpinUpLow = false;
	wui->ReverseDrive = false;
	wui->StartPosition = false;
	wui->AutoTrack = false;
	wui->PickupPos = false;
	wui->Zero = false;
	wui->Custom = false;
	wui->ShooterDown = false;
	wui->ShooterUp = false;
	wui->BatterHiGoal = false;
	wui->DefenseHiGoal = false;
	wui->LimitShoot = false;
	wui->SpeedMode = false;
	wui->VBusMode = false;
	wui->MidHiGoal = false;
	wui->RunGunLight = false;
	wui->eStop1 = false;
	wui->eStop2 = false;
}

void UserInterface::GetControllerValues(WedgemoreUserInput *wui){
	wui->LeftSpeed = m_controller.GetRawAxis(LEFT_JOYSTICK);
	wui->RightSpeed = m_controller.GetRawAxis(RIGHT_JOYSTICK);
	wui->LeftTrigger = m_controller.GetRawAxis(SHOOTER_DOWN);
	wui->RightTrigger = m_controller.GetRawAxis(SHOOT);
	wui->YawValue = 0;

	wui->ShooterUp = m_controller.GetRawButton(SHOOTER_UP);

	if (wui->LeftTrigger>=0.5){
		wui->ShooterDown = true;
	}
	else {
		wui->ShooterDown = false;
	}
	if (wui->RightTrigger>=0.5){
		wui->Shoot = true;
	}
	else {
			wui->Shoot = false;
	}

	wui->SpinUp = m_controller.GetRawButton(SPINUP);
	wui->eStop1 = m_controller.GetRawButton(ESTOP1);
	wui->eStop2 = m_controller.GetRawButton(ESTOP2);
}


void UserInterface::GetData(WedgemoreUserInput *wui)
{
	wui->DropFR = false, wui->DropFL = false, wui->DropBR = false, wui->DropBL = false;
	GetControllerValues(wui);

}
