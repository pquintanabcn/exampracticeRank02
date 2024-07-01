/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:42:43 by pquintan          #+#    #+#             */
/*   Updated: 2023/07/17 13:08:00 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int x = 0;
	while (str[x])
		x++;
	return(x);
}

void	ft_s_and_r(char *str, char *a, char *b)
{
	int lena = ft_strlen(a);
	int lenb = ft_strlen(b);

	if (lena != 1 || lenb != 1)
	{
		ft_putchar('\n'); // importante!!
		exit(0);
	}
	int x = 0;
	while (str[x])
	{
		if (str[x] == *a)
			str[x] = *b;
		ft_putchar(str[x]);
		x++;
	}
}

int main (int ac, char **av)
{
	if (ac == 4)
		ft_s_and_r(av[1], av[2], av[3]);
	ft_putchar('\n');
	return(0);
}
