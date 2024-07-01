/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:57:37 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/27 15:03:48 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ulstr(char *str)
{
	int x = 0;
	while(str[x])
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			ft_putchar(str[x] -= 32);
		else if (str[x] >= 'A' && str[x] <= 'Z')
			ft_putchar(str[x] += 32);
		else
			ft_putchar(str[x]);
		x++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
		ft_ulstr(av[1]);
	ft_putchar('\n');
	return(0);
}