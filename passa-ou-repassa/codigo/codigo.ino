int lampadaVerde = 6;
int lampadaVermelha = 7;

int botaoVerde = 8;
int botaoVermelho = 9;

void setup() {
pinMode(lampadaVerde, OUTPUT);
pinMode(lampadaVermelha, OUTPUT);

pinMode(botaoVerde, INPUT);
pinMode(botaoVermelho, INPUT);

}
void loop() {
  if (digitalRead(botaoVerde) == HIGH) {   
    digitalWrite(lampadaVerde, HIGH);
    Reset();
  }

  if (digitalRead(botaoVermelho) == HIGH) {   
    digitalWrite(lampadaVermelha, HIGH);
    Reset();
  }
}

void Reset(){
  delay(5000);
  digitalWrite(lampadaVerde, LOW);
  digitalWrite(lampadaVermelha, LOW);
}

