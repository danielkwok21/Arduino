#include <SoftwareSerial.h>
SoftwareSerial EEBlue(10, 11); // RX | TX
void setup()
{
  Serial.begin(9600);
  EEBlue.begin(9600);  //Default Baud for comm, it may be different for your Module. 
  Serial.println("The bluetooth gates are open.\n Connect to HC-05 from any other bluetooth device with 1234 as pairing key!.");
}
 
void loop()
{
  int left = 7;
  int right = 6;
  
  // Feed any data from bluetooth to Terminal.
  if (EEBlue.available()){
    Serial.print("phone to comp");
    Serial.write(EEBlue.read());
  }
  
  // Feed all data from terminal to bluetooth
  if (Serial.available()){
    Serial.print("comp to phone");
    EEBlue.write(Serial.read());
  }
}

int moveLeft(){

}

int moveRight(){


}

