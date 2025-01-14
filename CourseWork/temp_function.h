#ifndef TEMP_H
#define TEMP_H

#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define YEAR 0
#define JAN 1
#define FEB 2
#define MAR 3
#define APR 4
#define MAY 5
#define JUN 6
#define JUL 7
#define AUG 8
#define SEP 9
#define OCT 10
#define NOV 11
#define DEC 12



struct sensors 
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t t;
};


int print_statistic_t(struct sensors *, int, int*, int*, int*, int*, int*); 
int get_file(const char *, int*, int*, struct sensors**);  
int get_month(char *); 

int get_statistic(struct sensors* data, int , int* , int* , int*, int*); //
void calculate_statistic(int*, struct sensors*, int*, int*, int*, int, int); 
int max(int, int);
int min(int, int);


#endif