#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 2);
}

void	ft_expand(char *str)
{
	int x = 0;
	int checker = 0;
	
	while (str[x] == ' ' || str[x] == '\t')
		x++; // trim principio
	while(str[x])
	{
		while (str[x] == ' ' || str[x] == '\t')
			checker = 1;
		if (checker)
		{
			checker = 0;
			ft_putchar(' ');
			ft_putchar(' ');
			ft_putchar(' ');
		}
		while (str[x] && str[x] != ' ' && str[x] != '\t')
			x++;
		if (str[x] != '\0')
		{
			if (x > 0)
				write(1, "   ", 3);
		}
		write(1, str, x);
		str += x;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_expand(av[1]);
	ft_putchar('\n');
	return(0);
}

// ARREGLAR !!