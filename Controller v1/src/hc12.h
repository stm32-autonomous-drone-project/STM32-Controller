#ifndef HC12_H
#define HC12_H

#include "iDroneCommunication.h"

class hc12 : public iDroneCommunication

{
public:
    hc12();

    //iDroneCommunication
    void Setup();
    bool GetActive();
    void Disconnect();

private:

};

#endif
