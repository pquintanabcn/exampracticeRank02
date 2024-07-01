#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_lettercheck(char *s1, char letter, char index)
{
	int x = 0;
	while (index != x)
	{
		if (s1[x] == letter)
			return(0);
		x++;
	}
	return(1);
}

void	ft_union(char *s1, char *s2)
{
	int x = 0;
	while(s1[x])
	{
		if (ft_lettercheck(s1, s1[x], x))
			ft_putchar(s1[x]);
		x++;
	}
	int len1 = x;
	x = 0;
	while (s2[x])
	{
		if (ft_lettercheck(s1, s2[x], len1))
			if (ft_lettercheck(s2, s2[x], x))
				ft_putchar(s2[x]);
		x++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	ft_putchar('\n');
	return(0);
}
