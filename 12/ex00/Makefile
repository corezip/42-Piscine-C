# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsolis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 21:32:38 by gsolis            #+#    #+#              #
#    Updated: 2016/11/09 21:32:42 by gsolis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		ft_display_file

SRC = 		ft_display_file.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) ft_display_file.o

clean:
	/bin/rm -f ft_display_file.o

fclean:
	/bin/rm -f ft_display_file.o $(NAME)
	