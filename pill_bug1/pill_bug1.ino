#include<Servo.h>                              // サーボのインクルードファイル

#define SERVO1 5                               // サーボを5ピンと定義

Servo servo1;                                  // サーボクラスをservo1インスタンスした

void setup() {
  servo1.attach(SERVO1);                       // servo1インスタンスをattach関数でピンを設定
}

void loop() {
  servo1.write(0);                             // servo1を角度0にする
  delay(1000);                                 // 1秒待つ
  servo1.write(180);                           // servo1を角度180度にする
  delay(1000);                                 // 1秒待つ
}
