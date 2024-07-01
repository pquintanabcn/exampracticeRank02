/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintan <pquintan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:39:18 by pquintan          #+#    #+#             */
/*   Updated: 2023/11/30 17:25:05 by pquintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 2);
}

int		ft_atoi(char *str)
{
	int num = 0;
	int sign = 1;
	int x = 0;

	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sign = -1;
		x++;
	}
	while (str[x] && (str[x] >= '0' && str[x] <= '9'))
	{
		num = num * 10 + str[x] - '0';
		x++;
	}
	return(num * sign);
}

void	ft_putnbr(int num)
{
	char digit;
	if (num == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		num = (num % 1000000000 * -1);
	}
	if (num < 0)
	{
		ft_putchar('-');
		num = (num * -1);
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	digit = (num % 10) + '0';
	write(1, &digit, 1);
}

int is_prime(int num)
{
	int i = 3;
	
	if (num <= 1)
		return (0);
	if (num % 2 == 0 && num > 2)
		return (0);
	while (i < (num / 2))
	{
		if (num % i == 0)
			return 0;
		i += 2;
	}
	return (1);
}

int main(int ac, char **av)
{
	int sum = 0;
	int num = ft_atoi(av[1]);

	if (ac == 2)
	{
		while (num > 0)
			if (is_prime(num--))
				sum += (num + 1);
		ft_putnbr(sum);
	}
	if (ac != 2)
		ft_putnbr(0);
	ft_putchar('\n');
	return(0);
}

// int main(int argc, char *argv[])
// {
// 	int sum = 0;
// 	int nb = ft_atoi(argv[1]);
	
// 	if (argc == 2)
// 	{
// 		while (nb > 0)
// 			if (is_prime(nb--))
// 				sum += (nb + 1);
// 		ft_putnbr(sum);
// 	}
// 	if (argc != 2)
// 		ft_putnbr(0);
// 	write(1, "\n", 1);
// 	return (0);
// }
