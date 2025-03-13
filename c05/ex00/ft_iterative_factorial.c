/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:35:41 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/04 09:27:28 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
int 	main(void)
{
	int	nb;
	int	result;

	nb = 6;
	result = ft_iterative_factorial(nb);
	printf ("the result is %d\n", ft_iterative_factorial(nb));
	return (0);
}*/
