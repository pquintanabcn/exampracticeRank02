#include <stdio.h>
#include <stdlib.h>

int	ft_countwords(char *str)
{
	int x = 0;
	int words = 0;
	int check = 0;
	while(str[x])
	{
		while (str[x] == ' ' || str[x] == '\t')
			x++;
		check = x;
		while (str[x] && str[x] != ' ' && str[x] != '\t')
		{
			x++;
		}
		if (check != x)
			words++;
	}
	return(words);
}

int ft_wordlen(char *str, int index)
{
	int x = 0;
	while(str[index] && (str[index] != ' ' || str[index] != '\t'))
	{
		index++;
		x++;
	}
	return(x);
}

char    **ft_split(char *str)
{
	int words = ft_countwords(str);
	char **array = malloc (sizeof(char *) * (words + 1));
	array[words] = 0;
	int x = 0;
	int y = 0;
	int xy = 0;
	while (str[x] == ' ' || str[x] == '\t')
		x++;
	while (str[x])
	{
		if (str[x] != ' ' && str[x] != '\t')
			array[y] = malloc (sizeof(char ) * (ft_wordlen(str, x) + 1));
		while (str[x] && str[x] != ' ' && str[x] != '\t')
		{
			array[y][xy] = str[x];
			x++;
			xy++;
		}
		while(str[x] == ' ' || str[x] == '\t')
			x++;
		y++;
		xy = 0;
	}
	return(array);
}

int main()
{
	char *s = "mi fabrica de baile";
	int x = 0;
	char **array = ft_split(s);
	while (x < 4)
	{
		printf("%d: %s\n", x, array[x]);
		x++;
	}
	return(0);
}
