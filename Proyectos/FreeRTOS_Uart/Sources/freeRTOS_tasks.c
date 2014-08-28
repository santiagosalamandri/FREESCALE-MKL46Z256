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
#include "Cpu.h"
#include "freeRTOS_tasks.h"


/*
** ===================================================================
**     Nombre       :	LedBlink_task (module mqx_tasks)
**
**     Resumen   	:	Tarea que permite el control de encendido
**     					y apagado de un LED. El led controlado depende
**     					del argumento de entrada de la tarea
**
**     Entradas 	:	Parametro inicial para la tarea
**
**     Retorna  	:	Ningun dato
** ===================================================================
*/
void LedBlink_task(void *pvParameters){
	portBASE_TYPE MyParameter = (portBASE_TYPE )(pvParameters);

	for(;;){
		switch(MyParameter){
		case 0:
			LedGreen_NegVal();	// Niega valor de control de LED
			FRTOS1_vTaskDelay(100 / portTICK_RATE_MS);	// Espera de 100mseg
			break;

		case 1:
			LedRed_NegVal();	// Niega valor de control de LED
			FRTOS1_vTaskDelay(300 / portTICK_RATE_MS);	// Espera de 300mseg
			break;
		}
	}

	vTaskDelete(NULL);	// Borra tarea actual
}//Fin de la Tarea "LedBlink_task" -------------------------------------


/*
** ===================================================================
**     Nombre       :	Uart_task (module mqx_tasks)
**
**     Resumen   	:	Tarea que permite enviar datos por puerto serial
**     					usado la funcion printf
**
**     Entradas 	:	Parametro inicial para la tarea
**
**     Retorna  	:	Ningun dato
** ===================================================================
*/
void Uart_task(void *pvParameters){
	portBASE_TYPE MyParameter = (portBASE_TYPE )(pvParameters);

	for(;;){
		printf("Uart_task: EmbeddedANT\n");		// Imprime mensaje
		FRTOS1_vTaskDelay(500 / portTICK_RATE_MS);	// Espera de 500mseg
	}

	vTaskDelete(NULL);	// Borra tarea actual
}//Fin de la Tarea "Uart_task" -------------------------------------
