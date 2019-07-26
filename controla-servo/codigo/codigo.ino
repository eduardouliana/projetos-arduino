#include <Servo.h>

Servo servo;
int posicao = 0;
// Porta no Arduíno
int pinoServo = 8;

void setup()
{
  servo.attach(pinoServo);  
}

void loop()
{
  // Movimento de 0 a 180º
  for (posicao = 0; posicao <= 180; posicao += 1) {     
    servo.write(pos);
    delay(40);
  }

  // movimento de 180º a 0
  for (pos = 180; pos >= 0; pos -= 1) { 
    servo.write(pos);
    delay(40);
  }  
}
