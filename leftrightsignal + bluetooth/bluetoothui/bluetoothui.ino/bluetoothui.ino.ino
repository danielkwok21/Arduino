#include <SoftwareSerial.h>
SoftwareSerial EEBlue(10, 11); // RX | TX
void setup()
{  
  pinMode(7, OUTPUT); //left
  pinMode(6, OUTPUT); //right
  Serial.begin(9600);
  EEBlue.begin(9600);  //Default Baud for comm, it may be different for your Module. 
  Serial.println("The bluetooth gates are open.\n Connect to HC-05 from any other bluetooth device with 1234 as pairing key!.");
}
 
void loop()
{
  int left = digitalRead(7);
  int right = digitalRead(6);
  char movement;
  char moveLeft = 'L';
  char moveRight = 'R';
  
  // Feed any data from phone to arduino.
  if (EEBlue.available()){
    Serial.write(EEBlue.read());
  }
  
  // Feed all data from arduino to phone
  if (Serial.available()){
    if(left==HIGH){
      movement = moveLeft;
    }else if(right==HIGH){
      movement = moveRight;
    }
    EEBlue.write(movement);
  }
}

int moveLeft(){

}

int moveRight(){


}

