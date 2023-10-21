byte LED_pin = 0; // 設定想要控制的 LED 腳位編號
byte t = 0;       // 設定要持續多少秒

void setup() {
  for(byte i = 1;i<3;i++) {   // 設定腳位 2 ~ 5為輸出
    pinMode(i+1,OUTPUT);      // 同時設定低電位 
    digitalWrite(i+1,LOW);
  }
}

void loop() {
  LED_pin = random(2,6);      // 隨機決定欲控制 LED 腳位編號
  t = random(1,4);        // 隨機決定秒數
  digitalWrite(LED_pin,HIGH); // 讓該 LED 亮起
  delay(t * 50);        // 持續亮 t 秒
  digitalWrite(LED_pin,LOW);  // 熄掉 LED
  delay(t * 50);        // 持續熄 t 秒
}
