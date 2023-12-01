/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 10:20:42 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/22 11:16:43 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *list;
	t_list *temp;

	list = begin_list;
	temp = NULL;
	while (list)
	{
		if (list->next)
			temp = list->next;
		else
			temp = NULL;
		free(list);
		list = temp;
	}
}
