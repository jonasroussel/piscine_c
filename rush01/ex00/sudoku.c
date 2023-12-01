/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 09:37:53 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/19 14:23:08 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_is_on_line(int sudoku[9][9], int nb, int x);

int		ft_is_on_colum(int sudoku[9][9], int nb, int y);

int		ft_is_on_block(int sudoku[9][9], int nb, int x, int y);

int		ft_is_valid(int sudoku[9][9], int nb, int event);

void	ft_draw_sudoku(int sudoku[9][9])
{
	int y;
	int x;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			if (sudoku[y][x] == 0)
				ft_putchar('.');
			else
				ft_putchar(sudoku[y][x] + 48);
			if (x < 8)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

int		ft_argvlen(int argc, char **argv)
{
	int i;
	int j;
	int count;

	i = 1;
	count = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

int		ft_create_sudoku(int argc, char **argv, int sudoku[9][9], int y)
{
	int x;
	int count;

	if (ft_argvlen(argc, argv) != 81)
		return (0);
	count = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			if (argv[y + 1][x] == '.')
			{
				sudoku[y][x] = 0;
				count++;
			}
			else if (argv[y + 1][x] >= '1' && argv[y + 1][x] <= '9')
				sudoku[y][x] = argv[y + 1][x] - 48;
			else
				return (0);
			x++;
		}
		y++;
	}
	return (count < 81);
}

int		ft_resolve_sudoku(int sudoku[9][9], int pos)
{
	int x;
	int y;
	int nb;

	if (pos == 81)
		return (1);
	x = pos / 9;
	y = pos % 9;
	nb = 1;
	if (sudoku[x][y] != 0)
		return (ft_resolve_sudoku(sudoku, pos + 1));
	while (nb <= 9)
	{
		if (ft_is_on_line(sudoku, nb, x) < 1
				&& ft_is_on_colum(sudoku, nb, y) < 1
				&& ft_is_on_block(sudoku, nb, x, y) < 1)
		{
			sudoku[x][y] = nb;
			if (ft_resolve_sudoku(sudoku, pos + 1))
				return (1);
		}
		nb++;
	}
	sudoku[x][y] = 0;
	return (0);
}

int		main(int argc, char **argv)
{
	int sudoku[9][9];

	if (argc > 10 || !ft_create_sudoku(argc, argv, sudoku, 0))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!ft_is_valid(sudoku, 1, 0))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_resolve_sudoku(sudoku, 0);
	if (!ft_is_valid(sudoku, 1, 1))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_draw_sudoku(sudoku);
	return (0);
}
