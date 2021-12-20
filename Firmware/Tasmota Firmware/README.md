# SONOFF/EWELINK CUSTOM FIRMWARE (TASMOTA)

COMPILE HACK FIRMWARE TASMOTA
Login at GitPod with personal GitHub account 
(https://gitpod.io/#https://github.com/arendst/Tasmota/tree/master)

1. Platform_override.ini -- /workspace/Tasmota -- ADD
2. user_config_override.h -- /workspace/Tasmota/tasmota -- OVERWRITE

```
platformio run -e tasmota32-EWELINK
```