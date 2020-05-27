//define variables
int fdPin = 10;
int bkPin = 11;

void setup() {
  //set both control pins as outputs
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // repeatedly drive forward for 2 seconds, then backward for 2 seconds
  digitalWrite(fdPin, HIGH);
  delay(2000);
  digitalWrite(fdPin, LOW);
  digitalWrite(bkPin, HIGH);
  delay(2000);
  digitalWrite(bkPin, LOW);
}
