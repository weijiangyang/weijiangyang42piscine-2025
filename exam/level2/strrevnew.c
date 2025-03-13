/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrevnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:37:30 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/12 11:05:50 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*strrev(char *str)
{
	int	i;
	int	left;
	int	right;
	int	tmp;

	i = 0;
	left = 0;
	while (str[i])
		i++;
	right = i - 1;
	while (left < right)
	{
		tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
	return (str);
}

	
int	main(void)
{
	char str[] = "helloworld";
	char *result;

	result = strrev(str);
	printf ("the result is %s\n", result);
	return (0);
}
