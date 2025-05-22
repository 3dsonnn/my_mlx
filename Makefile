# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efinda <efinda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/16 12:56:36 by efinda            #+#    #+#              #
#    Updated: 2025/05/21 15:37:09 by efinda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = my_mlx.a

SRC =	my_mlx_init_img.c				\
		my_mlx_new_img.c				\
		my_mlx_color_img.c				\
		my_mlx_get_pixel.c				\
		my_mlx_pixel_put.c				\
		my_mlx_resize_img.c				\
		my_mlx_destroy_img.c			\
		my_mlx_duplicate_img.c			\
		my_mlx_get_data_addr.c			\
		my_mlx_get_rgb_color.c			\
		my_mlx_get_lerp_color.c			\
		my_mlx_get_rgb_values.c			\
		my_mlx_put_img_to_img.c			\
		my_mlx_get_color_from_name.c	\
		my_mlx_print_available_colors.c	\
		my_mlx_g_colors.c				\

CC = cc
ARC = ar rc
INDEX = ranlib
RM = rm -rf
FLAGS = -Wall -Wextra -Werror -I./$(MLXPATH) -O3

LIBFTPATH = Super-Libft
LIBFT =	$(LIBFTPATH)/libft.a

MLXPATH = minilibx-linux
MLX = $(MLXPATH)/libmlx.a
LIBS =	-L./$(MLXPATH) -lmlx -lX11 -lXext -lm

OBJ = $(SRC:.c=.o)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

all: $(LIBFT) $(MLX) $(NAME)

$(OBJ): $(LIBFT)

$(NAME): $(OBJ)
	$(ARC) $(NAME) $(LIBFT) $(OBJ);
	$(INDEX) $(NAME);

$(LIBFT):
	@$(MAKE) -s -C $(LIBFTPATH)

$(MLX):
	@$(MAKE) -C $(MLXPATH)

clean:
	@$(RM) $(OBJ)
	@$(MAKE) -s -C $(LIBFTPATH) clean
	@$(MAKE) -C $(MLXPATH) clean

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -s -C $(LIBFTPATH) fclean

re: fclean all
	@$(MAKE) -s -C $(LIBFTPATH) re
	@$(MAKE) -C $(MLXPATH) re

.PHONY: all clean fclean re $(NAME)