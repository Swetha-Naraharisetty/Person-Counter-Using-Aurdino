#include <DHT.h>
#define DHTPIN 2
DHT dht(DHTPIN, DHT11);
// Setup Wifi Connectivity, The Code Automatically Selects the Wifi Module
#ifdef SPARK
#include "ThingSpeak/ThingSpeak.h"
#else
#include "ThingSpeak.h"
#endif
#ifdef ARDUINO_ARCH_AVR
#ifdef ARDUINO_AVR_YUN
#include "YunClient.h"
YunClient client;
#else
#ifdef USE_WIFI_SHIELD
#include <SPI.h>
// #include <WiFi.h> // Always comment this if your using ESP8266
char ssid[] = "venkat"; // your network SSID (name)
char pass[] = "123456789"; // your network password
int status = WL_IDLE_STATUS;
WiFiClient client;
#else
// Use wired ethernet shield
#include <SPI.h>
#include <Ethernet.h>
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED};
EthernetClient client;
#endif
#endif
// On Arduino: 0 - 1023 maps to 0 - 5 volts
#define VOLTAGE_MAX 5.0
#define VOLTAGE_MAXCOUNTS 1023.0
#endif
#ifdef ARDUINO_ARCH_ESP8266
#include <ESP8266WiFi.h>
char ssid[] = "venkat"; // your network SSID (name)
char pass[] = "123456789"; // your network password
int status = WL_IDLE_STATUS;
WiFiClient client;
// On ESP8266: 0 - 1023 maps to 0 - 1 volts
#define VOLTAGE_MAX 1.0
#define VOLTAGE_MAXCOUNTS 1023.0
#endif
#ifdef SPARK
TCPClient client;
// On Particle: 0 - 4095 maps to 0 - 3.3 volts
#define VOLTAGE_MAX 3.3
#define VOLTAGE_MAXCOUNTS 4095.0
#endif
/*
********************************************************************************
*********
**** Visit https://www.thingspeak.com to sign up for a free account and create
**** a channel. The video tutorial http://community.thingspeak.com/tutorials/thingspeakchannels/
**** has more information. You need to change this to your channel, and your write API key
**** IF YOU SHARE YOUR CODE WITH OTHERS, MAKE SURE YOU REMOVE YOUR
WRITE API KEY!!
********************************************************************************
*********/
unsigned long myChannelNumber = 158552; // add your channel id here
const char * myWriteAPIKey = "8DU2YGTCTM80RXXL"; // add Write API Key
void setup() {
// put your setup code here, to run once:
dht.begin();
#if defined(ARDUINO_ARCH_AVR) || defined(ARDUINO_ARCH_ESP8266)
#ifdef ARDUINO_AVR_YUN
Bridge.begin();
#else
#if defined(USE_WIFI_SHIELD) || defined(ARDUINO_ARCH_ESP8266)
WiFi.begin(ssid, pass);
#else
Ethernet.begin(mac);
#endif
#endif
#endif
ThingSpeak.begin(client);
}
void loop() {
// put your main code here, to run repeatedly:
// Read data from DHT Sensor
float h = dht.readHumidity();
float t = dht.readTemperature();
if (isnan(h) || isnan(t)) {
Serial.println("Failed to read from DHT sensor!");
return;
} // Upload Sensor Information to Cloud
// Write to ThingSpeak. There are up to 8 fields in a channel, allowing you to store up to 8 different
// pieces of information in a channel. Here, we write to field 1.
ThingSpeak.writeField(myChannelNumber, 1, h, myWriteAPIKey);
ThingSpeak.writeField(myChannelNumber, 2, t, myWriteAPIKey);
delay(20000); // ThingSpeak will only accept updates every 15 seconds.
}
