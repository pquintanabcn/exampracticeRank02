#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev(char *str)
{
	int rev = 0;
	while (str[rev])
		rev++;
	while (rev--)
		ft_putchar(str[rev]);
}

int main (int ac, char **av)
{
	if (ac == 2)
		ft_rev(av[1]);
	ft_putchar('\n');
	return(0);
}
