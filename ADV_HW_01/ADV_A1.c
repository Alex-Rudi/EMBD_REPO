#include <stdio.h>

int main(void)
{
    int N;
    char ch;
    scanf("%d", &N);
    while ((ch = getchar()) != '.')
    {   
        if (ch >= 'a' && ch <= 'z')
        {
            ch = (ch - 'a' + N) % 26 + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = (ch - 'A' + N) % 26 + 'A';
        }
        printf("%c", ch);
    }
    printf(".\n");
    return 0;
}
