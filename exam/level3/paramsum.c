/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 09:12:32 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/13 09:21:05 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nbr)
{
	char	c;

	if ( nbr == -2147483647)
		write (1, "-2147483647", 11);
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write (1, &c, 1);
}	

int	main(int argc, char **argv)
{
	ft_putnbr(argc - 1);
	write (1, "\n", 1);
	return (0);
}	
