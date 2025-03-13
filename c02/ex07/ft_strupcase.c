/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:14:11 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/24 09:13:46 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>

int main(int argc, char **argv)
{
	char *result;

	if (argc == 2)
		result = ft_strupcase(argv[1]);
	printf ("the result is %s", result);
	return (0);
}*/	
