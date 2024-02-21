// C++ code
//

// if else yapıları

int isik = 100;

bool kosul = true;

void setup()
{	
  
  Serial.begin(9600);
}



void loop(){

  if ( isik > 200 ){
  Serial.println("parlakligi 0 yap");
  }
  else if( isik>=100) {
  Serial.println("parlakligi azalt");
  }
  else {
   Serial.println("parlakligi arttir");
  }
  /*
  {
  Serial.println("parlakligi arttir");
  }
  */
}
