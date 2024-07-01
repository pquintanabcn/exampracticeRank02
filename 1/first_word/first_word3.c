#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int x = 0;
		while (av[1][x] == ' ')
			x++;
		while (av[1][x] != ' ')
			ft_putchar(av[1][x++]);
	}
	write(1, "\n", 1);
	return(0);
}