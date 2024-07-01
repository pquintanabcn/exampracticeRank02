#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_epur(char *str)
{
	int x = 0;
	while (str[x] && (str[x] == ' ' || str[x] == '\t'))
		x++;
	while (str[x])
	{
		while (str[x] && str[x] != ' ' && str[x] != '\t')
			ft_putchar(str[x++]);
		while (str[x] && (str[x] == ' ' || str[x] == '\t'))
			x++;
		if (str[x])
			ft_putchar(' ');
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
		ft_epur(av[1]);
	ft_putchar('\n');
	return(0);
}