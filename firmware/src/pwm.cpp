#include "pwm.h"
#include <Arduino.h>

int ENA1 = 26;
int ENB1 = 25;
int ENA2 = 13;
int ENB2 = 23;

void setupPwm() {
   pinMode(ENA1, OUTPUT);
   pinMode(ENB1, OUTPUT);
   pinMode(ENA2, OUTPUT);
   pinMode(ENB2, OUTPUT);
}

void loopPwm() {
   int pwm = 0; 

   for (pwm = 0; pwm < 256; pwm++) {
       analogWrite(ENA1, pwm);
       delay(100);
    }

   for (pwm = 225; pwm >= 0; pwm--) {
       analogWrite(ENA1, pwm);
       delay(100);
   }

   for (pwm = 0; pwm < 256; pwm++) {
       analogWrite(ENB1, pwm);
       delay(100);
   }

   for (pwm = 225; pwm >= 0; pwm--) {
       analogWrite(ENB1, pwm);
       delay(100);
   }

   for (pwm = 0; pwm < 256; pwm++) {
       analogWrite(ENA2, pwm);
       delay(100);
    }

   for (pwm = 225; pwm >= 0; pwm--) {
       analogWrite(ENA2, pwm);
       delay(100);
   }

   for (pwm = 0; pwm < 256; pwm++) {
       analogWrite(ENB2, pwm);
       delay(100);
   }

   for (pwm = 225; pwm >= 0; pwm--) {
       analogWrite(ENB2, pwm);
       delay(100);
   }
}