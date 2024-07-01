/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:19:41 by pquintan          #+#    #+#             */
/*   Updated: 2023/07/17 16:29:15 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int numb)
{
	char str[10] = "0123456789";
	if (numb > 9)
		ft_write_number(numb / 10);
	write (1, &str[numb % 10], 1);
}

int main ()
{
	int numb = 0;
	while (numb != 101)
	{ // ponemos el modulo porque si nos da 0 es que no nos sobra nada
	// de la division y entonces si que es multiplo
		if (numb % 3 == 0 && numb % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (numb % 3 == 0)
			write(1, "fizz", 4);
		else if (numb % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_write_number(numb);
		write(1, "\n", 1);
		numb++;
	}
	return(0);
}
