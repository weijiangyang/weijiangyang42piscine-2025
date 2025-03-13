/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:42:55 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/09 16:25:24 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	size;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = NULL;
	arr = (int *) malloc (size * sizeof (int));
	if (!arr)
		return (-1);
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (size);
}

/*#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	result;
	int	i;
	
	i = 0;
	range = NULL;
	min = 4;
	max = 8;
	result = ft_ultimate_range(&range, min, max);
	while (i < result)
	{
		printf ("%d\n", range[i]);
		i++;
	}	
	free (range);
	return (0);
}*/	
