#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

//VGK 210212_1144

#warning **** user_config_override.h: Using Settings from this File ****


// -- Master parameter control --------------------
#undef  CFG_HOLDER
#define CFG_HOLDER        4617                   // [Reset 1] Change this value to load SECTION1 configuration parameters to flash

// -- Setup your own Wifi settings  ---------------
#undef  STA_SSID1
#define STA_SSID1         "KEIPERMAIN"             // [Ssid1] Wifi SSID

#undef  STA_PASS1
#define STA_PASS1         "vin31nat91jack"     // [Password1] Wifi password

// -- Setup your own MQTT settings  ---------------
#undef  MQTT_HOST
#define MQTT_HOST         "192.168.1.129" // [MqttHost]

#undef  MQTT_PORT
#define MQTT_PORT         1883                   // [MqttPort] MQTT port (10123 on CloudMQTT)

#undef  MQTT_USER
#define MQTT_USER         "mqtt_vk3havm"         // [MqttUser] Optional user

#undef  MQTT_PASS
#define MQTT_PASS         "mqtt_vin26nat22"      // [MqttPassword] Optional password

#undef PROJECT
#define PROJECT           "shtas"                // PROJECT is used as the default topic delimiter

#ifdef WIFI_IP_ADDRESS
  #undef WIFI_IP_ADDRESS
#endif
#define WIFI_IP_ADDRESS	""

#ifdef WIFI_SUBNETMASK
  #undef WIFI_SUBNETMASK
#endif
#define WIFI_SUBNETMASK	""

#ifdef WIFI_GATEWAY
  #undef WIFI_GATEWAY
#endif
#define WIFI_GATEWAY	""

#ifdef WIFI_DNS
  #undef WIFI_DNS
#endif
#define WIFI_DNS	""


#undef MQTT_GRPTOPIC
#define MQTT_GRPTOPIC          "shtas"        // [GroupTopic] MQTT Group topic

#undef HOME_ASSISTANT_DISCOVERY_ENABLE
#define HOME_ASSISTANT_DISCOVERY_ENABLE   false  // [SetOption19] Home Assistant Discovery (false = Disable, true = Enable)

#undef FRIENDLY_NAME
#define FRIENDLY_NAME          "Tasmota"         // [FriendlyName] Friendlyname up to 32 characters used by webpages and Alexa


#undef LATITUDE
#defineLATITUDE               40.8687         // [Latitude] Your location to be used with sunrise and sunset
#undef LONGITUDE
#define LONGITUDE             75.2549         // [Longitude] Your location to be used with sunrise and sunset

#undef APP_TIMEZONE
#define APP_TIMEZONE          5               // [Timezone] +1 hour (Amsterdam) (-13 .. 14 = hours from UTC, 99 = use TIME_DST/TIME_STD)

#ifdef USE_MHZ19
  #undef USE_MHZ19
#endif

#ifdef USE_SENSEAIR
  #undef USE_SENSEAIR
#endif

#ifdef USE_PMS5003
  #undef USE_PMS5003
#endif

#ifdef USE_MGS
  #undef USE_MGS
#endif

#ifdef USE_NOVA_SDS
  #undef USE_NOVA_SDS
#endif

#ifdef USE_SGP30
  #undef USE_SGP30
#endif

#ifdef USE_CCS811
  #undef USE_CCS811
#endif

#ifdef USE_SCD30
  #undef USE_SCD30
#endif

#ifdef USE_SPS30
  #undef USE_SPS30
#endif

#ifdef USE_HPMA
  #undef USE_HPMA
#endif

#ifdef USE_IAQ
  #undef USE_IAQ
#endif

#ifdef USE_EMULATION
  #undef USE_EMULATION
#endif

#ifdef USE_EMULATION_HUE
  #undef USE_EMULATION_HUE
#endif

#ifdef USE_EMULATION_WEMO
  #undef USE_EMULATION_WEMO
#endif

#ifdef USE_TASMOTA_CLIENT
  #undef USE_TASMOTA_CLIENT
#endif
//#define USE_TASMOTA_CLIENT_FLASH_SPEED 57600

#ifdef USE_ADC_VCC
  #undef USE_ADC_VCC
