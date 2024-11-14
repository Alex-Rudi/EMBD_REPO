#include <stdio.h>

int main(void)
{
	int b[10]={0},a,c=0;
		scanf("%d",&a);
	while(a){
		c=a%10,b[c]++,a/=10;
}
	for(int d=0;d<10;d++)
{
	if (b[d]>=2){
		printf("YES");
	break;}
	else if(d==9 && b[d]<2)
		printf("NO");}
	return 0;
}
