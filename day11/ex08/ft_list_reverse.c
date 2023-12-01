/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 12:36:14 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/22 11:16:09 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *list;
	t_list *temp;
	t_list *temp2;

	temp = NULL;
	list = *begin_list;
	if (!list || !list->next)
		return ;
	temp = list->next;
	temp2 = temp->next;
	list->next = NULL;
	temp->next = list;
	while (temp2)
	{
		list = temp;
		temp = temp2;
		temp2 = temp2->next;
		temp->next = list;
	}
	*begin_list = temp;
}
