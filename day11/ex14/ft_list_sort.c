/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 11:57:10 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/21 14:24:06 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap(t_list *elem1, t_list *elem2)
{
	char	*data_temp;

	data_temp = elem1->data;
	elem1->data = elem2->data;
	elem2->data = data_temp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *list;

	if (!begin_list)
		return ;
	list = *begin_list;
	while (list->next)
	{
		if ((*cmp)(list->data, list->next->data) > 0)
		{
			ft_swap(list, list->next);
			list = begin_list;
		}
		else
			list = list->next;
	}
}
