/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:25:08 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/26 23:25:09 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/list.h"

t_list	*ft_create_elem(char data)
{
	t_list	*tmp;

	if ((tmp = malloc(sizeof(t_list))) == 0)
		return (NULL);
	if (tmp)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}

void	ft_list_clear(t_list **begin_list)
{
	t_list	*current;
	t_list	*next;

	current = *begin_list;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*begin_list = NULL;
}

void	list_to_str(t_list *list, char *result)
{
	while (list)
	{
		*result++ = list->data;
		list = list->next;
	}
}
