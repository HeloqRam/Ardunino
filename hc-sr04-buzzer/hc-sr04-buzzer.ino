// YENIDEN OLUSTURULMUS ORNEK - orijinal tarihî sketch degildir.
const byte TRIG_PIN = 7;
const byte ECHO_PIN = 8;
const byte BUZZER_PIN = 9;
const float WARNING_CM = 20.0f;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  unsigned long duration = pulseIn(ECHO_PIN, HIGH, 30000UL);
  if (duration == 0) {
    noTone(BUZZER_PIN);
    Serial.println("Olcum zaman asimi");
  } else {
    float distanceCm = duration * 0.0343f / 2.0f;
    Serial.print("Mesafe (cm): ");
    Serial.println(distanceCm);
    if (distanceCm <= WARNING_CM) {
      tone(BUZZER_PIN, 2000);
    } else {
      noTone(BUZZER_PIN);
    }
  }
  delay(150);
}
