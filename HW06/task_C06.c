#include <stdio.h>

unsigned long long int a(int b)
{
    return (unsigned long long int)1<<(b-1);
}
int main()
{
    int c;
    scanf("%d",&c);
    printf("%llu", a(c));
    return 0;
}
