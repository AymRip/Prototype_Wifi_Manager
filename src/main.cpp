#include <Arduino.h>
#include <WiFiManager.h>

WiFiManager wm;
//le nom du point d'accès
const char* ssid = "Aquarium";
//le mot de passe du point d'accès
const char* password = "aquarium";

void setup() {
  Serial.begin(9600);
  //permet d'utiliser le wifi en mode station
  WiFi.mode(WIFI_STA);
    //délai de 1 seconde
    delay(1000);
    //sauut de ligne dans la console
    Serial.println("\n");

    //si la connexion ne réussie pas :
    if(!wm.autoConnect(ssid, password))
        Serial.println("Erreur de connexion.");
    //sinon
    else
        Serial.println("Connexion etablie!");
}

void loop() {
  //Ce code permet de supprimer les configurations réseau enregistrés
  //dans la mémoir du ESP 32. Il suffit de toucher quelques pin du ESP32 
  //Après avoir téléversé le code pour supprimer avec succès les configurations 
  //sauvegardées (et de décommenter le code bien sûr)
  /* 
  if(touchRead(T0) < 50)
  {
    Serial.println("Suppression des reglages et redemarrage...");
    wm.resetSettings();
    ESP.restart();
  }*/
}