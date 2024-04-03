#include <Servo.h>

// C++ code
//

Servo servo;


void setup()
{	
  	pinMode(A0, INPUT);
	servo.attach(3,500,2500);
  pinMode(6,OUTPUT);
}

void loop()
{/*
  	int okunandeger = analogRead(A0);
	int derece = map(okunandeger,0,1023,180 , 0);
  servo.write(derece);
  delay(10);
  */
  analogWrite(6,50);
  delay(100);
  
}


/*


Servo servo;



  pinMode(A0, INPUT);
  servo.attach(3);




  derece = map(analogRead(A0), 0, 1023, 0, 180);
  servo.write(derece);
  delay(10); 



*/
