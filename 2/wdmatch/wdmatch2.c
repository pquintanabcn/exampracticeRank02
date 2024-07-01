/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:09:31 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/29 18:18:01 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_wdmatch(char *s1, char *s2)
{
	int aux1 = 0;
	int aux2 = 0;
	int len = 0;
	while (s1[len])
		len++;
	while(s1[aux1] && s2[aux2])
	{
		if (s1[aux1] == s2[aux2])
			aux1++;
		aux2++;
	}
	if (aux1 == len)
	{
		aux1 = 0;
		while (s1[aux1])
			ft_putchar(s1[aux1++]);
	}
}

int main (int ac, char **av)
{
	if (ac == 3)
		ft_wdmatch(av[1], av[2]);
	ft_putchar('\n');
	return(0);
}