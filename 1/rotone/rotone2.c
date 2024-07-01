/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:32:35 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/27 14:39:31 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rotone(char *str)
{
	int x = 0;
	while (str[x])
	{
		if (str[x] == 'z')
			ft_putchar('a');
		else if (str[x] == 'Z')
			ft_putchar('A');
		else if ((str[x] >= 'a' && str[x] < 'z') || (str[x] >= 'A' && str[x] < 'Z'))
			ft_putchar(str[x] + 1);
		else
			ft_putchar(str[x]);
		x++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_rotone(av[1]);
	ft_putchar('\n');
	return(0);
}