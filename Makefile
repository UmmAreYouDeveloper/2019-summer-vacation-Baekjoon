CC = gcc
CFLAGS = -W -Wall
C = summer_vacation.c
OBJECTS = summer_vacation.o
TARGET = summer_vacation

clean : 
	rm *.o $(TARGET)

test :
	$(CC) -c -o $(OBJECTS) $(C)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS) -lm
	./$(TARGET)

