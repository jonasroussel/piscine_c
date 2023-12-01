/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coord.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:24:44 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/26 23:24:46 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coord.h"
#include "../includes/vars.h"

t_coord	calc_struct(int **tab, t_vars vars)
{
	t_coord	bsq;
	int		x;
	int		y;

	x = 0;
	y = 0;
	bsq.size = 0;
	while (y != vars.y_max)
	{
		if (tab[y][x] > bsq.size)
		{
			bsq.size = tab[y][x];
			bsq.x = x - (tab[y][x] - 1);
			bsq.y = y - (tab[y][x] - 1);
		}
		if (x == vars.x_max - 1)
		{
			x = 0;
			y++;
		}
		else
			x++;
	}
	return (bsq);
}
