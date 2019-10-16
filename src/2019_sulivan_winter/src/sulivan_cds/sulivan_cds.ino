#define led 7  
#define cds A0
void setup() {
  pinMode(led,OUTPUT);
  pinMode(cds,INPUT)
}

void loop() {
  if(analogRead(A0) > 700){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  
}
