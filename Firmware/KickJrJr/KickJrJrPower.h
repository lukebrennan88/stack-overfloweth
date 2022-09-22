/*
 * 
 * description of the header file for this class
 */

#ifndef KickJrJrPower_h  //these two lines and the #endif at the end are standard for class headers
#define KickJrJrPower_h

#include <Arduino.h> //load the ardunio library

class KickJrJrPower
{
private:
  
public:

  KickJrJrPower(); // our constructor
  void begin(); //again standard stuff for a class

  bool isCharging();
  uint16_t getBatteryVoltage();

  void enableGPS();
  void disableGPS();

  void enableMP3();
  void disableMP3();
 };

 #endif
