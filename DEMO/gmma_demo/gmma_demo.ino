#include "MicMMS.h"
/*------------------- Information Program -------------------*/
//  MicMMS version 1.1.0  (Version code)
// mc 129, 130, 138, 140 (Delete -1 from modbus task)
/*----------------------------------------------------------*/

/*------------------- Data list -------------------*/
// MicMMS aaa("WiFi_name", "Password", "Mqtt_server", Mqtt_port,"/department/process/","machine_number", 1, Serial1,"IP_Address","Gate_way","Subnet_mask","Version_coding");
/*-------------------------------------------------*/

// MicMMS aaa("MIC_IIOT_1", "mic@admin", "192.168.1.104", 1883, "/gmma/demo/", "129", 1, Serial1, "192.168.1.129", "192.168.1.1", "255.255.255.0", "1.1.0");
MicMMS aaa("MIC_Iot", "Micdev@2024", "192.168.0.201", 1883,"/gmma/demo/","146", 1, Serial1,"192.168.0.124","192.168.0.1","255.255.255.0","1.1.0"); //MIC are test
// MicMMS aaa("TP-Link_EF46", "98148813", "192.168.1.100", 1883,"/gmma/demo/","146", 1, Serial1,"192.168.1.200","192.168.1.1","255.255.255.0","1.1.0");

void setup() {
  aaa.init();
  aaa.start();
}

void loop() {
  aaa.run();
}