/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 09:58:10 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/23 15:40:42 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	char dest[10] = "ok";
	char *src;

	src = "salut";
	printf ("avant la funcion:%s\n", dest);
        ft_strcpy(dest, src);	
	printf ("after la funcion:%s", dest);
	return (0);
}*/	
