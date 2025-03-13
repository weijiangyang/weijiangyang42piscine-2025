/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:49:32 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/12 13:31:58 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_prime(int n)
{
	int	i;

	i = 2;
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n > 2)
	{
		while (i < n)
		{
			if (n % i == 0)
				return (0);
			i++;
		}
		return (1);
	} 	
}

void ft_putnbr(int n)
{
	char	c;
	if ( n == -2147483647)
	{
		write (1, "-2147483647", 11);
		return ;
	}
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
}

int ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	sign = 1;
	i = 0;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (sign * res);
}

int	add_prime(int n)
{
	int	i;
	int	sum;

	sum = 0;
	i = 1;
	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	return(sum);
}

int main(int argc, char **argv)
{
	int	result;

	result = add_prime(ft_atoi(argv[1]));
	ft_putnbr(result);
	write (1, "\n", 1);
	return (0);
}



