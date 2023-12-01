# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/26 23:23:59 by jroussel          #+#    #+#              #
#    Updated: 2017/07/26 23:24:01 by jroussel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	bsq

FLAGS 	=	-Wall -Wextra -Werror -o

SRCS 	= 	srcs/calc.c srcs/coord.c srcs/graphics.c srcs/list.c srcs/main.c\
			srcs/read_file.c srcs/read_input.c srcs/utils.c srcs/vars.c\
			srcs/verif.c

BIN		=	calc.o coord.o graphics.o list.o main.o read_file.o read_input.o\
			utils.o vars.o verif.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(NAME) $(SRCS)

clean:
	/bin/rm -f $(BIN)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
