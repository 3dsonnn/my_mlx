# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efinda <efinda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/16 12:56:36 by efinda            #+#    #+#              #
#    Updated: 2025/05/29 20:55:11 by efinda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = my_mlx.a

SRC =	my_mlx_new_img.c				\
		my_mlx_init_img.c				\
		my_mlx_g_colors.c				\
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
		my_mlx_draw_line_to_img.c		\
		my_mlx_get_color_from_name.c	\
		my_mlx_print_available_colors.c	\

HEADERS	=	inc/my_mlx.h			\
			inc/my_mlx_structs.h	\
			../inc/libft.h			\
			../inc/printf.h			\

CC = cc
FLAGS = -Wall -Wextra -Werror -I./inc -I../inc -I./$(MLXPATH)	
ARC = ar rc
INDEX = ranlib
RM = rm -rf

MLXPATH = minilibx-linux
MLX = $(MLXPATH)/libmlx.a

OBJ = $(SRC:.c=.o)

all: $(MLX) $(NAME)

$(NAME): $(OBJ)
	$(ARC) $(NAME) $(OBJ)
	$(INDEX) $(NAME)

$(MLX):
	@$(MAKE) -C $(MLXPATH)

%.o: %.c $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@$(MAKE) -C $(MLXPATH) clean

fclean: clean
	@$(RM) $(NAME)

re: fclean all
	@$(MAKE) -C $(MLXPATH) re

.PHONY: all clean fclean re