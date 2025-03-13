/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 07:44:51 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/13 08:28:22 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	len;
	int 	*arr;
	int	i;

	i = 0;
	if (end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	
	arr = (int *) malloc (len * sizeof (int));
	if (!arr)
		return (NULL);
	if (len == 1)
		arr[0] = start;
	if (start <= end)
	{
		while (i < len)
		{
			arr[i] = start;
			start++;
			i++;
		}
	}
	else 
	{
		while (i < len)
		{
			arr[i] = start;
			start--;
			i++;
		}
	}
	return (arr);
}


#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	*res;

	i = 0;
	res = ft_range(0, -3);
	while (i < 4)
	{
		printf ("%d\n", res[i]);
		i++;
	}
	return (0);
}
				
	
			
