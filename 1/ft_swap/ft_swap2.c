/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:14:13 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/27 12:18:33 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
//acuerdate de los punteros

// int main()
// {
// 	int a = 2;
// 	int b = 25;
// 	printf("antes: %d y %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("despues: %d y %d\n", a, b);
// }