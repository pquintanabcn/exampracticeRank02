#include <stdlib.h>
//#include <stdio.h>
int		*ft_rrange(int start, int end)
{
	int len = end - start + 1;
	int *tab = (int *)malloc(sizeof(int) * len);
	int aux = 0;
	if (start > end)
		return(ft_rrange(end, start));
	if (tab)
	{
		while (aux < len)
		{
			tab[aux] = end;
			end--;
			aux++;
		}
	}
	return(tab);
}
/*
int main()
{
	int start = 1;
	int end = 2;

	int *tab = ft_rrange(start, end);
	int len = 2;
	int i = 0;

	while(i < len)
	{
		printf("%d, ", tab[i]);
		++i;
	}
	printf("\n");
}
*/
