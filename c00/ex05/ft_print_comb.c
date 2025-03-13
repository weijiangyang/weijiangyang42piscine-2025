/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 13:29:16 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/23 16:39:25 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(int i, int j, int k );

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_putchars(i, j, k);
				if (!(i == 7 && j == 8 && k == 9))
					write (1, &", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}	

void	ft_putchars(int i, int j, int k)
{
	char	is;
	char	js;
	char	ks;

	is = i + '0';
	js = j + '0';
	ks = k + '0';
	write (1, &is, 1);
	write (1, &js, 1);
	write (1, &ks, 1);
}	
/*int main(void)
{
	ft_print_comb();
	return(0);
}*/
