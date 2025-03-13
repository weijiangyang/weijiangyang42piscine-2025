/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 08:29:35 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/13 08:49:02 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	i;
	int	len;
	int	*res;

	i = 0;
	if (start >= end)
		len = start - end + 1;
	else
		len = end - start + 1;
	res = (int *) malloc (len * sizeof (int));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = end;
		if (start >= end)
			end++;
		else
			end--;
		i++;
	}
	return (res);
}

int	main(void)
{
	int	*res;
	int	i;

	i = 0;

	res = ft_rrange(0,-3);
	while (i < 4)
	{
		printf ("%d\n", res[i]);
		i++;
	}
	return (0);
}			
