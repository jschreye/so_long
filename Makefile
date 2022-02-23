# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschreye <jschreye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 09:25:41 by jschreye          #+#    #+#              #
#    Updated: 2022/02/23 12:39:28 by jschreye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = so_long

SRC = change_map_with_img.c put_img.c so_long.c gnlstruc/get_next_line_utils.c gnlstruc/get_next_line.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		make -C libft
		make -C mlx
		$(CC) $(FLAGS) $(SRC) libft/libft.a mlx/libmlx.a -Lmlx -lmlx -framework OpenGL -framework Appkit -o $(NAME)

clean:
		make clean -C mlx
		make clean -C libft
		rm -rf $(OBJ)

fclean: clean
		make fclean -C libft
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
