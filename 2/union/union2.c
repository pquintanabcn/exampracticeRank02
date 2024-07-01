/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:00:45 by pquintan          #+#    #+#             */
/*   Updated: 2022/09/08 11:58:06 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int x = 0;
	while (str[x])
		x++;
	return(x);
}

int		ft_check_str(char *str, char letter, int index)
{
	int x = 0;
	while(x != index)
	{
		if (str[x] == letter)
			return(0);
		x++;
	}
	return(1);
}

void	ft_union(char *s1, char *s2)
{
	int aux1 = 0;
	int aux2 = 0;
	while (s1[aux1])
	{
		if (ft_check_str(s1, s1[aux1], aux1))
			ft_putchar(s1[aux1]);
		aux1++;
	}
	int len1 = ft_strlen(s1);
	while (s2[aux2])
	{
		if (ft_check_str(s2, s2[aux2], aux2))
		{
			if (ft_check_str(s1, s2[aux2], len1))
				ft_putchar(s2[aux2]);
		}
		aux2++;
	}
	
}

int	main (int ac, char **av)
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