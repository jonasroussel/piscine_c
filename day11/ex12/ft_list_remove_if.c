/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 16:16:44 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/18 16:22:35 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;
	t_list *last;

	list = begin_list;
	last = NULL;
	while (list)
	{
		if ((*cmp)(data_ref, list->data))
		{
			if (last)
				last->next = list->next;
			free(list);
		}
		else
		{
			last = list;
			list = list->next;
		}
	}
}
