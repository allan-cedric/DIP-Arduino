## DIP Switch Library (C/C++)
*   Simple library to read a DIP Switch on Arduino Platform. (**INPUT_PULLUP**)

## How to use ?
*   Include the library, define a set of pins and call the constructor `DIPSwitch`:

```C++
#include "DIP-Arduino.h"
 
uint8_t dipSwitchPins[] = {2, 3, 4}; // Ex.: Digital Pin 2, 3 and 4 on Arduino
DIPSwitch dipSwitch(dipSwitchPins, 3);

void setup()
{
...
}
  
void loop()
{
...
dipSwitch.getState() // Return the binary state of DIP Switch, in this case [0..7]
...
}
```