/*
  VoltageGraph
  Maps the voltage over time
*/

const float referenceVolts = 5.0;
const int batteryPin = 0;
int counter = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(batteryPin);
  float volts = (val / 1023.0) * referenceVolts;
  Serial.println(volts);
//  Serial.println(counter);
  delay(1000);
  counter = counter + 1;
}
