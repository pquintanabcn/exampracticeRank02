#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	ft_mirror (char *str)
{
	int x = 0;
	while (str[x])
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			ft_putchar(str[x] = 'M' - (str[x] - 'N')); //Importante el parentesis
		else if (str[x] >= 'a' && str[x] <= 'z')
			ft_putchar(str[x] = 'm' - (str[x] - 'n'));// Porque -- es + !!
		else
			ft_putchar(str[x]);
		x++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
		ft_mirror(av[1]);
	ft_putchar('\n');
	return(0);
}

a - z 1 - 25 24
b - y 2 - 24 22
c - x 3 - 23 20
... 
a 2
b 4
26 - x