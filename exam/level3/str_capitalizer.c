/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:11:12 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/13 11:30:41 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void str_capitalizer(char *str)
{
	int	i;
	char	c;

	i = 0;
	while (str[i])
	{
		if ((i == 0 || str[i - 1] == ' ') && (str[i] >= 'a' && str[i] <= 'z'))
			c = str[i] - 32;
		else if ((str[i] >= 'A' && str[i]<= 'Z') && (i != 0 && str[i - 1] != ' ' ))
			c = str[i] + 32;
		else
			c = str[i];
		write (1, &c, 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int	i;

	i = 1;
	while ( i < argc)
	{
		str_capitalizer(argv[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
} 
