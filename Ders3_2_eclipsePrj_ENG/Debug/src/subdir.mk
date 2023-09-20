################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AcademicStaff.cpp \
../src/AdministrativeStaff.cpp \
../src/Date.cpp \
../src/Ders3_2_eclipsePrj_ENG.cpp \
../src/Staff.cpp 

CPP_DEPS += \
./src/AcademicStaff.d \
./src/AdministrativeStaff.d \
./src/Date.d \
./src/Ders3_2_eclipsePrj_ENG.d \
./src/Staff.d 

OBJS += \
./src/AcademicStaff.o \
./src/AdministrativeStaff.o \
./src/Date.o \
./src/Ders3_2_eclipsePrj_ENG.o \
./src/Staff.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/AcademicStaff.d ./src/AcademicStaff.o ./src/AdministrativeStaff.d ./src/AdministrativeStaff.o ./src/Date.d ./src/Date.o ./src/Ders3_2_eclipsePrj_ENG.d ./src/Ders3_2_eclipsePrj_ENG.o ./src/Staff.d ./src/Staff.o

.PHONY: clean-src

