#include <Thermistor.h>

Thermistor temp(0);

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  int reading = analogRead(A0);

  float voltage = reading*0.5;
  
  voltage /= 1024.0;
  
  float temperature = temp.getTemp();
  
  Serial.print("Temperatura no Sensor : ");
  Serial.print(temperature,4);
  Serial.println("*C\n");
  Serial.print("Voltage:");
  Serial.print(voltage,4);
  Serial.print("\n");

  delay(1000);
}
  
