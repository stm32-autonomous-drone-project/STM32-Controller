#ifndef IDRONECOMMUNICATION_H
#define IDRONECOMMUNICATION_H

class iDroneCommunication
{
public:
    virtual ~iDroneCommunication() {};

    virtual void Setup() = 0;
    virtual bool GetActive() = 0;
    virtual void Disconnect() = 0;
};

#endif
