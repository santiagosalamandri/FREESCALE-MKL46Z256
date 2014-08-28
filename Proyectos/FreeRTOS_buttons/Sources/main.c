/* ###################################################################
**     Filename    : main.c
**     Project     : FreeRTOS_buttons
**     Processor   : MKL46Z256VLL4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-08-21, 17:15, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


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
/* User includes (#include below this line is not maintained by Processor Expert) */
#include "freeRTOS_tasks.h"

extern xSemaphoreHandle xBinarySemaphore;


/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */

  xBinarySemaphore=FRTOS1_xSemaphoreCreateMutex();		// Presenta Semaforo ante RTOS

  // Crea instancias de tareas a ejecutar al iniciar el RTOS
  (void) FRTOS1_xTaskCreate(LedBlink_task,"LedBlink1", configMINIMAL_STACK_SIZE, (void *) 0, (tskIDLE_PRIORITY + 1), (xTaskHandle *) NULL);
  (void) FRTOS1_xTaskCreate(LedBlink_task,"LedBlink2", configMINIMAL_STACK_SIZE, (void *) 1, (tskIDLE_PRIORITY + 1), (xTaskHandle *) NULL);
  (void) FRTOS1_xTaskCreate(Buttons_task,"Button1", configMINIMAL_STACK_SIZE, (void *) 0, (tskIDLE_PRIORITY + 2), (xTaskHandle *) NULL);
  (void) FRTOS1_xTaskCreate(Buttons_task,"Button2", configMINIMAL_STACK_SIZE, (void *) 1, (tskIDLE_PRIORITY + 2), (xTaskHandle *) NULL);
  (void) FRTOS1_xTaskCreate(Uart_task,"Uart", configMINIMAL_STACK_SIZE, (void *) 1, (tskIDLE_PRIORITY + 1), (xTaskHandle *) NULL);

  FRTOS1_vTaskStartScheduler();
  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.10]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/