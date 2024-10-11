testList: main.o simple.o
	gcc -g -o testList main.o simple.o

main.o: main.c simple.o
	gcc -c -g main.c 

simple.o: simple.c simple.h
	gcc -c -g simple.c

clean:
	rm -rf *.o testList

