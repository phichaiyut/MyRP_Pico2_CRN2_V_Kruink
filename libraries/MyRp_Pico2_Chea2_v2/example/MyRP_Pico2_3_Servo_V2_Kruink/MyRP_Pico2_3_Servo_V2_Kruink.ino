#include <MyRP_Pico2.h>
MyRP_Pico2 robot;
#include <MyRp_Pico2_Chea_v2.h>
//----------------------------------------------------------------------------->> ตั้งค่ามือจับ
int servo_down = 55;    //-------------------->> ตั้งค่า มื่อจับลงขนานกับพื้น
int servoL_open = 120;  //-------------------->> ตั้งค่า กางฝ่ามือด้านซ้าย
int servoR_open = 120;  //-------------------->> ตั้งค่า กางฝ่ามือด้านขวา
//----------------------------------------------------------------------------->> ตั้งค่ามือจับ
//----------------------------------------------------------------------------->> ตั้งค่ามือจับ

void setup() {
  robot.begin();
  set_motor();
  Setting();
  //_______________
  S0_trim(0); //ตั้งค่าองศา แขนด้านขวา
  S1_trim(0); //ตั้งค่าองศา ขึ้น - ลง
  S10_trim(0); //ตั้งค่าองศา แขนด้านซ้าย
  S28_trim(0);
  //__________________
  arm_down_open();
  // arm_up_open();
  // arm_down_open();
  arm_up_close();


  sw();
  delay(200);

  // SetRobotAngle() ;
  // SerialServoControl(); // 0 10 1 ตั้งค่าเซอร์โวผ่าน serial
  Mission();

  MotorStop();
}

void loop() {
  // HoldAngle();
  Serial.println(gyroZ());
  sw();
  delay(200);
  // SetRobotAngle() ;
  // SerialServoControl(); // 0 10 1 ตั้งค่าเซอร์โวผ่าน serial
  Mission();
}
