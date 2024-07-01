#include <stdlib.h>
#include <stdio.h>
int	*ft_rrange(int start, int end)
{
	int len = end - start + 1;
	int *tab = (int *)malloc(sizeof(int) * len);
	int x = 0;

	if (start > end)
		return(ft_rrange(end, start));
	if (tab)
	{
		while (x < len)
		{
			tab[x] = end;
			end--;
			x++;
		}
	}
	return(tab);
}

int main()
{
	int start = 1;
	int end = 2;

	int *arr = ft_rrange(start, end);
	int i = 0;
	int len = 2;
	while (i < len)
	{
	    printf("%d, ", arr[i]);
	    ++i;
	}
	printf("\n");
}

