# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcanteau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/13 11:49:47 by jcanteau          #+#    #+#              #
#    Updated: 2018/11/13 11:49:51 by jcanteau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = main

FLAG = -Wall -Wextra -Werror

all:
	gcc -c $(FLAG) $(SRC).c
	gcc -o $(NAME) $(SRC).o

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all
