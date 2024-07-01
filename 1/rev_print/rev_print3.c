#include <unistd.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

void	rev_print(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	len--;
	while (len != 0)
		ft_putchar(str[len--]);
	ft_putchar(str[0]);
}

int main(int ac, char **av)
{
	if (ac == 2)
		rev_print(av[1]);
	ft_putchar('\n');
	return(0);
}