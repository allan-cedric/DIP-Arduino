#ifndef __DIP_ARDUINO_H__
#define __DIP_ARDUINO_H__

// --- Bibliotecas ---
#include <Arduino.h>

#define STD_INPUT INPUT_PULLUP

// --- Classe DIPSwitch ---
class DIPSwitch
{
private:
    uint8_t *_pins;
    uint8_t _nPins;
public:
    // Construtor
    DIPSwitch(uint8_t *pins, uint8_t nPins);

    // Retorna o estado em binário do DIPSwitch
    uint8_t getState();
};

#endif