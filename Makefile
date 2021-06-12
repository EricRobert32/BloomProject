CC=gcc
CFLAGS=-Wall -ansi -g
LDFLAGS=-lm
DEPS=bitarray.h filter.h hashtable.h
OBJ=bitarray.o filter.o hashtable.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: test.o $(OBJ)
	gcc -o $@ $^ $(LDFLAGS)

main: main.o $(OBJ)
	gcc -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJ) test test.o main.o