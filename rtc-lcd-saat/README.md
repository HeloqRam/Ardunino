# RTC + LCD dijital saat

**Durum:** Önceki çalışmanın işlevinden yola çıkılarak yeniden oluşturuldu; eski sketch'in birebir kopyası değildir.

**Donanım:** Arduino Uno/Nano, DS3231 RTC, I²C arayüzlü 16×2 LCD, bağlantı kabloları.

**Bağlantı (Uno/Nano):** RTC ve LCD I²C `SDA → A4`, `SCL → A5`, `VCC/GND → uygun güç/GND`. RTC modülünün gerilim gereksinimlerini kontrol edin. LCD I²C adresi `0x27`; farklı modüllerde `0x3F` olabilir.

**Kütüphaneler:** Arduino Library Manager üzerinden *RTClib (Adafruit)* ve *LiquidCrystal_I2C* yüklenir.

**Çalışma:** Tarih ve saat ekrana yazılır; DS3231 güç kaybetmişse derleme zamanı ile yeniden ayarlanır. Saatin doğru olması için manuel doğrulama gerekir.

**Test:** Fiziksel kart üzerinde test edilmemiştir.
