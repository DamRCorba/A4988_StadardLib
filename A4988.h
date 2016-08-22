/*******************************************************************************************
* Title: A4988.h
* Librerias en C para Pololu A4988 Stepper Motor IC Driver
* Las siguientes Librerias estan escritas para utilizar el kit Stepper Driver de Pololu con
* Microcontroladores AVR.
* Autor: Ingeniero Damian Corbalan
* Fecha: 22/08/2016
* Licence:
*   Copyright (C) 2016 Damian Corbalan
 *
 *	 This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 3 of the License, or
 *   any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.

********************************************************************************************/

#ifndef A4988_H_
#define A4988_H_
#include <avr/io.h>
/* DEFINICIONES DE HARDWARE SEGUN CABLEADO*/

#define A4988_DIR_PORT  PORTE	 // Ejemplo PORTE
#define A4988_DIR_DIR   DDRE	 // Ejemplo DDRE
#define A4988_DIR_PIN	  0

#define A4988_STEP_PORT	PORTA
#define A4988_STEP_DIR	DDRA
#define A4988_STEP_PIN	1

#define A4988_MS1_PORT	PORTB
#define A4988_MS1_DIR   DDRB
#define A4988_MS1_PIN	  0

#define A4988_MS2_PORT	PORTB
#define A4988_MS2_DIR   DDRB
#define A4988_MS2_PIN	  1

#define A4988_MS3_PORT	PORTB
#define A4988_MS3_DIR   DDRB
#define A4988_MS3_PIN	  2


// DEFINICIONES Y MACROS
typedef enum{
	Full,
	Half,
	Quarter,
	Eighth,
	Sixteenth
}A4988_StepSize_t;

#define set_pin(port,pin) port|=(1<<pin)
#define clr_pin(port,pin) port&=~(1<<pin)
#define toogle_pin(port,pin) port^=(1<<pin)

#define set_fwd set_pin(A4988_DIR_PORT,A4988_DIR_PIN)
#define set_bkd clr_pin(A4988_DIR_PORT,A4988_DIR_PIN)
#define step_change toogle_pin(A4988_STEP_PORT,A4988_STEP_PIN)

// FUNCIONES
void A4988_SetStepSize(A4988_StepSize_t);
void init_linear(void);

#endif /* HARD_H_ */
