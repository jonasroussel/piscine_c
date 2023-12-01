/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 02:46:10 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/14 15:13:13 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

void	ft_strtim(char *str)
{
	char *i;
	char *j;

	i = str;
	j = str;
	while (*j != '\0')
	{
		*i = *j++;
		if (*i != ' ')
			i++;
	}
	*i = 0;
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_strlowcase(argv[i]);
		ft_strtim(argv[i]);
		if (ft_strcmp(argv[i], "president") == 0 || ft_strcmp(argv[i],
					"attack") == 0 || ft_strcmp(argv[i], "powers") == 0)
		{
			write(1, "Alert!!!\n", 9);
			i = argc;
		}
		else
			i++;
	}
	return (0);
}
