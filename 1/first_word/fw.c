#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_fw(char *str)
{
	int x = 0;
	while(str[x] == ' ')
		x++;
	while (str[x] && str[x] != ' ')
		ft_putchar(str[x++]);
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_fw(av[1]);
	ft_putchar('\n');
	return(0);
}
