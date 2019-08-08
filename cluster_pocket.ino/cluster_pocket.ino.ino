#include <Servo.h>
 
#define SERVO 6 // Porta Digital 6 PWM
 
Servo s; // Variável Servo
int pos; // Posição Servo
int ang;

void setup ()
{
  s.attach(SERVO);
  Serial.begin(9600);
  s.write(0); // Inicia motor posição zero
}
 
void loop()
{
  if (ang == 45) 
    ang = 135;
  else 
    ang = 45;
  s.write(ang);
  delay(4400);
}
