#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	
	scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
	
	a = a<b ? b : a;
	a = a<c ? c : a;
	a = a<d ? d : a;
	e>a ? printf ("%d", e) : printf ("%d", a);
	
	return 0;
}
