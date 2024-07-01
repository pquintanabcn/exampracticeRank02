/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:30:40 by pquintan          #+#    #+#             */
/*   Updated: 2022/04/29 16:37:34 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	// int aux = 0;
	// char *copy;
	// while (src[aux])

	// return(src);
}

int main (void)
{
	printf("%s\n", ft_strdup("thisismystring"));
	printf("%s\n", strdup("thisisnotmystring"));
	return (0);
}