#ifndef FLIGHTPLAN_H
#define FLIGHTPLAN_H

#include "Actions.h"

class FlightPlan
{
public:

  int coordinatesArray[64][3];
  int ActionsArray[64][3];
  int coordinateArrayLength;


  // 64 = coordiante index
  //
  // 1 = Lattitude
  // 2 = Longitude
  // 3 = Height
  // 4 = Action
};

#endif
