/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:12:31 by pquintan          #+#    #+#             */
/*   Updated: 2022/07/01 11:40:04 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_epur(char *str)
{
	int x = 0;
	int check = 0;
	while (str[x] == '\t' || str[x] == '\v' || str[x] == '\r' || str[x] == '\n' || str[x] == '\f' || str[x] == ' ' )
		x++;
	while (str[x])
	{
		if (check > 0)
			ft_putchar(' ');
		check++;
		while (str[x] && (str[x] != '\t' && str[x] != '\v' && str[x] != '\r' && str[x] != '\n' && str[x] != '\f' && str[x] != ' ' )) // tener en cuenta que si lo niego tengo que poner &&
			ft_putchar(str[x++]);
		while (str[x] && (str[x] == '\t' || str[x] == '\v' || str[x] == '\r' || str[x] == '\n' || str[x] == '\f' || str[x] == ' ' ))
			x++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_epur(av[1]);
	ft_putchar('\n');
	return(0);
}