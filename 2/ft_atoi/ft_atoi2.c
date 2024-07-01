/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:37:42 by pquintan          #+#    #+#             */
/*   Updated: 2023/07/18 15:16:44 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// int	ft_atoi(const char *str)
// {
// 	int x = 0;
// 	int sign = 1;
// 	int result = 0;
// 	while (str[x] == '\t' || str[x] == '\v' || str[x] == '\r' || str[x] == '\f' || str[x] == '\n' || str[x] == ' ') // tvrfn' '
// 		x++;
// 	if (str[x] == '-' || str[x] == '+')
// 	{
// 		if (str[x] == '-')
// 			sign = -1;
// 		x++;
// 	}
// 	while (str[x] && (str[x] >= '0' && str[x] <= '9'))
// 		result = (result * 10) + str[x++] - '0';
// 	return(sign * result);
// }

// int main()
// {
// 	printf("original: %d\n", atoi("123456789"));
// 	printf("mio: %d\n", ft_atoi("123456789"));
// 	return(0);
// }


int ft_atoi(const char *str)
{
	int sign = 1;
	int x = 0;
	int resultado = 0;
	if (str[x] == '-' || str[x] == '+') //primero checkear positivo o negativo
	{
		if (str[x] == '-')
			sign = -1;
		x++;
	}
	while (str[x] && (str[x] >= '0' && str[x] <= '9'))
	{
		resultado = resultado * 10 + str[x] - '0'; // resultado * 10 para avanzar 	
			x++; //a el siguiente decimal y str[x] - '0' para cambiar a numero 
		// importante el - '0' fuera del [x]
	}
	return(sign * resultado);
}

int main()
{
	printf("original: %d\n", atoi("1230654"));
	printf("mio: %d\n", ft_atoi("1203654"));
}
