#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_last(char *str)
{
	int len = 0;
	int x = 0;
	while (str[len])
		len++;
	len -= 1;
	while(str[len] == ' ')
		len--;
	while(str[len] != ' ')
		len--;
	len++;
	while(len != x)
		ft_putchar(str[x++]);
} // TENER EN CUENTA LOS ESPACIOS AL PRINCIPIO Y EL FINAL

int main(int ac, char **av)
{
	if (ac == 2)
		ft_last(av[1]);
	ft_putchar('\n');
	return(0);
}
