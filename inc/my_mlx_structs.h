/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_structs.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:57:09 by efinda            #+#    #+#             */
/*   Updated: 2025/05/27 18:44:21 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_MLX_STRUCTS_H
# define MY_MLX_STRUCTS_H

# include "../Super-Libft/inc/libft.h"

typedef struct s_color
{
	char	*name;
	int		value;
}			t_color;

typedef struct s_rgb
{
	int		r;
	int		g;
	int		b;
}			t_rgb;

typedef struct s_img
{
	void	*img;
	int		*addr;
	int		line_len;
	int		bpp;
	int		endian;
	t_point	size;
}			t_img;

typedef struct s_img_to_img
{
	t_img	*dst;
	t_img	src;
	t_img	*aux;
	t_point	dst_point;
	t_point	src_point;
	t_point	size;
	int		filter;
	int		skip;
	int		color_aux;
}			t_img_to_img;

#endif