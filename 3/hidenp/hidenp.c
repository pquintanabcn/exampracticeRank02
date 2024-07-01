/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:04:31 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/30 11:44:00 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hidenp(char *s1, char *s2)
{
	int aux1 = 0;
	int aux2 = 0;
	int len;

	while (s1[aux1])
		aux1++;
	len = aux1;
	aux1 = 0;
	while(s1[aux1] && s2[aux2])
	{
		if (s1[aux1] == s2[aux2])
		{
			len--;
			aux1++;
		}
		aux2++;
	}
	if (len == 0)
		ft_putchar('1');
	else
		ft_putchar('0');
}

int	main (int ac, char **av)
{
	if (ac == 3)
		ft_hidenp(av[1], av[2]);
	ft_putchar('\n');
	return(0);
}