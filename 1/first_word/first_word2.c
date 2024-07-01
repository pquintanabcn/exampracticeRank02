/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:58:56 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/27 10:18:51 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char *str)
{
	int x = 0;
	while (str[x])
	{
		while (str[x] == ' ' || str[x] == '\t')
			x++;
		while((str[x] != ' ' && str[x] != '\t') && str[x])
			ft_putchar(str[x++]);
		break;
	}
}

int	main (int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	ft_putchar('\n');
	return(0);
}