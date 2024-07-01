#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_num(int num)
{
	char c;
	if (num > 9)
		ft_num(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	(void)av;
	int x = 0;
	while (ac > 1)
	{
		x++;
		ac--;
	}
	ft_num(x);
	ft_putchar('\n');
	return(0);
}
