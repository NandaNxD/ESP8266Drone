// PIN D3(RX)=CH4,D1(TX)=CH3, D9=CH2,D10=CH1
int ch4=3;
int ch3=1;
int ch2=9;
int ch1=10;

int m1=14;
int m2=12;
int m3=13;
int m4=15;

int gscl=5;
int gsda=4;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // input receiver channel
  pinMode(ch4,INPUT);
  pinMode(ch3,INPUT);
  pinMode(ch2,INPUT);
  pinMode(ch1,INPUT);
  // output motor channel
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
