//Code for the Master board
#include<Wire.h>//This library is used for I2C communication
int x;
void setup() {
  Wire.begin(); 
  Serial.begin(9600);
}
void loop() {
  x = analogRead(A0);//Reading value from Potentiometer
  x/=4;
  Wire.beginTransmission(9);//9 here is the address of the slave board 
  Wire.write(x);//Transfers the value of potentiometer to the slave board            
  Wire.endTransmission(); 
  Serial.print(x);
  delay(1000);
}










