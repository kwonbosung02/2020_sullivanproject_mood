```c
void setup() {
  pinMode(7,OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}
```

`setup` -> 프로그램이 실행되고 딱 한번 실행됩니다.

`loop` -> 프로그램이 실행되고 `setup`이 실행된 다음에 반복해서 실행됩니다.

`pinMode` -> 7번 핀을 출력하는데 사용한다고 정의합니다!

`digtialWrite` -> 7번핀을 HIGH(출력)상태로 만든다고 명령을 내립니다

`delay`-> `delay`는 동작을 지연 시킬 때 사용합니다! 위 프로그램에서 led를 키고 0.5 초 뒤 led를 끕니다. 이 동작을 계속 반복하게 됩니다 ㅎㅎ

![](../../img/1.JPG)

