// C++ code
/*
bu kod her seferinde ekrana bir değer yazdırır
bu değer kadar bekler ve bu değeri 10 arttırır
*/
int beklemesuresi; // ışık değişkininin tanımlanması

void setup()
{
	beklemesuresi = 10;
  	Serial.begin(9600); // ekrana yazdırıma komudunu aktive eder
}

void loop()
{
  Serial.println(beklemesuresi); // ekrana yazdırır
  beklemesuresi = beklemesuresi + 10;
  delay(beklemesuresi);
}

  
