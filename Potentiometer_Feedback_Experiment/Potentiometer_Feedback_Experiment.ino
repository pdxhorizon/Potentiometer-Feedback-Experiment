#include <Servo.h>

Servo myServo;

//Define pins
int const ControlKnob = A0;
int const ServoPulse = 9;

//Define other constants
int ControlKnobValue;
int angle;

void setup()
{
myServo.attach(ServoPulse);

Serial.begin(9600);
}


void loop()
{
ControlKnobValue = analogRead(ControlKnob);
Serial.print("ControlKnobValue: ");
Serial.print(ControlKnobValue);
angle = map(ControlKnobValue, 0, 1023, 0, 179);
Serial.print(", angle: ");
Serial.print(angle);
myServo.write(angle);
delay(15);
}
