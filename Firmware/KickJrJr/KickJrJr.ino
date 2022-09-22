#include "KickJrJrPower.h"

KickJrJrPower pwr; //so now pwr is an object of KickJrJrPower

void setup() {
  // put your setup code here, to run once:
  pwr.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  bool chargeStatus = pwr.isCharging();
  pwr.getBatteryVoltage();

  //print this information
  
}
