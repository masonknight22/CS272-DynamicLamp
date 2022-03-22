/*
 * Dynamic Lamp
 * 
 * A program that operates a physical lamp that facilitates a relaxing evening environment by using multiple button inputs which controls LED and servo outputs
 * 
 * @author Mason Knight
 * @version 22 March 2022
 * 
 */


#include <Servo.h>

Servo myservo;
const int buttonPin1 = 2;
const int buttonPin2 = 5;

int buttonState1 = 0;
int buttonState2 = 0;

int i = 0;


int led = 9;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  myservo.attach(6); //servo at pin 6
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);

  pinMode(led, OUTPUT);
  
}

void loop() {

  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  
  
  if (buttonState1 == HIGH) {

    digitalWrite(led, HIGH);
    delay(30);
  
  }

  else if (buttonState2 == HIGH) {
    myservo.write(0);
    delay(100);
    digitalWrite(led, HIGH);
    delay(30);
  }

  else if (buttonState1 == LOW && buttonState2 == LOW) {
    myservo.write(90);
    digitalWrite(led, LOW); //null
  }

  delay(50);
  
  
  
  
  //servo @0 top open
  //if else
  //b1-- bloom
  //fade LED
  //keep @0 top open
  //b2--open
  //LED HIGH
  

}
