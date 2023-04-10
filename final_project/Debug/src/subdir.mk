################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Dio.c \
../src/ExtInterrupt.c \
../src/Gie.c \
../src/Lcd.c \
../src/Touch.c \
../src/Usart.c \
../src/main.c 

OBJS += \
./src/Dio.o \
./src/ExtInterrupt.o \
./src/Gie.o \
./src/Lcd.o \
./src/Touch.o \
./src/Usart.o \
./src/main.o 

C_DEPS += \
./src/Dio.d \
./src/ExtInterrupt.d \
./src/Gie.d \
./src/Lcd.d \
./src/Touch.d \
./src/Usart.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\imt\eclipse_projects\final_project\inc" -Wall -g2 -gstabs -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


