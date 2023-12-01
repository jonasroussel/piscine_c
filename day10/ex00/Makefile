# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroussel <jroussel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/14 15:37:41 by jroussel          #+#    #+#              #
#    Updated: 2017/07/27 10:52:52 by jroussel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libft.a

FLAGS	= 	-c -Wall -Wextra -Werror -Iincludes

SRCS	=	srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c\
			srcs/ft_strlen.c srcs/ft_swap.c

OBJS	=	ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen. ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all