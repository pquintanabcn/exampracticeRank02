#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_normalize (char *str)
{
	int x = 0;
	while(str[x])
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			ft_putchar('_');
			ft_putchar(str[x] + 32); // 32 == ' '
		}
		else
			ft_putchar(str[x]);
		x++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
		ft_normalize(av[1]);
	ft_putchar('\n');
	return(0);
}