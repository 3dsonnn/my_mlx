/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_pixel_put.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:38:21 by efinda            #+#    #+#             */
/*   Updated: 2025/05/29 20:32:35 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_mlx.h"

inline void	my_mlx_pixel_put(t_img *img, int x, int y, int color)
{
	if (!img || !img->addr || x < 0 || x >= img->size.x || y < 0
		|| y >= img->size.y)
		return ;
	*(img->addr + y * img->line_len + x) = color;
}
