/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:03:42 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/27 14:13:02 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	ft_strlen(char *str)
{
	int x = 0;
	while(str[x])
		x++;
	return(x);
}

void	ft_rev(char *str)
{
	int len = ft_strlen(str) - 1;
	while (len != 0)
		ft_putchar(str[len--]);
	ft_putchar(str[0]);
}

int main (int ac, char **av)
{
	if (ac == 2)
		ft_rev(av[1]);
	ft_putchar('\n');
	return(0);
}