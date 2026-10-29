# Bluetooth ile LED aç/kapat

**Durum:** Önceki projenin işlevine göre yeniden oluşturulmuş örnektir.

**Donanım:** Arduino Uno/Nano, HC-05/HC-06 seri Bluetooth modülü, D13 dahili LED (veya uygun dirençli harici LED).

**Bağlantı:** Bluetooth `TXD → Arduino D10` (yazılımsal RX), Arduino `D11 → uygun gerilim bölücü → Bluetooth RXD`; GND'leri ortaklayın. Modül güç beslemesini kullandığınız kartın veri sayfasına göre bağlayın.

Bluetooth terminalinden `1` gönderince LED açılır; `0` gönderince kapanır. Baud: `9600` (modül yapılandırmanıza göre değişebilir).

**Test:** Fiziksel donanımda çalıştırılmadı.
