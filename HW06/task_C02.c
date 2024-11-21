#include <stdio.h>
int main(void)
{
    int n,p,power(int,int);
    scanf("%d%d",&n, &p);
    printf("%d\n", power(n,p));
    return 0;
}
int power(int n, int p)
{
    int a;
    int b = 1;
    for(a=0; a<p; a++)
    {
        b*=n;
    }
     return b;
}
