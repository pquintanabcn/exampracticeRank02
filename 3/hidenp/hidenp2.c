#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hidenp(char *s1, char *s2)
{
	int aux1 = 0;
	int aux2 = 0;
	int checker = 0;
	while(s1[checker])
		checker++;
	while (s1[aux1])
	{
		while(s2[aux2])
		{
			if (s1[aux1] == s2[aux2])
			{
				checker--;
				aux1++;
			}
			aux2++;
		}
		aux1++;
	}
	if (checker == 0)
		ft_putchar('1');
	else
		ft_putchar('0');
}

int main (int ac, char **av)
{
	if (ac == 3)
		ft_hidenp(av[1], av[2]);
	ft_putchar('\n');
	return(0);
}
