/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_22.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:12:07 by pquintan          #+#    #+#             */
/*   Updated: 2023/07/19 10:51:46 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	if (n == 0) // 0 APARTE
		return (0);
	while (n % 2 == 0) // WHILE!!
		n = n / 2;
	if (n == 1)
		return(1);
	else
		return(0);
}
// if power of 2 returns 1, else 0.

int main()
{
	unsigned int num = 1024;
	int result;
	result = is_power_of_2(num);
	printf("%d\n", result);
	return(0);
}
