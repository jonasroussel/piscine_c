/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 08:51:22 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/14 10:57:42 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int count;

	count = 0;
	while (value != 0)
	{
		value &= (value - 1);
		count++;
	}
	return (count);
}
