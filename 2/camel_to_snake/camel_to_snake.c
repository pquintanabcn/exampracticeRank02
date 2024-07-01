/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:00:46 by pquintan          #+#    #+#             */
/*   Updated: 2022/05/19 17:12:11 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	c_to_s(char *str)
{
	int aux = 0;
	while (str[aux])
	{
		if (str[aux] >= 'A' && str[aux] <= 'Z')
		{
			ft_putchar('_');
			str[aux] = str[aux] + ('a' - 'A');
		}
		ft_putchar(str[aux]);
		aux++;
	}
	
}

int	main (int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	c_to_s(av[1]);
	return (0);
}