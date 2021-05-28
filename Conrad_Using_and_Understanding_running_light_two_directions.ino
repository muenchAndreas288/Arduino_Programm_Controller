
// Andreas Muench
/*
*This Project is based on the Conrad Learning Nr 19 22 86
*Microcontroller understanding and using
*I always had some trouble programming the Controller only with the button
*In this project an arduino is used to programm the controler
*This is the example from number 10 "TPS Grundbefehle"
*It is a simple running light back and forth
*/
const int resetPin =  13;// the number of the LED pin
const int programmPin =  12;
const int adressPin =  11;

int i = 0;

unsigned long previousMillis = 0;       

const long interval = 10000;          

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

//11
  programm(2);
  programm(2);
//28
  programm(3);
  programm(9);
//12
  programm(2);
  programm(3);
//28
  programm(3);
  programm(9);
//14  
  programm(2);
  programm(5);
//28
  programm(3);
  programm(9);
//18
  programm(2);
  programm(9);
//28
  programm(3);
  programm(9);
//14  
  programm(2);
  programm(5);
//28
  programm(3);
  programm(9);
//12
  programm(2);
  programm(3);
//28
  programm(3);
  programm(9);
//3C
  programm(4);
  programm(13);
    
  pressPin(resetPin);
 while(1){}
}