#endif
#define USE_ADC_VCC

#ifdef USE_DISPLAY
  #undef USE_DISPLAY
#endif

#ifdef USE_DISPLAY_MODES1TO5
  #undef USE_DISPLAY_MODES1TO5
#endif

#ifdef USE_DISPLAY_LCD
  #undef USE_DISPLAY_LCD
#endif

#ifdef USE_DISPLAY_SSD1306
  #undef USE_DISPLAY_SSD1306
#endif

#ifdef USE_DISPLAY_MATRIX
  #undef USE_DISPLAY_MATRIX
#endif

#ifdef USE_DISPLAY_ILI9341
  #undef USE_DISPLAY_ILI9341
#endif

#ifdef USE_DISPLAY_EPAPER_29
  #undef USE_DISPLAY_EPAPER_29
#endif

#ifdef USE_DISPLAY_EPAPER_42
  #undef USE_DISPLAY_EPAPER_42
#endif

#ifdef USE_DISPLAY_SH1106
  #undef USE_DISPLAY_SH1106
#endif

#ifdef USE_DISPLAY_ILI9488
  #undef USE_DISPLAY_ILI9488
#endif

#ifdef USE_DISPLAY_SSD1351
  #undef USE_DISPLAY_SSD1351
#endif

#ifdef USE_DISPLAY_RA8876
  #undef USE_DISPLAY_RA8876
#endif

#ifdef USE_DISPLAY_SEVENSEG
  #undef USE_DISPLAY_SEVENSEG
#endif

#ifdef USE_DISPLAY_ST7789
  #undef USE_DISPLAY_ST7789
#endif

#ifdef USE_DISPLAY_SSD1331
  #undef USE_DISPLAY_SSD1331
#endif

#ifdef USE_SR04
  #undef USE_SR04
#endif

#ifdef USE_VL53L0X
  #undef USE_VL53L0X
#endif

#ifdef USE_HRXL
  #undef USE_HRXL
#endif

#ifdef USE_DYP
  #undef USE_DYP
#endif

#ifdef USE_VL53L1X
  #undef USE_VL53L1X
#endif

#ifdef USE_DOMOTICZ
  #undef USE_DOMOTICZ
#endif

#ifdef USE_ENERGY_SENSOR
  #undef USE_ENERGY_SENSOR
#endif

#ifdef USE_HLW8012
  #undef USE_HLW8012
#endif

#ifdef USE_CSE7766
  #undef USE_CSE7766
#endif

#ifdef USE_PZEM004T
  #undef USE_PZEM004T
#endif

#ifdef USE_MCP39F501
  #undef USE_MCP39F501
#endif

#ifdef USE_PZEM_AC
  #undef USE_PZEM_AC
#endif

#ifdef USE_PZEM_DC
  #undef USE_PZEM_DC
#endif

#ifdef USE_ADE7953
  #undef USE_ADE7953
#endif

#ifdef USE_SDM120
  #undef USE_SDM120
#endif

#ifdef USE_DDS2382
  #undef USE_DDS2382
#endif

#ifdef USE_SDM630
  #undef USE_SDM630
#endif

#ifdef USE_DDSU666
  #undef USE_DDSU666
#endif

#ifdef USE_SOLAX_X1
  #undef USE_SOLAX_X1
#endif

#ifdef USE_LE01MR
  #undef USE_LE01MR
#endif

#ifdef USE_BL0940
  #undef USE_BL0940
#endif

#ifdef USE_TELEINFO
  #undef USE_TELEINFO
#endif

#ifdef USE_IEM3000
  #undef USE_IEM3000
#endif

#ifdef USE_WE517
  #undef USE_WE517
#endif

#ifdef USE_HOME_ASSISTANT
  #undef USE_HOME_ASSISTANT
#endif
#define USE_HOME_ASSISTANT

#ifdef USE_I2C
  #undef USE_I2C
#endif
#define USE_I2C

#ifdef USE_MCP230xx
  #undef USE_MCP230xx
#endif

#ifdef USE_MCP230xx_OUTPUT
  #undef USE_MCP230xx_OUTPUT
#endif

#ifdef USE_MCP230xx_DISPLAYOUTPUT
  #undef USE_MCP230xx_DISPLAYOUTPUT
