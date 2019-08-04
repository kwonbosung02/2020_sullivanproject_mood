#define Led_y_1 11
#define Led_y_2 10
#define Led_y_3 9
#define Led_y_4 6
#define Led_y_5 5
#define Led_y_6 3
void setup() {
  
  pinMode(Led_y_1, OUTPUT);
  pinMode(Led_y_2, OUTPUT); 
  pinMode(Led_y_3, OUTPUT); 
  pinMode(Led_y_4, OUTPUT); 
  pinMode(Led_y_5, OUTPUT);
  pinMode(Led_y_6, OUTPUT); 
}

void loop() {

  int i = 0;
  
  for (i = 0; i <= 255; i++){
    analogWrite(Led_y_1,i);
    analogWrite(Led_y_2,i);
    analogWrite(Led_y_3,i);
    analogWrite(Led_y_4,i);
    analogWrite(Led_y_5,i);
    analogWrite(Led_y_6,i);  
    delay(10);
  }
  
  for (i = 0; i <=255; i++){
    analogWrite(Led_y_1,255-i);
    analogWrite(Led_y_2,255-i);
    analogWrite(Led_y_3,255-i);
    analogWrite(Led_y_4,255-i); 
    analogWrite(Led_y_5,255-i);
    analogWrite(Led_y_6,255-i); 
    delay(10); 
  }
}
