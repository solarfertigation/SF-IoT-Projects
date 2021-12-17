# Repo Dev SolarFertigation IoT Projects

> Hacking EWelink ZBE ZB-GW03

- [Tasmota Website] (https://templates.blakadder.com/ewelink_ZB-GW03)
- [The Helpful Idiot] (https://templates.blakadder.com/ewelink_ZB-GW03)
- [Digital Blur] (https://www.digiblur.com/2020/07/how-to-use-sonoff-zigbee-bridge-with.html)
- [Kvvhost] (https://kvvhost.ru/2020/10/07/sonoff-zigbee-bridge-zha/)

COMPILE HACK FIRMWARE TASMOTA
Login at GitPod with personal GitHub account 
(https://gitpod.io/#https://github.com/arendst/Tasmota/tree/master)
-------------------------------------------------------------------

1. Platform_override.ini -- /workspace/Tasmota -- ADD
2. user_config_override.h -- /workspace/Tasmota/tasmota -- OVERWRITE

```
platformio run -e tasmota32-EWELINK
```