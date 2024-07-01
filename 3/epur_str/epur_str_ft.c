/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str_ft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:02:44 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/29 19:24:12 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_epur(char *str)
{
	int i = 0;
	int check = 0;
	int	first = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t')
		{
			i++;
			check = 1;
		}
		if (check == 1 && first == 0)
		{
			check = 0;
			ft_putchar(' ');
		}
		ft_putchar(str[i]);
		i++;
	}
}

int	main (int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_epur(av[1]);
	ft_putchar('\n');
	return(0);
}