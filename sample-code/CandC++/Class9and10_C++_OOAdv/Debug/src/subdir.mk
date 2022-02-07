################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Class9and10_C++_OOAdv.cpp 

CPP_DEPS += \
./src/Class9and10_C++_OOAdv.d 

OBJS += \
./src/Class9and10_C++_OOAdv.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/Users/biplavs/Documents/Business Stuff/Workspaces/Teaching/CAndCPlusPlusWorkspace/Class9and10_C++_OOAdv/src/headers" -I"/Users/biplavs/Documents/Business Stuff/Workspaces/Teaching/CAndCPlusPlusWorkspace/Class9and10_C++_OOAdv/src/implem" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Class9and10_C++_OOAdv.d ./src/Class9and10_C++_OOAdv.o

.PHONY: clean-src

