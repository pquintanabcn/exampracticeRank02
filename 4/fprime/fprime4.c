#include <stdio.h>
#include <stdlib.h>

void	ft_prime(char *nbr)
{
	int num = atoi(nbr);
	int div = 2;
	int flag = 0;
	if (num == 1)
		printf("1");
	while (div <= num)
	{
		if (num % div == 0)
		{
			if (flag == 1)
				printf("*");
			printf("%d", div);
			if (div == num)
				break ;
			num = num / div;
			div = 2;
			flag = 1;
		}
		div++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
		ft_prime(av[1]);
	printf("\n");
	return(0);
}
