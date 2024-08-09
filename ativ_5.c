#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x, y, *px, *py;
	
	printf ("x: ");
	scanf ("%d", &x);
	printf ("x: ");
	scanf ("%d", &y);
	
	px = &x;
	py = &y;
	
	printf ("\nx <-> y\n");
	printf ("\nx = %d", *py);
	printf ("\ny = %d", *px);
	
	return 0;
}
