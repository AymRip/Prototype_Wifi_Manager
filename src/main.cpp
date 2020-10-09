#include <Arduino.h>
#include <WiFiManager.h>

WiFiManager wm;
const char* ssid = "Aquarium";
const char* password = "aquarium";

void setup() {
  Serial.begin(9600);
  WiFi.mode(WIFI_STA);
    delay(1000);
    Serial.println("\n");

    if(!wm.autoConnect(ssid, password))
        Serial.println("Erreur de connexion.");
    else
        Serial.println("Connexion etablie!");
}

void loop() {
  /*if(touchRead(T0) < 50)
  {
    Serial.println("Suppression des reglages et redemarrage...");
    wm.resetSettings();
    ESP.restart();
  }*/
}