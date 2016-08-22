/*******************************************************************************************
* Title: A4988.c
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
#include "A4988.h"
//Pone como salida a todos los pines necesarios
void init_linear(void){
  set_pin(A4988_DIR_DIR,A4988_DIR_PIN);
  set_pin(A4988_STEP_DIR,A4988_STEP_PIN);
  set_pin(A4988_MS1_DIR,A4988_MS1_PIN);
  set_pin(A4988_MS2_DIR,A4988_MS2_PIN);
  set_pin(A4988_MS3_DIR,A4988_MS3_PIN);
}


void A4988_SetStepSize(A4988_StepSize_t stepSize){
	switch(stepSize)
	{
	case Full:
        clr_pin(A4988_MS1_PORT,A4988_MS1_PIN);
        clr_pin(A4988_MS2_PORT,A4988_MS2_PIN);
        clr_pin(A4988_MS2_PORT,A4988_MS3_PIN);
				break;

	case Half:
        set_pin(A4988_MS1_PORT,A4988_MS1_PIN);
        clr_pin(A4988_MS2_PORT,A4988_MS2_PIN);
        clr_pin(A4988_MS2_PORT,A4988_MS3_PIN);
				break;

	case Quarter:
        clr_pin(A4988_MS1_PORT,A4988_MS1_PIN);
        set_pin(A4988_MS2_PORT,A4988_MS2_PIN);
        clr_pin(A4988_MS2_PORT,A4988_MS3_PIN);

				break;
	case Eighth:
        set_pin(A4988_MS1_PORT,A4988_MS1_PIN);
        set_pin(A4988_MS2_PORT,A4988_MS2_PIN);
        clr_pin(A4988_MS2_PORT,A4988_MS3_PIN);

				break;
	case Sixteenth:
        set_pin(A4988_MS1_PORT,A4988_MS1_PIN);
        set_pin(A4988_MS2_PORT,A4988_MS2_PIN);
        set_pin(A4988_MS2_PORT,A4988_MS3_PIN);
				break;
	default:
				break;
	}

}
