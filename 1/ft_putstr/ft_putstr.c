/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:03:56 by pquintan          #+#    #+#             */
/*   Updated: 2023/07/17 16:56:17 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

void	ft_putstr (char *str)
{
	int aux = 0;
	while (str[aux])
		ft_putchar(str[aux++]);
}

// int	main (void)
// {
// 	ft_putstr("Hola Maripili");
// 	return(0);
// }
