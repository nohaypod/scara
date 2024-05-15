#include <Servo.h>

Servo servo_9;
Servo servo_10;
Servo servo_11;
int posx = 0;
int posy=0;

void setup()
{
  servo_9.attach(9);
  servo_10.attach(10);
  //servo_11.attach(11);
}

void loop()
{
  triangulo();
}

void triangulo()
{
 for (posx = 180; posx<= 360; posx += 1) {
    
    servo_9.write(posx);
    delay(5); 
  }
  
 for (posx = 0; posx<= 180; posx += 1) {
    
    servo_9.write(posx);
   	servo_10.write(posx);
   delay(100);
  }
  
}
