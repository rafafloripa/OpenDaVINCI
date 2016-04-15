#include <Infrared.h>
#include <Ultrasonic.h>
#include <Servos.h>

//OUT PINS
#define EscPinOut 6
#define ServoPinOut 9

//IN PINS
#define InfraredRightFront A0
#define InfraredRightBack A1
#define InfraredBack A2
#define Led A3
#define Rc_Steering 3
#define Rc_Speed 5
#define WheelEncoder1 10
#define WheelEncoder2 11

//I2C
#define AddressFrontCenter 112
#define AddressFrontRight 113

//Declaration of objects
Infrared IRRF (InfraredRightFront);
Infrared IRRB (InfraredRightBack);
Infrared IRB (InfraredBack);
Ultrasonic USFC (AddressFrontCenter);
Ultrasonic USFR (AddressFrontRight);
Servos servos (ServoPinOut, EscPinOut);
volatile bool interrupt; //Global variable to keep track of the state (AI or RC).
volatile bool firstInterrupt;
volatile int zeroServo;
volatile int encoderCount;
volatile int currentSpeed;
unsigned long startTime;

void setup() {
  Serial.begin(9600);
  IRRF.begin();
  IRRB.begin();
  IRB.begin();
  USFC.begin();
  USFR.begin();
  servos.begin();

  pinMode(Rc_Steering, INPUT);
  pinMode(Rc_Speed, INPUT);
  attachInterrupt(digitalPinToInterrupt(Rc_Steering), highInterrupt, RISING);
  attachInterrupt(digitalPinToInterrupt(WheelEncoder1), encoderInterrupt, RISING);
  interrupt = false; //Initialize the global variable to false.
  firstInterrupt = true;
  zeroServo = 0;
  encoderCount = 0;
  currentSpeed=0;
  startTime = 0;
}

// Interrupt Service Routine

// Should be as light as possible so no logic here!

void highInterrupt () {
  interrupt = true;
}

void encoderInterrupt() {
  encoderCount = encoderCount + 1;
}

// Main Loop
void loop() {
  calculateSpeed();
    if (interrupt) {;
      handleRC();
      //Serial.println("handlerc");
    }
    else {
      handleSerialInput();
      //Serial.println("handle Serial");
    }
    //delay (500);
}

void calculateSpeed() {
  if (startTime == 0) {
    startTime = millis();
  }
  else if (millis() >= (startTime+100)) {
    currentSpeed = (encoderCount/4 * 10)*20;
    startTime=millis();
    Serial.print("Speed: ");
    Serial.println(currentSpeed);
  }
}

void handleSerialInput() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    if (input.startsWith("m")) { //Input to move
      int throttle = input.substring(1).toInt();
      Serial.print("throttle: "); 
      Serial.println(throttle);
      servos.move(throttle);
    } else if (input.startsWith("t")) { //Input to turn
      int deg = input.substring(1).toInt();
      Serial.print("deg: "); 
      Serial.println(deg);
      servos.turn(deg);
    }
  }
}

void handleRC() {
  unsigned long lengthServo = pulseIn(Rc_Steering, HIGH, 10000);
  unsigned long lengthESC = pulseIn(Rc_Speed, HIGH, 10000);
  Serial.println (lengthESC);
  //Serial.println(lengthServo);
  if (firstInterrupt)
  {
    servos.move(1500);
    servos.turn(90);
    firstInterrupt = false;
  }
  else if (zeroServo >= 5) {
    //Serial.println ("interrupt = false");
    servos.move(1500);
    servos.turn(90);
    interrupt = false;
    zeroServo = 0;
    firstInterrupt = true; 
  }
  else {
    if (lengthServo == 0) { //RC is turned off
      zeroServo = zeroServo + 1;
    }
    else
    {
      zeroServo = 0;
    }

    //Speeding Evaluation
    if ((lengthESC >= 1700) &&(lengthESC <= 2200)) { //Move forward
      //Move Car Forward
      servos.move(1600);
    }
    else if ((lengthESC < 1700)&& (lengthESC >1300)) { //Neutral
      //Neutral
      servos.move(1500);
    }
    else if ((lengthESC <= 1450) && (lengthESC >= 1000)) { //Move back
      //Move Car Back
      servos.move(1250);
    }

    //Turning Evaluation
    if ((lengthServo >= 1550) && (lengthServo <= 2000)) { //Move forward
      //Turn Right
      servos.turn(135);
    }
    else if ((lengthServo < 1550) && (lengthServo >1450)) { //Neutral
      //Center
      servos.turn(90);
    }
    else if ((lengthServo <= 1450) && (lengthServo >= 1000)) { //Move back
      //Turn Left
     servos.turn(45);
    }
  }
}

