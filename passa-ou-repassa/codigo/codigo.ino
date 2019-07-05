int ledVerde = 12;
int ledVermelho = 13;

int botaoVerde = 5;
int botaoVermelho = 4;
int botaoReset = 16;

bool pressionado = false;

void setup() {
pinMode(ledVerde, OUTPUT);
pinMode(ledVermelho, OUTPUT);

pinMode(botaoVerde, INPUT);
pinMode(botaoVermelho, INPUT);
pinMode(botaoReset, INPUT);


}
void loop() {
  if ((digitalRead(botaoVerde) == HIGH) and (pressionado == false)) {
    pressionado = true;
    digitalWrite(ledVerde, HIGH);
  }

  if ((digitalRead(botaoVermelho) == HIGH) and (pressionado == false)) {
    pressionado = true;
    digitalWrite(ledVermelho, HIGH);
  }

  if (digitalRead(botaoReset) == HIGH) {
    pressionado = false;
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVermelho, LOW);
  }
}
