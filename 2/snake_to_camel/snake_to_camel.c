#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_stc(char *str)
{
	int x = 0;
	while(str[x])
	{
		if(str[x] == '_')
		{
			x++;
			str[x] -= 32;
		}
		// str[++x] -= 32;
		ft_putchar(str[x]);
		x++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_stc(av[1]);
	ft_putchar('\n');
	return(0);
}