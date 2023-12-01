/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 05:46:06 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/14 05:51:58 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# define TRUE 1
# define FALSE 0
# define CLOSE 0
# define OPEN 1
# include <unistd.h>

typedef int			t_bool;
typedef struct		s_door
{
	int state;
}					t_door;

#endif
