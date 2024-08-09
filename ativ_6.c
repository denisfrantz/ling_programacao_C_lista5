#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, d, *pa, *pb, *pc, *pd, soma, *psoma;
	
	printf ("a: ");
	scanf ("%d", &a);
	printf ("b: ");
	scanf ("%d", &b);
	printf ("c: ");
	scanf ("%d", &c);
	printf ("d: ");
	scanf ("%d", &d);
	
	pa = &a;
	pb = &b;
	pc = &c;
	pd = &d;
	
	soma = (*pa + *pb + *pc + *pd);
	psoma = &soma;
	
	printf ("\nSoma: %d", *psoma);
	
	return 0;
}
