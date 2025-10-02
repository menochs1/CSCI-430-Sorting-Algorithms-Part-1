CC = g++
CFLAGS = -c -Wall -Wextra
TARGET = main

all: $(TARGET)

$(TARGET): mergesort.o quicksort.o selectionSortA.o selectionSortB.o bubbleSortA.o bubbleSortB.o bubbleSortC.o insertionsort.o countingsort.o radixsort.o main.o
	$(CC) -g -Wall -Wextra -o $(TARGET) mergesort.o quicksort.o selectionSortA.o selectionSortB.o bubbleSortA.o bubbleSortB.o bubbleSortC.o insertionsort.o countingsort.o radixsort.o main.o

mergesort.o: mergesort.cpp mergesort.h
	$(CC) -g $(CFLAGS) mergesort.cpp

quicksort.o: quicksort.cpp quicksort.h
	$(CC) -g $(CFLAGS) quicksort.cpp

selectionSortA.o: selectionSortA.cpp selectionSortA.h
	$(CC) -g $(CFLAGS) selectionSortA.cpp

selectionSortB.o: selectionSortB.cpp selectionSortB.h
	$(CC) -g $(CFLAGS) selectionSortB.cpp

bubbleSortA.o: bubbleSortA.cpp bubbleSortA.h
	$(CC) -g $(CFLAGS) bubbleSortA.cpp

bubbleSortB.o: bubbleSortB.cpp bubbleSortB.h
	$(CC) -g $(CFLAGS) bubbleSortB.cpp

bubbleSortC.o: bubbleSortC.cpp bubbleSortC.h
	$(CC) -g $(CFLAGS) bubbleSortC.cpp

insertionsort.o: insertionsort.cpp insertionsort.h
	$(CC) -g $(CFLAGS) insertionsort.cpp

countingsort.o: countingsort.cpp countingsort.h
	$(CC) -g $(CFLAGS) countingsort.cpp

radixsort.o: radixsort.cpp radixsort.h
	$(CC) -g $(CFLAGS) radixsort.cpp

main.o: main.cpp mergesort.h
	$(CC) -g $(CFLAGS) main.cpp

clean:
	$(RM) $(TARGET) *.o *~