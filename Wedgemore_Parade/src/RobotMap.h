/*
 * RobotMap.h
 *
 *  Created on: Feb 13, 2016
 *      Author: Win7
 */

#ifndef SRC_ROBOTMAP_H_
#define SRC_ROBOTMAP_H_


enum GameController {
	SHOOT =3,
	SPINUP = 6,
	SHOOTER_UP =5,
	SHOOTER_DOWN=2,
	RIGHT_JOYSTICK=5,
	LEFT_JOYSTICK=1,
	ESTOP1=7,
	ESTOP2=8

};

enum DIOMap {
	AIM_LIGHT = 9,
	RUN_GUN_LIGHT = 8
};
enum SolenoidMap {
	FRONTLEFTSOL,
	FRONTRIGHTSOL,
	BACKLEFTSOL,
	BACKRIGHTSOL,
	SHOOTERSOL = 7,
	CHARGEYUPPY = 6,
};

enum CANTalonMap {
	RIGHTDRIVE1,
	RIGHTDRIVE2,
	LEFTDRIVE1,
	LEFTDRIVE2,
	LIFT,
	SHOOT1,
	SHOOT2,
};
#endif /* SRC_ROBOTMAP_H_ */
