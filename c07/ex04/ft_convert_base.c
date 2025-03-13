/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:42:02 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/10 09:05:22 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_checkbase(char *base)
{
	int	len_base;
	int	i;
	int	j;

	i = 0;
	len_base = ft_strlen(base);
	if (len_base < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] >= 127)
			return (0);
		i++;
	}
	return (1);
}

int	is_in_base(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (c == base[index])
			return (index);
		index++;
	}
	return (-1);
}

int	ft_convert_base_1(char *str, char *base)
{
	int	index;
	int	sign;
	int	res;

	sign = 1;
	index = 0;
	res = 0;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (is_in_base(str[index], base) >= 0)
	{
		res = res * ft_strlen(base) + is_in_base(str[index], base);
		index++;
	}
	return (res * sign);
}

/*int	main(void)
{
	char *str = "2d";
	char *base = "0123456789abcdef";
	int	result;

	result = ft_convert_base(str, base);
	printf ("%d\n", result);
	return (0);
}*/	
