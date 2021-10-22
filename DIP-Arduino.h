// -- DIP Switch Class to control a real DIP Switch --
// -- Plataform: Arduino --
// -- Author: Allan Cedric --

#ifndef __DIP_ARDUINO_H__
#define __DIP_ARDUINO_H__

// --- Libraries ---
#include <Arduino.h>

// --- Macros ---
#define STD_INPUT INPUT_PULLUP

// --- DIP Switch Class ---
class DIPSwitch
{
private:
    uint8_t *_pins; // DIP Switch pins
    uint8_t _nPins; // Number of pins

public:
    /*!
        @brief  Constructor

        @param  pins    Pins' array
        @param  nPins   Array size
    */
    DIPSwitch(uint8_t *pins, uint8_t nPins);

    /*!
        @brief  Get DIP Switch's state, DIP is seen as a bit array

        @return Integer representation of DIP Switch's state
    */
    uint8_t getState();
};

#endif