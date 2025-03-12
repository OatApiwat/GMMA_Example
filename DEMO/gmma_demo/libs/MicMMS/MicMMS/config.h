#ifndef CONFIG_H
#define CONFIG_H

/*------------------- Information Program -------------------*/
//  MicMMS version 1.1.0 (Version code)
/*----------------------------------------------------------*/

#define Pinled1 41              // LED for Detected the Publish data
#define Pinled2 42              // LED for Connection Internet
#define rsRx 18                 // Pin for Serial RS232/RS485 UART Rx 18
#define rsTx 17                 // Pin for Serial RS232/RS485 UART Tx 17
#define SaveDisconnectTime 1000 // Time im ms for save disconnection

/*--------- Topics to Publish MQTT Broker ---------*/
char *topic_pub_1 = "data"; // data/gmma/demo/A01
char *topic_pub_2 = "status";
//  char* topic_pub_3 = "alarm";
char *topic_esp_health = "esp_health";
char *topic_broke_modbus = "mqtt";

/*--------- Timer config ---------*/
const uint16_t itr_modbus = 100; // ms
const uint16_t itr_fnc_1 = 1000; // ms
const uint16_t itr_fnc_2 = 1000; // ms
// const uint16_t itr_fnc_3 = 1000;  // ms
const uint16_t itr_esp = 20000;    // ms
const uint16_t itr_network = 5000; // ms  5s
const uint16_t itr_bro_mod = 5000; // ms  5s

/*--------- Variable config ---------*/
const uint8_t num_got_data = 70;
uint16_t got_data[num_got_data];

float init_heap;
uint16_t bkr_connect, modb_check;
uint16_t query_check1, query_check2;
uint16_t query_temp1, query_temp2, tigger_1 = 1;
String status;
String prv_status;
// String alarm_;
// String prv_alarm;
unsigned long long prv_time = 0;
unsigned long long prv_time_1 = 0;
unsigned long long prv_time_2 = 0;
uint16_t heap_cnt1, heap_cnt2, heap_cnt3;
float ct_fn1, ct_fn2, ct_read;                // ct_fn3,
uint16_t ct_read_cnt, ct_fn1_cnt, ct_fn2_cnt; // ct_fn3_cnt

/*--------- Number Time config CPU ---------*/
const uint16_t ct_read_ = 400;       // 400 microsec
const unsigned int ct_fn1_ = 100000; // 100  ms
const unsigned int ct_fn2_ = 100000; // 100  ms
// const unsigned int ct_fn3_ = 100000;  //100  ms

String def_tb[][5] = {
    // name||address||type||value||prv_value
    // type for separate detail of data
    {"mc_setup", "30", "1", "", ""},  // Status1
    {"mc_adjust", "31", "1", "", ""}, // Status2
    {"mc_chTool", "32", "1", "", ""}, // Status3
    {"mc_warm", "33", "1", "", ""},   // Status4
    {"mc_other", "34", "1", "", ""},  // Status5
    {"mc_stop", "35", "1", "", ""},   // Status6
    {"mc_run", "36", "1", "", ""},    // Status7
    {"mc_alarm", "37", "1", "", ""},  // Status8
    {"TARGET", "44", "2", "", ""},    // Data production
    {"TL_OUT_A", "45", "2", "", ""},
    {"TL_OUT_B", "46", "2", "", ""},
    {"TL_OUT_C", "47", "2", "", ""},
    {"YIELD_A", "48", "2", "", ""},
    {"YIELD_B", "49", "2", "", ""},
    {"YIELD_C", "50", "2", "", ""},
    {"TRAY_1_COUNT", "51", "2", "", ""},
    {"TRAY_2_COUNT", "52", "2", "", ""},
    {"TRAY_3_COUNT", "53", "2", "", ""},
    {"TL_TRAY", "54", "2", "", ""},

};

#endif