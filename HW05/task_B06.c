#include <stdio.h>

int main(void)
{	
	int a,b=0,c=-1,d=0;
	scanf("%d",&a);
	while(a)
{
		b=a%10;
	if (b==c)
{		d=1;
		printf("YES");
	break;
}
		a/=10,c=b;
}
	if (!d)
		printf("NO");
	return 0;
}
