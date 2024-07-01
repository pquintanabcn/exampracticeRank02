/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:28:34 by pquintan          #+#    #+#             */
/*   Updated: 2022/04/27 11:50:31 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main (int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	int aux = 0;
	while (av[1][aux] != '\0')
	{
		while ((av[1][aux] == ' ' || av[1][aux] == '\t') && (av[1][aux] != '\0'))
			aux++;
		while ((av[1][aux] != ' ' && av[1][aux] != '\t') && (av[1][aux] != '\0'))
		{
			ft_putchar(av[1][aux]);
			aux++;
		}
		if (av[1][aux] == ' ' || av[1][aux] == '\t')
			break;
	}
	ft_putchar('\n');
	return(0);
}