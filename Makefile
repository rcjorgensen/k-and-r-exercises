all: ex101.o

ex101.o: ex101.c
	cc -ansi ex101.c -o ex101.o

clean:
	rm -rvf *.o
