all: structs.o main.o
	gcc -o structtest structs.o main.o

structs.o: structs.c structs.h
	gcc -c structs.c

main.o: main.c structs.h
	gcc -c main.c

run:
	./structtest

clean:
	rm *.o
	rm *~
