#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, max, min;
	scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
	if	(a>b)
	{
		min=b;
		max=a;
	}
	else
	{
		min=a;
		max=b;
	}
		max = c>max ? c : max;
		min = c<min ? c : min;
		max = d>max ? d : max;
		min = d<min ? d : min;
		max = e>max ? e : max;
		min = e<min ? e : min;
	printf ("%d", min+max);
	return 0;
}
