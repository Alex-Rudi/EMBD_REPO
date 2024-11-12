#include <stdio.h>

int main(void)
{
	int a,b,sum;
		scanf("%d",&a);
		scanf("%d",&b);
		sum = 0;
	for (int c = a; c<=b; c++)
{
		sum+=(c*c);
} 
		printf("%d",sum);
}

