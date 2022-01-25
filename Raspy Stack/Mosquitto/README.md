# Mosquitto Install & Configuration 
> Mosquitto Config File
```
sudo nano ect/mosquitto/mosquitto.config
```

```
sudo apt-get install -y mosquitto
```

```
sudo systemctl enable mosquitto
sudo systemctl start mosquitto
```

```
sudo service mosquitto start
sudo service mosquitto stop
sudo service mosquitto status
sudo service mosquitto restart
```

> Mosquitto Auth Users
```
mosquitto_passwd -U passwordfile
```
```
mosquitto_passwd -c passwordfile user
```
```
mosquitto_passwd -b passwordfile user password
```

> Mosquitto Clients
```
sudo apt-get install mosquitto-clients
```

> Mosquitto Example Pub/Sub
```
mosquitto_pub -h indirizzo-ip_zbe -u USERNAME -P PASSWORD -t "cmnd/ZBEName/ZbSend
 -m '{"Device":"deviceid(0x####)","Send":{"Power":0/1}}'
 ```

```
mosquitto_sub -v -h indirizzo-ip_zbe -u USERNAME -P PASSWORD -t "tele/ZBEName/DeviceID(####)/SENSOR"