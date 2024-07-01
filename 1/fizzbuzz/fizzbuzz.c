/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:19:41 by pquintan          #+#    #+#             */
/*   Updated: 2022/05/19 18:17:41 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int number)
{
	if (number > 9)
		ft_write_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

int	main (void)
{
	int num = 1;
	while (num <= 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			write(1, "fizzbuzz\n", 9);
		else if (num % 5 == 0)
			write(1, "buzz\n", 5);
		else if (num % 3 == 0)
			write(1, "fizz\n", 5);
		else
		{
			ft_write_number(num);
			write(1, "\n", 1);
		}
		num++;
	}
	return (0);
}