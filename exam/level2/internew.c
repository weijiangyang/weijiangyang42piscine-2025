/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   internew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 09:38:41 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/12 10:34:59 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_in_word(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

void inner (char *s1, char *s2)
{
	int	i;
	int	printed[255];

	i = 0;
	printed[0] = '\0';
	while (s1[i])
	{
		if (is_in_word(s1[i], s1) && is_in_word(s1[i], s2) && !printed[s1[i]])
		{
			write (1, &s1[i], 1);
			printed[s1[i]] = 1;
		}
		i++;	
	}
	i = 0;
	while (s2[i])
	{
		if (is_in_word(s2[i], s2) && is_in_word(s2[i], s1) && !printed[s1[i]])		{
			write (1, &s2[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		inner (argv[1], argv[2]);
		write (1, "\n", 1);
	}
	return (0);
}	
	
