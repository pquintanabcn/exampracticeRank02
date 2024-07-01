/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 09:33:17 by pquintan          #+#    #+#             */
/*   Updated: 2022/10/05 13:29:33 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rostring(char *str)
{
	int x_last = 0;
	int x_first = 0;
	int x = 0;
	int flag = 0;
	while (str[x] == '\t' || str[x] == ' ')
		x++;
	x_first = x;
	while (str[x] && (str[x] != '\t' && str[x] != ' '))
		x++;
	x_last = x;
	while (str[x] == '\t' || str[x] == ' ')
		x++;
	while(str[x])
	{
		flag =  1;
		if (str[x] == '\t' || str[x] == ' ')
		{
			while(str[x] == '\t' || str[x] == ' ')
				x++;
			ft_putchar(' ');
			x--;
		}
		else
			ft_putchar(str[x]);
		x++;
	}
	if (flag == 1)
		ft_putchar(' ');
	while (x_first < x_last)
		ft_putchar(str[x_first++]);
}

int main(int ac, char **av)
{
	if (ac > 1) // un poco raro esto en el subject
		ft_rostring(av[1]);
	ft_putchar('\n');
	return(0);
}