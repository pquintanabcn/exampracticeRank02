/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:18:45 by pquintan          #+#    #+#             */
/*   Updated: 2023/07/18 10:14:15 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*este programa no funciona correctamente le falta que imprima los caracteres que no son letras*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_letter_count(char c)
{
	int	repeat = 0;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

void	ft_repeat(char *str) // En este ej es mas facil si no usas atajos
{
	int x = 0;
	int repeat = 0;

	while(str[x])
	{
		if ((str[x] >= 'A' && str[x] <= 'Z' )|| (str[x] >= 'a' && str[x] <= 'z'))
		{	
			repeat = ft_letter_count(str[x]);
			while (repeat != 0)
			{
				ft_putchar(str[x]);
				repeat--;
			}
		}
		x++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_repeat(av[1]);
	ft_putchar('\n');
	return(0);
}
