# AWS IOT COMMAMDS MQTT PUB/SUB

[MQTT Test] - (https://eu-central-1.console.aws.amazon.com/cloudformation/home?region=eu-central-1#/)

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
