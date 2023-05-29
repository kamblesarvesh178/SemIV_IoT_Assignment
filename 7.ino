const int green = 0;
const int yellow = 1;
const int red = 2;

void setup(){
  Serial.begin(9600);
  
}
char key=0;
void loop(){
  while(1){
    key=Serial.read();
    if ((key=='b') || (key=='B')) break;
    if ((key=='g') || (key=='G')) break;
    if ((key=='r') || (key=='R')) break;
    if ((key=='y') || (key=='Y')) break;
    delay(100);
    
  }
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);

  if((key=='b') || (key=='B')){
    digitalWrite(yellow,HIGH);
    digitalWrite(red,HIGH);
    for(int i=0;i<10;i++){
      digitalWrite(green,LOW);
      delay(1000);
      digitalWrite(green,HIGH);
      delay(1000);
      key=0;
    }
    
  }
  else if((key=='g') || (key=='G')){
    digitalWrite(yellow,HIGH);
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    delay(5000);
    digitalWrite(yellow,HIGH);
    digitalWrite(red,HIGH);
    digitalWrite(green,HIGH);
    key=0;
    }
  else if((key=='y') || (key=='Y')){
    digitalWrite(yellow,LOW);
    digitalWrite(red,HIGH);
    digitalWrite(green,HIGH);
    delay(5000);
    digitalWrite(yellow,HIGH);
    digitalWrite(red,HIGH);
    digitalWrite(green,HIGH);
    key=0;
    }   
  else if((key=='r') || (key=='R')){
    digitalWrite(yellow,HIGH);
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    delay(5000);
    digitalWrite(yellow,HIGH);
    digitalWrite(red,HIGH);
    digitalWrite(green,HIGH);
    key=0;
    }
}
