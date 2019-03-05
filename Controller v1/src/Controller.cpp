#include "Controller.h"

//#include <iostream>

Controller::Controller(iUserInterface& ui, iDroneCommunication& radio)
    : currentState(STATE_IDLE)
    , uiActive(false)
    , radioActive(false)
    , ui(ui)
    , radio(radio)
{
}

void Controller::StateHandler()
{
  while(currentState != STATE_STOP){

    switch (currentState) {
      case STATE_STARTUP:
        //currentState =


      break;
      case STATE_IDLE:

      break;
      case STATE_RESTART:

      break;
      case STATE_STOP:
        //nothing yet
      break;
      default:

      break;
    }
  }
}

States startupStateHandler(void)
{
  States result = STATE_STARTUP;

  return result;
}

States idleStateHandler(void)
{
  States result = STATE_IDLE;

  return result;
}

States userConnectedStateHandler(void)
{
  States result = STATE_USERCONNECTED;

  return result;
}

States restartStateHandler(void)
{
  States result = STATE_RESTART;

  return result;
}

States stopStateHandler(void)
{
  States result = STATE_STOP;

  return result;
}
