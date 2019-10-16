int echoPin = 12;
int trigPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop() {
    digitalWrite(trig, LOW);
    digitalWrite(echo, LOW);
    
    delayMicroseconds(2);
    digitalWrite(trig, HIGH);
    
    delayMicroseconds(10);
    digitalWrite(trig, LOW);

  

    unsigned long duration = pulseIn(echoPin, HIGH); 
  
    float distance = ((float)(340 * duration) / 10000) / 2;  
    //초음파 = 340m/s
  Serial.print(distance);
  Serial.println("cm");

  delay(500);
}
