#include <stdlib.h>
#include <stdio.h>

void	ft_operation(char *s1, char *sign, char *s2)
{
	int result = 0;

	if (sign[0] == '+')
	{
		result = atoi(s1) + atoi(s2);
		printf("%d", result);
	}
	else if (sign[0] == '-')
	{
		result = atoi(s1)- atoi(s2);
		printf("%d", result);
	}
	else if (sign[0] == '*')
	{
		result = atoi(s1) * atoi(s2);
		printf("%d", result);
	}
	else if (sign[0] == '/')
	{
		result = atoi(s1) / atoi(s2);
		printf("%d", result);
	}
	else if (sign[0] == '%')
	{
		result = atoi(s1) % atoi(s2);
		printf("%d", result);
	}
}

int main (int ac, char **av)
{
	if (ac == 4)
		ft_operation(av[1], av[2], av[3]);
	printf("\n");
	return(0);
}