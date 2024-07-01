/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:13:45 by pquintan          #+#    #+#             */
/*   Updated: 2022/04/27 12:22:25 by pquintan         ###   ########.fr       */
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

// int		main(void)
// {
// 	int a;
// 	int b;

// 	a = 1;
// 	b = 2;

// 	printf("before: a = %d\n", a);
// 	printf("before: b = %d\n", b);
// 	ft_swap(&a, &b);
// 	printf("after: a = %d\n", a);
// 	printf("after: b = %d\n", b);
// 	return (0);
// }