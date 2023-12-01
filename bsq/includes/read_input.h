/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:26:09 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/26 23:26:10 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_INPUT_H
# define READ_INPUT_H
# include "list.h"

t_list	*ft_create_elem_input(char data);
void	list_to_str_input(t_list *list, char *result);
char	*read_input(int *size, int i);

#endif
