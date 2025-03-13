/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:14:54 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/13 13:55:42 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' '|| str[i] == '\t')
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

int	is_divise(int n)
{
	int	i;
	
	i = 2;	
	if ( n == 1)
		return (1);
	if (n >= 2)
	{
		while (i < n)
		{
			if (n % i == 0)
				return (i);
			i++;	
		}
		return (n);
	}
}

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

	
void	fprime(int nb)
{
	int	i;
	int	first;

	first = 1;
	i = 2;
	if (nb == 1)
		write (1, "1\n", 2);
	while (nb >= 2)
	{
		if (is_divise(nb) != 0)
		{
			if (!first)
				write (1, "*", 1);
			putnbr(is_divise(nb));
			first = 0;
		}
		nb = nb / is_divise(nb);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(ft_atoi(argv[1]));
	write (1, "\n", 1);
	return (0);
}
