#include <Servo.h>

Servo servo_9;
Servo servo_10;
Servo servo_11;
int pos = 0;

void setup()
{
  servo_9.attach(9, 500, 2500);
  servo_10.attach(10,500,2500);
  servo_11.attach(10.500.2500)
}

void loop()
{
  triangulo();
}

void triangulo()
{// sweep the servo from 0 to 180 degrees in steps
  // of 1 degrees
  for (pos = 0; pos <= 180; pos += 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    delay(100); // Wait for 100 millisecond(s)
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    delay(5); // Wait for 5 millisecond(s)
  }
}
