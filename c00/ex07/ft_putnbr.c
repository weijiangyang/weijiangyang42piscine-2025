/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 09:24:13 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/20 21:30:40 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char n)
{
	write (1, &n, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb + '0');
	}	
	if (nb == -2147483648)
	{
		ft_putnbr(214748364);
		ft_putchar(8 + '0');
	}	
	if (nb >= 10)
	{	
		ft_putnbr (nb / 10);
		ft_putchar (nb % 10 + '0');
	}
}

/*int main(void)
{
	ft_putnbr(-42);

	return (0);
}*/	
