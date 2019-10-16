const int led = 7;  
const int sw = 8;
void setup() {
  pinMode(sw, INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  if(digitalRead(sw) == HIGH){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}
