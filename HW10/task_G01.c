#include <stdio.h>
const int line_width = 256;
int main(void)
{
    char *input_fn = "input.txt";
    char *output_fn = "output.txt";
    char line[line_width];
    char c;
    FILE *fp;
    if ((fp = fopen(input_fn, "r")) == NULL)
    {
        perror("Error opening intup.txt file");
        return 1;
    }
    int count = 0;
    while (((c = getc(fp)) != EOF) && (c != '\n'))
        line[count++] = c;
    line[count] = '\0';
    fclose(fp);
    if ((fp = fopen(output_fn, "w")) == NULL)
    {
        perror("Error opening output.txt file");
        return 1;
    }
    for (int i = 0; i < 3; i++)
    {
        if (i)
            fprintf(fp, ", ");
        fprintf(fp, "%s", line);
    }
    fprintf(fp, " %d", count);
    fclose(fp);
    return 0;
}
