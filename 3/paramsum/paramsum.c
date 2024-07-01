/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 08:30:12 by pquintan          #+#    #+#             */
/*   Updated: 2022/07/01 08:37:44 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int c)
{
	char digit;

	if (c >=10)
		ft_putnbr(c / 10);
	digit = (c % 10) + '0';
	write(1, &digit, 1);
}

int	main (int ac, char **av)
{
	(void)av; // para silinciar el error ya que no lo uso
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return(0);
}