/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 08:37:08 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/21 09:56:24 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	div_value;
	int	mod_value;

	div_value = a / b;
	mod_value = a % b;
	*div = div_value;
	*mod = mod_value;
}

/*int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(2, 3, &div, &mod);
	printf ("the pointer of 2/3 is %p, its value is %d\n", &div, div);
	printf ("the pointer of module of 2/3 is %p, its value is %d\n", &mod, mod);
	return (0);
}*/
