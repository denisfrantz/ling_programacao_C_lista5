#include <stdio.h>
#include <stdlib.h>
int main()
{
	float num1, num2, *p1, *p2;
	
	printf ("Digite um numero do tipo float: ");
	scanf ("%f", &num1);
	printf ("Digite outro numero do tipo float: ");
	scanf ("%f", &num2);
	
	p1 = &num1;
	p2 = &num2;
	
	printf ("\nEndereco do primeiro numero: %x", p1);
	printf ("\nConteudo do primeiro segundo: %.2f", *p1);
	printf ("\nEndereco do segundo numero: %x", p2);
	printf ("\nConteudo do segundo numero: %.2f", *p2);
	
	printf ("\n\nEndereco do primeiro ponteiro: %x", &p1);
	printf ("\nEndereco do segundo ponteiro: %x", &p2);
	printf ("\nConteudo do primeiro ponteiro: %x", p1);
	printf ("\nConteudo do segundo ponteiro: %x", p2);
	printf ("\nConteudo apontado pelo primeiro ponteiro: %.2f", *p1);
	printf ("\nConteudo apontado pelo segundo ponteiro: %.2f", *p2);
	
	return 0;
}
