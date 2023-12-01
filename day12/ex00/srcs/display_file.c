/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 11:39:43 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/23 22:42:39 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../includes/ft_list.h"
#include "../includes/utils.h"
#include "../includes/read_file.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*data;

	if (argc <= 1)
		ft_putstr(2, "File name missing.\n");
	else if (argc >= 3)
		ft_putstr(2, "Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		data = read_file(fd);
		while (*data != '\0')
			ft_putchar(1, *data++);
	}
	return (0);
}
