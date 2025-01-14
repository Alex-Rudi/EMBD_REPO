#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <getopt.h>
#include "report.h"
#include "temp_function.h"



int main(int argc, char* argv[])
{
int month = 0, fflag = 0;

char filename; 
int average[13]; 
int min_t[13];   
int max_t[13];   
int nu_value[13] = {0}; 
int nu_error[13] = {0}; 
int num = 0;


struct sensors* data = NULL; 


int rez = 0;
    if(!(argc > 1))
        printf(OPTIONS_USAGE
        OPTIONS_HELP);
                
    while((rez = getopt(argc,argv,"hHf:m:")) != -1)
    {
        switch (rez)
        {
        case 'H':
        case 'h':
            printf(OPTIONS_USAGE
                 OPTIONS_A
                OPTIONS_B
                OPTIONS_C
                OPTIONS_DESCRIPTION);
            break;
        case 'm':
            if(!(month = get_month(optarg)))
            {
                printf("incorrect month!\n");
                printf(OPTIONS_HELP);
                return 1;
            }
            int x = 0;
            break;
        case 'f':
            if(get_file(optarg, &num, nu_error, &data))
            {
                printf(OPTIONS_HELP);
            }
            else
                fflag = 1;
            break;

        case '?':
            printf(OPTIONS_ERROR);
            return 1;
            break;
        }
    }
    if(fflag)
    {
        get_statistic(data, num, average, min_t, max_t, nu_value);
        print_statistic_t(data, month, nu_value, nu_error, average, min_t, max_t);
    }

    free(data);
    return 0;
}