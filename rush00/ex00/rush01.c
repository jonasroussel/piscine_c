/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 07:46:14 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/08 11:12:47 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_up(int x)
{
	ft_putchar('/');
	while (x > 2)
	{
		ft_putchar('*');
		x--;
	}
	if (x > 1)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	ft_print_mid(int x)
{
	ft_putchar('*');
	while (x > 2)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 1)
		ft_putchar('*');
	ft_putchar('\n');
}

void	ft_print_down(int x)
{
	ft_putchar('\\');
	while (x > 2)
	{
		ft_putchar('*');
		x--;
	}
	if (x > 1)
		ft_putchar('/');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x >= 1)
		ft_print_up(x);
	while (y > 2)
	{
		ft_print_mid(x);
		y--;
	}
	if (y > 1)
		ft_print_down(x);
}
