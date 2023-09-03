// [RED, YELLOW, GREEN]
int signal1[] = {4,0,2};
int signal2[] = {14,12,13};
int signal3[] = {10,5,16};
int signal4[] = {15,3,1}; 

int redDelay = 5000;
int yellowDelay = 1000;

void setup() {
  //Declaring all the LED's as output
  for (int i = 0; i < 3; i++) {
    pinMode(signal1[i], OUTPUT);
    pinMode(signal2[i], OUTPUT);
    pinMode(signal3[i], OUTPUT);
    pinMode(signal4[i], OUTPUT);
  }
}

void loop(){
  //phase : 1 
  //1 & 3 --> green | 2 & 4 --> red | yellow OFF
  digitalWrite(signal1[1], 0);
  digitalWrite(signal3[1], 0);
  digitalWrite(signal2[1], 0);
  digitalWrite(signal4[1], 0);

  digitalWrite(signal1[2], 1);
  digitalWrite(signal3[2], 1);
  digitalWrite(signal2[0], 1);
  digitalWrite(signal4[0], 1);
  delay(redDelay);

  //phase : 2
  // 1 & 3 | 2 & 4 --> off | yellow ON
  digitalWrite(signal1[2], 0);
  digitalWrite(signal3[2], 0);
  digitalWrite(signal2[0], 0);
  digitalWrite(signal4[0], 0);

  digitalWrite(signal1[1], 1);
  digitalWrite(signal2[1], 1);
  digitalWrite(signal3[1], 1);
  digitalWrite(signal4[1], 1);
  delay(yellowDelay);

  //phase : 3
  // 1 & 3 --> red | 2 & 4 --> green | yellow 0FF
  digitalWrite(signal1[1], 0);
  digitalWrite(signal2[1], 0);
  digitalWrite(signal3[1], 0);
  digitalWrite(signal4[1], 0);

  digitalWrite(signal1[0], 1);
  digitalWrite(signal3[0], 1);
  digitalWrite(signal2[2], 1);
  digitalWrite(signal4[2], 1);
  delay(redDelay);

  //phase : 4
  //1 & 3 | 2 & 4 --> off | yellow ON
  digitalWrite(signal1[0], 0);
  digitalWrite(signal3[0], 0);
  digitalWrite(signal2[2], 0);
  digitalWrite(signal4[2], 0);

  digitalWrite(signal1[1], 1);
  digitalWrite(signal2[1], 1);
  digitalWrite(signal3[1], 1);
  digitalWrite(signal4[1], 1);
  delay(yellowDelay);
}





// void loop() {
//   // Making Green  LED at signal 1 and red LED's at other signal HIGH
//   digitalWrite(signal1[2], HIGH);
//   digitalWrite(signal1[0], LOW);
//   digitalWrite(signal2[0], HIGH);
//   digitalWrite(signal3[0], HIGH);
//   digitalWrite(signal4[0], HIGH);
//   delay(redDelay);

//   // Making Green LED at signal 1 LOW and making yellow LED at signal 1 HIGH for 2 seconds
//   digitalWrite(signal1[1], HIGH);
//   digitalWrite(signal1[2], LOW);
//   delay(yellowDelay);
//   digitalWrite(signal1[1], LOW);

//   // Making Green  LED at signal 2 and red LED's at other signal HIGH
//   digitalWrite(signal1[0], HIGH);
//   digitalWrite(signal2[2], HIGH);
//   digitalWrite(signal2[0], LOW);
//   digitalWrite(signal3[0], HIGH);
//   digitalWrite(signal4[0], HIGH);
//   delay(redDelay);

//   // Making Green LED at signal 2 LOW and making yellow LED at signal 2 HIGH for 2 seconds
//   digitalWrite(signal2[1], HIGH);
//   digitalWrite(signal2[2], LOW);
//   delay(yellowDelay);
//   digitalWrite(signal2[1], LOW);

//   // Making Green  LED at signal 3 and red LED's at other signal HIGH
//   digitalWrite(signal1[0], HIGH);
//   digitalWrite(signal2[0], HIGH);
//   digitalWrite(signal3[2], HIGH);
//   digitalWrite(signal3[0], LOW);
//   digitalWrite(signal4[0], HIGH);
//   delay(redDelay);

//   // Making Green LED at signal 3 LOW and making yellow LED at signal 3 HIGH for 2 seconds
//   digitalWrite(signal3[1], HIGH);
//   digitalWrite(signal3[2], LOW);
//   delay(yellowDelay);
//   digitalWrite(signal3[1], LOW);

//   // Making Green  LED at signal 4 and red LED's at other signal HIGH
//   digitalWrite(signal1[0], HIGH);
//   digitalWrite(signal2[0], HIGH);
//   digitalWrite(signal3[0], HIGH);
//   digitalWrite(signal4[2], HIGH);
//   digitalWrite(signal4[0], LOW);
//   delay(redDelay);

//   // Making Green LED at signal 4 LOW and making yellow LED at signal 4 HIGH for 2 seconds
//   digitalWrite(signal4[1], HIGH);
//   digitalWrite(signal4[2], LOW);
//   delay(yellowDelay);
//   digitalWrite(signal4[1], LOW);
// }