# TASMOTA OS COMMAMDS

[Reference] (https://tasmota.github.io/docs/Zigbee/)

> Set SSID from Console
```
Backlog SSID1 <SSID Network Name>; Password1 <SSID Network Password>;
Backlog SSID2 <SSID Network Name>; Password2 <SSID Network Password>;
```

> Set MQTT 
```
Backlog MqttHost <mqtthost>; MqttUser <mqttuser>; MqttPassword <mqttpassword>; Topic <customtopic>; SetOption53 1; PowerRetain on
```

> Pairing ZigBee Device

ON
```
ZbPermitJoin 1
```
OFF
```
ZbPermitJoin 0
```

> Rename Friendly Device Name
```
SetOption83 1
```
```
ZbName <deviceid>, <devicename>
```

> Delete Device from Pairing List
```
ZbForget <deviceid>
```

> Send Command to Gateway & Device
From Console
```
ZbSend { "device":"deviceid", "send":{"Power":0/1} }
```

