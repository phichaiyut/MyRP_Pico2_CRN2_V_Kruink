#include "Buzzer.h"
#include "Sensor.h"
#include "Motor.h"
#include "Pid.h"
#include "Pico2_Servo.h"
#include "Pico2_BMI160.h"
#include "Pico2_Marco.h"



void sw(){
MotorStop();
robot.sw();
}