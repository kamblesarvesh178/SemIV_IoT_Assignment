int input0 = A0; // Define the 3 analog inputs: A0, A1, A2
int input1= Al;
int input2 = A2;

int LEDG = 9;
int LEDG = 10;
int LEDB = 11;

int value0=0; // Create the 3 integral value type to store the analog reading values
int value1=0;
int value2=0;

void setup()
{
  Serial.begin(9600); |
  pinMode(LEDR, OUTPUT); // the digital pins will be output pins
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
}
void loop()
{
  int value0= analogRead (input0); // Reads value of potentiometer number 0
  int valuel = analogRead (input1); // Reads value of potentiometer number 1
  int value2 = analogRead (input2); // Reads value of potentiometer number 2
  analogWrite (LEDR, value 0/4) ; // Because the analog inputs have a
//maximum resolution of 1024 and the PWM has a 256 resolution, you
//ve to divide the value of the analog input by 4 in order to make
// the analog input reading proportional to the PWM digital output intensity
//Define the 3 PWM digital outputs
  analogWrite (LEDG, value1/4);
  analogWrite (LEDB, value2/4);
}