/*
 * freeRTOS_tasks.h
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

#ifndef FREERTOS_TASKS_H_
#define FREERTOS_TASKS_H_

#include "Cpu.h"
#include "Events.h"
#include "FRTOS1.h"
#include "LedGreen.h"
#include "BitIoLdd1.h"
#include "UTIL1.h"
#include "LedRed.h"
#include "BitIoLdd2.h"
#include "CsIO1.h"
#include "IO1.h"

/*
** ===================================================================
**     Nombre       :	LedBlink_task (module mqx_tasks)
**
**     Resumen   	:	Tarea que permite el control de encendido
**     					y apagado de un LED el led controlado, depende
**     					del argumento de entrada de la tarea
**
**     Entradas 	:	Parametro inicial para la tarea
**
**     Retorna  	:	Ningun dato
** ===================================================================
*/
void LedBlink_task(void *pvParameters);


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
void Uart_task(void *pvParameters);
#endif /* FREERTOS_TASKS_H_ */
