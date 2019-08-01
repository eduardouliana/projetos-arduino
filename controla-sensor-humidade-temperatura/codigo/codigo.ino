// Biblioteca para sensor temperatura e humidade
#include "dht.h"
// Biblioteca para "Timer"
#include <Ticker.h> 

// Mostrar valores a cada minuto
#define INTERVALO 1000*60*1

// Pino conectado no Arduíno
const int pinoSensor = D4;
// Variável para o sensor
dht sensor ; 
//Variável para o "Timer"
Ticker timerImprimir; 
// Variável para controle se é para mostrar ou não
bool mostrarConteudo = true;

void setup(){
  Serial.begin(9600);
  delay(2000);

  // Registra o "Timer" para mostrar a mensagem conforme o tempo
  timerImprimir.attach_ms(INTERVALO, mostrarValores);
}

void loop(){
  if(mostrarConteudo){   
      // Lê do sensor     
      sensor.read11(pinoSensor); 
      
      Serial.print("Umidade: ");
      // Mostra a humidade
      Serial.print(sensor.humidity);
      Serial.print("%");
      Serial.print(" / Temperatura: ");
      // Mostra a temperatura
      Serial.print(sensor.temperature, 0);
      Serial.println("*C");
      
      mostrarConteudo = false;
  }
}

void mostrarValores(){
  mostrarConteudo = true;
}
