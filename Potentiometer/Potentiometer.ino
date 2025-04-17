void setup() 
{
  Serial.begin(9600); // Lets Arduino print using Serial Monitor

}

void loop() 
{
  int sensorValue = analogRead(A0);  // Read input on Analog A0
  Serial.println(sensorValue);
  delay(1);
}
