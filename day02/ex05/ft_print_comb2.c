/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 09:14:45 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/09 13:05:58 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_two_char(char a, char b)
{
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_print_nbr(int nbr)
{
	if (nbr < 10)
		ft_print_two_char('0', nbr + 48);
	else
		ft_print_two_char(nbr / 10 + 48, nbr % 10 + 48);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_print_nbr(i);
			ft_putchar(' ');
			ft_print_nbr(j);
			if (i * 100 + j != 9899)
				ft_print_two_char(',', ' ');
			j++;
		}
		i++;
	}
}
