# Libreria Estandard para Pololu A4988

La presente libreria esta diseñada para ser usada con Microcontroladores AVR utilizando su libreria Estandard

## FUNCIONES

La libreria permite Cambio de direcciones utilizando **set_fwd** y **set_bkd**

Permite la inicializacion del Integrado con solo configurar el archivo A4988.h en donde se pide especificar las conexiones.

Tambien permite la seleccion del tamaño del paso por medio de la funcion **void A4988_SetStepSize(A4988_StepSize_t);**

Como parametro pide el tamaño del paso

```
typedef enum{
	Full,
	Half,
	Quarter,
	Eighth,
	Sixteenth
}A4988_StepSize_t;

```

Para su correcto uso se debera configurar un timer para manejar los tiempos correctamente.
