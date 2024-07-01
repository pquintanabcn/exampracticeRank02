/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:05:46 by pquintan          #+#    #+#             */
/*   Updated: 2023/07/18 10:43:59 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	rot_13 (char c)
{
	if((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
		return (c += 13);
	else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
		return (c -= 13);
	else
		return(c);
}

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
		ft_putchar(rot_13(av[1][aux]));
		aux++;
	}
	ft_putchar('\n');
	return(0);
}
