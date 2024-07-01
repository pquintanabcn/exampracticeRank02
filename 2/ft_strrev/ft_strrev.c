/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:17:21 by pquintan          #+#    #+#             */
/*   Updated: 2022/06/02 11:55:55 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int counter = 0;
	while (str[counter])
		counter++;
	return(counter);
}

char	*ft_strrev(char *str)
{
	if(!str)
		return(0);
	int aux = 0;
	int	len;
	char	save;

	len = ft_strlen(str);
	while (len - 1 > aux)
	{
		save = str[aux];
		str[aux] = str[len - 1];
		str[len - 1] = save;
		len--;
		aux++;
	}
	return(str);
}

int main (void)
{
	char str[5] = "HOLA";
	printf("LA STRING ANTES: %s\n", str);
	printf("LA STRING DESPUES: %s\n", ft_strrev(str));
	return (0);
}