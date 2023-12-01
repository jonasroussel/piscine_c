/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphics.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:24:59 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/26 23:25:01 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../includes/vars.h"
#include "../includes/utils.h"
#include "../includes/calc.h"

char	look_char(int **tab, t_vars vars, int x, int y)
{
	if (tab[y][x] == 0)
		return (vars.wall);
	if (tab[y][x] == 1)
		return (vars.empty);
	if (tab[y][x] == 2)
		return (vars.full);
	return ('0');
}

char	*tab_to_str(int **tab, t_vars vars)
{
	char	*result;
	int		i;
	int		x;
	int		y;

	if (!(result = (char*)malloc(sizeof(char) *
			(vars.x_max * vars.y_max) + vars.y_max)))
		return (NULL);
	i = 0;
	x = 0;
	y = 0;
	while (i != (vars.x_max * vars.y_max) + vars.y_max)
	{
		if (x != vars.x_max)
			result[i] = look_char(tab, vars, x++, y);
		else
		{
			result[i] = '\n';
			x = 0;
			y++;
		}
		i++;
	}
	result[i] = '\0';
	return (result);
}

void	draw_str(char *input, int size, t_vars vars)
{
	size -= (ft_nbrlen(vars.y_max) + 3);
	write(1, input, size);
}

void	draw_tab(int **tab, t_vars vars)
{
	int y;
	int x;

	y = 0;
	while (y < vars.y_max)
	{
		x = 0;
		while (x < vars.x_max)
		{
			if (tab[y][x] == 0)
				ft_putchar(1, vars.wall);
			else if (tab[y][x] == 1)
				ft_putchar(1, vars.empty);
			else
				ft_putchar(1, vars.full);
			x++;
		}
		y++;
		ft_putchar(1, '\n');
	}
}
