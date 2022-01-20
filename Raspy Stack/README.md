# Mosquitto - InfluxDB - Telegraf - Grafana

> Mosquitto 
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


> Mosquitto Clients
```
sudo apt-get install mosquitto-clients
```

> Mosquitto Example Pub/Sub
```
mosquitto_pub -h indirizzo-ip_zbe -u USERNAME -P PASSWORD -t "cmnd/ZBEName/ZbSend
 -m "{"Device":"deviceid(0x####)","Send":{"Power":0/1}}"
 ```

```
mosquitto_sub -v -h indirizzo-ip_zbe -u USERNAME -P PASSWORD -t "tele/ZBEName/DeviceID"
```


> InfluxDB 
```
sudo apt-get install -y influxdb
```

```
sudo systemctl enable influxdb
sudo systemctl start influxdb
```

```
sudo service influxdb start
sudo service influxdb stop
sudo service influxdb status
sudo service influxdb restart
```


> TeleGraf
```
sudo apt-get install -y telegraf
```

```
sudo systemctl enable telegraf
sudo systemctl start telegraf
```

```
sudo service telegraf start
sudo service telegraf stop
sudo service telegraf status
sudo service telegraf restart
```


> Grafana
```
sudo apt-get install -y grafana
```

```
sudo systemctl enable grafana-server
sudo systemctl start grafana-server
```

```
sudo service grafana-server start
sudo service grafana-server stop
sudo service grafana-server status
sudo service grafana-server restart
```

