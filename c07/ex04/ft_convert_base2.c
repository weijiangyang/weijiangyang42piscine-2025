/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:30:02 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/10 09:04:57 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_checkbase(char *base);
int	is_in_base(char c, char *base);
int	ft_convert_base_1(char *str, char *base);
int	ft_strlen(char *base);

int	len_number(int nbr, char *base)
{
	int			count;
	long int	n;
	int			len_base;

	len_base = ft_strlen(base);
	n = (long int)nbr;
	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
	}
	while (n > 0)
	{
		n /= len_base;
		count++;
	}
	return (count);
}

void	ft_reverse_str(char *str)
{
	int		left;
	int		right;
	int		len;
	char	tmp;

	left = 0;
	len = ft_strlen(str);
	if (len == 0)
		return ;
	if (str[left] == '-')
		left++;
	right = len - 1;
	while (left < right)
	{
		tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}		

void	ft_putnbr_base1(char res[], int nbr, char *base)
{
	long int	n;
	int			i;

	i = 0;
	n = (long int)nbr;
	if (n < 0)
	{
		res[i] = '-';
		n = -n;
		i++;
	}
	while (n >= ft_strlen(base))
	{
		res[i] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
		i++;
	}
	res[i] = base[n % ft_strlen(base)];
	i++;
	res[i] = '\0';
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int			len_str;
	char		*str_nbr;

	len_str = len_number(nbr, base);
	if (nbr < 0)
		len_str++;
	str_nbr = (char *) malloc ((len_str + 1) * sizeof (char));
	if (!str_nbr)
		return (NULL);
	ft_putnbr_base1(str_nbr, nbr, base);
	ft_reverse_str(str_nbr);
	return (str_nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		nbr_decimal;

	if (!ft_checkbase(base_from) || !ft_checkbase(base_to))
		return (NULL);
	nbr_decimal = ft_convert_base_1(nbr, base_from);
	result = ft_putnbr_base(nbr_decimal, base_to);
	return (result);
}

/*int	main(void)
{
	char *nbr = "101101";
	char *base_from = "01";
	char *base_to = "012345678+9abcdef";
	char *result = ft_convert_base(nbr, base_from, base_to);
	if (result)
		printf ("%s\n", result);
	return 0;
}*/
