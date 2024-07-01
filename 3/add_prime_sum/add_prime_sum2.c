#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_atoi(char *nbr)
{
	int res = 0;
	int x = 0;
	if (nbr[x] == '+')
		x++;
	while(nbr[x] && (nbr[x] >= '0' && nbr[x] <= '9'))
	{
		res = res * 10 + (nbr[x] - '0');
		x++;
	}
	return(res);
}

int	ft_is_prime(int nbr)
{
	int div = 2;
	if (nbr <= 1)
		return(0);
	if (nbr % 2 == 0 && nbr > 2)
		return(0);
	while  (div < (nbr / 2))
	{
		if (nbr % div == 0)
			return(0);
		div++;
	}
	return(1);
}

int	ft_add_prime(int nbr)
{
	int sum = 0;
	while (nbr > 1)
	{
		if (ft_is_prime(nbr))
			sum = sum + nbr;
		nbr--;
	}
	return(sum);
}

void	ft_putnbr(int nbr)
{
	char digit;
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	digit = (nbr % 10) + '0';
	write(1, &digit, 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int n = ft_atoi(av[1]);
//		printf("%d\n%c\n", n, av[1][0]);
		if (av[1][0] == '-' || n == 0)
		{
			write(1, "0", 1);
			ft_putchar('\n');
			return(0);
		}
		else if (n > 1)
			ft_putnbr(ft_add_prime(n));
	}
	else
		write(1, "0", 1);
	ft_putchar('\n');
	return(0);
}
