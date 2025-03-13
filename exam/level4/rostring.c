/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:57:37 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/13 17:29:21 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}

void rostring(char *str)
{
	int	i = 0;
	int	start = 0;
	int	end = 0;

	while (is_space(str[i]))
		i++;
	start = i;
	while (str[i] && !is_space(str[i]))
		i++;
	end = i;
	while (is_space(str[i]))
		i++;
	int first = 1;
	while (str[i])
	{
		if (!is_space(str[i]))
		{
			if (!first)
				write (1, " ", 1);
			first = 0
			while (str[i] && !is_space(str[i]))
			{
				write (1, &str[i], 1);
				i++;
			}
		}
		else
			i++;
	}
}			

	


