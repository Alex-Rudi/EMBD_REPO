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


int print_statistic_t(struct sensors *, int, int*, int*, int*); 
int get_file(char *);  
int get_month(char *); 

int get_statistic(struct sensors* data, int , int* , int* , int*, int*); //
int max(int, int);
int min(int, int);
void calculate_month_statistic(size_t*, struct sensors*, int*, int*, int*, int, int); 
void calculate_year_statistic(size_t*, struct sensors*, int*, int*, int*, int, int);  

int print_debug_info(struct sensors *, int); 
void add_records_sensors(struct sensors *date, int, uint16_t, uint8_t, uint8_t, int8_t, int8_t, int8_t); 
int add_info_sensors(struct sensors *);      
void mergeSort_t(struct sensors*, int, int); 
void mergeSort_d(struct sensors*, int, int); 
#endif