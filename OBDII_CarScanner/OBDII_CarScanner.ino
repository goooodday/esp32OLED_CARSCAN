
#include <sstream>
#include "UI_OLEDisp.h"
#include "BLE_OBDIIComm.h"

void setup() {

  Serial.begin(115200);
  Serial.println();
  Serial.println();

  OLED_setup();
  BLE_setup();

  BLE_Scan();
}


void loop() {

  
  int remainingTimeBudget = ui.update();

  if (remainingTimeBudget > 0) {
    // You can do some work here
    // Don't do stuff if you are below your
    // time budget.
    delay(remainingTimeBudget);
  }

}
