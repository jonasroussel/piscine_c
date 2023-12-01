/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 09:01:23 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/23 09:51:32 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = (int*)malloc(sizeof(int) * (max - min));
	if (!result)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	while (i < max - min)
	{
		result[i] = min + i;
		i++;
	}
	*range = result;
	return (i);
}
