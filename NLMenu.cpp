#include <NLMenu.h>

NLMenu::NLMenu()
{
    this.devices = 0;
    this.sensors.lidar = NL_OOR_MEASURE;
    this.sensors.sonar = NL_OOR_MEASURE;
    this.sensors.barcode = "";
}

