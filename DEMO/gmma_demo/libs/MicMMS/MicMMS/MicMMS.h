#ifndef MICMMS_H
#define MICMMS_H

/*------------------- Information Program -------------------*/
//  MicMMS version 1.1.0  (Version code)
/*----------------------------------------------------------*/

#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>
#include "ModbusRtu.h"
#include <vector>
#include <ArduinoJson.h>

class MicMMS {
private:
  const char* ssid;
  const char* password;
  const char* mqtt_server;
  int mqtt_port;
  const char* dp_name;
  const char* mac_no;
  const char* vrs_code;
  WiFiClient wifiClient;
  PubSubClient mqttClient;

  int slaveId;
  HardwareSerial& serialPort;
  Modbus modbus;

  IPAddress ip;
  IPAddress gateway;
  IPAddress subnet;
public:
  MicMMS(const char* ssid, const char* password, const char* mqtt_server, int mqtt_port, const char* dp_name,const char* mac_no, int slaveId, HardwareSerial& serialPort,const char* ip_address, const char* gateway_address, const char* subnet_mask,const char* vrs_code);
    
  void setupWiFi();
  void reconnect();
  void init();
  void publishMessage(char* topic, const char* message);
  void run();
  void start();
  static void modbus_Task(void* pvParam);
  static void Network_Task(void* pvParam);
  static void func1_Task(void* pvParam);
  static void func2_Task(void* pvParam);
  static void broke_modbus_Task(void* pvParam);
  static void esp_Task(void* pvParam);

};

#endif