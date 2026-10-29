// YENIDEN OLUSTURULMUS ORNEK - orijinal tarihî sketch degildir.
// HC-05/HC-06 Bluetooth seri modulu, SoftwareSerial
#include <SoftwareSerial.h>

const byte BT_RX = 10; // Arduino RX (modul TX)
const byte BT_TX = 11; // Arduino TX (modul RX; seviye dusurucu kullanin)
const byte LED_PIN = 13;
SoftwareSerial bluetooth(BT_RX, BT_TX);

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  Serial.begin(9600);
  bluetooth.begin(9600);
  bluetooth.println("Komutlar: 1=AC, 0=KAPAT");
}

void loop() {
  while (bluetooth.available()) {
    char command = bluetooth.read();
    if (command == '1') {
      digitalWrite(LED_PIN, HIGH);
      bluetooth.println("LED ACIK");
    } else if (command == '0') {
      digitalWrite(LED_PIN, LOW);
      bluetooth.println("LED KAPALI");
    }
  }
}
