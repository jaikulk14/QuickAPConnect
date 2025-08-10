#include "QuickAPConnect.h"

void QuickAPConnectClass::begin(const char* ssid, const char* password) {
    WiFi.softAP(ssid, password);
    IPAddress IP = WiFi.softAPIP();
    Serial.print("Access Point IP address: ");
    Serial.println(IP);

    server.on("/", [this]() {
        server.send(200, "text/html", "<h1>ESP32 Menu Page</h1><p>Status: Connected</p>");
    });

    server.on("/status", [this]() {
        server.send(200, "text/plain", "Status: OK");
    });

    server.begin();
}

void QuickAPConnectClass::loop() {
    server.handleClient();
}

QuickAPConnectClass QuickAPConnect;
