/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:31:22 by pquintan          #+#    #+#             */
/*   Updated: 2023/07/17 15:35:38 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	aux;
	aux = 0;
	while(s2[aux])
	{
		s1[aux] = s2[aux];
		aux++;
	}
	s1[aux] = '\0';
	return(s1);
}


int		main(void)
{
	char s1[] = "stringone";

	ft_strcpy(s1, "stringtwo");
	printf("%s",s1);
	return (0);
}

