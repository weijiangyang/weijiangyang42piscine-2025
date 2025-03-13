/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 09:47:27 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/13 10:01:56 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void	pgcd(char *s1, char *s2)
{
	int	nb1;
	int	nb2;
	int	div;
	int	pgcd;

	div = 1;
	nb1 = atoi(s1);
	nb2 = atoi(s2);
	if (nb1 <= 0 || nb2 <= 0)
		return ;
	while (div <= nb1 || div <= nb2)
	{
		if (nb1 % div == 0 && nb2 % div == 0)
			pgcd = div;
		div++;
	}
	printf ("%d\n", pgcd);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		pgcd (argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}
		
