# QuickAPConnect

**QuickAPConnect** makes it easy to turn your ESP32 into a WiFi Access Point and serve basic HTML, CSS, and JavaScript content – all with minimal setup.

## Features

- One-line setup to create an Access Point
- Easy integration with ESP32 boards
- Minimal boilerplate – plug-and-play use
- Serve basic HTML/CSS/JS from the ESP32

## Example

```cpp
#include <QuickAPConnect.h>

void setup() {
  Serial.begin(115200);
  QuickAPConnect.begin("MyESP32AP", "mypassword");
}

void loop() {
  QuickAPConnect.loop();
}
