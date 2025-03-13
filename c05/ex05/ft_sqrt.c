/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:05:07 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/04 08:52:56 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	if (nb == 0)
		return (0);
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int     putnbr(char *str)
{
        int     res;
        int     i;
        int     sign;

        sign = 1;
        i = 0;
        res = 0; 
        if (*str == '-')
        {
                sign = -1;
                str++;
        }
        while (*str)
        {
                if (*str == '-')
                {
                        sign = -1;
                        str++;
                }
                res *= 10;
                res += *str - 48;
                str++;
        }
        return (res * sign);
}

int     main(int argc, char **argv)
{
        int     result;
        int     res;

        result = 1;
        if (argc == 2)
        {
                res = putnbr(argv[1]);
                result = ft_sqrt(res);
                printf (" the result is :%d\n", result);
        }
        return (0);
}
*/
