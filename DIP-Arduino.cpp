// -- Implementação da classe DIPSwitch --
// -- Plataforma: Arduino --
// -- Autor: Allan Cedric --

#include "DIP-Arduino.h"

DIPSwitch::DIPSwitch(uint8_t *pins, uint8_t nPins)
{
    _pins = pins;
    _nPins = nPins;
    for (uint8_t i = 0; i < _nPins; i++)
        pinMode(_pins[i], STD_INPUT); // Seta cada pino do DIP como STD_INPUT
}

uint8_t DIPSwitch::getState()
{
    uint8_t state = 0;
    for (uint8_t i = 0; i < _nPins; i++)
    {
        if (!digitalRead(_pins[i]))
            state |= (1 << (_nPins - i - 1)); // Seta bit 1 na posição (_nPins - i - 1)
    }
    return state;
}