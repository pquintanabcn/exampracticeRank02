#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev(char *str)
{
	int x = 0;
	int stopper = 0;
	int word = 0;
	while (str[x])
		x++;
	word = x;
//	printf("x: %d s: %d w: %d\n", x, stopper, word);
	while (x > 0)
	{
		while (word > 0 && str[word] != ' ' && str[word] != '\t')
			word--;
		stopper = word - 1;
		if (word > 0)
			word++;
		while (word < x)
			ft_putchar(str[word++]);
		x = stopper + 1;
		word = stopper;
//		printf("x: %d s: %d w: %d\n", x, stopper, word);
		if (str[x] && word > 0)
			ft_putchar(' ');
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_rev(av[1]);
	ft_putchar('\n');
	return(0);
}
