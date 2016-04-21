String ourBuffer = "";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  checkSerial();
  String temp = parseBuffer();
  if (temp!= "")
    Serial.println(reverse(temp));
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
  int n = bufferSize-1;
  while (!start && n >= 0) {                              //Try to make a package
      if ((ourBuffer[n]=='(') && endDelimeter) {                          //found the start delimeter
        //Serial.println("(");
          start = true;
          package += "(";
      }
      else if (ourBuffer[n]==')') {                               //found the end delimeter 
          //Serial.println(")");
          package = ")";
          endDelimeter = true;
      }
      else {
        //Serial.println(ourBuffer[n]);
          if (endDelimeter)
              package += ourBuffer[n];                           //else keep adding
      }
      n--;
      //Serial.print("start: ");
      //Serial.println(start);
      //Serial.print("enddelimeter: ");
      //Serial.println(endDelimeter);
  }
  //bufferSize = package.length();
  if (start && endDelimeter) {                         //checks if the package has the correct delimeters
      ourBuffer = "";                                  //erases all the unnecessary bits
      return package;
  }
  return "";
}
String reverse(String s) {
  int n = s.length()-1;
  String answer = "";
  for (n; n >= 0; n--) {
    answer += s[n];
  }
  return answer;
}
