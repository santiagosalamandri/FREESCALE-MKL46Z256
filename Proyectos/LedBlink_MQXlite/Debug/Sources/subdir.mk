################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Sources/Events.c \
../Sources/main.c \
../Sources/mqx_tasks.c 

OBJS += \
./Sources/Events.o \
./Sources/main.o \
./Sources/mqx_tasks.o 

C_DEPS += \
./Sources/Events.d \
./Sources/main.d \
./Sources/mqx_tasks.d 


# Each subdirectory must supply rules for building sources it contributes
Sources/%.o: ../Sources/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/LedBlink_MQXlite/Static_Code\PDD" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/LedBlink_MQXlite/Static_Code\IO_Map" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/LedBlink_MQXlite/Sources" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/LedBlink_MQXlite/Generated_Code" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/LedBlink_MQXlite/MQXLITE/include" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/LedBlink_MQXlite/MQXLITE/config" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/LedBlink_MQXlite/MQXLITE/kernel" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/LedBlink_MQXlite/MQXLITE/psp/cortex_m" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/LedBlink_MQXlite/MQXLITE/psp/cortex_m/core/M0" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/LedBlink_MQXlite/MQXLITE/psp/cortex_m/compiler/cwgcc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


