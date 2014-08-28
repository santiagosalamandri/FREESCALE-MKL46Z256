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

/* Including needed modules to compile this module/procedure */
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
#include "ButtonSw1.h"
#include "ButtonSw3.h"
#include "PTCinit.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

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


/*
** ===================================================================
**     Nombre       :	Buttons_task (module mqx_tasks)
**
**     Resumen   	:	Tarea que permite leer el estado de los botones
**     					y reportar por puerto serial la activacion
**
**     Entradas 	:	Parametro inicial para la tarea
**
**     Retorna  	:	Ningun dato
** ===================================================================
*/
void Buttons_task(void *pvParameters);
