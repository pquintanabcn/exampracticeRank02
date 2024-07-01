/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:19:31 by pquintan          #+#    #+#             */
/*   Updated: 2022/07/01 08:27:40 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

void	ft_str_cap(char *str)
{	
	int aux = 0;
	int checker = 0;
	while (str[aux])
	{
		if(str[aux] >= 'a' && str[aux] <= 'z')
		{
			if((str[aux - 1] == ' ' || str[aux - 1] == '\t' ) || (checker == 0))
			{
				str[aux] -= 32;
				ft_putchar(str[aux]);
			}
			else
				ft_putchar(str[aux]);
		}
		else if(str[aux] >= 'A' && str[aux] <= 'Z')
		{	
			if ((str[aux - 1] != ' ' && str[aux - 1] != '\t') && (checker != 0))
			{
				str[aux] += 32;
				ft_putchar(str[aux]);
			}
			else
				ft_putchar(str[aux]);
		}
		// else if (str[aux] == ' ' || str[aux] == '\t')
		// 	aux++;//?
		else
			ft_putchar(str[aux]);
		aux++;
		checker++;
	}
}

int main (int ac, char **av)
{
	if (ac > 1)
	{
		int x = 1;
		while(x != ac)
		{
			ft_str_cap(av[x]);
			ft_putchar('\n');
			x++;
		}
		ft_putchar('\n');
		return(0);
	}
}