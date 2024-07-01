#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_checker(char *str, char letter, int index)
{
	int x = 0;
	while(x != index)
	{
		if(str[x] == letter)
			return(0);
		x++;
	}
	return(1);
}

void	ft_inter(char *s1, char *s2)
{
	int aux1 = 0;
	int aux2 = 0;
	while (s1[aux1])
	{
		aux2 = 0;
		while(s2[aux2])
		{
			if (s1[aux1] == s2[aux2])
			{
				if(ft_checker(s1, s1[aux1], aux1))
				{
					ft_putchar(s1[aux1]);
					break;
				}
			}
			aux2++;
		}
		aux1++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_inter(av[1], av[2]);
	ft_putchar('\n');
	return(0);
}
