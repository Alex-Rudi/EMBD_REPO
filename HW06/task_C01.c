#include <stdio.h>
int main()
{
    int a,b(int);
    scanf("%d",&a);
    printf("%d\n", b(a));
    return 0;
}
int b(int a)
{
    if (a<0)
    return (-1)*a;
    else
    return a;
}
