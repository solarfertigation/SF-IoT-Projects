# Using ESPTOOL FOR BACKUP/ERASE/WRITE FIRMWARE SONOFF/EWELINK

- INSTALL PYTHON (https://www.python.org/downloads/)

```
pip install esptool
```

> BACKUP FIRMWARE
```
esptool.py --port <serialport> read_flash 0x00000 0x100000 firmware.bin
```
> ERASE FIRMWARE
```
esptool.py --port <serialport> erase_flash
```
> WRITE FIRMWARE
```
esptool.py --port <serialport> write_flash -fs 1MB -fm dout 0x0 firmware.bin
```