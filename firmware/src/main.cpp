#include "motors.h"
#include "sensors.h"
#include "pwm.h"

void setup() {
    setupMotors();
    // setupSensors();
    // setupPwm();
}

void loop() {
    loopMotors();
    // setupSensors();
    // setupPwm();
}