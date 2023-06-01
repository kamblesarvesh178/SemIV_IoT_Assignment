unsigned const LED=8;
unsigned const BUTTON=7;
unsigned int button_state=0;
void setup(){
  pinMode(BUTTON,OUTPUT);
  pinMode(LED,OUTPUT);
}
void loop(){
  if(digitalRead(BUTTON)==1){
    digitalWrite(LED,HIGH);
    button_state+=1;
    if(button_state%2==0)
    {
      digitalWrite(LED,LOW);
      button_state=0;
    } 
    delay(100);
  }
}
