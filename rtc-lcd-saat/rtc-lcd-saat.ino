// YENIDEN OLUSTURULMUS ORNEK - orijinal tarihî sketch degildir.
// Gereken kutuphaneler: RTClib (Adafruit), LiquidCrystal_I2C
#include <Wire.h>
#include <RTClib.h>
#include <LiquidCrystal_I2C.h>

RTC_DS3231 rtc;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Wire.begin();
  lcd.init();
  lcd.backlight();
  if (!rtc.begin()) {
    lcd.print("RTC bulunamadi");
    while (true) delay(1000);
  }
  if (rtc.lostPower()) {
    // Yalnizca guc kaybi durumunda derleme zamanina ayarlar.
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }
}

void loop() {
  DateTime now = rtc.now();
  char dateLine[17];
  char timeLine[17];
  snprintf(dateLine, sizeof(dateLine), "%02d/%02d/%04d",
           now.day(), now.month(), now.year());
  snprintf(timeLine, sizeof(timeLine), "%02d:%02d:%02d",
           now.hour(), now.minute(), now.second());
  lcd.setCursor(0, 0);
  lcd.print("Tarih:          ");
  lcd.setCursor(7, 0);
  lcd.print(dateLine);
  lcd.setCursor(0, 1);
  lcd.print("Saat:           ");
  lcd.setCursor(6, 1);
  lcd.print(timeLine);
  delay(250);
}
