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
  // Feed any data from phone to arduino.
  if (EEBlue.available()){
    Serial.write(EEBlue.read());
  }
  
  // Feed all data from arduino to phone
  if (Serial.available()){
    int incomingByte=0;
    incomingByte = Serial.read();
    EEBlue.write(incomingByte);
    Serial.write(incomingByte);
  }
}

