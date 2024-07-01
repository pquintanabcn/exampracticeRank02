#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rstr(char *str)
{
	int x = 0;
	int checker = 0;
	while (str[x])
	{
		while (str[x] != ' ' && str[x] != '\t')
			x++;
		// replantear con palante patras :)
		// while (str[x] == ' ' || str[x] == '\t')
		// {
		// 	ft_putchar(str[x++]);
		// }
		// if (str[x] >= 'A' && str[x] <= 'Z')
		// {
		// 	if (checker == 0)
		// 	{
		// 		ft_putchar(str[x]);
		// 		checker++;
		// 	}
		// 	else
		// 		ft_putchar(str[x] + 32);
		// }
		// else
		// 	ft_putchar(str[x]);
		// x++;
	}
	ft_putchar('\n');
}

int main (int ac, char **av)
{
	int x = 1;
	if (ac >= 2)
	{
		while (av[x])
			ft_rstr(av[x++]);
	}
	return(0);
}