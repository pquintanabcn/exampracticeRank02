/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:49:01 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/28 18:22:44 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int x = 0;
	while(str[x])
		x++;
	return(x);
}

char    *ft_strrev(char *str) // HAY QUE CREAR UNA VARIABLE TEMPORAL 
//PARA PODER GUARDAR EL CHAR MIENTRAS SE HACE EL CAMBIO COMO UN SWAP
{
	int len = ft_strlen(str);
	int	aux = 0;
	char temp;

	while(len - 1 > aux)
	{
		printf("l: %c %d ", str[aux], aux);
		printf("r: %c %d\n", str[len], len);
		temp = str[aux];
		str[aux] = str[len - 1];
		str[len - 1] = temp;
		aux++;
		len--;
	}
	return(str);
}

int	main()
{
	char str[5] = "HOLA";
	printf("LA STRING ANTES: %s\n", str);
	printf("LA STRING DESPUES: %s\n", ft_strrev(str));
	return (0);
}