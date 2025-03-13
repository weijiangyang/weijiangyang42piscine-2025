/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:59:04 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/23 16:41:09 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int n)
{
	char	first_n;
	char	second_n;

	first_n = n / 10 + '0';
	second_n = n % 10 + '0';
	write (1, &first_n, 1);
	write (1, &second_n, 1);
}

void	ft_print_numbers(int a, int b)
{
	ft_print_number(a);
	write (1, " ", 1);
	ft_print_number(b);
	if (!(a == 98 && b == 99))
		write (1, &", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{	
		while (b <= 99)
		{
			ft_print_numbers(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}	
}	
