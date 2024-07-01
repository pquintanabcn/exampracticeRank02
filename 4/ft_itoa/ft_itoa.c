#include <stdlib.h>
#include <stdio.h>

static	size_t	ft_counter(long num)
{
	size_t	size;

	size = 0;
	if (num == 0)
		return (1); // porque da error y entonces hace print 0
	if (num < 0) // añade la posicion de '-'
	{
		num = num * -1;
		size++;
	}
	while (num > 0)
	{
		num = num / 10;
		size++;
	}
	return (size);
}

static	void	ft_replace(long n, char *i_to_c, long x)
{
	if (n < 0)
	{
		i_to_c[0] = '-';
		n = n * -1; // para convertirlo en positivo
	}	
	if (n >= 10)
		ft_replace((n / 10), i_to_c, (x - 1));
	i_to_c[x] = (n % 10) + '0'; // porque asi convierto de ascci a numero
}

char	*ft_itoa(int n)
{
	char	*i_to_c;
	size_t	counter;

	counter = ft_counter(n);
	i_to_c = malloc(counter + 1); // (char *)malloc(sizeof(char) * counter + 1);
	if (!i_to_c)
		return (NULL);
	i_to_c[counter--] = '\0';
	ft_replace(n, i_to_c, counter);
	return (i_to_c);
}

int main(void)
{
	printf("%s\n", ft_itoa(1452));
	return (0);
}

// counter size num
// malloc char* nueva string de size + 1
// proteger malloc
// en size - 1 poner '\0'
// funcion remplazar
// remplazar cada numero en su posicion en la string creada
