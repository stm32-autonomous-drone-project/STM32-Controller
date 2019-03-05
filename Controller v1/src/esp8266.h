#ifndef ESP8266_H
#define ESP8266_H

#include "iUserInterface.h"

class Esp8266 : public iUserInterface
{
public:
    Esp8266();
    // iOven
    void Setup();
    bool GetActive();
    void Disconnect();


private:

};

#endif
