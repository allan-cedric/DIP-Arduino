// -- Classe que molda o comportamento de um DIP Switch --
// -- Plataforma: Arduino --
// -- Autor: Allan Cedric --

#ifndef __DIP_ARDUINO_H__
#define __DIP_ARDUINO_H__

// --- Bibliotecas ---
#include <Arduino.h>

// --- Macros ---
#define STD_INPUT INPUT_PULLUP

// --- Classe DIPSwitch ---
class DIPSwitch
{
private:
    uint8_t *_pins; // Vetor de pinos do DIP
    uint8_t _nPins; // Número de pinos do DIP

public:
    /*!
        @brief  Construtor

        @param  pins    Ponteiro para o vetor de pinos (Deve ser alocado previamente)
        @param  nPins   Tamanho do vetor de pinos
    */
    DIPSwitch(uint8_t *pins, uint8_t nPins);

    /*!
        @brief  Retorna o estado em binário do DIP

        @return Estado do DIP
    */
    uint8_t getState();
};

#endif