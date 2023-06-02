/*8. Write a program that asks the user for a
number and outputs the number squared
that is entered*/

void setup() {
// put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("input the number");
}

void loop() {
// put your main code here, to run repeatedly:
  if(Serial.available){
    int input = Serial.parseInt(); // keep other operations outside the sq function
    int inputSquared = sq(input);
    Serial.print(int(inputSquared));
    delay(500);
}
}
