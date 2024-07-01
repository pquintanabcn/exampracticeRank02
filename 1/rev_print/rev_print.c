/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:13:48 by pquintan          #+#    #+#             */
/*   Updated: 2022/04/27 12:43:13 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

int	ft_strlen (char *s)
{
	int counter = 0;
	while(s[counter])
		counter++;
	return(counter);
}

int main (int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	int len = ft_strlen(av[1]);
	while (len--)
		ft_putchar(av[1][len]);
	ft_putchar('\n');
	return(0);
}