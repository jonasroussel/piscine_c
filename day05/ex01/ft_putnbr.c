/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 09:40:44 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/16 13:00:12 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
