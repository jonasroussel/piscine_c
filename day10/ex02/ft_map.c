/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 15:42:23 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/27 13:03:06 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int *result;
	int i;

	if (!(result = (int*)malloc(sizeof(*tab) * lenght)))
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
