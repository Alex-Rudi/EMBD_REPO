all: report

report: report.o temp.o
	gcc -o report report.o temp.o

report.o: report.c
	gcc -c -o report.o report.c

temp.o: temp.c
	gcc -c -o temp.o temp.c

clean:
	rm -rf *.o report