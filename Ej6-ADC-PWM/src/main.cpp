#include <Arduino.h>

#define PWM_Out 3
#define Sensor_In A5

void setup() {
    pinMode(PWM_Out, OUTPUT);
    pinMode(Sensor_In, INPUT);

    Serial.begin(9600);


    digitalWrite(LED_BUILTIN, true);
}

void loop(){
    int x =map(analogRead(Sensor_In), 0, 1024, 0, 255); 
    analogWrite(PWM_Out, x);
}