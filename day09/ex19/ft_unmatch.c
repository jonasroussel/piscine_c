/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 11:48:54 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/14 15:51:57 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int lenght)
{
	int i;
	int j;
	int count;

	i = 0;
	while (i + 1 < lenght)
	{
		j = 0;
		count = 0;
		while (j < lenght)
		{
			if (tab[j] == tab[i])
				count++;
			j++;
		}
		if (count != 2)
			return (tab[i]);
		i++;
	}
	return (0);
}
