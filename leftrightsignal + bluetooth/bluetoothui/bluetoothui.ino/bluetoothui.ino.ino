#include <SoftwareSerial.h>
SoftwareSerial EEBlue(10, 11); // RX | TX
void setup()
{
  pinMode(7, OUTPUT); //left
  pinMode(6, OUTPUT); //right
  Serial.begin(9600);
  EEBlue.begin(9600);  //Default Baud for comm, it may be different for your Module. 
}
 
void loop()
{ 
  int left = digitalRead(7);
  int right = digitalRead(6);
  
  // Feed all data from arduino to phone
  
  if(left == HIGH){
    Serial.println('7');
  }else if(right == HIGH){
    Serial.println('6');
  }
  else if(left==LOW && right==LOW){
    Serial.println('5');      
  }
  delay(100);
}

