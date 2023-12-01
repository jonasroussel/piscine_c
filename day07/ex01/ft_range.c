/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 22:32:18 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/23 09:50:57 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
		return (NULL);
	result = (int*)malloc(sizeof(*result) * (max - min));
	if (!result)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
