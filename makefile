testList: main.o list.o
	gcc -g -o testList main.o list.o

main.o: main.c list.o
	gcc -c -g main.c 

list.o: list.c list.h
	gcc -c -g list.c

clean:
	rm -rf *.o testList

