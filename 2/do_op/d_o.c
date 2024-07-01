#include <stdio.h>
#include <stdlib.h>

void	ft_op(char *n1, char *op, char *n2)
{
	if (op[0] == '+')
		printf("%d", atoi(n1) + atoi(n2));
	else if (op[0] == '-')
		printf("%d", atoi(n1) - atoi(n2));
	else if (op[0] == '*')
		printf("%d", atoi(n1) * atoi(n2));
	else if (op[0] == '/')
		printf("%d", atoi(n1) / atoi(n2));
	else if (op[0] == '%')	
		printf("%d", atoi(n1) % atoi(n2));
}

int main (int ac, char **av)
{
	if (ac == 4)
		ft_op(av[1], av[2], av[3]);
	printf("\n");
	return(0);
}
