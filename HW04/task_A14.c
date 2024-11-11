#include <stdio.h>

int main(void)
{
	int a, max;
	scanf("%d", &a);
	max = (a/100)>((a/10) % 10) ? (a/100) : ((a/10) % 10);
	max = (a%10)>max ? (a%10) : max;
	printf("%d", max);
	return 0;
}
