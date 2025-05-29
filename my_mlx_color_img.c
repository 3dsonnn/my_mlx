/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_color_img.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:42:36 by efinda            #+#    #+#             */
/*   Updated: 2025/05/29 20:32:09 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_mlx.h"

void	my_mlx_color_img(t_img *img, int color)
{
	t_point	iter;

	if (!img || !img->addr || img->size.y <= 0 || img->size.x <= 0)
		return ;
	iter = (t_point){-1, -1};
	while (++iter.y < img->size.y)
	{
		iter.x = -1;
		while (++iter.x < img->size.x)
			my_mlx_pixel_put(img, iter.x, iter.y, color);
	}
}
