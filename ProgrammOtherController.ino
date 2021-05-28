/*
  Blink without Delay

  Turns on and off a light emitting diode (LED) connected to a digital pin,
  without using the delay() function. This means that other code can run at the
  same time without being interrupted by the LED code.

  The circuit:
  - Use the onboard LED.
  - Note: Most Arduinos have an on-board LED you can control. On the UNO, MEGA
    and ZERO it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN
    is set to the correct LED pin independent of which board is used.
    If you want to know what pin the on-board LED is connected to on your
    Arduino model, check the Technical Specs of your board at:
    https://www.arduino.cc/en/Main/Products

  created 2005
  by David A. Mellis
  modified 8 Feb 2010
  by Paul Stoffregen
  modified 11 Nov 2013
  by Scott Fitzgerald
  modified 9 Jan 2017
  by Arturo Guadalupi

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
*/

// constants won't change. Used here to set a pin number:
const int resetPin =  13;// the number of the LED pin
const int programmPin =  12;
const int adressPin =  11;

int i = 0;

// Variables will change:
int ledState = LOW;             // ledState used to set the LED

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change:
const long interval = 10000;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(resetPin, OUTPUT);
  pinMode(programmPin, OUTPUT);
  pinMode(adressPin, OUTPUT);
}

void pressPin(int buttonNumber){
  delay(500);
  digitalWrite(buttonNumber, LOW);

  delay(500);
  digitalWrite(buttonNumber, HIGH);
  }

void programm(int number){
  for(i = 0; i < number; i++){

  pressPin(adressPin);

}

  pressPin(programmPin);
  }

void loop() {
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
  digitalWrite(resetPin, HIGH);
  digitalWrite(programmPin, HIGH);
  digitalWrite(adressPin, HIGH);

  delay(5000);

  digitalWrite(programmPin, LOW);

  delay(2000);

  digitalWrite(resetPin, LOW);

  delay(15000);

  digitalWrite(resetPin, HIGH);
  delay(5000);
  digitalWrite(programmPin, HIGH);
programm(2);

programm(2);

programm(3);

programm(9);

programm(2);

programm(3);

programm(3);

programm(9);

programm(2);

programm(5);

programm(3);

programm(9);

programm(2);

programm(9);

programm(3);

programm(9);

programm(4);

programm(9);

  pressPin(resetPin);
 while(1){}
}