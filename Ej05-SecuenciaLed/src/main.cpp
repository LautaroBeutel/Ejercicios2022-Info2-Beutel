#include <Arduino.h>

#define BUTTON_A 5
#define BUTTON_B 6

void setup() {
  DDRB = B00000111;

  pinMode(BUTTON_A, INPUT);
  pinMode(BUTTON_B, INPUT);
}

void loop() {
  while (digitalRead(BUTTON_A))
  {
    PORTB = B00000001;
    delay(200);
    PORTB = B00000010;
    delay(200);
    PORTB = B00000100;
    delay(200);

    break;
  }
  while (digitalRead(BUTTON_B))
  {
    PORTB = B00000100;
    delay(200);
    PORTB = B00000010;
    delay(200);
    PORTB = B00000001;
    delay(200);

    break;
  }
  
}