/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 08:20:34 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/21 09:55:41 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int main(void)
{
	int  a;
	int  b;

	a = 20;
	b = 30;
	printf ("before the fonction, a is %d and b is %d", a, b);	
	ft_swap(&a, &b);
	printf ("ater the fonction, a is %d and b is %d", a, b);
	return (0);
}*/	
