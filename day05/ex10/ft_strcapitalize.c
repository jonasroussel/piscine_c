/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 23:06:06 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/13 16:33:33 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
}

int		ft_is_alpha(char c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}

int		ft_is_numeric(char c)
{
	return (c > 47 && c < 58);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_lowercase(str);
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (ft_is_alpha(str[i]))
				str[i] -= 32;
		}
		else if (!ft_is_alpha(str[i - 1]) && !ft_is_numeric(str[i - 1])
				&& str[i - 1] != '\'' && ft_is_alpha(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
