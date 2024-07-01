/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:38:32 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/02 12:47:58 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if  (ac == 4)
	{
		if (*av[2] == '+')
			printf("%d", atoi(av[1]) + atoi(av[3]));
		else if (*av[2] == '-')
			printf("%d", atoi(av[1]) - atoi(av[3]));
		else if (*av[2] == '*')
			printf("%d", atoi(av[1]) * atoi(av[3]));
		else if (*av[2] == '/')
			printf("%d", atoi(av[1]) / atoi(av[3]));
		else if (*av[2] == '%')
			printf("%d", atoi(av[1]) % atoi(av[3]));
	}
	printf("\n");
	return (0);
}
