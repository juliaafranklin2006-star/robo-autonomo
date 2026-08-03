#include "sensors.h"
#include <Arduino.h>

int trig = 18;
int echo = 36; //pino VP

// int trig = 19;
// int echo = 39; //pino VN

// int trig = 21;
// int echo = 34;


float distancia;
float distanciaLida;
float u;
  
void setupSensors()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  Serial.begin(9600);
}

float lerDistancia();

void loopSensors()
{
   lerDistancia();
   
}

float lerDistancia()
{
   Serial.println();
  digitalWrite(trig, LOW);
  delay(5);
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);
  
  distancia = pulseIn(echo, HIGH);
  distancia = distancia/58;
  Serial.print("Distancia: ");
  Serial.println(distancia);
  return distancia;
}