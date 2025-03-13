/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:50:31 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/03 19:19:55 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
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

int	main(int argc, char **argv)
{
	int	nb;
	int	result;

	nb = putnbr(argv[1]);
	if (argc == 2)
		result = ft_fibonacci(nb);
	printf ("the result is %d\n", result);
	return (0);
}
*/	
