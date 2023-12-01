/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 13:11:11 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/27 13:12:15 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

int		ft_mod(int a, int b);
int		ft_mult(int a, int b);
int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_div(int a, int b);
void	ft_putchar(char c);
int		ft_is_operator(char c);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);

#endif
