/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:08:50 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/22 10:57:15 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count_size;
	int	index;
	int	tmp;

	count_size = size / 2;
	index = 0;
	while (index < count_size)
	{
		tmp = tab[index];
		tab[index] = tab[size - index -1];
		tab[size - index -1] = tmp;
		index++;
	}
}
/*#include <stdio.h>
int	main(void)
{
	int	index;
	int	count;
	int	numbers[5];

	index = 0;
	numbers[0] = -12;
	numbers[1] = 25;
	numbers[2] = 35;
	numbers[3] = 45;
	numbers[4] = 58;
	count = sizeof(numbers) / sizeof(int);
	ft_rev_int_tab(numbers, count);
	while (index < count)
	{
		printf("%d ", numbers[index]);
		index++;
	}
	return (0);
}*/
