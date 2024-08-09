#include <stdio.h>
#include <stdlib.h>
# define pi 3.14
int main()
{
	float altura, raio, volume, *pa, *pr, *pv;
	
	printf ("Altura do cilindro: ");
	scanf ("%f", &altura);
	printf ("Raio do cilindro: ");
	scanf ("%f", &raio);
	
	pa = &altura;
	pr = &raio;
	
	volume = (pi * (*pr * *pr) * *pa);
	pv = &volume;
	
	printf ("\nVolume do cilindro: %.2f", *pv);
	
	return 0;
}
