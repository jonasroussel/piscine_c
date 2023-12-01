/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 22:45:21 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/19 14:36:17 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_on_line(int sudoku[9][9], int nb, int x)
{
	int y;
	int count;

	if (nb == 0)
		return (0);
	y = 0;
	count = 0;
	while (y < 9)
	{
		if (sudoku[x][y] == nb)
			count++;
		y++;
	}
	return (count);
}

int		ft_is_on_colum(int sudoku[9][9], int nb, int y)
{
	int x;
	int count;

	if (nb == 0)
		return (0);
	x = 0;
	count = 0;
	while (x < 9)
	{
		if (sudoku[x][y] == nb)
			count++;
		x++;
	}
	return (count);
}

int		ft_is_on_block(int sudoku[9][9], int nb, int x, int y)
{
	int i;
	int j;
	int count;

	if (nb == 0)
		return (0);
	i = x - (x % 3);
	j = y - (y % 3);
	x = i;
	count = 0;
	while (x < i + 3)
	{
		y = j;
		while (y < j + 3)
		{
			if (sudoku[x][y] == nb)
				count++;
			y++;
		}
		x++;
	}
	return (count);
}

int		ft_is_valid(int sudoku[9][9], int nb, int event)
{
	int x;
	int y;

	while (nb <= 9)
	{
		x = 0;
		while (x < 9)
		{
			y = 0;
			while (y < 9)
			{
				if (sudoku[x][y] == 0 && event)
					return (0);
				if (ft_is_on_line(sudoku, nb, x) > 1
						|| ft_is_on_colum(sudoku, nb, y) > 1
						|| ft_is_on_block(sudoku, nb, x, y) > 1)
					return (0);
				y++;
			}
			x++;
		}
		nb++;
	}
	return (1);
}
