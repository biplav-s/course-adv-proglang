################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/implem/PersonName.cpp \
../src/implem/SimpleRelational.cpp 

CPP_DEPS += \
./src/implem/PersonName.d \
./src/implem/SimpleRelational.d 

OBJS += \
./src/implem/PersonName.o \
./src/implem/SimpleRelational.o 


# Each subdirectory must supply rules for building sources it contributes
src/implem/%.o: ../src/implem/%.cpp src/implem/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/Users/biplavs/Documents/Business Stuff/Workspaces/Teaching/CAndCPlusPlusWorkspace/Class7and8_C++_OO/src/headers" -I"/Users/biplavs/Documents/Business Stuff/Workspaces/Teaching/CAndCPlusPlusWorkspace/Class7and8_C++_OO/src/implem" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-implem

clean-src-2f-implem:
	-$(RM) ./src/implem/PersonName.d ./src/implem/PersonName.o ./src/implem/SimpleRelational.d ./src/implem/SimpleRelational.o

.PHONY: clean-src-2f-implem

