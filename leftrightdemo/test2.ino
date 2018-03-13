void setup() {
  pinMode(7, OUTPUT); //left
  pinMode(6, OUTPUT); //right
  Serial.begin(9600);
}

int space=0;
void loop() {
  int left = digitalRead(7);
  int right = digitalRead(6);
  int output;
  
  if(left == HIGH){
    if(space!=0){
      space--;
      for(int i=0; i<space; i++)
        Serial.print(" ");
    }
    Serial.println("left");
  }else if(right == HIGH){
    space++;
    if(space!=0){
      for(int i=0; i<space; i++)
        Serial.print(" ");
    }
    Serial.println("right");
  }
  //delay(200);
}
