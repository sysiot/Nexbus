# Nexbus

A library for reading values received through the serial port between Arduino and NEXTION


## Description

Nexbus is stable for AVR, it is based on Nextion command set and allows for reading of multi-object data.

**Note: Be sure that the "Send Component ID" option of the object is enabled in the Nextion Editor application.**



## Interface


- *nex_data(char buff[], int *comp_id_data, int *pageNo_data, int *preessed, String objName, int *value)* It separates the data received via the serial port and assigns it to variables.

