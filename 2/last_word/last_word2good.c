/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:12:34 by pquintan          #+#    #+#             */
/*   Updated: 2023/08/02 16:04:55 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

void	ft_last(char *str)
{
	int len = ft_strlen(str) - 1;
	while (str[len] == ' ' || str[len] == '\t') // muy importante el or ||
		len--;
	while (str[len] && str[len] != ' ' && str[len] != '\t')
		len--;
	len++; // porque si nos fijamos lo deja en una posicion menos -> printf("%d\n", len);
	while(str[len] && str[len] != ' ' && str[len] != '\t') // para que no imprima espacios finales
		ft_putchar(str[len++]);
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_last(av[1]);
	ft_putchar('\n');
	return(0);
}
