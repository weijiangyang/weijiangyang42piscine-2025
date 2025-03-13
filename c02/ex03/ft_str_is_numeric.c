/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 11:50:04 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/24 08:54:42 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] <= '9' && str[i] >= '0'))
			return (0);
		i++;
	}
	return (1);
}	

/*#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	result;

		result = ft_str_is_numeric(argv[1]);
	        printf ("the result is %d", result);
	}
	return (0);
}*/	
