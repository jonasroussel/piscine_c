/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:25:34 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/26 23:25:35 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr(int fd, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(fd, str[i]);
		i++;
	}
}

void	ft_putnbr(int fd, int nb)
{
	unsigned int i;

	if (nb < 0)
	{
		ft_putchar(fd, '-');
		nb = nb * -1;
	}
	i = nb;
	if (i < 10)
	{
		ft_putchar(fd, i + '0');
		return ;
	}
	ft_putnbr(fd, i / 10);
	ft_putchar(fd, (i % 10) + '0');
}

int		ft_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		i++;
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int			i;
	int			num;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (-1);
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}
