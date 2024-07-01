#include <stdio.h>
#include <stdlib.h>

void	ft_fprime(int num)
{
	int flag = 0;
	int div = 2;
	while (div <= num)
	{
		if (num % div == 0)
		{
			if (flag == 1)
				printf("*");
			printf("%d", div);
			if (div == num) // esto es para cuando hemos llegado al maximo numero
				break ;
			num = num / div; // hago la division para poder continuar buscando numeros factores
			div = 2; // reinicio los divisores
			flag = 1;
		}
		div++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_fprime(atoi(av[1]));
	printf("\n");
	return(0);
}