################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Class5and6_C++_MemoryUserDefined.cpp 

CPP_DEPS += \
./src/Class5and6_C++_MemoryUserDefined.d 

OBJS += \
./src/Class5and6_C++_MemoryUserDefined.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Class5and6_C++_MemoryUserDefined.d ./src/Class5and6_C++_MemoryUserDefined.o

.PHONY: clean-src

