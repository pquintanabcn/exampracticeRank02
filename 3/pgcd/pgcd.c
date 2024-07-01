#include <stdio.h>
#include <stdlib.h>

void	ft_comden(char *n1, char *n2)
{
	int num1 = atoi(n1);
	int num2 = atoi(n2);
	if (num1 > 0 && num2 > 0)
	{
		while (num1 != num2)
			{
				if (num1 > num2)
					num1 -= num2;
				else
					num2 -= num1;
				//printf("process: %d\n", num1);
				//printf("process: %d\n", num2);
			}
			printf("%d", num1);
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_comden(av[1], av[2]);
	printf("\n");
	return(0);
}