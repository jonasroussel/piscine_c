/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 21:31:15 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/23 21:37:03 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef	struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

t_list	*ft_create_elem(char data);
void	ft_list_push_back(t_list **begin_list, char data);
void	ft_list_clear(t_list **begin_list);
void	list_to_str(t_list *list, char *result);

#endif
