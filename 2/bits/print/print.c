/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:52:42 by pquintan          #+#    #+#             */
/*   Updated: 2023/07/26 10:06:08 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int index = 128;
	while (index > 0)
	{
		if (octet >= index)
		{
			write(1, "1", 1);
			octet = octet % index;
			index = index / 2;
		}
		else
		{
			write(1, "0", 1);
			index = index / 2;
		}
	}
}

int main ()
{
	unsigned char octet;
	octet = 13;
	print_bits(octet);
	return(0);
}
