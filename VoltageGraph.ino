/*
  VoltageGraph
  Maps the voltage over time
*/

const float referenceVolts = 5.0;
const int batteryPin1 = 0;
const int batteryPin2 = 1;
unsigned long time;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int val1 = analogRead(batteryPin1);
  int val2 = analogRead(batteryPin2);

  float volts1 = (val1 / 1023.0) * referenceVolts;
  float volts2 = (val2 / 1023.0) * referenceVolts;

  time = millis();
  Serial.print(time/1000); // Number of seconds that have elapsed
  Serial.print(',');
  Serial.print(volts1);
  Serial.print(',');
  Serial.println(volts2);

  delay(60000); // One minute delay
}
