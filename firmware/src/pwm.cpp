#include "pwm.h"
#include <Arduino.h>

#define PINO_IN1 13
#define PINO_IN2 16

void setupPwm() {
   pinMode(PINO_IN1, OUTPUT);
   pinMode(PINO_IN2, OUTPUT);
}

void loopPwm() {
   int valor_pwm = 0; 

   for (valor_pwm = 0; valor_pwm < 256; valor_pwm++) {
       analogWrite(PINO_IN1, valor_pwm);
       delay(100);
 }

   for (valor_pwm = 225; valor_pwm >= 0; valor_pwm--) {
       analogWrite(PINO_IN1, valor_pwm);
       delay(100);
   }

   for (valor_pwm = 0; valor_pwm < 256; valor_pwm++) {
       analogWrite(PINO_IN2, valor_pwm);
       delay(100);
   }

   for (valor_pwm = 225; valor_pwm >= 0; valor_pwm--) {
       analogWrite(PINO_IN2, valor_pwm);
       delay(100);
   }
}