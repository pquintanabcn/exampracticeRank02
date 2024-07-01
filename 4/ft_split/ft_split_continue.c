#include <stdio.h>
#include <stdlib.h>

void	fill_words(char **array, char *str)
{
	//int len_str = 0;
	//while(str[len_str])
	//	len_str++;
	int index = 0;
	int x = 0;
	while(str[x])
	{
		while(str[index] != ' ', str[index] != '\t', str[index] != '\n')
			index++;
		
	}
}

int		num_words(char *str)
{
	int num = 1;
	int x = 0;
	while(str[x])
	{
		if (str[x] && (str[x] == ' ' || str[x] == '\t' || str[x] == '\n'))
		{
			num++;
			x++;
		}
		x++;
	}
	return(num);
}

char	**ft_split(char *str)
{
	int words = num_words;
	char **array = malloc(sizeof(char *) * (num_words + 1))
	array[num_words] = 0;
	fill_words(array, str);
	return(array);
}

int main()
{
	int i = 0;
	char **tab;

	tab = ft_split("hola que tal estas");
	while (i < 4)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return(0);
}
