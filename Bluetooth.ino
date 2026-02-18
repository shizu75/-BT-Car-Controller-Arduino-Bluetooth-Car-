#include <SoftwareSerial.h>
#define enA 5 //Enable1 L293 Pin enA
#define in1 6 //Motor1  L293 Pin in1
#define in2 7 //Motor1  L293 Pin in1
#define in3 9 //Motor2  L293Pin in1
#define in4 10 //Motor2  L293 Pin in1
#define enB 8 //Enable2 L298 Pin enB

char data;
//Create software serial object to communicate with HC-05
SoftwareSerial BT(3, 2); //HC-05 Tx & Rx is connected to Arduino #3 & #2

void setup()
{
  //Begin serial communication with Arduino and Arduino IDE (Serial Monitor)
  Serial.begin(9600);
  
  //Begin serial communication with Arduino and HC-05
  BT.begin(9600);

  Serial.println("Initializing...");
  Serial.println("The device started, now you can pair it with bluetooth!");

  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enB, OUTPUT);

  digitalWrite(enA, HIGH);
  digitalWrite(enB, HIGH);
}

void loop()
{
  if(BT.available()) 
  {
    data = toupper(BT.read());

    // Ignore junk / newline
    if (data == '\n' || data == '\r') return;

    Serial.println(data);

    switch (data) {
      case 'F': forward();   break;
      case 'B': backward();  break;
      case 'L': left();      break;
      case 'R': right();     break;
      case 'S': stopMotors(); break;
    }
  }
}

void forward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH); 
  digitalWrite(in4, LOW);
}

void backward() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void left() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void right() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void stopMotors() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

