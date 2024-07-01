/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:09:54 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/30 16:16:21 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

// | es el equivalente en bit a ||
// << or >> es al lado que se deplaza y cuantas veces 
// y asi cambiamos las dos mitades ya que son 8 numeros

int	main(void)
{
	unsigned char test = 192;
	printf("Should be 12: %d\n", swap_bits(test));
}