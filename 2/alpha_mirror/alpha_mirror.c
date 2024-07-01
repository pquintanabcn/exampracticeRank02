/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:46:14 by pquintan          #+#    #+#             */
/*   Updated: 2022/05/11 17:01:39 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	mirror(char *s)
{
	int aux = 0;
	while (s[aux] != '\0')
	{
		if (s[aux] >= 'a' && s[aux] <= 'z')
		{
			s[aux] = 'a' + 'z' - s[aux];
			ft_putchar(s[aux++]);
		}
		else if (s[aux] >= 'A' && s[aux] <= 'Z')
		{
			s[aux] = 'A' + 'Z' - s[aux];
			ft_putchar(s[aux++]);
		}
		else
			ft_putchar(s[aux++]);
	}
}

int	main (int ac, char **av)
{
	if (ac != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	mirror(av[1]);
}