CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = program

all: $(SYS)

$(SYS): main.o
	$(CC) $(CFLAGS) -o $(SYS) main.o -lm

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f $(SYS) *.o
