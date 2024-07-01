#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_countletter(char x)
{
	int count =  0;
	if (x >= 'A' && x <= 'Z')
		count = x - 'A' + 1;
	else if (x >= 'a' && x <= 'z')
		count = x - 'a' + 1;
	else
		count = 1;
	return(count);
}

void	ft_ra(char *str)
{
	int aux = 0;
	int letter = 0;
	while(str[aux])
	{
		letter = ft_countletter(str[aux]);
		while (letter != 0)
		{
			ft_putchar(str[aux]);
			letter--;
		}
		aux++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
		ft_ra(av[1]);
	ft_putchar('\n');
	return(0);
}
