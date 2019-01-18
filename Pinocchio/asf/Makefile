# Makefile for asf
CC = g++
CCFLAGS = -c -Wall -O3 
LIBS = 


ASFO = posture.o transform.o skeleton.o vector.o
ASFOBJ = $(foreach x, $(ASFO), ../asf/$(x))
OBJECTS = posture.o transform.o skeleton.o vector.o

debug: CCFLAGS += -DDEBUG -g

all: $(OBJECTS)

.cpp.o:
	$(CC) $(CCFLAGS) $<

