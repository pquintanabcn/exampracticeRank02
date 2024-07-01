#include <stdlib.h>
#include <stdio.h>

int		ft_size(int nbr)
{
	int size = 1;
	if (nbr == 0)
		return(0);
	if (nbr < 0)
	{
		nbr = nbr * -1;
		size++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		size++;
	}
	return(size);
}

void	ft_replace(char *str, int nbr, int size)
{
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	if (nbr > 9)
		ft_replace(str, (nbr / 10), size - 1);
	str[size] = (nbr % 10) + '0';
}

char	*ft_itoa(int nbr)
{
	char *str;
	int size;
	size = ft_size(nbr);
	str = malloc(size + 1);
	if (!str)
		return(NULL);
	str[size--] = '\0';
	ft_replace(str, nbr, size);
	return(str);
}

int main()
{
	// el numero 0 no lo coje bien
	printf("%s\n", ft_itoa(0));
	return(0);
}
