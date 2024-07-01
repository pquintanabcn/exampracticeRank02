/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:10:09 by pquintan          #+#    #+#             */
/*   Updated: 2022/09/28 17:00:48 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_wstr(char *s1)
{
	// int x = 0;
	// while (s1[x] != '\0')
	// 	ft_putchar(s1[x++]);
	int len = 0;
	int x = 0;
	int first_word = 1;
	while (s1[len] != '\0')
		len++;
	printf("\ntotal len: %d\n", len);
	while (len >= 0)
	{	
		while (len >= 0 && (s1[len] == ' ' || s1[len] == '\t' || s1[len] == '\0'))
			--len;
		x = len;
	 	while (x >= 0 && (s1[x] != ' ' && s1[x] != '\t'))
			--x;
		if (first_word == 0)
			ft_putchar(' ');
		printf("x: %d | len: %d\n", x, len);
	 	// while (x != len)
	 	// 	ft_putchar(s1[x++]);
		write(1, s1 + x + 1, len - x);
		first_word = 0;
	 	len = x;
		//ft_putchar('\n');
		//printf("len: %d\nx: %d\n", len, x);
		//printf("x char: %c\n", s1[x - 1]);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_rev_wstr(av[1]);
	ft_putchar('\n');
	return(0);
}

// strlen = len
// x = len
// con x, tiro para atras hasta ' ' y guardo posicion = x
// y mientras que x no sea len imprimo
// x pasa a ser len y vuelta a empezar
