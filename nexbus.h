

/*
*  FILE: nexbus.h
*  AUTHOR: osmanakcaybusiness@gmail.com
*  VERSION: 0.1
*  PURPOSE: Nextion serial data library for Arduino
*  URL: https://github.com/RobTillaart/nexbus
*/

#ifndef NEXBUS_H
#define NEXBUS_H


#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
 
class nexdata
{


  public :


    void nex_data(char buff[], int *comp_id_data, int *pageNo_data, int *preessed, String objName, int *value);


  private: 

    String objName_data = "";


};

#endif
