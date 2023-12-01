/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 21:31:01 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/23 22:58:30 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "../includes/ft_list.h"

char	*read_file(int fd)
{
	char	c;
	char	*result;
	int		count;
	t_list	*list;

	read(fd, &c, 1);
	list = ft_create_elem(c);
	count = 0;
	while ((read(fd, &c, 1)))
	{
		ft_list_push_back(&list, c);
		count++;
	}
	if (!(result = malloc(sizeof(char) * (count + 1))))
		return (NULL);
	if (count)
	{
		list_to_str(list, result);
		ft_list_clear(&list);
	}
	result[count + 1] = '\0';
	return (result);
}
