byte LED = 0;     // 設定想要控制的 LED 腳位編號
byte t = 0;       // 設定要持續多少秒

void setup() {
  pinMode(2,OUTPUT);
  digitalWrite(2,LOW);
  pinMode(3,OUTPUT);
  digitalWrite(3,LOW);
  pinMode(4,OUTPUT);
  digitalWrite(4,LOW);
}


void loop() {
  LED = random(2,5);      // 隨機決定欲控制 LED 腳位編號
  t = random(1,4);        // 隨機決定秒數
  digitalWrite(LED,HIGH); // 讓該 LED 亮起
  delay(t * 200);        // 持續亮 t 秒
  digitalWrite(LED,LOW);  // 熄掉 LED
  delay(t * 200);        // 持續熄 t 秒
}
