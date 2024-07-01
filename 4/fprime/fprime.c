#include <stdio.h>
#include <stdlib.h>

void	ft_fp(char *str)
{
	int num = atoi(str);
	if (num == 1)
		printf("1");
	int x = 2;
	while (x <= num)
	{
		if (num % x == 0)
		{
			printf("%d", x);
			if (num == x)
				break;
			printf("*");
			num /= x;
			x = 2;
		}
		x++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_fp(av[1]);
	printf("\n");
	return(0);
}
