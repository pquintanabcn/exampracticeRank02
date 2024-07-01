#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_match(char *s1, char *s2)
{
	int aux1 = 0;
	int aux2 = 0;
	int len = 0;
	while(s1[len])
		len++;
	while (s1[aux1] && s2[aux2])
	{
		if(s1[aux1] == s2[aux2])
		{
			aux1++;
			len--;
		}
		aux2++;
	}
	if (len == 0)
	{
		while(s1[len])
			ft_putchar(s1[len++]);
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_match(av[1], av[2]);
	ft_putchar('\n');
	return(0);
}

