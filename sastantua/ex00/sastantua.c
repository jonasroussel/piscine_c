/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:33:27 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/09 16:31:20 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_sizeof_first_line(int n)
{
	if (n == -1)
		return (1);
	return (ft_sizeof_first_line(n - 1) + (n % 2 != 0 ?
				10 + n * 3 - 1 : 10 + n * 3));
}

int		ft_sizeof_last_line(int n)
{
	if (n == -1)
		return (5);
	return (ft_sizeof_first_line(n) + 2 * (n + 3));
}

int		ft_draw_door(int n, int ln, int i, int k)
{
	if (n != ln)
		return (0);
	if (i > (n % 2 == 0 ? 2 : 1))
	{
		if ((n == -1 && k == 2) || (n == 1 && (k == (ft_sizeof_first_line(n)
							+ i * 2) / 2 - 1 || k == (ft_sizeof_first_line(n)
								+ i * 2) / 2 + 1)))
		{
			ft_putchar('|');
			return (1);
		}
		else if (k > (ft_sizeof_first_line(n) + i * 2) / 2 - (n -
					(ln - 2) / 2) && k < (ft_sizeof_first_line(n)
						+ i * 2) / 2 + (n - (ln - 2) / 2))
		{
			if (k == (ft_sizeof_first_line(n) + i * 2) / 2 -
					(ln + 2) / 2 + ln && i == (n + 2) / 2 + 2
					&& n != 1 && n != 2)
				ft_putchar('$');
			else
				ft_putchar('|');
			return (1);
		}
	}
	return (0);
}

void	ft_draw_floor(int n, int ln, int k, int j)
{
	int i;

	i = 0;
	while (i < n + 4)
	{
		j = 0;
		while (j < (ft_sizeof_last_line(ln) -
					(ft_sizeof_first_line(n) + i * 2)) / 2)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('/');
		k = 0;
		while (k < ft_sizeof_first_line(n) + i * 2)
		{
			if (!ft_draw_door(n, ln, i, k))
				ft_putchar('*');
			k++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}

void	sastantua(int size)
{
	int i;

	i = -1;
	while (i < size - 1)
	{
		ft_draw_floor(i, size - 2, 0, 0);
		i++;
	}
}
