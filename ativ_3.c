#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, *p;
	
	printf ("Digite um inteiro: ");
	scanf ("%d", &num);
	
	p = &num;
	
	if (*p % 2 == 0)
		printf ("\nO conteudo apontado e um numero par");
	else
		printf ("\nO conteudo apontado e um numero impar");
		
	if (*p > 0)
		printf (" e positivo");
	else
		if (*p < 0)
			printf (" e negativo");
	
	return 0;
}
