/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_each.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:36:56 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/13 14:41:25 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	// copy un arr of struc
	t_list		*list_ptr;

	list_ptr = begin_list;
	//parcourir cet array
	while (list_ptr)
	{
		// mettre le data de chaque struc dans la fonction
		(*f)(list_ptr->data);
		// arreter quand next n'existe plus
		if (!(list_ptr->next))
			break ;
		// checker le next struct
		list_ptr = list_ptr->next;
	}
}
