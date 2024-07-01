/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:48:13 by pquintan          #+#    #+#             */
/*   Updated: 2023/07/17 15:19:32 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int x = 0;
	while (s2[x])
	{
		s1[x] = s2[x];
		x++;	
	}
	s1[x] = '\0';
	return (s1);
}

// no hace falta que compruebe las longitudes ES MAS SIMPLE DE LO QUE PARECE

// int main()
// {
// 	char s1[] = "que tal";
// 	char s2[] = "bien";
// 	printf("%s\n", strcpy(s1, s2));
// 	printf("%s\n", ft_strcpy(s1, s2));
// }
