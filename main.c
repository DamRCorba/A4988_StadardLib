#include <avr/io.h>
#include <util/delay.h>
#include "A4988.h"

/*
El siguiente programa de ejemplo hara mover al motor de saltos
de un cuarto Cambiando de sentido cada 5 segundos.
Es solo un ejemplo de uso, lo ideal seria no utilizar delay y utilizar
un fuente de tiempo producida por un timer.
Esta version no requiere AVR_API.
*/

//Ejemplo de utilizacion de Libreria A4988 Pololu Standard
void main (void){
//Para optimizar utilizar un timer contando un milisegundo
  int time=0;
  int step_time=0;

  char flag=0;
  init_linear();
  A4988_SetStepSize(Quarter);
  set_bkd;
  while (1) {
    /* code */
    _delay_ms(1);
    if(time>5000)
      {
        if(flag) set_fwd;
        else  clr_bkd;
        time=0;
      }
      else time++;
    if(step_time>100){
      step_time=0;
      step_change;
    }

  }
}
