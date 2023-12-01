/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:25:23 by jroussel          #+#    #+#             */
/*   Updated: 2017/07/26 23:25:25 by jroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define BUFF_SIZE 10000

void	file_contents(int fd, char *output, int size)
{
	char	ch[BUFF_SIZE];
	int		ch_read;
	int		i;

	size = 0;
	while ((ch_read = read(fd, &ch, BUFF_SIZE)))
	{
		i = 0;
		while (i < ch_read)
		{
			output[size] = ch[i];
			i++;
			size++;
		}
	}
}

char	*read_file(char *file, int *input_size)
{
	int		fd;
	char	buff[BUFF_SIZE];
	int		size;
	int		ch_read;
	char	*output;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (NULL);
	size = 0;
	ch_read = 0;
	while ((ch_read = read(fd, &buff, BUFF_SIZE)))
		size += ch_read;
	close(fd);
	if (!(output = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if ((fd = open(file, O_RDONLY)) == -1)
		return (NULL);
	file_contents(fd, output, size);
	output[size] = '\0';
	*input_size = size;
	return (output);
}
