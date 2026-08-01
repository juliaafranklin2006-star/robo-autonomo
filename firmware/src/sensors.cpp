#include "sensors.h"
#include <Arduino.h>

int trig = 13;
int echo = 21;

int motor1 = 5;
int motor2 = 3;

float distancia;
float distanciaLida;
float u;
  
void setupSensors()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  
  Serial.begin(9600);
}

float lerDistancia();

void loopSensors()
{
   lerDistancia();
    Serial.println("teste");
 distanciaLida = lerDistancia();
 u = distanciaLida;
 if (distanciaLida < 100)
 {
   u = 0;
 }
 else if (distanciaLida > 255){
   u = 255;
 }
  
  
}

float lerDistancia()
{
   Serial.println("entrou");
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