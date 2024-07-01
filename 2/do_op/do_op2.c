/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:25:14 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/27 16:36:39 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_operation(char *n1, char *sign, char *n2)
{
	if (*sign == '+')
		printf("%d", atoi(n1) + atoi(n2));
	else if (*sign == '-')
		printf("%d", atoi(n1) - atoi(n2));
	else if (*sign == '*')
		printf("%d", atoi(n1) * atoi(n2));
	else if (*sign == '/')
		printf("%d", atoi(n1) / atoi(n2));
	else if (*sign == '%')
		printf("%d", atoi(n1) % atoi(n2));
}

int main (int ac, char **av)
{
	if (ac == 4)
		ft_operation(av[1], av[2], av[3]);
	printf("\n");// usar printf y no write porque las señales tienen tiempos distintos
	return(0);
}