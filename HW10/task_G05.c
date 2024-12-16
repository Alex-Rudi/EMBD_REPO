#include <stdio.h>
#include <string.h>
#define SIZE 1000

int main(void)
{
    FILE *f_in, *f_out;
    char letters[SIZE];
    f_in = fopen("input.txt", "r");
    fscanf(f_in, "%[^\n]", letters);
    fclose(f_in);
    int len = strlen(letters);
    f_out = fopen("output.txt", "w");
    for (int i = 0; i < len; i++)
    {
        switch (letters[i])
        {
            case 'A':
                letters[i] = 'B';
                break;
            case 'B':
                letters[i] = 'A';
                break;
            case 'a':
                letters[i] = 'b';
                break;
            case 'b':
                letters[i] = 'a';
                break;
        }
        fprintf(f_out, "%c", letters[i]);
    }
    fprintf(f_out, "\n");
    fclose(f_out);
    return 0;
}
