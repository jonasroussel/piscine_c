/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:03:47 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/27 13:17:43 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OP_H
# define FT_OP_H

typedef struct	s_opp
{
	char	*op;
	int		(*f)(int, int);
}				t_opp;

int				ft_mod(int a, int b);
int				ft_mul(int a, int b);
int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_div(int a, int b);
int				ft_usage(int a, int b);
void			ft_putchar(char c);
int				ft_is_operator(char c);
int				ft_atoi(char *str);
void			ft_putnbr(int nb);

#endif
