#include <Infrared.h>
#include <Ultrasonic.h>
#include <Servos.h>

//OUT PINS
#define SERVO_PIN A5                                              //Pin for the servo, move right and left.
#define ESC_PIN 6                                                 //Pin for the ESC, move forward and back.

//IN PINS
#define RC_STEERING 3                                         // Pin to receive from the RC for the steering
#define RC_ESC 5                                              // Pin to receive form the RC for the speed
#define InfraredRightFront A0
#define InfraredRightBack A1
#define InfraredBack A2
#define Led A3
#define WheelEncoder1 2
#define WheelEncoder2 4

//I2C
#define AddressFrontCenter 112
#define AddressFrontRight 113

//Declaration of objects
Infrared IRRF (InfraredRightFront);
Infrared IRRB (InfraredRightBack);
Infrared IRB (InfraredBack);
Ultrasonic USFC (AddressFrontCenter);
Ultrasonic USFR (AddressFrontRight);
Servos servos (SERVO_PIN, ESC_PIN);

//Variables
volatile bool interrupt; //Global variable to keep track of the state (AI or RC).
volatile bool firstInterrupt;
volatile int zeroServo;
unsigned long startTimeData;
String ourBuffer = "";

//Constants
const int deviation = -10;
const int maxReverse = -70;
const int maxSpeed = 20;
const int maxTurn = 45;

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(100);
  IRRF.begin();
  IRRB.begin();
  IRB.begin();
  USFC.begin();
  USFR.begin();
  servos.begin();

  pinMode(RC_STEERING, INPUT);
  pinMode(RC_ESC, INPUT);
  attachInterrupt(digitalPinToInterrupt(RC_STEERING), highInterrupt, RISING);
  //attachInterrupt(digitalPinToInterrupt(WheelEncoder1), encoderInterrupt, RISING);
  interrupt = false; //Initialize the global variable to false.
  firstInterrupt = true;
  zeroServo = 0;
  startTimeData = millis();
}

// Main Loop
void loop() {
    if (interrupt) {
      //sendData();
      handleRC();
    }
    else {
      //sendData();
      checkSerial();
      String packet = parseBuffer();
      if (packet!= "") {
        executePacket(packet);
      }
    }
    sendData();
}

// Interrupt Service Routine
// Should be as light as possible so no logic here!

void highInterrupt () {
  interrupt = true;
}

//void encoderInterrupt() {
//  encoderCount = encoderCount + 1;
//}


// Function to handle all the RC behavior.
void handleRC() {
  unsigned long lengthServo = pulseIn(RC_STEERING, HIGH, 10000);
  unsigned long lengthESC = pulseIn(RC_ESC, HIGH, 10000);
  if (firstInterrupt)
  {
    servos.moveWave(1500);
    servos.turn(0);
    firstInterrupt = false;
  }
  else if (zeroServo >= 5) {
    //Serial.println ("interrupt = false");
    servos.moveWave(1500);
    servos.turn(0);
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
      servos.turnWave(lengthServo);
    }
    if (lengthESC > 0) {
        servos.moveWave(lengthESC);
      }
  }
}

void sendData() {
  if (millis() >= (startTimeData+100)) {                                    // Send sensor data ten times per second (every 100ms)
    float usfc = USFC.getDistance();
    float usfr = USFR.getDistance();
    float irrf = IRRF.getDistance();
    float irrb = IRRB.getDistance();
    float irb = IRB.getDistance();
    String data = "(" + String(usfc) + "," + String(usfr) + "," + String(irrf) + "," + String(irrb) + "," + String(irb) + ")";
    Serial.println(data);
    startTimeData = millis();
  }
}

// Executes the packet received.
void executePacket(String packet) {
  int maxlength = packet.length();
  String input = packet.substring(1, maxlength-1);
  int commaIndex = input.indexOf(',');                                      // Look for the comma
  int val1 = 0;
  val1= input.substring(0, commaIndex).toInt();                             // Take the 1st number (speed)
  int val2 = 0;
  val2 = input.substring(commaIndex+1).toInt();                             // Take the seconds number (angle)
  val1 = constrain(val1, maxReverse, maxSpeed);                             // Constrain the min and max values available for val1
  val2 = constrain(val2, maxTurn*-1, maxTurn);                              // Constrain the min and max values available for val2
  servos.move(val1);
  //Serial.println(val1);
  servos.turn(val2);
  //Serial.println(val2);
}

// Checks if there is something in the serial. If so adds it to our buffer.
void checkSerial() {
  if (Serial.available()) 
    ourBuffer += Serial.readStringUntil('z');
}

// Parse the buffer to check for a package. Parses the buffer from right to left to get the latest command.
// Erases all the previous ones yet keeps the incomplete ones after.
String parseBuffer() {
  String package = "";
  int bufferSize = ourBuffer.length();                             //Check the entire buffer
  bool endDelimeter = false;
  bool start = false;
  int n = bufferSize-1;
  int endBit;
  while (!start && n >= 0) {                              //Try to make a package
      if ((ourBuffer[n]=='(') && endDelimeter) {                          //found the start delimeter
          start = true;
          package += "(";
      }
      else if (ourBuffer[n]==')') {                               //found the end delimeter 
          package = ")";
          endBit = n;
          endDelimeter = true;
      }
      else {
          if (endDelimeter)
              package += ourBuffer[n];                           //else keep adding
      }
      n--;
  }
  if (start && endDelimeter) {                         //checks if the package has the correct delimeters
    if (endBit == bufferSize-1)
      ourBuffer = "";                                  //erases all the unnecessary bits
    else
      ourBuffer = ourBuffer.substring(endBit+1);
    return reverse(package);
  }
  return "";
}

// Help method to reverse the package parsed.
String reverse(String s) {
  int n = s.length()-1;
  String answer = "";
  for (n; n >= 0; n--) {
    answer += s[n];
  }
  return answer;
}
