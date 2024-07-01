#include <stdio.h>
#include <stdlib.h>

void	ft_pr(char *num)
{
	int n = atoi(num);
	int x = 2;
	int checker = 0;
	while (x <= n)
	{
		if (n % x == 0)
		{
			if (checker > 0)
				printf("*");
			printf("%d", x);
			if (n == x)
				break;
			checker++;
			n = n / x;
			x = 2;
		}
		x++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
		ft_pr(av[1]);
	printf("\n");
	return(0);
}
