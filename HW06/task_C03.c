#include <stdio.h>
int middle(int a, int b)
{
    int c=(a+b)/2;
    return c;
}
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d", middle(a,b));
    return 0;
}
