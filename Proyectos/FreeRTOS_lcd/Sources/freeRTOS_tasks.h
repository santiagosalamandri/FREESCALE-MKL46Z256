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
#include "LedPtd5.h"
#include "BitIoLdd1.h"
#include "UTIL1.h"
#include "SegLCD1.h"
#include "CsIO1.h"
#include "IO1.h"
#include "LCD.h"

#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/*
** ===================================================================
**     Nombre       :	LedBlink_task (void *pvParameters)
**
**     Resumen   	:	Tarea que permite el control de encendido
**     					y apagado de un LED controlado por el
**     					componente LedPtd5
**
**     Entradas 	:	Parametros iniciales para la tarea
**
**     Retorna  	:	Ningun dato
** ===================================================================
*/
void LedBlink_task(void *pvParameters);

/*
** ===================================================================
**     Nombre       :	LcdCounter_task (void *pvParameters)
**
**     Resumen   	:	Tarea que realiza conteo y visualiza en
**     					pantalla LCD
**
**     Entradas 	:	Parametro inicial para la tarea
**
**     Retorna  	:	Ningun dato
** ===================================================================
*/
void LcdCounter_task(void *pvParameters);

#endif /* FREERTOS_TASKS_H_ */
