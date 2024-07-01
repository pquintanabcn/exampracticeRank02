#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_stol(char *str)
{
	int aux = 0;
	while(str[aux] != '_')
		ft_putchar(str[aux++]);
	while(str[aux])
	{
		aux++;
		ft_putchar(str[aux] - 32);
		aux++;
		while(str[aux] && str[aux] != '_')
				ft_putchar(str[aux++]);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_stol(av[1]);
	ft_putchar('\n');
	return(0);
}
