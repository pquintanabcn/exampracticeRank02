/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:59:34 by pquintan          #+#    #+#             */
/*   Updated: 2022/09/21 18:02:29 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 2);
}

void	ft_expand(char *str)
{
	int x = 0;
	int checker = 0;

	while(str[x])
	{
		while (str[x] == ' ' || str[x] == '\t')
			x++;
		while (str[x] && str[x] != ' ' && str[x] != '\t')
			x++;
		if (x > 0 && checker != 0)
			write(1, "   ", 3);
		checker++;
		write(1, str, x);
		str += x;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_expand(av[1]);
	ft_putchar('\n');
	return(0);
}

// DA ERROR FINAL

// primero avanzar los espacios del principio
// mientras exista [x]
// si encuentro ' ' o '\t' checker = 1;
// sino hay checker 1 escribo '   '
// pongo a 0
// escribo los caracteres siguientes
// x++;

