/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 09:40:44 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/09 22:20:08 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_sizeof_nbr(int nb)
{
	int size;

	size = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		size++;
		nb /= 10;
	}
	return (size);
}

int		ft_pow(int nb, int pow)
{
	int result;

	if (pow == 0)
		return (1);
	result = nb;
	while (pow > 1)
	{
		result *= nb;
		pow--;
	}
	return (result);
}

void	ft_putnbr(int nb)
{
	int result;
	int temp;
	int i;

	result = 0;
	temp = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	i = ft_sizeof_nbr(nb) - 1;
	while (i >= 0)
	{
		temp = nb / ft_pow(10, i);
		ft_putchar(temp + 48);
		nb -= temp * ft_pow(10, i);
		i--;
	}
}
