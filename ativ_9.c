#include <stdio.h>
#include <stdlib.h>
int main()
{
	float tempo, dist, valor, *pt, *pd, *pv;
	
	printf ("TAXI\n====\n");
	printf ("Tempo da corrida (em minutos): ");
	scanf ("%f", &tempo);
	printf ("Distancia da corrida (em Km): ");
	scanf ("%f", &dist);
	
	pt = &tempo;
	pd = &dist;
	
	valor = ((*pt * 60) * 0.02) + (*pd * 1);
	pv = &valor;
	
	printf ("\nValor da corrida: R$ %.2f", *pv);
	
	return 0;
}
