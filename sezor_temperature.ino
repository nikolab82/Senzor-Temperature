#include <SoftwareSerial.h>
#include <LiquidCrystal.h>

int val;
int tempPin = 0;
SoftwareSerial BlueToothConnect(1, 0);

void setup()
{
 
Serial.begin(9600);
BlueToothConnect.begin(9600);
pinMode(0, INPUT);
pinMode(1, OUTPUT);
}
void loop()
{
val = analogRead(tempPin);
float mv = ( val/1024.0)*5000; 
float cel = mv/10;
float farh = (cel*9)/5 + 32;

Serial.print("TEMPRATURE = ");
Serial.print(cel);
Serial.print("*C");
Serial.println();
BlueToothConnect.print("String");
delay(1000);


}

