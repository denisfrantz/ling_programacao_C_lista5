#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, *p, i;
	
	printf ("Digite um inteiro: ");
	scanf ("%d", &num);
	
	p = &num;
	
	for (i = 0; i < 10; i++)
		*p = *p + 1;
	
	printf ("\nValor final da variavel (incremento 10x): %d", *p);
	
	return 0;
}
