#include <Arduino.h>
#include <Servo.h>

Servo myServo;  // Create a Servo object

void setup() {
    myServo.attach(9);  // Attach servo to pin 9
}

void loop() {

    myServo.write(0);   // Move servo to 0 degrees
    delay(1000);        // Wait 1 second


//     myServo.write(90);  // Move servo to 90 degrees
//     delay(1000);        // Wait 1 second

//     myServo.write(180); // Move servo to 180 degrees
//     delay(1000);        // Wait 1 second
}
