#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = (nb % 1000000000 * -1);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = (nb * -1);
	}
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_mult(char *num)
{
	int tab = 1;
	int n = ft_atoi(num);
	while (tab < 10)
	{
		ft_putnbr(tab);
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		ft_putnbr(n);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');
		ft_putnbr(tab * n);
		if(tab < 9)
			ft_putchar('\n');
		tab++;
		num[0] = 1;
	}
}

//mirar que hay que hacer con los negativos

int main(int ac, char **av)
{
	if (ac == 2)
		ft_mult(av[1]);
	ft_putchar('\n');
	return(0);
}
