/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:58:00 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/30 16:08:58 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char reverse = 0;
	int index = 8;
	while (index > 0)
	{
		reverse = reverse * 2 + (octet % 2);
		octet /= 2;
		index--;
	}
	return(reverse);
}

int main()
{
	unsigned char c;

	c = '&';
	write(1, "first: ", 7);
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, "reverse: ", 9);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}