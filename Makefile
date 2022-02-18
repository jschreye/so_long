# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 09:25:41 by jschreye          #+#    #+#              #
#    Updated: 2022/02/18 10:01:44 by jschreye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = so_long

SRC = so_long.c gnlstruc/get_next_line_utils.c gnlstruc/get_next_line.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		make -C mlx
		$(CC) $(FLAGS) $(SRC) mlx/libmlx.a -Lmlx -lmlx -framework OpenGL -framework Appkit -o $(NAME)

clean:
		make clean -C mlx
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
