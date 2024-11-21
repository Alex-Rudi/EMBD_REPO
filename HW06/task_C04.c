#include <stdio.h>
int f(int x)
{
    if ((x >= -2)&&(x < 2))
    return x*x;
    if (x >=2)
    return (x*x+4*x+5);
    return 4;
}
int main(void)
{
    int x, y, z = 0;
        x =1;
    while (x!=0)
{
        scanf("%d",&x);
        y = f(x);
    if (z < y) z = y;
}
    printf("%d",z);
    return 0;
}
