#include "motors.h"
#include <Arduino.h>

//int motor1_IN1 = 32;
//int motor1_IN2 = 35;

//int motor2_IN3 = 34;
//int motor2_IN4 = vn; ?

int motor3_IN1 = 33;
int motor3_IN2 = 25;

int motor4_IN3 = 26;
int motor4_IN4 = 27;

void setupMotors() {
    pinMode(motor3_IN1, OUTPUT);
    pinMode(motor3_IN2, OUTPUT);
    pinMode(motor4_IN3, OUTPUT);
    pinMode(motor4_IN4, OUTPUT);

}

void loopMotors() {
    digitalWrite(motor3_IN1, HIGH);
    digitalWrite(motor3_IN2, LOW);

    digitalWrite(motor4_IN3, HIGH);
    digitalWrite(motor4_IN4, LOW);

    while (true); 

}