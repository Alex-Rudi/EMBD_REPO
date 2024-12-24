all: main

main: main.o temp_api.o
	gcc -o main main.o temp_api.o

main.o: main.c
	gcc -c -o main.o main.c

temp_api.o: temp_api.c
	gcc -c -o temp_api.o temp_api.c

clean:
	rm -rf *.o main