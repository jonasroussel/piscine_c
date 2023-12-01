/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 11:07:06 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/27 13:19:29 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int neg;
	int nbr;
	int i;

	neg = 0;
	nbr = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - 48;
		i++;
	}
	if (neg == 1)
		return (-nbr);
	return (nbr);
}

void	ft_putnbr(int nb)
{
	unsigned int unb;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	unb = nb;
	if (unb >= 10)
		ft_putnbr(unb / 10);
	ft_putchar(unb % 10 + '0');
}

int		ft_usage(int a, int b)
{
	write(a, "error : only [ + - * / % ] are accepted.\n", b);
	return (0);
}
