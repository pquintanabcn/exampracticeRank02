#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_check(char *str, char letter, int index)
{
	int aux = 0;
	while(index != 0)
	{
		if (str[aux] == letter)
			return(0);
		aux++;
		index--;
	}
	return(1);
}

void	ft_uni(char *s1, char *s2)
{
	int x = 0;
	int len = 0;
	while (s1[x])
	{
		if (ft_check(s1, s1[x], x))
			ft_putchar(s1[x]);
		x++;
	}
	len = x;
	x = 0;
	while (s2[x])
	{
		if (ft_check(s2, s2[x], x))
		{
			if(ft_check(s1, s2[x], len))
				ft_putchar(s2[x]);
		}
		x++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_uni(av[1], av[2]);
	ft_putchar('\n');
	return(0);
}

