/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:32:33 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/11 09:11:21 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;
	int i;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 16)
		return (0);
	result = 1;
	i = 0;
	while (i < nb)
	{
		result *= nb - i;
		i++;
	}
	return (result);
}
