/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:19:05 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/23 19:57:45 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = (char*)malloc(i + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *result;
	int			i;
	int			j;

	if (!(result = (t_stock_par*)malloc(sizeof(t_stock_par) * ac)))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		result[i].size_param = j;
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		result[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	result[i].str = 0;
	return (result);
}
