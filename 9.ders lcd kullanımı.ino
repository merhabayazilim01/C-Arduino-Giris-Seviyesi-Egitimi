#include<LiquidCrystal.h> 

LiquidCrystal lcd(8, 7, 6, 5, 4, 3); 



void setup() 

{
  lcd.begin(16,2);
  //lcd.begin(16,2);  
  Serial.begin(9600);
  ucgen_ciz(5);
}

int i = -5;

void loop() 

{ /*
  if(i == 16){
  i = 0;
  }*/
  lcd.setCursor(i,0);
  lcd.print("Merhaba Yazilim");
  delay(300);
  lcd.clear();
  i++;
}


void ucgen_ciz(int sayi){

  for(int i = 1; i<= sayi;i++){
  
    for (int j = 0; j<i;j++){
    
    Serial.print("x");
    }
    Serial.println();
  }
  
  
  
  for(int i =sayi-1; i> 0;i--){
  
    for (int j = i; j>0;j--){
    
    Serial.print("x");
    }
    Serial.println();
  }

}
/*
  lcd.setCursor(1,0);
  lcd.print("Merhaba yazilim");
  delay(500);
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Merhaba yazilim");
  delay(500);
  lcd.clear();
*/
