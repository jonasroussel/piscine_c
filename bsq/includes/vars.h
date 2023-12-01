/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vars.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:26:16 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/26 23:26:17 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VARS_H
# define FT_VARS_H

typedef struct	s_vars
{
	int		x_max;
	int		y_max;
	char	empty;
	char	wall;
	char	full;
	char	*for_atoi;
	char	*input;
	int		size;
}				t_vars;

int				get_x_max(char *input);
t_vars			get_vars(char **input, int size);
int				**str_to_tab(char *input, t_vars vars);

#endif
