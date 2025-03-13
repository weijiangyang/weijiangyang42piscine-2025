/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:57:51 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/13 14:25:00 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int len_nb(int nbr)
{
	int compte;

	compte = 0;
	while (nbr / 10 > 0)
	{
		compte++;
		nbr /= 10;
	}
	return (compte + 1);
}

char *ft_ita(int nbr)
{
	int	len;
	char	*str;

	len = len_nb(nbr);
	str = (char *) malloc ((len + 1) * sizeof (char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (nbr > 0)
	{
		str[len - 1] = (nbr % 10) + '0';
		nbr /=10;
		len--;
	}
	return (str);
}

int main(void)
{
	char *res;
	
	res = ft_ita(1258970);
	printf ("%s\n", res);
	return (0);
}


