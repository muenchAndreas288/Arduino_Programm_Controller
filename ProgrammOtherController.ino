
// Andreas Muench
/*
*This Project is based on the Conrad Learning Nr 19 22 86
*Microcontroller understanding and using
*I always had some trouble programming the Controller only with the button
*In this project an arduino is used to programm the controler
*/
const int resetPin =  13;// the number of the LED pin
const int programmPin =  12;
const int adressPin =  11;

int i = 0;

// Variables will change:
int ledState = LOW;             // ledState used to set the LED

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
