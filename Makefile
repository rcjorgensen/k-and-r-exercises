all: ex101.o ex102.o ex103.o ex104.o ex105.o ex106.o ex107.o

ex101.o: ex101.c
	cc -ansi ex101.c -o ex101.o

ex102.o: ex102.c
	cc -ansi ex102.c -o ex102.o

ex103.o: ex103.c
	cc -ansi ex103.c -o ex103.o

ex104.o: ex104.c
	cc -ansi ex104.c -o ex104.o

ex105.o: ex105.c
	cc -ansi ex105.c -o ex105.o

ex106.o: ex106.c
	cc -ansi ex106.c -o ex106.o

ex107.o: ex107.c
	cc -ansi ex107.c -o ex107.o

clean:
	rm -rvf *.o
