################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/arrayCencista.c \
../src/arrayZona.c \
../src/pruebas_parcial.c \
../src/utn.c 

OBJS += \
./src/arrayCencista.o \
./src/arrayZona.o \
./src/pruebas_parcial.o \
./src/utn.o 

C_DEPS += \
./src/arrayCencista.d \
./src/arrayZona.d \
./src/pruebas_parcial.d \
./src/utn.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


