/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 10:04:22 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/24 14:50:28 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}	
	return (dest);
}

/*#include <stdio.h>

int     main(int argc, char **argv)
{
        char dest[10] = "ok";
        char *src;
	int	n;

	(void)argc;
	(void)argv;
	n = 3;
        src = "salut";
        printf ("avant la funcion:%s\n", dest);
        ft_strncpy(dest, src, n);
        printf ("after la funcion:%s", dest);
        return (0);
}*/
