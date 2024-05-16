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
#include <Servo.h>
int pos = 180;
Servo servo_9;
Servo servo_10;

void setup()
{
  servo_9.attach(9);
  servo_10.attach(10);
  //servo_9.write(pos);
  Serial.begin(9600);
}

void loop()
{
      
  	for (pos = 0; pos <= 90; pos += 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    Serial.println(servo_9.read());
    // wait 15 ms for servo to reach the position
    delay(100); // Wait for 100 millisecond(s)
  	}
  
	for (pos = 0; pos <= 90; pos += 1) {
    servo_9.write(pos); //horizontal
    servo_10.write(pos);//Vertical  
    Serial.println(servo_9.read());
    delay(50);
  	}
		
  	for (pos = 0; pos <= 90; pos += 1) {
    //servo_9.write(pos); //horizontal
    servo_10.write(pos);//Vertical  
    Serial.println(servo_9.read());
    delay(50);
  }  
}
