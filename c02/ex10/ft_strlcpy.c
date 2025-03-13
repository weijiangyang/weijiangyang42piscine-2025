/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:49:35 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/24 14:57:06 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len_str(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (len_str(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_str(src));
}	

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "hello tout le monde, on va commencer a nager!";
	char dest[50];

	printf ("ft_strlcpy = %d\n", ft_strlcpy(dest, str, 10));
	printf ("strlen(src) = %ld\n", strlen(str));
	printf ("src = %s\n", str);
	printf ("dest = %s\n",dest);
	return (0);
}*/	
