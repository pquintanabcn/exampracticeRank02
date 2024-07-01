/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:56:51 by pquintan          #+#    #+#             */
/*   Updated: 2022/07/21 15:30:16 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev(char *str)
{
	int len = 0;
	int x = 0;
	int first_word = 1;
	while (str[len])
		len++;
	printf("\ntotal len: %d\n", len);
	while (len >= 0)
	{
		while(len >= 0 && (str[len] == ' ' || str[len] == '\t' || str[len] == '\0'))
			len--;
		x = len;
		while (x >= 0 && (str[x] != ' ' && str[x] != '\t'))
			x--;
		if (first_word == 0)
			ft_putchar(' ');
		printf("x: %d | len: %d\n", x, len);
	//	write(1, str + x + 1, len - x);
		first_word = 0;
		len = x;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_rev(av[1]);
	ft_putchar('\n');
	return(0);
}