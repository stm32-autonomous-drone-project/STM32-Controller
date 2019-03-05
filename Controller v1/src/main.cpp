#include <Arduino.h>
#include "hc12.h"
#include "esp8266.h"
#include "Controller.h"

void setup() {
  // put your setup code here, to run once:
}

void loop() {

  Esp8266 ui;
  hc12 radio;

  Controller controller(ui, radio);

  controller.StateHandler();


}
