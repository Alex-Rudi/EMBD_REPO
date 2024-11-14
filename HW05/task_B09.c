#include <stdio.h>

int main(void)
{
	int a,b=1;
		scanf("%d", &a);	
	for ( ; a>0; a/= 10){
		b=b && !(a%2);
}
	(b>0) ? printf("YES") : printf("NO");
	return 0;
}
