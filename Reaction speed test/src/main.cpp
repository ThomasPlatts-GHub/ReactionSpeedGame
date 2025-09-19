#include <Arduino.h>

int greenLED = 11;
int yellowLED = 12;
int redLED = 13;

int whiteLED_1 = 3;
int whiteLED_2 = 4;

int buzzerPin = 7;

int buttonPin_1 = 10;
int buttonPin_2 = 2;

bool buttonPress = 0;

void setup() {
  Serial.begin(9600);

  pinMode(buttonPin_1, INPUT_PULLUP);
  pinMode(buttonPin_2, INPUT_PULLUP);
  
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(whiteLED_1, OUTPUT);
  pinMode(whiteLED_2, OUTPUT);

  pinMode(buzzerPin, OUTPUT);

  randomSeed(analogRead(A0));
}

void loop() {
  // LED traffic light system with sound
  digitalWrite(greenLED, HIGH);
  digitalWrite(buzzerPin, HIGH);
  delay(100);
  digitalWrite(buzzerPin, LOW);
  delay(900);

  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(buzzerPin, HIGH);
  delay(100);
  digitalWrite(buzzerPin, LOW);
  delay(900);

  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, HIGH);
  digitalWrite(buzzerPin, HIGH);
  delay(100);
  digitalWrite(buzzerPin, LOW);

  delay(random(900, 4901));
  digitalWrite(redLED, LOW);

  while(buttonPress == 0){
    digitalWrite(whiteLED_1, HIGH);
    digitalWrite(whiteLED_2, HIGH);

    Serial.print(digitalRead(buttonPin_1));

    if (digitalRead(buttonPin_1) == 0){
      buttonPress = 1;
      digitalWrite(whiteLED_2, LOW);
    } else if (digitalRead(buttonPin_2) == 0){
      buttonPress = 1;
      digitalWrite(whiteLED_1, LOW);
    }
  }
  digitalWrite(buzzerPin, HIGH);
  delay(500);
  digitalWrite(buzzerPin, LOW);
  delay(1500);
  digitalWrite(whiteLED_1, LOW);
  digitalWrite(whiteLED_2, LOW);
  buttonPress = 0;
}