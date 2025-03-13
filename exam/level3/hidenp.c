/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 08:50:24 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/13 09:10:17 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	in_str(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int	hidenp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (in_str(s1[i], s2) != -1)
			s2 += in_str(s1[i], s2);
		else
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	result;
	char	c;

	if (argc == 3)
	{
		result = hidenp(argv[1], argv[2]);
		c = result + '0';
		write (1, &c, 1);
	}
	write (1, "\n", 1);
	return (0);
}	
