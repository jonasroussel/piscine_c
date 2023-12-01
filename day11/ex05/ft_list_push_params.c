/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 09:40:20 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/21 13:49:57 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*temp;
	int		i;

	if (ac == 1)
		return (NULL);
	list = ft_create_elem(av[1]);
	i = 2;
	while (i < ac)
	{
		temp = list;
		list = ft_create_elem(av[i]);
		list->next = temp;
		i++;
	}
	return (list);
}
