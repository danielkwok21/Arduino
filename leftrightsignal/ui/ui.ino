void setup() {
  pinMode(7, OUTPUT); //left
  pinMode(6, OUTPUT); //right
  Serial.begin(9600);
}

void loop() {
  int left = digitalRead(7);
  int right = digitalRead(6);
  
  if(left == HIGH){
    Serial.println("left");
  }else if(right == HIGH){
    Serial.println("right");
  }
  //delay(200);
}

