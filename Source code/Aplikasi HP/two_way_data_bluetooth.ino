#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3); // RX, TX

String removeSpaces(String str) {
  str.trim(); 
  String cleaned = "";
  for (int i = 0; i < str.length(); i++) {
    if (str[i] != ' ') {
      cleaned += str[i];
    }
  }
  return cleaned;
}

void setup() {
  Serial.begin(9600);        
  BTSerial.begin(9600);  
  Serial.println("Bluetooth serial started. Type a number and press Enter.");
}

void loop() {
  if (BTSerial.available()) {  
    String data = BTSerial.readStringUntil('\n');
    Serial.print("Selected Sensor: "); 
    Serial.println(data);   
  }

  if (Serial.available()) {           
    String data = Serial.readStringUntil('\n'); 
    data = removeSpaces(data);        
    BTSerial.println(data);   
  }
}
