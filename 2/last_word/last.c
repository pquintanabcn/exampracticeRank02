#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_last(char *str)
{
	int len = 0;
	while(str[len])
		len++;
	if(str[len - 1] == ' ')
	{
		len--;
		while(str[len] == ' ')
			len--;
	}
	while(str[len] != ' ')
		len--;
	len++;
	while(str[len] && str[len] != ' ')
		ft_putchar(str[len++]);
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_last(av[1]);
	ft_putchar('\n');
	return(0);
}
