/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 16:07:46 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/21 13:56:41 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *list;

	list = (t_list*)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}
