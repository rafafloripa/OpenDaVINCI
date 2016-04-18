#include <Smartcar.h>

#define MARGIN_ERROR 100
#define PULSES_PER_METER 33

//OUT PINS
#define SERVO_PIN A5                                              //Pin for the servo, move right and left.
#define ESC_PIN 6                                                 //Pin for the ESC, move forward and back.

//IN PINS
#define RC_PIN_STEERING 3                                         // Pin to receive from the RC for the steering
#define RC_PIN_ESC 5                                              // Pin to receive form the RC for the speed
#define InfraredRightFront A0
#define InfraredRightBack A1
#define InfraredBack A2
#define Led A3
#define WheelEncoder1 2
#define WheelEncoder2 4

//I2C
#define AddressFrontCenter 112
#define AddressFrontRight 113

//Variables
volatile bool interrupt;                                          // Global variable to keep track of the state (AI or RC).
bool firstInterrupt;
int zeroServo;
unsigned long startTimeData;
String ourBuffer = "";

//Declaration of objects
GP2D120 IRRF;
GP2D120 IRRB;
GP2D120 IRB;
SRF08 USFC;
SRF08 USFR;
Odometer encoderLeft(PULSES_PER_METER);
Car car(useServo(SERVO_PIN), useESC(ESC_PIN));

void setup() {

// Start the Serial
  Serial.begin(9600);

// Initiate all the objects
  IRRF.attach(InfraredRightFront);
  IRRB.attach(InfraredRightBack);
  IRB.attach(InfraredBack);
  USFC.attach(AddressFrontCenter);
  USFR.attach(AddressFrontRight);
  Serial.setTimeout(100);                                         //Timeout to wait for the serial in, in case it does not reach the '\n'
  encoderLeft.attach(WheelEncoder1);
  car.begin(encoderLeft);

// Declare the pins as inputs
  pinMode(RC_PIN_STEERING, INPUT);
  pinMode(RC_PIN_ESC, INPUT);

// Attach interrupt to RC pin
  attachInterrupt(digitalPinToInterrupt(RC_PIN_STEERING), rcInterrupt, RISING);

// Initiate Variables
  interrupt = false;                                              // Interrupt flag to know in what mode the car is (RC or Serial)
  firstInterrupt = true;                                          // Flag to know if its the first interrupt might change when the rc signal changes
  zeroServo = 0;                                                  // Counter to know how many times the servo has sent a 0 freq (used to know when the RC is off)
  startTimeData = millis();                                       // Milliseconds counter to know when to send next sensor data.
}

void loop() {
    //delay(500);
    if (interrupt) {
      handleRC();
    }
    else {
      sendData();
      checkSerial();
      String packet = parseBuffer();
      if (packet!= "") {
        executePacket(packet);
      }
    }
}

// Interrupt Service Routine
// Should be as light as possible so no logic here!
void rcInterrupt () {
  interrupt = true;
}

void sendData() {
  if (millis() >= (startTimeData+100)) {                            // Send sensor data ten times per second (every 100ms)
    float usfc = USFC.getDistance();
    float usfr = USFR.getDistance();
    float irrf = IRRF.getDistance();
    float irrb = IRRB.getDistance();
    float irb = IRB.getDistance();
    String data = "(" + String(usfc) + "," + String(usfr) + "," + String(irrf) + "," + String(irrb) + "," + String(irb) + ")";
    Serial.print(data);
    startTimeData = millis();
  }
}

void executePacket(String packet) {
  int maxlength = packet.length();
  String input = packet.substring(1, maxlength-1);
  Serial.print("input: ");
  Serial.println(input);
  int commaIndex = input.indexOf(',');                          // Look for the comma
  int val1 = 0;
  val1= input.substring(0, commaIndex).toInt();            // Take the 1st number (speed)
  Serial.print("val1: ");
  Serial.println(val1);
  int val2 = 0;
  val2 = input.substring(commaIndex+1).toInt();
  Serial.print("val2: ");
  Serial.println(val2);
  val1 = constrain(val1, -70, 20);                              // Constrain the min and max values available for val1
  val2 = constrain(val2, -45, 45);                              // Constrain the min and max values available for val2
  car.setSpeed(val1);
  car.setAngle(val2);
}

