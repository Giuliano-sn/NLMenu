#ifndef NLMENU_H_INCLUDED
#define NLMENU_H_INCLUDED

#include <Arduino.h>

class nlmenu{
    public:
        nlmenu();
        enable();
        disable();
    private:
        unsigned word devices;
}
#endif