/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coord.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:25:53 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/26 23:25:55 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COORD_H
# define FT_COORD_H
# include "vars.h"

typedef struct	s_coord
{
	int size;
	int x;
	int y;
}				t_coord;

t_coord			calc_struct(int **tab, t_vars vars);

#endif
