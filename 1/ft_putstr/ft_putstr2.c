#include <unistd.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

void	ft_putstr (char *str)
{
	int x = 0;
	while (str[x])
	{
		ft_putchar(str[x++]);
	}
}

// int	main (void)
// {
// 	ft_putstr("Hola Maripili");
// 	return(0);
// }