#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------



SOURCES = main.c misc.c
# Architectures Specific Flags
#LINKER_FILE = 
#CPU = mcpu
#ARCH := $march
#SPECS = specs

# Compiler Flags and Defines
PLATFORM= MSP432
TARGET = c1m3
PWD := $(pwd) 

	
CC = gcc
#CC =arm-none-eabi-gcc
#LDFLAGS =-Xlinker -Map=$(TARGET).map \
#			-T msp432p401r.lds
# arm-none-eabi-ld -T sum-data.lds -o sum-data.elf sum-data.o
#arm-none-eabi-as -o sum-data.o sum-data.s
CFLAGS =-Wall \
		-Werror \
		-g	\
		-O0	\
		-std=c99
#		-mcpu=cortex-m4 \
#		-mthumb \
#		-march=armv7e-m \
#		-mfloat-abi=hard \
#		-mfpu=fpv4-sp-d16 \
#		--specs=nosys.specs

.PHONY: build
build : $(SOURCES)
	$(CC) -D$(PLATFORM) -S $(CFLAGS) $(INCLUDES) $(LDFLAGS) $(SOURCES)
	$(CC) -D$(PLATFORM)  $(CFLAGS) $(INCLUDES) $(LDFLAGS) -o $(TARGET).out $(SOURCES)


.PHONY: clean
clean:
	rm -f *.o *.asm *.map *.out *.i


 