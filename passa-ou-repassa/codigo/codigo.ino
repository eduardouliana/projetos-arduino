int ledVerde = 12;
int ledVermelho = 13;

int botaoVerde = 5;
int botaoVermelho = 4;

void setup() {
pinMode(ledVerde, OUTPUT);
pinMode(ledVermelho, OUTPUT);

pinMode(botaoVerde, INPUT);
pinMode(botaoVermelho, INPUT);

}
void loop() {
  if (digitalRead(botaoVerde) == HIGH) {   
    digitalWrite(ledVerde, HIGH);
    Reset();
  }

  if (digitalRead(botaoVermelho) == HIGH) {   
    digitalWrite(ledVermelho, HIGH);
    Reset();
  }
}

void Reset(){
  delay(5000);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledVermelho, LOW);
}

