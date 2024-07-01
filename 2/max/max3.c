#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int x = 0;
	unsigned int aux = 0; // IMPORTANTE EL UNSIGNED INT
	while(len != aux) // IMPORTANTE EL != NO >= en realidad deberia funcionar con >
	{
		if (tab[aux] > x)
			x = tab[aux];
		aux++;
	}
	return(x);
}

int main()
{
	int tab[5] = {1, 4, 2, 40, 25};
	int len = 5;
	printf("max: %d\n", max(tab, len));
	return(0);
}
