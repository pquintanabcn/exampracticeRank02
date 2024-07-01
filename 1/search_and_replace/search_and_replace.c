/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:46:44 by pquintan          #+#    #+#             */
/*   Updated: 2023/07/17 13:04:53 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if (ac != 4) //compruebo que sean 3 parametros mas el output
	{
		ft_putchar('\n');
		return(0);
	}

	if (av[2][1] != '\0' || av[3][1] != '\0') // compruebo que solo haya una letra
	{
		ft_putchar('\n');
		return(0);
	}

	int	aux = 0;
	int aux2 = 0;
	int check = 0;
	while (av[1][aux] != '\0') // comprueba que coincida en la string
	{
		if (av[1][aux] == av[2][aux2])
		{
			av[1][aux] = av[3][aux2];
			check++;
			aux++;
		}
		else
			aux++;
	}
	aux = 0;
	if (check == 0) // si la letra no esta en la string la devuelvo como estaba
	{
		while(av[1][aux] != '\0')
		{
			ft_putchar(av[1][aux]);
			aux++;
		}
		ft_putchar('\n');
		return(0);
	}
	else // si la letra esta en la string la cambio por la otra
	{
		while(av[1][aux] != '\0')
		{
			if (av[1][aux] == av[2][aux2])
			{
				av[1][aux] = av[3][aux2];
				ft_putchar(av[1][aux]);
				aux++;
			}
			else
			{
				ft_putchar(av[1][aux]);
				aux++;
			}
		}
	}
	ft_putchar('\n');
	return(0);
}
