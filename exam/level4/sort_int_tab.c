/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:29:46 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/13 17:32:27 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int tab[] = {2, 4, 3, 5 ,7, 6};
	sort_int_tab(tab, 6);
	int	i;
	while (i < 6)
	{
		printf ("%d\n", tab[i]);
		i++;
	}
	return (0);
}
