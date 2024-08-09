#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, *p;
	
	printf ("Digite um inteiro: ");
	scanf ("%d", &num);
	
	p = &num;
	
	printf ("\nEndereco da variavel: %x", p);
	printf ("\nConteudo da variavel: %d", *p);
	
	return 0;
}
