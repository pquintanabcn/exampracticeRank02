/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:50:20 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/29 17:15:22 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	if (!len || !tab)
		return(0);
	unsigned int aux = 0;
	int keep = 0;
	while (aux < len)
	{
		if (tab[aux] > keep)
			keep = tab[aux];
		aux++;
	}
	return(keep);
}

int main()
{
	int tab[6] = {100, 215, 4663186, 2144, -45, 0};
	unsigned int len = 6;
	int result = max(tab, len);
	printf("%d\n", result);
	return(0);
}