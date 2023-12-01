/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 09:16:37 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/27 13:12:49 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/do_op.h"

int		ft_get_a_b(char **argv, int *a, int *b)
{
	*a = ft_atoi(argv[1]);
	*b = ft_atoi(argv[3]);
	if ((argv[2][0] - 37) == 0 && *b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (-1);
	}
	else if ((argv[2][0] - 37) == 10 && *b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (-1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int (*op[11])(int, int);
	int a;
	int b;

	if (argc < 4)
		return (0);
	if (!ft_is_operator(argv[2][0]))
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	op[0] = &ft_mod;
	op[5] = &ft_mult;
	op[6] = &ft_add;
	op[8] = &ft_sub;
	op[10] = &ft_div;
	if (ft_get_a_b(argv, &a, &b) < 0)
		return (0);
	ft_putnbr(op[argv[2][0] - 37](a, b));
	ft_putchar('\n');
	return (0);
}
