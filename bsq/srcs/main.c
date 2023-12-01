/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:25:16 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/26 23:37:15 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../includes/calc.h"
#include "../includes/coord.h"
#include "../includes/utils.h"
#include "../includes/read_file.h"
#include "../includes/vars.h"
#include "../includes/graphics.h"
#include "../includes/verif.h"
#include "../includes/read_file.h"
#include "../includes/read_input.h"

#include <stdio.h>

int		start_result(int **tab, t_vars vars)
{
	char	*input;
	int		**result;
	t_coord	target;

	if ((result = algo_bsq(tab, vars)) == NULL)
		return (-1);
	target = calc_struct(result, vars);
	free(result);
	tab = place_square(tab, target);
	if ((input = tab_to_str(tab, vars)) == NULL)
		return (-1);
	free(tab);
	draw_str(input, vars.size, vars);
	free(input);
	return (0);
}

int		solve_bsq(int is_file, char *file)
{
	char	*input;
	t_vars	vars;
	int		**tab;

	input = (is_file ? read_file(file, &vars.size) : read_input(&vars.size, 0));
	if (input == NULL)
		return (-1);
	if (vars.size <= 4)
		return (-1);
	vars = get_vars(&input, vars.size);
	tab = str_to_tab(input, vars);
	if (verif_list(vars, input) == -1 || verif_char(vars, input) == -1 ||
		verif_vars(vars) == -1 || tab == NULL)
		return (-1);
	return (start_result(tab, vars));
}

int		main(int argc, char **argv)
{
	int i;

	if (argc <= 1)
	{
		if (solve_bsq(0, NULL) == -1)
			ft_putstr(2, "map error\n");
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			if (solve_bsq(1, argv[i]) == -1)
				ft_putstr(2, "map error\n");
			if (i + 1 < argc)
				ft_putchar(1, '\n');
			i++;
		}
	}
	return (0);
}
