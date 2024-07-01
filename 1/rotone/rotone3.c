#include <unistd.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

void	ft_rot(char *str)
{
	int x = 0;
	while (str[x])
	{
		if ((str[x] >= 'a' && str[x] < 'z') || (str[x] >= 'A' && str[x] < 'Z'))
			ft_putchar(str[x] + 1);
		else if (str[x] == 'z')
			ft_putchar('a');
		else if (str[x] == 'Z')
			ft_putchar('A');
		else
			ft_putchar(str[x]);
		x++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_rot(av[1]);
	ft_putchar('\n');
	return(0);
}