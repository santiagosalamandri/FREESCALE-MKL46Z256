################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/BitIoLdd1.c \
../Generated_Code/Cpu.c \
../Generated_Code/LedPtd5.c \
../Generated_Code/MQX1.c \
../Generated_Code/PE_LDD.c \
../Generated_Code/SystemTimer1.c \
../Generated_Code/Vectors.c 

OBJS += \
./Generated_Code/BitIoLdd1.o \
./Generated_Code/Cpu.o \
./Generated_Code/LedPtd5.o \
./Generated_Code/MQX1.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/SystemTimer1.o \
./Generated_Code/Vectors.o 

C_DEPS += \
./Generated_Code/BitIoLdd1.d \
./Generated_Code/Cpu.d \
./Generated_Code/LedPtd5.d \
./Generated_Code/MQX1.d \
./Generated_Code/PE_LDD.d \
./Generated_Code/SystemTimer1.d \
./Generated_Code/Vectors.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/Static_Code\PDD" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/Static_Code\IO_Map" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/Sources" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/Generated_Code" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/MQXLITE/include" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/MQXLITE/config" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/MQXLITE/kernel" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/MQXLITE/psp/cortex_m" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/MQXLITE/psp/cortex_m/core/M0" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/MQXlite_LedBlink/MQXLITE/psp/cortex_m/compiler/cwgcc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


