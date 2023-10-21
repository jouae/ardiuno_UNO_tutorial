int R_pin = 9;    // Red 以 9 號腳位做為輸出
int G_pin = 10;   // Green 以 10 號腳位做為輸出
int B_pin = 11;   // Blue 以 11 號腳位做為輸出

// 定義上半圓函數
int upperCircleFunction(int x) {
  int y;
  y = sqrt(pow(255.0, 2.0)-pow(x-255.0, 2.0));
  return y;
}
void setup() {
  pinMode(R_pin, OUTPUT);
  pinMode(G_pin, OUTPUT);
  pinMode(B_pin, OUTPUT);
}
void loop() {
  int R_light;
  for(int i=0; i<510; i++) {
    R_light = upperCircleFunction(i);
    analogWrite(R_pin, R_light);
    delay(10);
  }
}