#include <stdio.h>

int main(void)
{
    int N, count = 0, max = -1, current;
    scanf("%d", &N);
    for (size_t i = 0; i < N; i++)
    {
        scanf("%d", &current);
        if (i==0)max = current;
        if (current > max)
        {
            max = current;
            count = 1;
        }
        else if (current == max)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
