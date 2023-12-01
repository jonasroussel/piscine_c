/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:25:39 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/26 23:25:40 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../includes/utils.h"
#include "../includes/vars.h"
#include "../includes/verif.h"

int		get_x_max(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\n')
		i++;
	return (i);
}

t_vars	apply_stat(t_vars vars, char *first_line, int len, char **input)
{
	vars.full = first_line[len];
	vars.wall = first_line[len - 1];
	vars.empty = first_line[len - 2];
	first_line[len - 2] = '\0';
	if (ft_is_numeric(first_line) == 0)
	{
		vars.y_max = ft_atoi(first_line);
		*input += len + 2;
		vars.x_max = get_x_max(*input);
	}
	else
	{
		vars.y_max = 0;
		vars.x_max = 0;
	}
	free(first_line);
	return (vars);
}

t_vars	get_vars(char **input, int size)
{
	t_vars	vars;
	int		i;
	int		len;
	char	*first_line;

	i = 0;
	while (input[0][i] != '\n')
		i++;
	len = i - 1;
	first_line = (char*)malloc(sizeof(char) * i);
	i = 0;
	while (input[0][i] != '\n')
	{
		first_line[i] = input[0][i];
		i++;
	}
	vars.size = size;
	return (apply_stat(vars, first_line, len, input));
}

int		**calc_str(t_vars vars, char *input, int **tab)
{
	int i;
	int y;
	int x;

	i = 0;
	y = 0;
	while (y < vars.y_max)
	{
		x = 0;
		while (x < vars.x_max)
		{
			if (input[i] != '\0')
				tab[y][x] = (input[i] == vars.wall ? 0 : 1);
			x++;
			i++;
		}
		y++;
		i++;
	}
	return (tab);
}

int		**str_to_tab(char *input, t_vars vars)
{
	int		i;
	int		**tab;

	i = 0;
	if (!(tab = (int**)malloc(sizeof(int*) * vars.y_max)))
		return (NULL);
	while (i < vars.y_max)
	{
		if (!(tab[i] = (int*)malloc(sizeof(int) * vars.x_max)))
			return (NULL);
		i++;
	}
	return (calc_str(vars, input, tab));
}
