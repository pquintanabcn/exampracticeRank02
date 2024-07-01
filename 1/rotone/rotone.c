/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:13:50 by pquintan          #+#    #+#             */
/*   Updated: 2022/04/27 13:04:13 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	ft_rotone (char c)
{
	if ((c >= 'A' && c < 'Z') || (c >= 'a' && c < 'z'))
	{
		c = c + 1;
		return (ft_putchar(c));

	}
	else if(c == 'Z')
		return (ft_putchar('A'));
	else if (c == 'z')
		return (ft_putchar('a'));
	else
		return (ft_putchar(c));
}

int main (int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	int aux = 0;
	while(av[1][aux] != '\0')
	{
		ft_rotone(av[1][aux++]);
	}
	ft_putchar('\n');
	return(0);
}