#include <stdio.h>
#include <stdlib.h>
int *ft_range(int start, int end)
{
	int x = 0;
	int len = 0;
	if (start < end)
		len = end - start + 1;
	else
		len = start - end + 1;

	int *tab = (int *)malloc(sizeof(int) * len);
	
	while (x < len)
	{
		if (start < end)
		{
			tab[x] = start;
			start++;
			x++;
		}
		else
		{
			tab[x] = start;
			start--;
			x++;
		}
	}
        return (tab);
}

int        main(void)
{
    int *nums;
    int i;

    nums = ft_range(0, -3);
    i = 0;
    while (i < 4)
    {
        printf("%d\n", nums[i]);
        i++;
    }
    return (0);
}

