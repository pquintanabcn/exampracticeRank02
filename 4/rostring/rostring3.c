#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ros(char *str)
{
	int x = 0;
	int first = 0;
	int last = 0;
	int flag = 0;
	while (str[x] == ' ' || str[x] == '\t')
		x++;
	first = x;
	while (str[x] && (str[x] != ' ' && str[x] != '\t'))
		x++;
	last = x;
	while (str[x] == ' ' || str[x] == '\t')
		x++;
	while (str[x])
	{
		flag = 1;
		if (str[x] == ' ' || str[x] == '\t')
		{
			while (str[x] == ' ' || str[x] == '\t')
				x++;
			ft_putchar(' ');
			x--;
		}
		else
			ft_putchar(str[x]);
		x++;
	}
	if (flag == 1)
		ft_putchar(' ');
	while(first < last)
		ft_putchar(str[first++]);
}

int main(int ac, char **av)
{
	if (ac >= 2)
		ft_ros(av[1]);
	ft_putchar('\n');
	return(0);
}
