/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 09:33:03 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/26 18:13:53 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_find(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (str[i] && to_find[i])
	{
		if (str[i] != to_find[i])
			return (0);
		else
			i++;
	}
	if (to_find[i] == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (is_find(str, to_find))
			return (str);
		else
			str++;
	}
	return (0);
}

/*#include <stdio.h>

int main(void)
{
	char *result;

	char *str = "\0";
	char *to_find = "\0";
	result = ft_strstr(str, to_find);
	printf ("the result is %s\n", result);
}*/
