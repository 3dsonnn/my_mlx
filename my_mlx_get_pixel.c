/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_get_pixel.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:40:14 by efinda            #+#    #+#             */
/*   Updated: 2025/05/20 14:54:54 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/my_mlx.h"

inline int	my_mlx_get_pixel(t_img img, int x, int y)
{
	if (!img.addr || x < 0 || x >= img.size.x || y < 0 || y >= img.size.y)
		return (BLACK);
	return (*(img.addr + y * img.line_len + x));
}
