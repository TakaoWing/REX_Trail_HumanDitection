/*人感センサーライトをつくろう！その１
   内容
   人を検知してシリアルモニタに表示する
*/
const int pirPin = 2; // 人感センサのピン

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(pirPin) == HIGH){
    Serial.println("異常検知！！");
  }
  else{
    Serial.println("異常ありません");
  }
  delay(100);
}
