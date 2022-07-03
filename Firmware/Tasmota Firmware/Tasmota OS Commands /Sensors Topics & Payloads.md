# SENSORS TOPICS

> ZBE1 (ZigBee Ethernet Gateway1) - PTA

TH-PTA1
```
tele/zbe1/09CF/SENSOR

mosquitto_pub -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe1/09CF/SENSOR" -m '{"ZbReceived":{"TH-PTA1":{"Device":"0x09CF","Name":"TH-PTA1","Temperature": 25.0, "Humidity":62.0,"Endpoint":1,"LinkQuality":65}}}'

mosquitto_sub -v -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe1/09CF/SENSOR"
```

TH-PTA2
```
tele/zbe1/654D/SENSOR

mosquitto_pub -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe1/654D/SENSOR" -m '{"ZbReceived":{"TH-PTA2":{"Device":"0x654D","Name":"TH-PTA2","Temperature": 22.7, "Humidity":57.7,"Endpoint":1,"LinkQuality":65}}}'

mosquitto_sub -v -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe1/654D/SENSOR"
```

TH-PTA3
```
tele/zbe1/3AAB/SENSOR

mosquitto_pub -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe1/3AAB/SENSOR" -m '{"ZbReceived":{"TH-PTA3":{"Device":"0x3AAB","Name":"TH-PTA3","Temperature": 25.0, "Humidity":62.0,"Endpoint":1,"LinkQuality":65}}}'

mosquitto_sub -v -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe1/3AAB/SENSOR"
```

TH-PTA4
```
tele/zbe1/1EE6/SENSOR

mosquitto_pub -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe1/1EE6/SENSOR" -m '{"ZbReceived":{"TH-PTA4":{"Device":"0x1EE6","Name":"TH-PTA4","Temperature": 22.7, "Humidity":57.7,"Endpoint":1,"LinkQuality":65}}}'

mosquitto_sub -v -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe1/1EE6/SENSOR"
```

TH-PTA5
```
tele/zbe1/B918/SENSOR

mosquitto_pub -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe1/B918/SENSOR" -m '{"ZbReceived":{"TH-PTA5":{"Device":"0xB918","Name":"TH-PTA5","Temperature": 25.0, "Humidity":62.0,"Endpoint":1,"LinkQuality":65}}}'

mosquitto_sub -v -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe1/B918/SENSOR"
```

TH-PTA6
```
tele/zbe1/D10A/SENSOR

mosquitto_pub -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe1/D10A/SENSOR" -m '{"ZbReceived":{"TH-PTA6":{"Device":"0xD10A","Name":"TH-PTA6","Temperature": 22.7, "Humidity":57.7,"Endpoint":1,"LinkQuality":65}}}'

mosquitto_sub -v -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe1/D10A/SENSOR"
```

WL-PTA
```
tele/zbe1/CD10/SENSOR

mosquitto_pub -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe1/CD10/SENSOR" -m '{"ZbReceived":{"WL-PTA":{"Device":"0xCD10","ModelId":"lumi.sensor_wleak.aq1","BatteryVoltage":3,"BatteryPercentage":100,"Water":0,"Endpoint":1,"LinkQuality":155}}}'

mosquitto_sub -v -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe1/CD10/SENSOR"
```

> ZBE2 (ZigBee Ethernet Gateway2) - PTA

TH-PSA1
```
tele/zbe2/C3D8/SENSOR

mosquitto_pub -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe2/C3D8/SENSOR" -m '{"ZbReceived":{"TH-PSA1":{"Device":"0xC3C8","Name":"TH-PSA1","Temperature": 25.0, "Humidity":62.0,"Endpoint":1,"LinkQuality":65}}}'

mosquitto_sub -v -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe2/C3D8/SENSOR"
```

TH-PSA2
```
tele/zbe2/F117/SENSOR

mosquitto_pub -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe2/F117/SENSOR" -m '{"ZbReceived":{"TH-PSA2":{"Device":"0xC3C8","Name":"TH-PSA2","Temperature": 22.7, "Humidity":57.7,"Endpoint":1,"LinkQuality":65}}}'

mosquitto_sub -v -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe2/F117/SENSOR"
```

TH-PSA3
```
tele/zbe2/0864/SENSOR

mosquitto_pub -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe2/0864/SENSOR" -m '{"ZbReceived":{"TH-PSA3":{"Device":"0xC3C8","Name":"TH-PSA3","Temperature": 25.0, "Humidity":62.0,"Endpoint":1,"LinkQuality":65}}}'

mosquitto_sub -v -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe2/0864/SENSOR"
```

TH-PSA4
```
tele/zbe2/1A94/SENSOR

mosquitto_pub -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe2/1A94/SENSOR" -m '{"ZbReceived":{"TH-PSA4":{"Device":"0xC3C8","Name":"TH-PSA4","Temperature": 22.7, "Humidity":57.7,"Endpoint":1,"LinkQuality":65}}}'

mosquitto_sub -v -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe2/1A94/SENSOR"
```

WL-PSA
```
tele/zbe2/1FFC/SENSOR

mosquitto_pub -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe2/1FFC/SENSOR" -m '{"ZbReceived":{"WL-PSA":{"Device":"0xCD10","ModelId":"lumi.sensor_wleak.aq1","BatteryVoltage":3,"BatteryPercentage":100,"Water":0,"Endpoint":1,"LinkQuality":155}}}'

mosquitto_sub -v -h 10.0.0.126 -u prodeo -P prodeo2022! -t "tele/zbe2/1FFC/SENSOR"
```