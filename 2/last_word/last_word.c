/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:32:56 by pquintan          #+#    #+#             */
/*   Updated: 2022/04/27 13:46:40 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

int main	(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	int counter = 0;
	while (av[1][counter])
		counter++;
	while (av[1][counter] == ' ' && av[1][counter] == '\t')
		counter--;
	while (av[1][counter] != ' ' && av[1][counter] != '\t')
		counter--;
	counter = counter + 1;
	while (av[1][counter] != '\0')
		ft_putchar(av[1][counter++]);
	ft_putchar('\n');
	return (0);
} //revisar ultimo caso lorem ipsum