#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	unsigned int x = 0;
	int num = tab[x];
	while (len != x)
	{
		if (tab[x] > num)
			num = tab[x];
		x++;
	}
	return(num);
}

int main()
{
	int tab[5] = {1, 4, 2, 40, 25};
	int len = 5;
	printf("max: %d\n", max(tab, len));
	return(0);
}
