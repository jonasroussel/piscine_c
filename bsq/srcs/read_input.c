/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:25:30 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/26 23:36:54 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "../includes/list.h"
#define BUFF_SIZE 10000

t_list	*ft_create_elem_input(char data)
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

void	list_to_str_input(t_list *list, char *result)
{
	while (list)
	{
		*result++ = list->data;
		list = list->next;
	}
}

char	*read_input(int *size, int i)
{
	t_list	*begin;
	t_list	*list;
	char	ch[BUFF_SIZE];
	int		ch_count;
	char	*output;

	read(0, &ch, 1);
	list = ft_create_elem(ch[0]);
	begin = list;
	*size = 0;
	while ((ch_count = read(0, &ch, BUFF_SIZE)))
	{
		i = -1;
		while (++i < ch_count)
		{
			list->next = ft_create_elem(ch[i]);
			list = list->next;
			(*size)++;
		}
	}
	list = ft_create_elem('\0');
	if (!(output = (char*)malloc(sizeof(char) * (*size + 1))))
		return (NULL);
	list_to_str(begin, output);
	return (output);
}
