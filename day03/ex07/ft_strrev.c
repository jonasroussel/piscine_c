/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 10:50:02 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/10 21:27:49 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char	temp;
	int		size;
	int		i;

	temp = 0;
	size = ft_strlen(str) - 1;
	i = 0;
	while (i < (size + 1) / 2)
	{
		temp = str[i];
		str[i] = str[size - i];
		str[size - i] = temp;
		i++;
	}
	return (str);
}
