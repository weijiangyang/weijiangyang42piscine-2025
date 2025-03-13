/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:25:13 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/12 12:48:12 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void alpha_mirror (char *str)
{
	int	i;
	char	c;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			c = 'z' - (str[i] - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			c = 'Z' - (str[i] - 'A');
		else
			c = str[i];
		write (1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror (argv[1]);
	write (1, "\n", 1);
	return (0);
}				

