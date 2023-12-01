# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/17 12:23:44 by jroussel          #+#    #+#              #
#    Updated: 2017/07/27 13:14:24 by jroussel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	do-op

FLAGS	=	-Wall -Wextra -Werror -o

SRCS	=	srcs/do_op.c srcs/operators.c srcs/utils.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(NAME) $(SRCS)

clean:
	rm -f $(NAME)
