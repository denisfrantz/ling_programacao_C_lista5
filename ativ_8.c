#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, idade, *pid;
	float idade_total, *pid_t;
	
	pid = &idade;
	pid_t = &idade_total;
	
	printf ("Digite a idade de 10 pessoas: \n\n");
	for (i = 0; i < 10; i++)
	{
		scanf ("%d", &idade);
		*pid_t = *pid_t + *pid;
	}
	
	printf ("\nMedia das idades: %.1f", *pid_t/10);
	
	return 0;
}
