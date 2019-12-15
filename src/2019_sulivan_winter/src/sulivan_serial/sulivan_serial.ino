
void setup() {
  Serial.begin(9600);
  Serial.println("Hello Sulivan");

}

void loop()
{
  if (Serial.available())
  {
    Serial.write(Serial.read());
  }
}
