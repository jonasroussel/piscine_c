/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 05:02:52 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/14 05:06:15 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_THE_WORLD 0

typedef struct		s_perso
{
	char	*name;
	int		life;
	int		age;
	int		profession;
}					t_perso;

char				*strdup(char *str);

#endif
