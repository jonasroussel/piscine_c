/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:25:43 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/26 23:25:44 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/calc.h"
#include "../includes/vars.h"
#include "../includes/utils.h"

int		verif_list(t_vars vars, char *input)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (i < ((vars.x_max + 1) * vars.y_max))
	{
		if (input[i] == '\n')
			n++;
		if (input[i] == '\n' && i != vars.x_max * n + (n - 1))
			return (-1);
		i++;
	}
	if (n != vars.y_max)
		return (-1);
	return (0);
}

int		verif_char(t_vars vars, char *input)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < ((vars.x_max + 1) * vars.y_max))
	{
		if (input[i] == vars.empty)
			count++;
		if (input[i] != vars.empty && input[i] != vars.wall && input[i] != '\n')
			return (-1);
		i++;
	}
	if (count == 0)
		return (-1);
	return (0);
}

int		verif_vars(t_vars vars)
{
	if (vars.empty == vars.wall || vars.empty == vars.full ||
			vars.full == vars.wall)
		return (-1);
	return (0);
}
