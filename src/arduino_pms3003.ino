

/*
 Name:		arduino_pms3003.ino
 Created:	7/20/2019 8:29:18 PM
 Author:	KWONBOSUNG
*/
#include <SoftwareSerial.h>

SoftwareSerial Serial2(10, 11); 
 
unsigned int pm1 = 0;
unsigned int pm2_5 = 0;
unsigned int pm10 = 0;

void setup() {
  Serial1.begin(9600); 
  Serial2.begin(9600);
}

void loop() {
  int index = 0;
  char value;
  char previousValue;

  while (Serial1.available()) {
    value = Serial1.read();
    if ((index == 0 && value != 0x42) || (index == 1 && value != 0x4d)){
      Serial.println("Cannot find the data header.");
      break;
    }

    if (index == 4 || index == 6 || index == 8 || index == 10 || index == 12 || index == 14) {
      previousValue = value;
    }
    else if (index == 5) {
      pm1 = 256 * previousValue + value;  
      Serial.print(pm1);  
    }
    else if (index == 7) {
      pm2_5 = 256 * previousValue + value;
      Serial.print(pm2_5);
 
	}
    else if (index == 9) {
      pm10 = 256 * previousValue + value;
      Serial.print(pm10);
    } 
	else if (index > 15) {
      break;
    }
    index++;
  }
  while(Serial.available()) Serial.read();
  Serial2.print(pm2_5);
  Serial2.print(pm10);
  delay(2000);
}