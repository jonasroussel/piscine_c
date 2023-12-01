/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 08:24:15 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/09 13:05:46 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_two_char(char a, char b)
{
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_print_tree_char(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_print_tree_char(i + 48, j + 48, k + 48);
				if (i * 100 + j * 10 + k != 789)
					ft_print_two_char(',', ' ');
				k++;
			}
			j++;
		}
		i++;
	}
}
