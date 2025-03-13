/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 21:06:03 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/24 15:12:56 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_en_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write (1, "\\", 1);
	write (1, &hex[c / 16], 1);
	write (1, &hex[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
			put_en_hex(str[i]);
		else
			write (1, &str[i], 1);
		i++;
	}
}

/*int main(void)
{
	char *str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}*/	
