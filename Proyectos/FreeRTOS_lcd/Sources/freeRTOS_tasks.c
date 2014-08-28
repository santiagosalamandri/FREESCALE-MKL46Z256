/*
 * freeRTOS_tasks.c
 * 	 ___       _         _   _       _ ___ _ _ ___
 *	| __._ _ _| |_ ___ _| |_| |___ _| | . | \ |_ _|
 *	| _>| ' ' | . / ._/ . / . / ._/ . |   |   || |
 *	|___|_|_|_|___\___\___\___\___\___|_|_|_\_||_|
 *
 *
 *  Created on	: 13/08/2014
 *      Author	: Ernesto Andres Rincon Cruz
 *      Web		: www.embeddedant.org
 */

#include "freeRTOS_tasks.h"

LDD_TDeviceData *MySegLCDPtr;
char sLCDBuffer[16];  			//temporal buffer for the sLCD,
int main_counter=0;


/*
** ===================================================================
**     Nombre       :	LedBlink_task (void *pvParameters)
**
**     Resumen   	:	Tarea que permite el control de encendido
**     					y apagado de un LED controlado por el
**     					componente LedPtd5
**
**     Entradas 	:	Parametro inicial para la tarea
**
**     Retorna  	:	Ningun dato
** ===================================================================
*/
void LedBlink_task(void *pvParameters){
	portBASE_TYPE MyParameter = (portBASE_TYPE )(pvParameters);

	for(;;){
		LedPtd5_NegVal();	// Niega valor de control de LED
		FRTOS1_vTaskDelay(500 / portTICK_RATE_MS);	// Espera de 500mseg

	}

	vTaskDelete(NULL);	// Borra tarea actual
}//Fin de la Tarea "LedBlink_task" -------------------------------------



/*
** ===================================================================
**     Nombre       :	LcdCounter_task (void *pvParameters)
**
**     Resumen   	:	Tarea que visualiza un contado de 0-9999
**     					en pantalla LCD
**
**     Entradas 	:	Parametro inicial para la tarea
**
**     Retorna  	:	Ningun dato
** ===================================================================
*/
void LcdCounter_task(void *pvParameters){
	portBASE_TYPE MyParameter = (portBASE_TYPE )(pvParameters);

	MySegLCDPtr = SegLCD1_Init(NULL);  //initialize sLCD according to PEx

	for(;;){
		main_counter++;										// Incrementa contador
	    if(main_counter>9999)main_counter=0;				// control de valor maximo en contador
	    (void) sprintf(sLCDBuffer,"%04i",main_counter);		// Genera cadena de texto con valor de contador
	    vfnLCD_Write_Msg((uint8 *)sLCDBuffer);				// Muestra en LCD
		FRTOS1_vTaskDelay(50 / portTICK_RATE_MS);			// Espera de 50mseg
	}

	vTaskDelete(NULL);	// Borra tarea actual
}//Fin de la Tarea "LcdCounter_task" -------------------------------------
