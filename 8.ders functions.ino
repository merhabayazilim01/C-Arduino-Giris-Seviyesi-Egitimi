// C++ code
//

void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  
}

void loop()
{
  /*
	Serial.println("Merhaba !!!");
  delay(1000);
  int toplam = toplama(1,2);
  Serial.println(toplam);
  */
  merhabaYaz();

}

void merhabaYaz(){
  Serial.println("Merhaba");
  delay(1000);
}


int toplama(int birincideger, int ikincideger){

  int onemsiz = birincideger + ikincideger;
  
  return(onemsiz);
}


/*
	Serial.begin(9600);
  	pinMode(10,OUTPUT);

  Serial.println("hello !!!");
  int a = toplama(1,2,3) + 4;
  Serial.println(a);
  delay(1000);
  

int toplama(int ilkdeger,int ikincideger,int ucuncudeger){
	int onemsiz = ilkdeger+ikincideger+ucuncudeger;
  return onemsiz;
}

*/
