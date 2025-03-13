/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 08:43:30 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/27 17:26:20 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_checkbase(char *base)
{
	int	len_base;
	int	i;
	int	j;

	i = 0;
	len_base = ft_strlen(base);
	if (len_base < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] >= 127)
			return (0);
		i++;
	}
	return (1);
}	

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			index;
	int			len_base;

	if (!ft_checkbase(base))
		return ;
	n = (long int)nbr;
	len_base = ft_strlen(base);
	index = 0;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n / len_base)
		ft_putnbr_base(n / len_base, base);
	ft_putchar(base[n % len_base]);
}
/*#include <unistd.h>

int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}*/
