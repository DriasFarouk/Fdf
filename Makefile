# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdrias <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/27 11:28:37 by fdrias            #+#    #+#              #
#    Updated: 2018/03/16 19:20:53 by fdrias           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Name ##
NAME = Fdf

## Compilation ##
CC = gcc
CFLAGS = -Wall -Werror -Wextra
FW = -framework OpenGL -framework Appkit

## Directories ##
LDIR = ./libft
MLXDIR = ./minilibx_macos/
LIBFT = libft.a
MLX = libmlx.a

## Header ##
HEAD = fdf.h

## Sources ##
SRC = 	draw.c			\
		calculs.c		\
		display.c		\
		make_point.c	\
		main.c			\
		mlx.c			\
		mouse.c			\
		move_option.c	\
		parsing.c		\
		utils.c			\
		zoom_option.c	\
		hook.c			\

## Object ##
OBJ = $(SRC:.c=.o)

## Rules ##
all: $(NAME)

$(NAME) : $(OBJ)
	@make -C $(LDIR)
	@make -C $(MLXDIR)
	@$(CC) $(CFLAGS) -I $(HEAD) -c $(SRC)
	@$(CC) $(CFLAGS) $(FW) -o $(NAME) $(OBJ) $(LDIR)/$(LIBFT) $(MLXDIR)/$(MLX)
	@echo "Complitation ok"

clean:
	make clean -C $(LDIR)
	make clean -C $(MLXDIR)
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(LDIR)
	rm -f $(MLXDIR)/$(MLX)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
