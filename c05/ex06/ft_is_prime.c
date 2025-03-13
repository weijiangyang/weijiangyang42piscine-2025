/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:25:52 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/03 20:03:37 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
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
        int     i;
        int     nbr;

        nbr = putnbr("42");
        result = 1;
        i = 0;
        if (argc == 2)
        {
                res = putnbr(argv[1]);
                result = ft_is_prime(res);
                //printf ("the two arguments  are :%d\n %d\n", res1, res2);
                printf (" the result is :%d\n", result);
                //printf ("the number is %d", nbr);
        }
        return (0);
}
*/
