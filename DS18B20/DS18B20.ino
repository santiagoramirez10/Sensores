#include <OneWire.h>//se incluyen las librerías                
#include <DallasTemperature.h>
 
OneWire ourWire(2);//se establece el pin donde irá el sensor
DallasTemperature sensors(&ourWire); //se heredan las características de la librería a la variable "sensors"

void setup() {
delay(1000);
Serial.begin(9600);
sensors.begin();   //Se inicia el sensor
}
 
void loop() {
sensors.requestTemperatures();   //Se env?a el comando para leer la temperatura
float temp= sensors.getTempCByIndex(0); //Se obtiene la temperatura en ?C

Serial.print("Temperatura= ");
Serial.print(temp);
Serial.println(" °C");
delay(1000);                     
}
