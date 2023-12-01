/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 13:45:16 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/13 15:41:17 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int size;
	int i;
	int j;

	size = 0;
	i = 0;
	while (to_find[size])
		size++;
	if (size == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (j == size - 1)
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
