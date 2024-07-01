#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	ft_strlen(char s)
{
	int x = 0;
	while(s[x])
		x++;
	return(x);
}

char	*ft_norma(char str)
{
	int start = 0;
	int end = ft_strlen(str);
	int x = 0;
	while (str[x])
	{
		while(str[x] == ' ' || str[x] '\t')
			x++;
		start = x;
		while(str[x])
	}
}
*/
void	ft_rost(char *str)
{
	int x = 0;
	while (str[x] == ' ' || str[x] == '\t')
		x++;
	int start = x;
	int end = 0;
	int check = 0;
	while(str[x])
	{
		if (start == x)
		{
			while(str[x] && str[x] != ' ' && str[x] != '\t')
				x++;
			end = x;
			while(str[x] && (str[x] == ' ' || str[x] == '\t'))
				x++;
		}
		if (str[x])
		{
			check++;
			ft_putchar(str[x]);
			x++;
			if (str[x] == ' ' || str[x] == '\t')
			{
				while(str[x] && (str[x] == ' ' || str[x] == '\t'))
					x++;
				ft_putchar(' ');
			}
		}
	}
	if (check != 0)
		ft_putchar(' ');
	while (start != end)
	{
		ft_putchar(str[start]);
		start++;
	}
}

int main(int ac, char **av)
{
	if (ac >= 2)
		ft_rost(av[1]);
	ft_putchar('\n');
	return(0);
}
