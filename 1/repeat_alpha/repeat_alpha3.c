#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

int		letter_counter (char c)
{
	if (c >= 'a' && c <= 'z')
		return(c - 'a' + 1);
	else if (c >= 'A' && c <= 'Z')
		return(c - 'A' + 1);
	else
		return(1);
}

void	ft_repa(char *str)
{
	int x = 0;
	int print = 0;

	while(str[x])
	{
		print = letter_counter(str[x]);
		while (print != 0)
		{
			ft_putchar(str[x]);
			print--;
		}
		x++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
		ft_repa(av[1]);
	ft_putchar('\n');
	return(0);
}