################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Project_Settings/Startup_Code/startup.c 

OBJS += \
./Project_Settings/Startup_Code/startup.o 

C_DEPS += \
./Project_Settings/Startup_Code/startup.d 


# Each subdirectory must supply rules for building sources it contributes
Project_Settings/Startup_Code/%.o: ../Project_Settings/Startup_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/Static_Code\PDD" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/Static_Code\IO_Map" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/Sources" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/Generated_Code" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/MQXLITE/include" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/MQXLITE/config" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/MQXLITE/kernel" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/MQXLITE/psp/cortex_m" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/MQXLITE/psp/cortex_m/core/M0" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/MQXLITE/psp/cortex_m/compiler/cwgcc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


