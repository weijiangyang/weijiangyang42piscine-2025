/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:37:52 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/26 12:11:55 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_initial_dest;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	len_initial_dest = i;
	if (size == 0)
		return (ft_len(src));
	if (size <= len_initial_dest)
		return (ft_len(src) + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_len(src) + len_initial_dest);
}

/*#include <stdio.h>

int main(void)
{
	char dest[] = "hello";
	char *src = "world";
	int	result;

	result = ft_strlcat(dest, src, 6);
	printf ("the result is %d", result);
	printf ("the chaine dest is %s", dest);
	return (0);
}*/
