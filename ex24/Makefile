# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/13 12:52:00 by jcanteau          #+#    #+#              #
#    Updated: 2018/11/13 12:52:03 by jcanteau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
 	srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

FLAGS = -Wall -Werror -Wextra -Iincludes/

all: $(NAME)

$(NAME):
		gcc -c $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib libft.a

clean:
	/bin/rm -f *.o 

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
