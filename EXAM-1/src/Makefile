CC = g++
TARGET = main
OBJS = AddressBook.o Entry.o

all: $(TARGET)

$(TARGET): $(OBJS) main.cpp Entry.h AddressBook.h Entry.cpp AddressBook.cpp
	$(CC) main.cpp -o $(TARGET) $(OBJS)

$(OBJS): %.o: %.cpp %.h
	$(CC) -c $< -o $@

clean:
	rm -f $(TARGET) *.o 

