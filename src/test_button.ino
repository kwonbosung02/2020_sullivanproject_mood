// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       test.ino
    Created:	7/23/2019 8:18:43 PM
    Author:     KWONBOSUNG\user
*/
// Define User Types below here or use a .h file
//
// Define Function Prototypes that use User Types below here or use a .h file
//
// Define Functions below here or use other .ino or cpp files
//
// The setup() function runs once each time the micro-controller starts
const int Button = 10;
void setup()
{
	pinMode(Button, INPUT);
	Serial.begin(9600);

}

// Add the main program code into the continuous loop() function
void loop()
{
	int button = digitalRead(Button);

	if (button == 0) {
		Serial.println("on");
	}
	if (button == 1) {
		Serial.println("off");
	}
}