#endif

#ifdef USE_IR_REMOTE
  #undef USE_IR_REMOTE
#endif

#ifdef USE_IR_REMOTE_FULL
  #undef USE_IR_REMOTE_FULL
#endif

#ifdef USE_KNX
  #undef USE_KNX
#endif

#ifdef USE_DISCOVERY
  #undef USE_DISCOVERY
#endif
#define USE_DISCOVERY

#ifdef USE_MQTT_TLS
  #undef USE_MQTT_TLS
#endif

#ifdef USE_RC_SWITCH
  #undef USE_RC_SWITCH
#endif

#ifdef USE_RULES
  #undef USE_RULES
#endif
#define USE_RULES

#ifdef USE_EXPRESSION
  #undef USE_EXPRESSION
#endif
#define USE_EXPRESSION

#ifdef SUPPORT_IF_STATEMENT
  #undef SUPPORT_IF_STATEMENT
#endif
#define SUPPORT_IF_STATEMENT

#ifdef USE_SCRIPT
  #undef USE_SCRIPT
#endif

#ifdef SUPPORT_MQTT_EVENT
  #undef SUPPORT_MQTT_EVENT
#endif
#define SUPPORT_MQTT_EVENT                     // Support trigger event with MQTT subscriptions (+3k5 code)

#ifdef USE_SPI
  #undef USE_SPI
#endif

#ifdef USE_SONOFF_SC
  #undef USE_SONOFF_SC
#endif
#define USE_SONOFF_SC

#ifdef USE_DS18x20
  #undef USE_DS18x20
#endif
#define USE_DS18x20

#ifdef USE_DHT
  #undef USE_DHT
#endif
#define USE_DHT

#ifdef USE_SHT
  #undef USE_SHT
#endif
#define USE_SHT

#ifdef USE_HTU
  #undef USE_HTU
#endif
#define USE_HTU

#ifdef USE_BMP
  #undef USE_BMP
#endif
#define USE_BMP

#ifdef USE_SHT3X
  #undef USE_SHT3X
#endif
//#define USE_SHT3X

#ifdef USE_LM75AD
  #undef USE_LM75AD
#endif
//#define USE_LM75AD

#ifdef USE_APDS9960
  #undef USE_APDS9960
#endif
//#define USE_APDS9960

#ifdef USE_AZ7798
  #undef USE_AZ7798
#endif
//#define USE_AZ7798

#ifdef USE_MAX31855
  #undef USE_MAX31855
#endif
//#define USE_MAX31855

#ifdef USE_MLX90614
  #undef USE_MLX90614
#endif
//#define USE_MLX90614

#ifdef USE_MAX31865
  #undef USE_MAX31865
#endif
//#define USE_MAX31865

#ifdef USE_HIH6
  #undef USE_HIH6
#endif
//#define USE_HIH6

#ifdef USE_DHT12
  #undef USE_DHT12
#endif
//#define USE_DHT12

#ifdef USE_DS1624
  #undef USE_DS1624
#endif
//#define USE_DS1624

#ifdef USE_AHT1x
  #undef USE_AHT1x
#endif
//#define USE_AHT1x

#ifdef USE_HDC1080
  #undef USE_HDC1080
#endif
//#define USE_HDC1080

#ifdef USE_MCP9808
  #undef USE_MCP9808
#endif
//#define USE_MCP9808

#ifdef USE_HP303B
  #undef USE_HP303B
#endif
//#define USE_HP303B

#ifdef USE_LMT01
  #undef USE_LMT01
#endif
//#define USE_LMT01

#ifdef USE_TIMERS
  #undef USE_TIMERS
#endif
#define USE_TIMERS

#ifdef USE_TUYA_MCU
  #undef USE_TUYA_MCU
#endif

#ifdef USE_WEBSERVER
  #undef USE_WEBSERVER
#endif
#define USE_WEBSERVER

#ifdef USE_WS2812
  #undef USE_WS2812
#endif

#ifdef USE_ZIGBEE
  #undef USE_ZIGBEE
#endif

#ifdef MY_LANGUAGE
  #undef MY_LANGUAGE
#endif
#define MY_LANGUAGE	en_GB

#endif