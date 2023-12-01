/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_place.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:11:46 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/13 21:58:43 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_take_place(int hour)
{
	int night;

	night = 0;
	if (hour == 0 || hour == 12)
		hour += 12;
	if (hour > 12)
	{
		hour -= 12;
		night = !night;
	}
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 ", hour);
	printf(night ? "P.M." : "A.M.");
	hour++;
	if (hour == 0 || hour == 12)
		hour += 12;
	if (hour > 12)
	{
		hour -= 12;
		night = !night;
	}
	printf(" AND %d.00 ", hour);
	printf(night ? "P.M.\n" : "A.M.\n");
}
