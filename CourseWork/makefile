all: report

report: report.o temp_function.o
	gcc -o report report.o temp_function.o 
report.o: report.c
	gcc -c -o report.o report.c
temp_function.o: temp_function.c
	gcc  -c -o temp_function.o temp_function.c
clean:
	del -rf *.o *.exe
