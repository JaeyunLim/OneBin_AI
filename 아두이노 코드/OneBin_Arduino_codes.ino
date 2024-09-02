#include <Arduino.h>

int motorA_A1 = 9, motorA_B1 = 10;
int motorB_A1 = 5, motorB_B1 = 6;

bool motors_started = false;

void setup() {
  pinMode(motorA_A1, OUTPUT);
  pinMode(motorA_B1, OUTPUT);
  pinMode(motorB_A1, OUTPUT);
  pinMode(motorB_B1, OUTPUT);
  Serial.begin(9600);  

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n'); 
    if (command == "1" && !motors_started) {  
      runMotors_1();  
      motors_started = true;

    } else if (command == "2" && !motors_started ) {
      runMotors_2();  
      motors_started = true;
      

    } else if (command == "3" && !motors_started ) {
      runMotors_3();  
      motors_started = true;

    } else if (command == "0" && motors_started) {  
      stopMotors();  
      motors_started = false;

    }
  }
}




void stopMotors() {
  analogWrite(motorA_A1, 0);
  analogWrite(motorA_B1, 0);
  analogWrite(motorB_A1, 0);
  analogWrite(motorB_B1, 0);
}



void runMotors_1() {
  analogWrite(motorA_A1, 255);
  analogWrite(motorA_B1, 0);
  analogWrite(motorB_A1, 0);
  analogWrite(motorB_B1, 0);
  delay(24000);
  
  analogWrite(motorA_A1, 0);
  analogWrite(motorA_B1, 0);
  analogWrite(motorB_A1, 255);
  analogWrite(motorB_B1, 0);
  delay(4500);

  analogWrite(motorA_A1, 0);
  analogWrite(motorA_B1, 0);
  analogWrite(motorB_A1, 0);
  analogWrite(motorB_B1, 255);
  delay(10000);

  analogWrite(motorA_A1, 0);
  analogWrite(motorA_B1, 255);
  analogWrite(motorB_A1, 0);
  analogWrite(motorB_B1, 0);
  delay(24000);

  stopMotors();
}
void runMotors_2() {
  
  analogWrite(motorA_A1, 0);
  analogWrite(motorA_B1, 0);
  analogWrite(motorB_A1, 255);
  analogWrite(motorB_B1, 0);
  delay(4500);

  analogWrite(motorA_A1, 0);
  analogWrite(motorA_B1, 0);
  analogWrite(motorB_A1, 0);
  analogWrite(motorB_B1, 255);
  delay(10000);

  stopMotors();
}

void runMotors_3() {
  analogWrite(motorA_A1, 0);
  analogWrite(motorA_B1, 255);
  analogWrite(motorB_A1, 0);
  analogWrite(motorB_B1, 0);
  delay(18000);
  
  analogWrite(motorA_A1, 0);
  analogWrite(motorA_B1, 0);
  analogWrite(motorB_A1, 255);
  analogWrite(motorB_B1, 0);
  delay(4000);

  analogWrite(motorA_A1, 0);
  analogWrite(motorA_B1, 0);
  analogWrite(motorB_A1, 0);
  analogWrite(motorB_B1, 255);
  delay(9000);

  analogWrite(motorA_A1, 255);
  analogWrite(motorA_B1, 0);
  analogWrite(motorB_A1, 0);
  analogWrite(motorB_B1, 0);
  delay(18000);

  stopMotors();
}