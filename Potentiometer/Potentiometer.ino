void setup() 
{
  Serial.begin(9600); // Lets Arduino print using Serial Monitor

}

void loop() 
{
  int sensorValue = analogRead(A0);  // Read input on Analog A0
  float voltage = semsprValue * (5.0 / 1023.0);
  Serial.print("ADC Reading: ");
  Serial.print(sensorValue);
  Serial.print(" Analog voltage: ")
  Serial.println(voltage);
  delay(1);
}
