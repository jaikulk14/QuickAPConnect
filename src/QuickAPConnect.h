#ifndef QUICK_AP_CONNECT_H
#define QUICK_AP_CONNECT_H

#include <WiFi.h>
#include <WebServer.h>

class QuickAPConnectClass {
public:
    void begin(const char* ssid = "ESP32-AccessPoint", const char* password = "12345678");
    void loop();

private:
    WebServer server = WebServer(80);
};

extern QuickAPConnectClass QuickAPConnect;

#endif
