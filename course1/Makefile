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
include sources.mk



# Architectures Specific Flags
#LINKER_FILE = 
#CPU = mcpu
#ARCH := $march
#SPECS = specs

# Compiler Flags and Defines
PLATFORM  = HOST
TARGET = c1m2
PWD := $(pwd) 
#OBJS := $(SOURCES:.c = .o)
	
LD = -Wl
LDFLAGS =
CFLAGS = -Wall \
		-Werror \
		-g	\
		-O0	\
		-std=c99 
CC = gcc


ifeq ($(PLATFORM),MSP432)
	CFLAGS = -Wall \
			-Werror \
			-g	\
			-O0	\
			-std=c99 \
			-mcpu=cortex-m4 \
			-mthumb \
			-march=armv7e-m \
			-mfloat-abi=hard \
			-mfpu=fpv4-sp-d16 \
			--specs=nosys.specs

	CC = arm-none-eabi-gcc
	LD =arm-none-eabi-ld
	LDFLAGS =-Xlinker -Map=$(TARGET).map \
			-T msp432p401r.lds


endif

%.i : %.c
	$(CC) -D$(PLATFORM) -E $(INCLUDES) -o $@ $<
%.asm : %.i
	$(CC) -D$(PLATFORM) -S $(INCLUDES) -o $@ $<
%.o : %.asm 
	$(CC) -D$(PLATFORM) -O $(INCLUDES) -o $@ $<



ifeq ($(COURSE1),COURSE1)
	COURSE1 = COURSE1
endif

ifeq ($(VERBOSE), VERBOSE)
	VERBOSE = VERBOSE
endif
.PHONY: compile-all
compile-all: $(SOURCES)
%.i : memory.c
	$(CC) -D$(PLATFORM) -E $(INCLUDES) -o $@ $<
%.i : main.c
	$(CC) -D$(PLATFORM) -E $(INCLUDES) -o $@ $<
%.asm : %.i
	$(CC) -D$(PLATFORM) -S $(INCLUDES) -o $@ $<
%.o : %.asm 
	$(CC) -D$(PLATFORM) -O $(INCLUDES) -o $@ $<
	

.PHONY: build
build : $(SOURCES)
	$(CC) -D$(COURSE1) -D$(PLATFORM)  $(CFLAGS) $(INCLUDES) $(LDFLAGS) -o $(TARGET).out $(SOURCES)


#	$(CC) -D$(PLATFORM) $(CFLAGS) $(INCLUDES) $(LDFLAGS) -o $(TARGET).out $(SOURCES)


.PHONY: clean
clean:
	rm -f *.o *.asm *.map *.out *.i


 