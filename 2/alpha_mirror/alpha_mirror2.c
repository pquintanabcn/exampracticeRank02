/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:22:11 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/27 16:11:32 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_mirror(char *str)
{
	int x = 0;
	while(str[x])
	{ // Acordarse de restar primero la letra a "N" y luego a "M" la resta
		if (str[x] >= 'A' && str[x] <= 'Z')
			ft_putchar(str[x] = 'M' - (str[x] - 'N'));
		else if (str[x] >= 'a' && str[x] <= 'z')
			ft_putchar(str[x] = 'm' - (str[x] - 'n'));
		else
			ft_putchar(str[x]);
		x++;
	}
}

int main (int ac, char **av)
{
	// char c = 'a';
	// int len = 0;
	// while (c <= 'z')
	// {
	// 	ft_putchar(c++);
	// 	len++;
	// }
	// printf("\n%d\n", len);

	if (ac == 2)
		ft_mirror(av[1]);
	ft_putchar('\n');
}