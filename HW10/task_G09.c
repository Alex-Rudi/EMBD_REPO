#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 1000

int main(void)
{
    FILE *f_in, *f_out;
    char c = 0;
    int i = 0;
    char letters[SIZE] = {0};
    f_in = fopen("input.txt", "r");
    while ((c = fgetc(f_in)) != EOF)
    {
        if (c != ' ' && strchr(letters, c) == 0)
        {
            letters[i] = c;
            i++;
        }
    }
    fclose(f_in);
    f_out = fopen("output.txt", "w");
    fputs(letters, f_out);
    fprintf(f_out, "\n");
    fclose(f_out);
}
