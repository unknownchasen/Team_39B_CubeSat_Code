#pragma config(Motor,  port2,           RightBack, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           RightFront, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           LeftBack,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           LeftFront, tmotorVex393_MC29, openLoop)

#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"

void map(TVexJoysticks input, tMotor output){
	if (abs(vexRT[input]) > 10)
	 {
	 	motor[output] = vexRT[input];
	}
	else
	{
		motor[output] = 0;
	}
}

/*void pre_auton()
{

}

task autonomous()
{

}*/


task usercontrol()
{
	while (true)
	{
		map(Ch2,RightBack);
		map(Ch2,RightFront);

		map(Ch3,LeftBack);
		map(Ch3,LeftFront);
	}
}
