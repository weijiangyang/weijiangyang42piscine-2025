/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:46:38 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/09 09:53:53 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	i;
	int	copy;

	i = 0;
	len = max - min;
	if (len <= 0)
		return (0);
	copy = min;
	arr = (int *) malloc (len * sizeof (int));
	if (!arr)
		return (0);
	while (i < len)
	{
		arr[i] = copy;
		copy++;
		i++;
	}
	return (arr);
}
/*#include  <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	i;

	i = 0;
	min = 2;
	max = 6;
	arr = ft_range(min, max);
	while (arr[i])
	{
		printf ("%d\n", arr[i]);
		i++;
	}
	free (arr);
	return (0);
}*/
