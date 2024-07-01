#include <stdlib.h>
#include <stdio.h>

int	ft_size(int num)
{
	int size = 0;
	if (num == 0)
		return(1);
	if (num < 0)
	{
		num *= -1;
		size++;
	}
	while(num > 0)
	{
		num /= 10;
		size++;
	}
	return(size);
}

void	ft_replace(int n, char *str, int size)
{
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n >= 10)
		ft_replace((n / 10), str, (size - 1));
	str[size] = (n % 10) + '0';
}

char	*ft_itoa(int nbr)
{
	int size = ft_size(nbr);
	char *str = malloc(size + 1);
	if (!str)
		return(NULL);
	str[size--] = '\0';
	ft_replace(nbr, str, size);
	return(str);
}

int main()
{
	printf("itoa: %s\n", ft_itoa(1234));
	return(0);
}
