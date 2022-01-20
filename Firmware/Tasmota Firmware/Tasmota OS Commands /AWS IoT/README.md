# AWS IOT COMMAMDS MQTT PUB/SUB

[MQTT Test] - (https://eu-central-1.console.aws.amazon.com/cloudformation/home?region=eu-central-1#/)

> Sensors Topics Tasmota
```
tele/ZBEGatewayName/deviceid(####)/INFO1
tele/ZBEGatewayName/deviceid(####)/INFO2
tele/ZBEGatewayName/deviceid(####)/INFO3
tele/ZBEGatewayName/deviceid(####)/LWT
tele/ZBEGatewayName/deviceid(####)/STATE
tele/ZBEGatewayName/deviceid(####)/SENSOR
```

> Actuators Topics Tasmota
```
stat/ZBEGatewayName/deviceid(####)/POWER
cmnd/ZbEGatewayName/POWER
```

> Topic Subscription
```
tele/ZBEGatewayName/deviceid(####)/SENSOR
```

> Send Command from MQTT
```
cmnd/ZbEGatewayName/ZbSend
```

> PayLoad Format
```
{"Device":"deviceid(0x####)","Send":{"Power":0/1}} 
```
