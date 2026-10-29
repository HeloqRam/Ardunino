# HC-SR04 mesafe sensörü ve buzzer

**Durum:** Geçmiş projeden esinlenilerek yeniden yazıldı; eski sketch'e birebir eşdeğer olduğu doğrulanmadı.

Arduino Uno/Nano örnek bağlantısı: `TRIG → D7`, `ECHO → D8`, `buzzer sinyali → D9`. HC-SR04'e uygun 5V ve ortak GND bağlayın; 3.3V kartlarda ECHO seviyesini düşürün.

Örnek, 20 cm veya daha yakındaki cisimlerde **pasif buzzer** için 2 kHz uyarı sesi verir. Serial Monitor `9600` baud. Ölçüm zaman aşımında uyarı kesilir. Aktif buzzer kullanıyorsanız tone/noTone yerine digitalWrite gerekebilir.

**Test:** Fiziksel donanımda çalıştırılmadı.
