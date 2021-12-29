#ifdef FIRMWARE_EWELINK
  #warning **** Build: FIRMWARE FOR EWELINK ZB-GW03-V1.3 ****

  #undef  SERIAL_LOG_LEVEL
  #define SERIAL_LOG_LEVEL LOG_LEVEL_NONE

  #define USE_ZIGBEE
  #undef  USE_ZIGBEE_ZNP
  #define USE_ZIGBEE_EZSP
  #define USE_UFILESYS
  #define USE_ZIGBEE_EEPROM // T24C512A
  #define USE_TCP_BRIDGE
  #undef  USE_ZIGBEE_CHANNEL
  #define USE_ZIGBEE_CHANNEL 11 // (11-26)
  
  #define USE_ETHERNET
  #undef  ETH_TYPE
  #define ETH_TYPE 0 // ETH_PHY_LAN8720
  #undef  ETH_CLKMODE
  #define ETH_CLKMODE 3 // ETH_CLOCK_GPIO17_OUT
  #undef  ETH_ADDRESS
  #define ETH_ADDRESS 1 // PHY1
#endif

#ifndef USE_MQTT_TLS
#define USE_MQTT_TLS
#define USE_MQTT_TLS_CA_CERT // Optional but highly recommended
#endif
#ifndef USE_MQTT_AWS_IOT_LIGHT
#define USE_MQTT_AWS_IOT_LIGHT
#endif
#ifdef USE_DISCOVERY
#undef USE_DISCOVERY
#endif
