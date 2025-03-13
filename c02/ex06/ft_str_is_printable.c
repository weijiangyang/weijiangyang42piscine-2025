/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:01:05 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/24 09:10:42 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main(int argc, char **argv)
{
        int result;
	char	str[4];

	str[0] = 'y';
	str[1] = 'r';
	str[2] = 's';
	str[3] = '\n';
        result = ft_str_is_printable(str);
        printf ("the result is %d", result);
        return (0);
}*/
