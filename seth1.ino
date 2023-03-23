#include<SoftwareSerial.h>
int PulseSensorPurplePin = 0;
int Signal;
int Threshold = 550;
int S;
SoftwareSerial mySerial(10,11);
void setup()
{
pinMode (13,OUTPUT);
Serial.begin(9600);
mySerial.begin(9600); 
}
void loop()
{
Signal = analogRead(PulseSensorPurplePin);
S=(Signal*5); Serial.print("Your heart Beat is : "); 
Serial.println(S);
mySerial.println(S);
if(Signal > Threshold)
{ 
  digitalWrite(13,HIGH);
}
else
{
  digitalWrite(13,LOW);
}
  delay(1000);
  
}
