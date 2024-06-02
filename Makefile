CFLAGS = -ansi -g -Wall -O3

SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)

all: $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean

clean:
	$(RM) *.o
