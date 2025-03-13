/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:23:24 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/24 09:50:59 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int main(int argc, char **argv)
{
	char *result;

	if (argc == 2)
	{
		result = ft_strlowcase(argv[1]);
		printf ("the result is %s", result);
	}
	return (0);
}*/	
