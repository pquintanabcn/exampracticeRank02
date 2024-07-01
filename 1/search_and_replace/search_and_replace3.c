#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_s_and_r(char *str, char *letter, char *replace)
{
	int x = 0;
	int check = 0;
	while (letter[check])
		check++;
	while (replace[check])
		check++;
	//printf("check :%d", check);
	if (check != 1)
	{
		ft_putchar('\n');
		exit(0);
	}
	while (str[x])
	{
		if (str[x] == letter[0])
			str[x] = replace[0];
		ft_putchar(str[x]);
		x++;
	}
}

int main(int ac, char **av)
{
	if (ac == 4)
		ft_s_and_r(av[1], av[2], av[3]);
	ft_putchar('\n');
	return(0);
}
