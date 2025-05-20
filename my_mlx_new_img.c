/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_new_img.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:12:48 by efinda            #+#    #+#             */
/*   Updated: 2025/05/20 14:54:32 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/my_mlx.h"

void	my_mlx_new_img(void *mlx, t_img *img, t_point size)
{
	if (!mlx || !img || size.x <= 0 || size.y <= 0)
		return ;
    my_mlx_init_img(img);
    if (size.x <= 0 || size.y <= 0)
		return ;
	img->img = mlx_new_image(mlx, size.x, size.y);
	if (!img->img)
		return ;
	img->size = size;
}
