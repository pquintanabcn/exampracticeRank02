/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:24:35 by pquintan          #+#    #+#             */
/*   Updated: 2022/09/08 11:40:56 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check(char *str, int letter, int index) // SI DEVUELVE TE IMPRIME LA LETRA YA QUE NO ESTA ANTERIORMENTE
{
	int x = 0;
	while(x != index) //IMPORTANTE EL != Y NO <=
	{
		if(str[x] == letter)
			return(0);
		x++;
	}
	return(1);
}

void	ft_inter(char *s1, char *s2)
{
	int aux1 = 0;
	int aux2;
	while(s1[aux1])
	{
		aux2 = 0; // porque tengo que comprobar siempre la segunda string
		while(s2[aux2])
		{
			if (s1[aux1] == s2[aux2])
			{
				if(ft_check(s1, s1[aux1], aux1))
				{
					ft_putchar(s1[aux1]);
					break;
				}
			}
			aux2++;
		}
		aux1++;
	}
}

int main (int ac, char **av)
{
	if (ac == 3)
		ft_inter(av[1], av[2]);
	ft_putchar('\n');
	return(0);
}

// POR ORDEN:
// PRIMERO COMPRUEBO ESA LETRA CON LA S2 SI ES LA MISMA 
// CHECKEO QUE LA LETRA NO ESTE REPETIDA EN LA STRING 1
// SI NO ESTA LA ESCRIBO Y HAGO BREAK
// LUEGO SUBO EL INDICE DE LA S2 Y CONTINUO EL BUCLE
// CUANDO LO ACABO AÑADO UNO AL INDICE DE LA S1 PARA COMPROBAR LA SIGUIENTE LETRA
// PONGO EL INDICE DE S2 A 0 Y VUELTA A EMPEZAR.