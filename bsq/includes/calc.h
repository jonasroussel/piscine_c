/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:25:49 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/26 23:25:50 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALC_H
# define CALC_H
# include "vars.h"
# include "coord.h"

int		ft_nbrlen(int nb);
int		comparator(int a, int b, int c);
int		calculator(int **tab, int x, int y);
int		**algo_bsq(int **tab, t_vars vars);
int		**place_square(int **tab, t_coord target);

#endif
