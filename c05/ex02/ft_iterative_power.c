/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 19:19:59 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/04 08:51:42 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i++ <= power)
		result *= nb;
	return (result);
}

/*#include <stdio.h>

int	putnbr(char *str)
{
	int	res;
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	res = 0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		res *= 10;
		res += *str - 48;
		str++;
	}
	return (res * sign);
}
		

int	main(int argc, char **argv)
{
	int	result;
	int	res1;
	int	res2;
	int	i;
	int	nbr;

	nbr = putnbr("42");
	result = 1;
	i = 0;
	if (argc == 3)
	{
		res1 = putnbr(argv[1]);
		res2 = putnbr(argv[2]);
		result = ft_iterative_power(res1, res2);
		//printf ("the two arguments  are :%d\n %d\n", res1, res2);
		printf (" the result is :%d\n", result);
		printf ("the first argument is %d\n", res1);
		printf ("the second argument is %d\n", res2);
		//printf ("the number is %d", nbr);
	}
	return (0);	
}*/
