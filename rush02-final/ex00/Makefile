# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsolis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/13 14:41:29 by gsolis            #+#    #+#              #
#    Updated: 2016/11/13 14:41:31 by gsolis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc
C_FLAGS =  -Wall -Wextra -Werror 

#Filenames
NAME := rush-2
SRCS := main.c make_grid.c shared.c r00c.c r01c.c r02c.c r03c.c r04c.c read_stdin.c
SRCDIR = srcs/
FILES = $(addprefix $(SRCDIR), $(SRCS))

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

clean:
	rm -f $(SRCS:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all
