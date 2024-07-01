/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:02:18 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/02 11:33:13 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int	*tab, unsigned int len)
{
	int keep = 0;
	unsigned int aux = 0;

	if (!len)
		return(0);
	keep = tab[0];
	while (aux < len)
	{
		if (tab[aux] > keep)
			keep = tab[aux];
		aux++;
	}
	return (keep);
}

int	 main(void)
{
	int	n1[5] =  {10, 4, 5, 66, 6};
	int n2[5] = {-20, -55, -5, -10, -4};
	int	n3[5];
	printf("%d\n", max(n1, 5));
	printf("%d\n", max(n2, 5));
	printf("%d\n", max(n3, 0));
}