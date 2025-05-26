/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:33:35 by efinda            #+#    #+#             */
/*   Updated: 2025/05/25 19:09:42 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_MLX_H
# define MY_MLX_H

# include "../Super-Libft/inc/libft.h"
# include "../minilibx-linux/mlx.h"
# include "my_mlx_structs.h"

# define BLACK			0x000000
# define RED			0xFF0000
# define GREEN			0x00FF00
# define BLUE			0x0000FF
# define WHITE			0xFFFFFF
# define TRANSPARENT	0xFF000000

typedef struct s_img_to_img
{
	t_img		*dst;
	t_img		src;
	t_img		*aux;
	t_point		dst_point;
	t_point		src_point;
	t_point		size;
	int			filter;
	int			skip;
	int			color_aux;
}				t_img_to_img;

extern t_color	my_mlx_g_colors[];
extern void		my_mlx_pixel_put(t_img *img, int x, int y, int color);
extern int		my_mlx_get_pixel(t_img img, int x, int y);
extern int		my_mlx_get_rgb_color(int r, int g, int b);
extern t_rgb	my_mlx_get_rgb_values(int color);
extern void		my_mlx_init_img(t_img *img);
void			my_mlx_destroy_img(void *mlx, t_img *img);
void			my_mlx_new_img(void *mlx, t_img *img, t_point size);
void			my_mlx_duplicate_img(void *mlx, t_img *dst, t_img src);
void			my_mlx_get_data_addr(t_img *img);
int				my_mlx_get_lerp_color(int start, int end, float interpolant);
void			my_mlx_resize_img(void *mlx, t_img *img, t_point size);
void			my_mlx_print_available_colors(void);
void			my_mlx_color_img(t_img *img, int color);
int				my_mlx_get_color_from_name(const char *input_name);
void			my_mlx_put_img_to_img(t_img_to_img base);
void			my_mlx_draw_line_to_img(t_img *img, t_point crd, t_point size, int color);
// void			my_mlx_drawn_triangle(t_img *img, t_point crd, int size,
// 					int color);

#endif