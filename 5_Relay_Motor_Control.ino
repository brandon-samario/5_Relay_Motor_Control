/*
  Control motor using Relay
  Turns on motor on for one second, then off for one second, then reverses, turning off for one second, then on for one second.
  Use pinMode to set pin as output, and use digital write to set state of output (motor)
  State of motor can either be High having motor on or low having the motor off
*/

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(7,OUTPUT); // setting pin 7 as output (motor)
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(7, HIGH); // turn the motor on (HIGH is the voltage level)
  delay(1000); // wait for a second
  digitalWrite(7, LOW); // turn the motor off by making the voltage LOW
  delay(1000); // wait for a second
  digitalWrite(7, LOW); // turn the motor off by making the voltage LOW
  delay(1000); // wait for a second
  digitalWrite(7, HIGH); // turn the motor on (HIGH is the voltage level)
  delay(1000); // wait for a second
}
