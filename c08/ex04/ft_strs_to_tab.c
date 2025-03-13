/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:07:32 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/11 09:25:22 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	len_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*copy_str(char *str)
{
	char	*copy;
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	copy = (char *) malloc ((len_str(str) + 1) * sizeof (char));
	if (!copy)
		return (NULL);
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int			i;

	i = 0;
	res = (t_stock_str *) malloc ((ac + 1) * sizeof (struct s_stock_str));
	if (!res)
		return (NULL);
	while (i < ac)
	{
		res[i].size = len_str(av[i]);
		res[i].str = av[i];
		res[i].copy = copy_str(av[i]);
		if (res[i].copy == NULL)
		{
			while (i >= 0)
				free (res[i--].copy);
			free (res);
			return (NULL);
		}
		i++;
	}
	res[i].size = 0;
	res[i].str = 0;
	res[i].copy = 0;
	return (res);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	struct s_stock_str *result;
	argv++;
	result = ft_strs_to_tab(argc - 1, argv);
	ft_show_tab(result);	
	return (0);
}*/
