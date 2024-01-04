#ifndef MODULE_LTS_H
#define MODULE_LTS_H

#include <arduino.h>

// Entrées Analogiques et Numériques
#define DIP_SWITCH_4    26
#define DIP_SWITCH_3    25
#define DIP_SWITCH_2    35
#define DIP_SWITCH_1    34

//TO DO
#define TRIMMER_1       
#define TRIMMER_2       

// Sorties Numériques
#define LED_RGB               18

//TO DO
void configurerADC(void);
void lireEntreeAnalogique(void);

#endif