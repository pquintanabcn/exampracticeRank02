/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:18:55 by pquintan          #+#    #+#             */
/*   Updated: 2022/05/11 17:44:56 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int main (int ac, char **av)
{
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	int i = 0;
	int x = 0;
	int len = 0;
	while (av[1][len])
		len++;
	while (av[1][i] && av[2][x])
	{
		if (av[1][i] == av[2][x])
		{
			len--;
			i++;
		}
		x++;
	}
	if (len == 0)
	{
		i = 0;
		while (av[1][i])
			ft_putchar (av[1][i++]);
	}
	ft_putchar('\n');
}