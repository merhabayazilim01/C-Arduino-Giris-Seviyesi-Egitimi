// C++ code
//

int led_pinleri[] = {11,10,9,6,5};

void setup(){

  for(int i = 0; i<5;i++){
  pinMode(led_pinleri[i],OUTPUT);
  }
}
  
  
	
  

void loop()
{/*
  for(int i = 0;i<5;i++){
  	Serial.println(i);
    delay(500);
  }
  */
  
  for(int i = 0; i<5;i++){
  digitalWrite(led_pinleri[i],HIGH);
    delay(100);
  }
  
   for(int i = 0; i<5;i++){
  digitalWrite(led_pinleri[i],LOW);
    delay(100);
  }
  
  for (int i = 4; i>=0;i--){
    digitalWrite(led_pinleri[i],HIGH);
    delay(100);
  }
  
    
  for (int i = 4; i>=0;i--){
    digitalWrite(led_pinleri[i],LOW);
    delay(100);
  }
  
}



/*

i++; =>> // i = i+1;
i--; =>> // i= i-1;
i+=5 =>> // i= i+5;


for(int sayac = 0;sayac<5 ; sayac = sayac +1){
  Serial.println(sayac);
    delay(500);
  }


  Serial.begin(9600);
  Serial.println(i);

  for(int i = 0; i<5; i++){
  pinMode(led_pinleri[i], OUTPUT);
  }

  for(int i = 0; i<5; i++){
  digitalWrite(led_pinleri[i], HIGH);
  delay(100);
  }
    for(int i = 0; i<5; i++){
  digitalWrite(led_pinleri[i], LOW);
  delay(100);
  }
  
 */
