// #include <iostream>
// #include <vector>
//
// using namespace std;
//
// const vector<int> keys = {1, 1, 1, 2, 2};
// vector<int> inputs = {};
// const int oneInput = 2;
// const int twoInput = 3;
// const int redPin = 4;
// const int greenPin = 5;
// const int timer = 500;
//
// void setup() {
//  pinMode(oneInput,INPUT);
//  pinMode(twoInput,INPUT);
//  pinMode(redPin,OUTPUT);
//  pinMode(greenPin,OUTPUT);
// }
//
// void loop() {
//   if(digitalRead(oneInput) == HEIGH) {
//     inputs.push_back(1);
//     delay(timer);
//   }
//   if(digitalRead(twoInput) == HEIGH) {
//     inputs.push_back(2);
//     delay(timer);
//   }
//
//   if(keys.size() == inputs.size()) {
//     if(keys == inputs) {
//       digitalWrite(redPin, HIGH);
// 			delay(timer);
// 			digitalWrite(redPin, LOW);
//     } else {
//       digitalWrite(greenPin, HIGH);
// 			delay(timer);
// 			digitalWrite(greenPin, LOW);
//     }
//
//     inputs.clear();
//   }
// }

String inputCode = "";
String accessCode = "ABBAB";
const int aInput = 2;
const int bInput = 3;
const int redPin = 4;
const int greenPin = 5;
const int timer = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(aInput,INPUT);
  pinMode(bInput,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
}

void loop() {
  if (digitalRead(aInput) == HIGH){
    inputCode += "A";
    Serial.println(inputCode);
    delay(timer);

  }
  if (digitalRead(bInput) == HIGH){
    inputCode += "B";
    Serial.println(inputCode);
    delay(timer);
  }


  if (inputCode.length() == accessCode.length()){
    if (inputCode.equals(accessCode)){
      for (int i = 0; i< 3; i++){
        digitalWrite(greenPin, HIGH);
        delay(250);
        digitalWrite(greenPin, LOW);
      }
    }
    else{
      digitalWrite(redPin, HIGH);
      delay(timer);
      digitalWrite(redPin, LOW);
    }
    inputCode = "";
  }
}
