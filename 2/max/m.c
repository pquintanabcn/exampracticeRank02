#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int num = 0;
	unsigned int aux = 0;
	while(len != aux)
	{
		if (num < tab[aux])
			num = tab[aux];
		aux++;
	}

	return(num);
}

int main()
{
	int tab[6] = {645, 2, 3, 4, 5, 6};
	unsigned int len = 6;
	printf("max: %d\n", max(tab, len));
	return(0);
}
