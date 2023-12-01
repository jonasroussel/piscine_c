/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 09:20:57 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/21 16:08:14 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_argvlen(int argc, char **argv)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
		i++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*result;
	int		len;
	int		i;
	int		j;

	result = (char*)malloc(ft_argvlen(argc, argv) + 1);
	if (!result)
		return (NULL);
	len = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			result[len++] = argv[i][j];
			j++;
		}
		result[len++] = '\n';
		i++;
	}
	result[len - (argc > 1 ? 1 : 0)] = '\0';
	return (result);
}
