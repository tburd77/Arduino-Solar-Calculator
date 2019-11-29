//GPS
#include <TinyGPS++.h>
#include <SoftwareSerial.h>
//RTC
#include <TimeLib.h>
#include <Time.h>
#include <DS3232RTC.h>
#define I2C_Clock_ADDR          0x68
#include "Wire.h"
//OLED
#include "U8glib.h"
#define I2C_OLED_ADDR          0x3C


#define myLatitude    48.XXX             
#define myLongitude  -116.XXX

#define DEG_TO_RAD    0.017453292519943295769236907684886



