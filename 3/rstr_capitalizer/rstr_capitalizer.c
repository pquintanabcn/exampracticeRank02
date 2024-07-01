/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:45:54 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/30 11:04:11 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	rstr_capitalizer(int ac, char **av)
{
	int index = 1;
	int x = 0;
	while (index < ac)
	{
		while(av[index][x])
		{
		//	printf("letra: %c\n", av[index][x]);
			if ((av[index][x] >= 'A' && av[index][x] <= 'Z'))
			{
				if((av[index][x + 1] != ' ' && av[index][x + 1] != '\t') && (av[index][x + 1] != '\0'))
				{
					av[index][x] += 32;
					ft_putchar(av[index][x]);
				}
				else
					ft_putchar(av[index][x]);
			}
			else if ((av[index][x] >= 'a' && av[index][x] <= 'z'))
			{
				if(av[index][x + 1] == ' ' || av[index][x + 1] == '\t' || av[index][x + 1] == '\0')
				{
					av[index][x] -= 32;
					ft_putchar(av[index][x]);
				}
				else
					ft_putchar(av[index][x]);
			}
			else if (av[index][x] == ' ' && av[index][x] == '\t')
				ft_putchar(av[index][x]);
			else
				ft_putchar(av[index][x]);
			x++;
		}
		x = 0;
		index++;
		if (index < ac)
			ft_putchar('\n');
	}
}

int	main (int ac, char **av)
{
	if (ac > 1)
		rstr_capitalizer(ac, av);
	ft_putchar('\n');
	return(0);
}

// Por orden: (creo)
// 
// comprobar si es mayuscula o otra cosa que no sea espacio
// si es mayuscula ponerla en minuscula
// si es espacio en esa posicion -1 si es minuscula la ponemos en mayuscula y imprimimos un espacio despues
// 