/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:45:25 by pquintan          #+#    #+#             */
/*   Updated: 2022/04/05 19:41:20 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_checker(char *str)
{
	int	aux;
	char temp;
	temp = 0;
	aux = 0;
	while(str[aux] != '\0')
	{
		if (str[aux] >= 'A' && str[aux] <= 'Z')
		{
			temp = str[aux] - 'A';
			while (temp >= 0)
			{
				ft_putchar(str[aux]);
				temp--;
			}
		}
		else if (str[aux] >= 'A' && str[aux]<= 'z')
		{
			temp = str[aux] - 'a';
			while (temp >= 0)
			{
				ft_putchar(str[aux]);
				temp--;
			}
		}
		else
			ft_putchar(str[aux]);
		aux++;
	}
	ft_putchar('\n');
	return(*str);
}
int	main(int ac, char **av)
{
	if (ac == 2)
		ft_checker(av[1]);
	else
		ft_putchar('\n');
	return (0);
}
