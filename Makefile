CC = gcc
CFLAGS = -W -Wall
TARGET = summer_vacation
OBJECTS = summer_vaction.o

all : $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o summer_vacation

test :
	./summer_vacation


