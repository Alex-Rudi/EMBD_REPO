#include <stdio.h>

void rec_func(int n)
{
    if (n == 0)
    {
        printf("%d ",n);
    return;
    }
    if (n == 1)
    {
        printf("%d ",n);
    return;
    }
    if (n >= 1)
    {
        printf("%d ",n);
        rec_func(n-1);
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    rec_func(n);
    return 0;
}
