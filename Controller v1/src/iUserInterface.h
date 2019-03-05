#ifndef IUSERINTERFACE_H
#define IUSERINTERFACE_H

class iUserInterface
{
public:
    virtual ~iUserInterface() {};

    virtual void Setup() = 0;
    virtual bool GetActive() = 0;
    virtual void Disconnect() = 0;
};

#endif
