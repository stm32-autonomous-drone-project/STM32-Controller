#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "States.h"
#include "Actions.h"
#include "Flightplan.h"
#include "iDroneCommunication.h"
#include "iUserInterface.h"

class Controller
{
public:
    Controller(iUserInterface& ui, iDroneCommunication& radio);
    void StateHandler();

private:
    States currentState;
    bool radioActive;
    bool uiActive;
    FlightPlan flightPlan;
    iUserInterface& ui;
    iDroneCommunication& radio;

    States startupStateHandler(void);
    States idleStateHandler(void);
    States userConnectedStateHandler(void);
    States restartStateHandler(void);
    States stopStateHandler(void);

};

#endif
