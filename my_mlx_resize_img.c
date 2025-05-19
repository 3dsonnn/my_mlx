/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_resize_img.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:51:00 by efinda            #+#    #+#             */
/*   Updated: 2025/05/19 17:41:53 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_mlx.h"

static void	fill_img(t_img src, t_img *dst, int x, int y)
{
	t_point	offset;
	int		pixel;

	while (++y < dst->size.y)
	{
		x = -1;
		while (++x < dst->size.x)
		{
			offset.x = ft_map(x, (int[]){0, dst->size.x}, (int[]){0,
					src.size.x});
			offset.y = ft_map(y, (int[]){0, dst->size.y}, (int[]){0,
					src.size.y});
			pixel = my_mlx_get_pixel(src, offset.x, offset.y);
			my_mlx_pixel_put(dst, x, y, pixel);
		}
	}
}

void	my_mlx_resize_img(void *mlx, t_img *img, t_point size)
{
	t_img	new;

	if (!mlx || !img || (img->size.x == size.x && img->size.y == size.y)
		|| size.x <= 0 || size.y <= 0)
		return ;
	my_mlx_init_img(&new);
	my_mlx_new_img(mlx, &new, size);
	if (!new.img)
		return ;
	my_mlx_get_data_addr(&new);
	if (!new.addr)
	{
		my_mlx_destroy_img(mlx, &new);
		return ;
	}
	fill_img(*img, &new, -1, -1);
	my_mlx_destroy_img(mlx, img);
	*img = new;
}
