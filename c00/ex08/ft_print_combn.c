/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:21:35 by weiyang           #+#    #+#             */
/*   Updated: 2025/02/20 20:24:19 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_combination(int arr[], int size);
void	generate(int arr[], int size, int start_digit, int depth);

void	ft_print_combn(int n)
{
	int	arr[9];

	generate(arr, n, 0, 0);
}

void	print_combination(int arr[], int size)
{
	int		i;
	char	digit;

	i = 0;
	while (i < size)
	{
		digit = arr[i] + '0';
		write(1, &digit, 1);
		i++;
	}
}

void	generate(int arr[], int size, int start_digit, int depth)
{
	int	digit;

	if (depth == size)
	{
		print_combination(arr, size);
		if (arr[0] != 10 - size)
			write(1, ", ", 2);
		return ;
	}
	digit = start_digit;
	while (digit <= 9)
	{
		arr[depth] = digit;
		generate(arr, size, digit + 1, depth + 1);
		digit ++;
	}
}
