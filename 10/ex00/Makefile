# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsolis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 13:20:46 by gsolis            #+#    #+#              #
#    Updated: 2017/01/05 11:07:34 by gsolis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = ./src/{ft_putchar.c,ft_putstr.c,ft_strcmp.c,ft_strlen.c,ft_swap.c}
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS = includes/ft.h

all:  libft.a

libft.a:
	gcc -c -Wall -Werror -Wextra $(FILE) -I./$(HEADERS)
	ar rc libft.a $(OBJECTS)
	ranlib libft.a

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f libft.a
