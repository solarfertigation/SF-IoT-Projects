# TASMOTA CONFIGURATION AFTER FLASHING

1. Connect to TASMOTA AP;
2. Connect to Wi-Fi Network;
3. Redirect to new ip address;
4. Open Consoles/Console and paste this code:
```
backlog Template {"NAME":"ZB-GW03-V1.3","GPIO":[0,0,3552,0,3584,0,0,0,5793,5792,320,544,5536,0,5600,0,0,0,0,5568,0,0,0,0,0,0,0,0,608,640,32,0,0,0,0,0],"FLAG":0,"BASE":1} ; module 0
```
5. Then upgrade OTA in "Firmware Upgrade" --> "Upgrade via File Upload" --> "Start Upgrade"
6. Reboot Bridge --> "Main Manu" --> "Restart"