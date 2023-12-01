/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 10:03:18 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/20 19:27:33 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_space(char c, int zero)
{
	if (zero)
		return (c == ' ' || c == '\t' || c == '\n' || c == '\0');
	return (c == ' ' || c == '\t' || c == '\n');
}

int		ft_words(char *str, int word, int *pos)
{
	int result;
	int i;
	int j;

	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (ft_is_space(str[i], 0))
			i++;
		j = i;
		result++;
		while (!ft_is_space(str[i], 1))
			i++;
		if (result - 1 == word)
		{
			*pos = j;
			return (i - j);
		}
		if (str[i] == '\0' && !ft_is_space(str[i - 1], 0))
			result++;
	}
	return (result);
}

char	**ft_split_whitespaces(char *str)
{
	int		words;
	char	**result;
	int		pos;
	int		i;
	int		j;

	words = ft_words(str, -1, &pos);
	result = (char**)malloc(sizeof(char*) * words);
	if (!result)
		return (NULL);
	i = 0;
	while (i < words)
	{
		result[i] = (char*)malloc(sizeof(char) * ft_words(str, i, &pos));
		if (!result[i])
			return (NULL);
		j = 0;
		while (!ft_is_space(str[pos + j++], 1))
			result[i][j - 1] = str[pos + j - 1];
		result[i][j - 1] = '\0';
		i++;
	}
	result[i - 1] = NULL;
	return (result);
}
