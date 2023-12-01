/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_do_op.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 09:16:37 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/27 13:19:18 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/ft_op.h"
#include "../includes/ft_opp.h"

int		ft_get_a_b(char **argv, int *a, int *b)
{
	*a = ft_atoi(argv[1]);
	*b = ft_atoi(argv[3]);
	if ((argv[2][0] - 37) == 0 && *b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	else if ((argv[2][0] - 37) == 10 && *b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	return (1);
}

int		ft_get_operator(char **argv)
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (g_opptab[i].op[0] == argv[2][0])
			return (i);
		i++;
	}
	return (5);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	t_opp	op;

	if (argc < 4)
		return (0);
	op = g_opptab[ft_get_operator(argv)];
	if (op.f == &ft_usage)
	{
		op.f(1, 41);
		return (0);
	}
	if (!ft_get_a_b(argv, &a, &b))
		return (0);
	ft_putnbr(op.f(a, b));
	ft_putchar('\n');
	return (0);
}
