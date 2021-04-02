/*
  Blink
*/

// ledPin refers to ESP32 GPIO 2
const int ledPin = 2;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin ledPin as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                  // wait for x second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                  // wait for x second
}
