# All the user has to do is type "make" in the console to recompile the binary executable after any changes.

## Variables
# target is the name of the binary executable
TARGET=main
# compiler is g++
CC=g++
# compile with all warnings and extras
CFLAGS=-g -Wall -Wextra


## Targets
# compile everything
all: $(TARGET)

# this target compiles the binary executable; it requires all of the object code files from the headers and other files
$(TARGET): main.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

# remove all temp files, machine code, binary files, etc.
clean:
	$(RM) *.o *~ *# $(TARGET)
