#include <Servo.h>

#define shoulder_1 190
#define shoulder_2 130

#define servo1_min 90
#define servo1_max 90

#define servo2_min 145
#define servo2_max 35

#define servo3_min 156
#define servo3_max 35

#define servo4_min 0
#define servo4_max 180

#define servo5_min 155
#define servo5_max 31

#define servo6_min 0
#define servo6_max 180

#define servo7_min 90 
#define servo7_max 90

Servo 
  servo_axis_1,
  servo_axis_2,
  servo_axis_3,
  servo_axis_4,
  servo_axis_5,
  servo_axis_6,
  servo_axis_7;
  


float
  coordinate_x = 90,
  coordinate_y = 90;

float
  joint_1 = 90,
  joint_2 = 90,
  joint_3 = 90,
  joint_4 = 135,
  joint_5 = 90,
  joint_6 = 90,
  joint_7 = 90;
  
void setup() {

  //servo_axis_1.attach(4);
  servo_axis_2.attach(5);
  servo_axis_3.attach(6);
  servo_axis_4.attach(7);
  servo_axis_5.attach(8);
  servo_axis_6.attach(9);
  //servo_axis_7.attach(10);

  Serial.begin(9600);
  servo_axis_2.write(89);
  servo_axis_3.write(95);
  servo_axis_4.write(35);
  
}

void loop() {

//  Serial.print("podaj joint 1: ");
//  while(Serial.available()==0){
//     }
//      joint_1 = Serial.parseInt();
//      Serial.println(joint_1);
//      joint_1=map(joint_1, 0,270,servo1_min,servo1_max);
//      servo_axis_1.write(joint_1);
      
  Serial.print("podaj joint 2: ");
  while(Serial.available()==0){
     }
      joint_2 = Serial.parseInt();
      Serial.println(joint_2);
      joint_2=map(joint_2, 0,180,servo2_min,servo2_max);
      servo_axis_2.write(joint_2);
           
  Serial.print("podaj joint 3: ");
  while(Serial.available()==0){   
  }
      joint_3 = Serial.parseInt();
      Serial.println(joint_3);
      joint_3=map(joint_3, 0,180,servo3_min,servo3_max);
      servo_axis_3.write(joint_3);

  Serial.print("podaj joint 4: ");
  while(Serial.available()==0){
     }
      joint_4 = Serial.parseInt();
      Serial.println(joint_4);
      joint_4=map(joint_4, 0,270,servo4_min,servo4_max);
      servo_axis_4.write(joint_4);

  Serial.print("podaj joint 5: ");
  while(Serial.available()==0){
     }
      joint_5 = Serial.parseInt();
      Serial.println(joint_5);
      joint_5=map(joint_5, 0,180,servo5_min,servo5_max);
      servo_axis_5.write(joint_5);

  Serial.print("podaj joint 6: ");
  while(Serial.available()==0){
     }
      joint_6 = Serial.parseInt();
      Serial.println(joint_6);
      joint_6=map(joint_6, 0,270,servo6_min,servo6_max);
      servo_axis_6.write(joint_6);
}


void set_servo(float a, float b, float c, float d, float e, float f, float g) {

   //servo_axis_1.write(a);
   servo_axis_2.write(b);
   servo_axis_3.write(c);
   //servo_axis_4.write(d);
   //servo_axis_5.write(e);
   //servo_axis_6.write(f);
   //servo_axis_7.write(g);
}
