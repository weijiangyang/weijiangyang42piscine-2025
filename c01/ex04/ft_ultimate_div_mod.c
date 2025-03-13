/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 08:45:23 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/21 09:58:16 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_value;
	int	mod_value;

	div_value = *a / *b;
	mod_value = *a % *b;
	*a = div_value;
	*b = mod_value;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 3;
	printf ("Before: x = %d, y = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf ("After: x = %d, y = %d\n", x, y);
	return (0);
}*/
