#include <QuickAPConnect.h>

void setup() {
  Serial.begin(115200);
  QuickAPConnect.begin("MyESP32AP", "mypassword");
}

void loop() {
  QuickAPConnect.loop();
}
