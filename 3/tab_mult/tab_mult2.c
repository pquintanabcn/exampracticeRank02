#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int num = 0;
	int sign = 1;
	int x = 0;

	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sign = -1;
		x++;
	}
	while (str[x] && (str[x] >= '0' && str[x] <= '9'))
	{
		num = num * 10 + str[x] - '0';
		x++;
	}
	return(num * sign);
}

// void ft_write_num (int num)
// {
// 	char str[10] = "0123456789";
// 	if (num > 9)
// 		ft_write_num (num / 10);
// 	write (1, &str[num % 10], 1);
// }

void	ft_putnbr(int num)
{
	char digit;
	if (num == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		num = (num % 1000000000 * -1);
	}
	if (num < 0)
	{
		ft_putchar('-');
		num = (num * -1);
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	digit = (num % 10) + '0';
	write(1, &digit, 1);
}

void	ft_tab(char *str)
{
	int num = ft_atoi(str);
	// if (num < 0)
	// 	num = 0;		porque los negativos son 0 y ya esta
	int tab = 1;
	while (tab < 10)
	{
		ft_putnbr(tab);
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		ft_putnbr(num);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');
		ft_putnbr(tab * num);
		if (tab < 9)
			ft_putchar('\n');
		tab++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_tab(av[1]);
	ft_putchar('\n');
	return(0);
}
