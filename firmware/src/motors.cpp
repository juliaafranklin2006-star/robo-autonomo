#include "motors.h"
#include <Arduino.h>

int motor1_IN1 = 32;
int motor1_IN2 = 33;

int motor2_IN1 = 27;
int motor2_IN2 = 14;

void setupMotors() {
    pinMode(motor1_IN1, OUTPUT);
    pinMode(motor1_IN2, OUTPUT);
    pinMode(motor2_IN1, OUTPUT);
    pinMode(motor2_IN2, OUTPUT);

}

void loopMotors() {
    digitalWrite(motor1_IN1, HIGH);
    digitalWrite(motor1_IN2, LOW);

    digitalWrite(motor2_IN1, HIGH);
    digitalWrite(motor2_IN2, LOW);

    while (true); 

}