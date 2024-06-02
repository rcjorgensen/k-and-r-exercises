CFLAGS = -ansi -g -Wall -O3

SRC = src
BIN = bin

SRCS=$(wildcard src/*.c)
BINS=$(SRCS:src/%.c=bin/%)

all: $(BINS)

$(BIN)/%: $(SRC)/%.c
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean

clean:
	$(RM) $(BIN)/*
