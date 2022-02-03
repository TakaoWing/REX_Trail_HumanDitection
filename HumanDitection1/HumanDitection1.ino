/*人感センサーライトをつくろう！その１
   内容
   人を検知してシリアルモニタに表示する
*/
const int pirPin = 2; // 人感センサのピン

void setup() {
  pinMode(pirPin, INPUT_PULLUP); // 人感センサのピンを入力のPULLUPモードにする
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(pirPin) == HIGH){ // 人を検知したら
    Serial.println("異常検知！！");
  }
  else{ // 検知しなければ
    Serial.println("異常ありません");
  }
  delay(100);
}
