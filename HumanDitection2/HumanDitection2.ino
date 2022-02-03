/*人感センサーライトをつくろう！その2
   内容
   人を検知してLEDで表示
*/
const int pirPin = 2; // 人感センサのピン
const int ledPin = 11; // LEDのピン

void setup() {
  pinMode(pirPin, INPUT_PULLUP); // 人感センサのピンを入力のPULLUPモードにする
  pinMode(ledPin, OUTPUT); // LEDのピンを出力にする
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(pirPin) == HIGH){ // 人を検知したら
    digitalWrite(ledPin,HIGH); // LEDを点灯
    Serial.println("異常検知！！");
  }
  else{ // 検知しなければ
    digitalWrite(ledPin,LOW); // LEDを消灯
    Serial.println("異常ありません"); 
  }
  delay(100);
}
