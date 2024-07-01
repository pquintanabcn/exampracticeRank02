#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_checker(char *str, char letter, char index)
{
	int x = 0;
	while (x != index)
	{
		if(str[x] == letter)
			return(0);
		x++;
	}
	return(1);
}

void	ft_union(char *s1, char *s2)
{
	int aux1 = 0;
	int aux2 = 0;
	int	len = 0;

	while (s1[aux1])
	{
		if(ft_checker(s1, s1[aux1], aux1))
			ft_putchar(s1[aux1]);
		aux1++;
	}

	while (s1[len])
		len++;

	while (s2[aux2])
	{
		if(ft_checker(s2, s2[aux2], aux2))
			if(ft_checker(s1, s2[aux2], len))
				ft_putchar(s2[aux2]);
		aux2++;
	}

}

int main (int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	ft_putchar('\n');
	return(0);
}

//DOS WHILES PARA LAS DOS FRASES
//HACER EL CHECKER CON LA STR, LETTER, INDEX
//HACER WHILE S1
//CHECKEANDO LA S1, S1AUX1, AUX1
//CALCULAR EL LEN DE S1
//HACER WHILE S2
//CHECKEANDO LA S2, S2AUX2, AUX2
//Y CHECKEANDO LA S1, S2AUX2, LEN
