/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:20:23 by pquintan          #+#    #+#             */
/*   Updated: 2023/07/19 14:59:23 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *src)
{
	int x = 0;
	while (src[x])
		x++;
	return(x);
}

char    *ft_strdup(char *src)
{
	int len = ft_strlen(src);
	char *copy = (char *)malloc(sizeof(char) * len + 1); // cuidado de hacerlo bien
	if (!copy)
		return(0);
	int aux = 0;
	while(src[aux])
	{
		copy[aux] = src[aux];
		aux++;
	}
	copy[aux] = '\0';
	return(copy);
}

int main()
{
	char src[] = "jihrmbdgdjf niogh 43 43 hj";
	printf("%s\n", ft_strdup(src));
	printf("%s\n", strdup(src));
}
