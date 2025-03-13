/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 16:33:47 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/04 16:26:47 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	no_attack(int tab[10], int col, int row)
{
	int	pre_col;
	int	pre_row;

	pre_col = 0;
	while (pre_col < col)
	{
		pre_row = tab[pre_col];
		if (row == pre_row || pre_row - pre_col == row - col
			|| pre_row - row == col - pre_col)
			return (0);
		pre_col++;
	}
	return (1);
}

void	solution(int tab[10], int col, int *nb_sol)
{
	int		i;
	int		row;
	char	digit;

	row = 0;
	i = 0;
	if (col == 10)
	{
		while (i < 10)
		{
			digit = tab[i] + '0';
			write (1, &digit, 1);
			i++;
		}	
		write (1, "\n", 1);
		(*nb_sol)++;
		return ;
	}
	while (row < 10)
	{
		tab[col] = row;
		if (no_attack(tab, col, row))
			solution(tab, col + 1, nb_sol);
		row++;
	}
}	

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	nb_sol;

	nb_sol = 0;
	solution(tab, 0, &nb_sol);
	return (nb_sol);
}

/*#include <stdio.h>

int main(void)
{
	int nb_sol;	
	
	nb_sol = ft_ten_queens_puzzle( );
	printf ("the number of solution is %d\n", nb_sol);
	return (0);
}*/
