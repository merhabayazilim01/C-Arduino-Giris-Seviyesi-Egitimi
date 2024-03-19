// C++ code
//
#define BuzzerPin 11
int notalar[8]= {440,494,523,587,659,698,784,880};
// la, si, do, re, mi, fa, sol, la
int i = 0;
void setup()
{
  pinMode(BuzzerPin, OUTPUT);
}

void loop()
{
  while(i<8){
	tone(BuzzerPin,notalar[i],500);
  	delay(1000);
    i= i+1;
  }
  
  i=0;

  
}

/*
	{440,494,523,587,659,698,784,880};
// la, si, do, re, mi, fa, sol, la



  tone(BuzzerPin,notalar[0],500);
  delay(1000);
  tone(BuzzerPin,notalar[1],500);
  delay(1000);
  tone(BuzzerPin,notalar[2],500);
  delay(1000);
  tone(BuzzerPin,notalar[3],500);
  delay(1000);
  tone(BuzzerPin,notalar[4],500);
  delay(1000);
  tone(BuzzerPin,notalar[5],500);
  delay(1000);
  tone(BuzzerPin,notalar[6],500);
  delay(1000);
  tone(BuzzerPin,notalar[7],500);
  delay(1000);



*/
