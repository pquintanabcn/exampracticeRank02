#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot(char	*str)
{
	int x = 0;
	while(str[x])
	{
		if ((str[x] >= 'A' && str[x] <= 'M') || (str[x] >= 'a' && str[x] <= 'm'))
			ft_putchar(str[x] + 13);
		else if((str[x] >= 'N' && str[x] <= 'Z') || (str[x] >= 'n' && str[x] <= 'z'))
			ft_putchar(str[x] - 13);
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
