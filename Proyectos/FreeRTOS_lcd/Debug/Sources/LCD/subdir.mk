################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Sources/LCD/LCD.c \
../Sources/LCD/s401.c 

OBJS += \
./Sources/LCD/LCD.o \
./Sources/LCD/s401.o 

C_DEPS += \
./Sources/LCD/LCD.d \
./Sources/LCD/s401.d 


# Each subdirectory must supply rules for building sources it contributes
Sources/LCD/%.o: ../Sources/LCD/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:\Users\user\Dropbox\GitHub\FREESCALE-MKL46Z256\Proyectos\FreeRTOS_lcd\Sources\LCD" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/FreeRTOS_lcd/Static_Code\PDD" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/FreeRTOS_lcd/Static_Code\IO_Map" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/FreeRTOS_lcd/Sources" -I"C:/Users/user/Dropbox/GitHub/FREESCALE-MKL46Z256/Proyectos/FreeRTOS_lcd/Generated_Code" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


