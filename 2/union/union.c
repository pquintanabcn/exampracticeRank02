/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:39:26 by pquintan          #+#    #+#             */
/*   Updated: 2022/03/17 13:26:04 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_check(char *s, char c, int index)
{
	int aux;

	aux = 0;
	while (aux < index)
	{
		if (s[aux] == c)
			return (0);
		aux++;
	}
	return (1);
}

void ft_union(char *s1, char *s2)
{
	int aux;
	int len;
	
	aux = 0;
	while (s1[aux] != '\0')
	{
		if (ft_check(s1, s1[aux], aux) == 1)
			write(1, &s1[aux], 1);
		aux++;
	}
	len = aux;
	aux = 0;
	while (s2[aux] != '\0')
	{
		if (ft_check(s2, s2[aux], aux) == 1)
		{
			if (ft_check(s1, s2[aux], len) == 1)
				write(1, &s2[aux], 1);
		}
		aux++;
	}	
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return(0);
}
