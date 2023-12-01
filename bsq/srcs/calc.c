/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:24:48 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/26 23:24:50 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/vars.h"
#include "../includes/coord.h"

int		ft_nbrlen(int nb)
{
	if (nb == 0)
		return (0);
	return (1 + ft_nbrlen(nb / 10));
}

int		comparator(int a, int b, int c)
{
	if (a > b)
		a = b;
	if (a > c)
		a = c;
	return (a);
}

int		calculator(int **tab, int y, int x)
{
	int i;

	if (x == 0 || y == 0)
		return (1);
	i = comparator(tab[y - 1][x - 1], tab[y - 1][x], tab[y][x - 1]);
	return (i + 1);
}

int		**algo_bsq(int **tab, t_vars vars)
{
	int **result;
	int x;
	int y;
	int i;

	i = 0;
	if (!(result = (int**)malloc(sizeof(int*) * vars.y_max)))
		return (NULL);
	while (i < vars.y_max)
	{
		if (!(result[i] = (int*)malloc(sizeof(int) * vars.x_max)))
			return (NULL);
		i++;
	}
	i = 0;
	while (i++ < vars.y_max * vars.x_max)
	{
		y = i % vars.y_max;
		x = i / vars.y_max;
		if (tab[y][x] == 0)
			result[y][x] = 0;
		else if (tab[y][x] == 1)
			result[y][x] = calculator(result, y, x);
	}
	return (result);
}

int		**place_square(int **tab, t_coord target)
{
	int y;
	int x;

	y = target.y;
	while (y < target.y + target.size)
	{
		x = target.x;
		while (x < target.x + target.size)
		{
			tab[y][x] = 2;
			x++;
		}
		y++;
	}
	return (tab);
}
