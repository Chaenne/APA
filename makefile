CC = gcc

all:
	$(CC) -std=c99  insertionSort.c -o insertionSort
	
clean:
	rm insertionSort
	  0

