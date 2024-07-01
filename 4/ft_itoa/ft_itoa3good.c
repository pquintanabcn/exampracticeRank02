#include <stdlib.h>
#include <stdio.h>

int ft_size(int num)
{
	int size = 0;
	if (num == 0)
		return(1);
	if (num < 0)
	{
		num = num * -1;
		size++;
	}
	while (num > 0)
	{
		num = num / 10;
		size++;
	}
	return(size);
}

void	ft_replace(int nbr, char *str, int size)
{
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	if (nbr >= 10)
		ft_replace((nbr / 10), str, size - 1);
	str[size] = (nbr % 10) + '0';
}

char	*ft_itoa(int nbr)
{
	char *str;
	int	size;
	size = ft_size(nbr);
	str = malloc(size + 1);
	if (!str)
		return(NULL);
	str[size--] = '\0';
	ft_replace(nbr, str, size);
	return(str);
}

int main()
{
	printf("%s\n", ft_itoa(0));
	return(0);
}

// funcion counter size num
// malloc char* nueva string de size + 1
// proteger malloc
// en size - 1 poner '\0'
// funcion remplazar
// remplazar cada numero en su posicion en la string creada
