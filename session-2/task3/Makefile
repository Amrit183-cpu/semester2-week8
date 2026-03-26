# step 1:
#student_program: main.c student.c student.h structure.h 
#	gcc main.c student.c -o student_program

#step 2:

#variables
#CC = gcc
#CFLAGS = -Wall -Wextra
#TARGET = student

#default target
#$(TARGET): main.c student.c student.h structure.h
#	$(CC) $(CFLAGS) main.c student.c -o $(TARGET)

#step 3/4/5:
#variables
CC = gcc
CFLAGS = -Wall -Wextra
TARGET = student_program
OBJS = main.o student.o

#phony targets
/PHONY: all clean

#default target
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

#object files
main.o: main.c student.h structure.h
	$(CC) $(CFLAGS) -c main.c 

student.o: student.c student.h structure.h
	$(CC) $(CFLAGS) -c student.c 

#clean up
clean:
	rm -f $(OBJS) $(TARGET)

