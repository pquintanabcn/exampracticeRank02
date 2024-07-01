#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check(char *str, char letter, int pos)
{
	int aux = 0;
	while (pos != 0)
	{
		if (str[aux] == letter)
			return(0);
		aux++;
		pos--;
	}
	return(1);
}

void	ft_inter(char *s1, char *s2)
{
	int x = 0;
	int y = 0;
	while (s1[x])
	{
		y = 0;
		while (s2[y])
		{
			if (s1[x] == s2[y])
			{
				if(ft_check(s1, s1[x], x))
				{
					ft_putchar(s1[x]);
					break;
				}
			}
			y++;
		}
		x++;
	}
}

int main(int ac, char **av)
{
	if(ac == 3)
		ft_inter(av[1], av[2]);
	ft_putchar('\n');
	return(0);
}
