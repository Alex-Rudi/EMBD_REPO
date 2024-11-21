#include <stdio.h>
int sum(int a)
{
    int b, c=0;
    for (b=1; b<=a; b++)
{
    c+= b;
}
    return c;
}
int main(void)
{
    int a;
    scanf("%d",&a);
    printf("%d\n", sum(a));
    return 0;
}
