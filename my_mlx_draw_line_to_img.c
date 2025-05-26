/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_draw_line_to_img.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 18:12:37 by efinda            #+#    #+#             */
/*   Updated: 2025/05/25 19:04:34 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/my_mlx.h"

int	my_mlx_draw_line_to_img_checks(t_img *img, t_point crd, t_point *size)
{
	if (!img)
		return (1);
	if (ft_negative_point(crd, 0) || crd.x >= img->size.x
		|| crd.y >= img->size.y)
		return (1);
	if (ft_negative_point(*size, 0) || ft_origin_point(*size))
		return (1);
	if (crd.x + size->x > img->size.x)
		size->x = img->size.x - crd.x;
	if (crd.y + size->y > img->size.y)
		size->y = img->size.y - crd.y;
	return (0);
}

void	my_mlx_draw_line_to_img(t_img *img, t_point crd, t_point size,
		int color)
{
	t_point	iter;

	if (my_mlx_draw_line_to_img_checks(img, crd, &size))
		return ;
	iter = (t_point){-1, -1};
	while (++iter.y < size.y)
	{
		iter.x = -1;
		while (++iter.x < size.x)
            my_mlx_pixel_put(img, crd.x + iter.x, crd.y + iter.y, color);
	}
}
