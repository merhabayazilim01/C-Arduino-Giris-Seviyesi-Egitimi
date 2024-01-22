// C++ code

//bool 1 byte
bool bool1 = 1;
//int 2 byte
int int1 = 100;

//long 4 byte
long long1 = 1000000000L;
//unsigned
unsigned int int2 = 1000;
unsigned long long2 = 1000;

//char 1 byte
char char1 = 'c';
//byte 1 byte
byte byte1 = 12;
//float 4 byte
float float1 = 12.79;
//double 4 byte
double double1 = 3.18;
//arrays
  int int3[] = {1,2,3,4};
char char2[] = "merhaba yazilim";
//pointer
//int int5 =&int1;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(char2);
}
