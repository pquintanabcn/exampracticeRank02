/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:45:24 by pquintan          #+#    #+#             */
/*   Updated: 2022/04/05 16:55:46 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	counter;
	counter = 0;
	while(str[counter] != '\0')
		counter++;
	printf("%d", counter);
	return(counter);
}

int	main()
{
	char str[] = "hola";
	ft_strlen(str);
	//printf("%s",str);
	return(0);
}
