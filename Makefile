CC = g++
CFLAGS = -c -Wall -Wextra
TARGET = main

all: $(TARGET)

$(TARGET): mergesort.o quicksort.o selectionSortA.o selectionSortB.o main.o
	$(CC) -g -Wall -Wextra -o $(TARGET) mergesort.o quicksort.o selectionSortA.o selectionSortB.o main.o

mergesort.o: mergesort.cpp mergesort.hpp
	$(CC) -g $(CFLAGS) mergesort.cpp

quicksort.o: quicksort.cpp quicksort.hpp
	$(CC) -g $(CFLAGS) quicksort.cpp

selectionSortA.o: selectionSortA.cpp selectionSortA.hpp
	$(CC) -g $(CFLAGS) selectionSortA.cpp

selectionSortB.o: selectionSortB.cpp selectionSortB.hpp
	$(CC) -g $(CFLAGS) selectionSortB.cpp

main.o: main.cpp mergesort.hpp
	$(CC) -g $(CFLAGS) main.cpp

clean:
	$(RM) $(TARGET) *.o *~