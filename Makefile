CC=gcc
CFLAGS=-g -O0 -Wall

SRC=./src
OBJS=$(SRC)/alloc.o $(SRC)/main.o


default: $(OBJS)
	$(CC) $(CFLAGS) -o main $^

$(SRC)/main.o: $(SRC)/alloc.h
$(SRC)/alloc.o: $(SRC)/alloc.h


clean::
	rm -rf $(OBJS)
