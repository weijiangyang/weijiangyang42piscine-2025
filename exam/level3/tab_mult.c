/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:33:00 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/13 12:05:52 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putnbr(int nb)
{
	char c;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		putnbr(nb / 10);
	c = nb % 10 + '0';
	write (1, &c, 1);
}
		
int ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	res = 0;
	sign = 1;
	 i = 0;
		
	while (str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * sign);
}
	



void tab_mult(int nb)
{
	int	i;
	int	result;
	char	k;

	i = 1;
	while (i < 10)
	{
		putnbr(i);
		write (1, " * ", 3);
		putnbr(nb);
		write (1, " = ", 3);
		putnbr(i * nb);
		write (1, "\n", 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		tab_mult(ft_atoi(argv[1]));
	}
	return (0);
}		
