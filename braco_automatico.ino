//Braco Robotico com rotina, com 4 servos
// Usou-se um shield

#include <Servo.h>

// Define servo motor pins
const int servo1Pin = 11; //base
const int servo2Pin = 10; //direito
const int servo3Pin = 9; //esquerdo
const int servo4Pin = 3; //garra

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  servo3.attach(servo3Pin);
  servo4.attach(servo4Pin);
}

void garra(){
    for (int pos4 = 115; pos4 <= 155; pos4 += 1) {
    servo4.write(pos4);
    delay(30);
  }
  delay(2000);
  for (int pos4 = 155; pos4 >= 115; pos4 -= 1) {
    servo4.write(pos4);
    delay(30);
  }
}

void base(){
  for (int pos1 = 100; pos1 <= 170; pos1 += 1) {
    servo1.write(pos1);
    delay(20);
  }
  delay(2000);
    for (int pos1 = 170; pos1 >= 100; pos1 -= 1) {
    servo1.write(pos1);
    delay(20);
  }
  delay(2000); 
}


void loop() {

  base();

  //esticar
  for (int pos2 = 70; pos2 <= 140; pos2 += 1) {
    servo2.write(pos2);
    delay(20);
  }
  delay(1000);
  
  garra();

  //recolher
  for (int pos2 = 140; pos2 >= 70; pos2 -= 1) {
    servo2.write(pos2);
    delay(20);
  }
  delay(1000);
}
