int switchState = 0;

void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);
}

void loop() {
  switchState = digitalRead(2);
  if(switchState == LOW){
      digitalWrite(3,LOW); //red
      digitalWrite(4,LOW);  //red
      digitalWrite(5,HIGH);  //green
   }else{ //button pressed
      digitalWrite(3,LOW);    //red
      digitalWrite(4,HIGH);    //red
      digitalWrite(5,LOW);   //green

      delay(250);   //wait a quarter second
      //change lights
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      delay(250);
   }
}
