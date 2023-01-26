
/*
*  FILE: nexbus.cpp
*  AUTHOR: osmanakcaybusiness@gmail.com
*  VERSION: 0.1
*  PURPOSE: Nextion serial data library for Arduino
*  URL: https://github.com/sysiot/Nexbus

#include "nexbus.h"



void nexdata::nex_data(char buff[], int *comp_id_data, int *pageNo_data, int *preessed, String objName, int *value) {

  


  *pageNo_data = buff[1];
  // Serial.print(pageNo_data);  // page id




  *comp_id_data = buff[2];
  //Serial.print(comp_id_data);  //compenent id




  *preessed = buff[3];  // press button event




  for (int i = 7; i < 7 + objName.length(); i++) {
    objName_data += buff[i];
    objName_data.trim();  // objname
    // Serial.print(objName_data);
    objName_data = "";
  }


  *value = buff[7 + objName.length()];  //value
}