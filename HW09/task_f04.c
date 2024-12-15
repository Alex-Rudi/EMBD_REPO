#include <stdio.h>
void print_digit(char s[])
{
    int count[10] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            count[s[i] - 48] += 1;
        }
}
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > 0)
        {
            printf("%d %d\n", i, count[i]);
        }
    }
}
int main(void)
{
    char s[] = "Hello123 world77.";
    print_digit(s);
    return 0;
}
