/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:24:20 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/08 17:42:43 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		len;
	int		i;

	i = 0;
	while (src[i])
		i++;
	len = i;
	i = 0;
	new_str = (char *) malloc ((len + 1) * sizeof (char));
	if (!new_str)
		return (0);
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}	
/*#include <stdio.h>

int	main(void)
{
	char *new_str;

	char *str = "hello";
	new_str = ft_strdup (str);
	printf ("the new string is %s\n", new_str);
	free (new_str);
	return (0);
}*/
