# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkehon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/05 11:33:39 by mkehon            #+#    #+#              #
#    Updated: 2017/10/05 11:35:24 by mkehon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
LIBFT = libft/libft.a
FLAGS = -Wall -Werror -Wextra

SRC_DIR = srcs/
OBJ_DIR = objs/

FILES = main.c
OBJ = $(addprefix $(OBJ_DIR),$(FILES:.c=.o))
SRC = $(addprefix $(SRC_DIR), $(FILES))

all: $(NAME)

$(NAME):
	mkdir objs
	gcc $(FLAGS) -c $(SRC) -o $(OBJ)
	gcc $(FLAGS) $(LIBFT) $(OBJ) -o $(NAME)

clean:
	/bin/rm -rf objs/

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