void checkSerial() {
  if (Serial.available()) 
    ourBuffer += Serial.readStringUntil('\n');
}

String parseBuffer() {
  String package = "";
  int bufferSize = ourBuffer.length();                             //Check the entire buffer
  bool endDelimeter = false;
  bool start = false;
  int n = 0;
  while (!endDelimeter && n < bufferSize) {                              //Try to make a package
      if ((ourBuffer[n]==')') && (start)) {                               //found the end delimeter 
          package += ourBuffer[n];
          endDelimeter = true;
      }
      else if (ourBuffer[n]=='(') {                          //found the start delimeter
          start = true;
          package = "(";
      }
      else {
          if (start)
              package += ourBuffer[n];                           //else keep adding
      }
      n++;
  }
  bufferSize = package.length();
  if (start && endDelimeter) {                         //checks if the package has the correct delimeters
      ourBuffer = ourBuffer.substring(n+1);                                  //erases all the unnecessary bits
      return package;
  }
  return "";
}

//handle serial input if there is any
void handleInput() {
  if (Serial.available()) {
//    String input = Serial.readStringUntil('z');
//    Serial.print("::");
//    Serial.println(input);
     
//    Serial.print("package is: ");
//    Serial.println(package);
//    
//    int length = input.length();
//    if ((input[0]=='(') && (input[length-1])==')') {                // Checks that the start and end delimeters exist
//     
//      input = input.substring(1, length-1);                         // Take away the delimeters
//      int commaIndex = input.indexOf(',');                          // Look for the comma
//      int val1 = 0;
//      val1= input.substring(0, commaIndex).toInt();            // Take the 1st number (speed)
//      int val2 = 0;
//      val2 = input.substring(commaIndex+1).toInt();             // Take the 2nd number (angle)
//      val1 = constrain(val1, -70, 20);                              // Constrain the min and max values available for val1
//      val2 = constrain(val2, -45, 45);                              // Constrain the min and max values available for val2
//      //Serial.print("val1: ");
//      //Serial.println(val1);
//      //Serial.print("val2: ");
//      //Serial.println(val2);
//      car.setSpeed(val1);
//      car.setAngle(val2);
//    }
  }
}

//String extractValue(String values) {
//  for (int i = 0; 
//  
//}

//Everything the Rc has to do.
void handleRC() {
  unsigned long lengthServo = pulseIn(RC_PIN_STEERING, HIGH, 10000);
  unsigned long lengthESC = pulseIn(RC_PIN_ESC, HIGH, 10000);
  if (firstInterrupt) {                                              //First time it comes into the interrupt
    car.setSpeed(0);
    car.setAngle(0);
    firstInterrupt = false;
  }
  else if (zeroServo >= 50) {                                         //Checks for 5 loops if RC is turned off
    car.setSpeed(0);
    car.setAngle(0);
    interrupt = false;
    zeroServo = 0;
    firstInterrupt = true; 
  }
  else {
    if (lengthServo == 0) {                                           //RC is turned off for this loop
      zeroServo = zeroServo + 1;
    }
    else {
      zeroServo = 0;
    }
    if ((lengthESC >= 1700) &&(lengthESC <= 2200)) {                  //Move forward
      //Move Car Forward
      car.setSpeed(17);
    }
    else if ((lengthESC < 1700)&& (lengthESC >1300)) {                //Neutral
      //Neutral
      car.setSpeed(0);
    }
    else if ((lengthESC <= 1450) && (lengthESC >= 1000)) {            //Move back
      //Move Car Back
      car.setSpeed(-70);
    }
    if ((lengthServo >= 1550) && (lengthServo <= 2000)) {             //Move forward
      //Move Car Forward
      car.setAngle(45);
    }
    else if ((lengthServo < 1550) && (lengthServo >1450)) {           //Neutral
      //Neutral
      car.setAngle(0);
    }
    else if ((lengthServo <= 1450) && (lengthServo >= 1000)) {        //Move back
      //Move Car Back
     car.setAngle(-45);
    }
  }
}

