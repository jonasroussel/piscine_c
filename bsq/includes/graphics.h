/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphics.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:25:58 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/26 23:25:59 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPHICS_H
# define GRAPHICS_H
# include "vars.h"

char	*tab_to_str(int **tab, t_vars vars);
int		draw_str(char *input, int size, t_vars vars);
void	draw_tab(int **tab, t_vars vars);

#endif
