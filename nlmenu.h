#ifndef NLMENU_H_INCLUDED
#define NLMENU_H_INCLUDED

#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_INA219.h>
#include <math.h>
#include <TFMPlus.h>  // Include TFMini Plus Library v1.5.0
#include <SoftwareSerial.h>


#Cores
#define NL_BLUE      ()
#define NL_RED       ()
#define NL_WHITE     ()
#define NL_PINK      ()
#define NL_GREEN     ()
#define NL_CYAN      ()
#define NL_WHITE     ()

#Sensores
#define NL_BTN1      ()
#define NL_BTN2      ()
#define NL_BTN3      ()
#define NL_BTN4      ()
#define NL_LIDAR     ()
#define NL_SONAR     ()
#define NL_CODBAR    ()
#define NL_TIME      ()
#define NL_RTC       ()

#Atuadores
#define NL_LASER     ()
#define NL_LED       ()
#define NL_RGBLED    ()
#define NL_DISPLAY   ()
#define NL_BUZZER    ()
#define NL_WIFIAP    ()
#define NL_WIFISRV   ()
#define NL_WIFICLI   ()

# Constantes do sistema
#define NL_OOR_MEASURE 9999 // default value for Lidar & Sonar for out-of-range measures

struct NL3Axis {
    float x;
    float y;
    float z;
}

struct NLSensors {
    int lidar;
    int sonar;
    String barcode;
    String time;
    NL3Axis giro;
    NL3Axis accel;
}

class NLMenu{
    public:
        NLSensors sensors;
        NLMenu();
        enable();
        disable();
    private:
        unsigned word devices;
}
#endif