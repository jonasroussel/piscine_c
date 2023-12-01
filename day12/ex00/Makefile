# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/22 12:17:33 by jroussel          #+#    #+#              #
#    Updated: 2017/07/23 21:47:07 by jroussel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	ft_display_file

FLAGS 	=	-Wall -Wextra -Werror -o

SRCS 	= 	srcs/display_file.c\
			srcs/ft_list.c\
			srcs/read_file.c\
			srcs/utils.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(NAME) $(SRCS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)
