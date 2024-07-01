#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_alpha(char *str)
{
	int x = 0;
	while(str[x])
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			ft_putchar('M' - (str[x] - 'N'));
		else if(str[x] >= 'a' && str[x] <= 'z')
			ft_putchar('m' - (str[x] - 'n'));
		else
			ft_putchar(str[x]);
		x++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_alpha(av[1]);
	ft_putchar('\n');
	return(0);
}
