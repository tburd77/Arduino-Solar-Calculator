# Arduino-Solar-Calculator
Arduino solar sun angle calculator
Calculate julian date for sun elevation and azimuth. Read fron a rtc, gps, Gyro for input info.
Using: DS3231 RTC - I2C - A4,A5
       Arduino Nano
       6Y-GPS module - D3,D4
       ITGMPU Gyro,Accel I2C
       OLED 128x64 display - I2c - A4,A5
My location is hardcoded in for now since panels don't move, but GPS can be used to change.
#define myLatitude    48.XXX              
#define myLongitude  -116.XXX
Gyro is mounted on solar panel to adjust angle for max sun, this hasn't been done yet to move panels.
LED on A3 is visual if GPS is receiving.
Once GPS gets info, the RTC will update time and date to cureent UTC time for elevation,azmuth and 
julian date calculations.

       
