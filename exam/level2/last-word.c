/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last-word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 07:43:06 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/12 08:04:27 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void last_word(char *str)
{
	int	i;
	int	len;
	int	end;
	
	len = 0;
	while (str[len])
		len++;
	while (len > 0 && (str[len - 1] == ' ' || str[len - 1] == '\t'))
			len--;
	end = len;
	while (len > 0 && (str[len - 1] != ' ' && str[len - 1] != '\t'))
		len--;
	while (len < end)
	{
		write (1, &str[len], 1);
		len++;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	char *str = "hello good morning !  ";
	last_word (str);
	return (0);
}

		
