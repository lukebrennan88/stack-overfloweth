#include "KickJrJrPower.h"
const uint8_t chrgPin = 27; //defining a global variable in the .cpp makes it global in this file, declaring it in the .h makes it global to any program that uses this object
const uint8_t battPin = A4;//you write the letter for analogue pins, you omit it ofr the digital pins

/*
 * int
 * floats - decimals, less precise and lwss memory than doubles (we deal in milivolts to avoid floating point math
 * doubles - more precise and decimals
 * uint8_t - unsigned integer [0-255]
 * uint16_t - unsigned integer [0-65255]
 * int8_t - integer [-127 - 127]
 * int16_t - diddo
 */


KickJrJrPower::KickJrJrPower(); // our constructor, the :: is a 'scope resolution operator, and tells you that the function is associated with that class.
void KickJrJrPower::begin()
{
  pinMode(chrgPin, INPUT);
}

//returns whether the battery is charging
bool KickJrJrPower::isCharging()
{
  return !digitalRead(chrgPin); //returning 0 if charging or 1 if not charging
}
uint16_t KickJrJrPower::getBatteryVoltage()
{
  uint16_t val = analogRead(battPin); //10 bit ADC returns a number between 0 (0V) and 1023 (3.3V)
  uint16_t voltage = 3.3*100*(val/1023);
  return 2*voltage;
}

void KickJrJrPower::enableGPS()
{
  
}
void KickJrJrPower::disableGPS(){
  
}

void KickJrJrPower::enableMP3(){
  
}
void KickJrJrPower::disableMP3(){
  
}
